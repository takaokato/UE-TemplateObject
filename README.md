# UE-TemplateObject
Unreal Header Tool (UHT) does not allow us to use template for defining UObject classes. This project attempts to slip through the UHT restrictions.

## Defining a Template UObject
```
UCLASS()
template <class BaseObject>
class TAwesomeObject : public BaseObject
{
    GENERATED_BODY()
        :
};
```
It would be nice if we could define a template uobject class like this so that we can add some awesome features to any UObject class. However UHT does not allow us to do this.

To trick UHT, we can use `CPP` macro which is defined as 0 while UHT is running, but defined as 1 while compiling.
```
UCLASS()
#if CPP
template <class BaseObject>
class TAwesomeObject : public BaseObject
#else
class UAwesomeObject : public UObject
#endif
{
    GENERATED_BODY()
        :
};
```
Of course, this doesn't work, because UHT will generate `.generated.h` and `.gen.cpp` for `UAwesomeObject` class which inherites from `UObject`. We need to do more...

The basic idea to solve this problem is include `.gen.cpp` file within a namespace which is unique to each `BaseObject`. For more details, please have a look at `AwesomeObject.h` file in `Plugins/AwsomePlugin/Source/AwesomePlugin/Public` folder.

`TAwesomeObject` can be used as follows:

In header file:
```
DEFINE_AWESOMEOBJECT_CLASS(NO_API, AAwesomeActor, AActor, TEXT("/Script/TemplateUObject"));
```

In cpp file
```
BEGIN_AWESOMEOBJECT_CLASS_IMPLEMENTATION(AAwesomeActor, TemplateUObject)

#undef AWESOMEPLUGIN_API          // AWESOMEPLUGIN_API definition will be restored in END_AWESOMEOBJECT_CLASS_IMPLEMENTATION macro
#define AWESOMEPLUGIN_API NO_API  // replace plugin api with this module api (or NO_API)
#define Z_Construct_UClass_UObject ::Z_Construct_UClass_UObject // force global scope

#include IMPLEMENT_AWESOMEOBJECT_CLASS_FILE // include auto generated source file inside NameSpace_AAwesomeActor namespace

#undef Z_Construct_UClass_UObject

END_AWESOMEOBJECT_CLASS_IMPLEMENTATION(AAwesomeActor)
```

Sample code exists in `Source/TemplateUObject/MyGameActor.h` and `Source/TemplateUObject/MyGameActor.cpp`.
