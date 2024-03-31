# UE-TemplateObject
Unreal Header Tool (UHT) does not allow us to use template for defining UObject classes. This project attempts to slip through the UHT restrictions.

## What I want to do in this project --- Defining a Template UObject
```
UCLASS()
template <class BaseObject>
class TAwesomeObject : public BaseObject
{
    GENERATED_BODY()
        :
};
```
It would be nice if we could define a template UObject class like this so as to add some awesome features to any UObject class. However UHT does not allow us to do this.

## Cheating Unreal Header Tool
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
Of course, this doesn't work because UHT will generate `xxx.generated.h` and `xxx.gen.cpp` for `UAwesomeObject` class which is derived from `UObject`. We need to do more...

The basic idea to solve this problem is to include `xxx.gen.cpp` file within a namespace which is unique to each `BaseObject`.
```
// in header file
namespace AwesomeObject_##BaseObject
{
    class UAwesomeObject : public TAwesomeObject<BaseObject>
    {
        // need to add some stuff... For details, see `DEFINE_DEFAULT_TEMPLATE_UOBJECT_CLASS` macro in TemplateObjectHelperMacros.h
    };
}
// in cpp file
namespace AwesomeObject_##BaseObject
{
#include "xxx.gen.cpp"
}
```
This is not the complete code. For more details, please have a look at [AwesomeObject.h](Plugins/AwesomePlugin/Source/AwesomePlugin/Public/AwesomeObject.h) and [TemplateObjectHelperMacros.h](Plugins/AwesomePlugin/Source/AwesomePlugin/Public/TemplateObjectHelperMacros.h).
Some helper macros are defined in this header file. 

Finally, `TAwesomeObject` can be used as follows:

In header file:
```
DEFINE_AWESOMEOBJECT_CLASS(YOURMODULE_API, AAwesomeActor, AActor, TEXT("/Script/YourModuleName"));
```

In cpp file
```
BEGIN_AWESOMEOBJECT_CLASS_IMPLEMENTATION(AAwesomeActor, YourModuleName)
#include "AwesomeObjectImpl.h"
END_AWESOMEOBJECT_CLASS_IMPLEMENTATION(AAwesomeActor)
```
Sample code exists in [MyGameActor.h](Source/TemplateUObject/MyGameActor.h) and [MyGameActor.cpp](Source/TemplateUObject/MyGameActor.cpp).
