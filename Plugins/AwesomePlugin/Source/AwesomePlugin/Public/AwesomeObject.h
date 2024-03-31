#pragma once

#include "UObject/Object.h"
#include "TemplateObjectHelperMacros.h"
#include "AwesomeObject.generated.h"

DECLARE_LOG_CATEGORY_CLASS(AwesomePlugin, Log, All);

//
// define template uobject class
//
#define UAwesomeObject TAwesomeObject // To replace auto-generated constructor/destructor names
UCLASS(Blueprintable)
#if CPP // CPP is zero while UHT is running, but non-zero while compiling.
template <class BaseObjectClass, class WrapperClass, class FriendStruct>
class TAwesomeObject : public BaseObjectClass
#else
class UAwesomeObject : public UObject
#endif
{
	GENERATED_BODY()
	friend WrapperClass; // wrapper class need to access private UFunctions, if exist...
	friend FriendStruct; // Z_Construct_UClass_UAwesomeObject_Statics struct defined in another namespace needs to access private/protected UProperties, if exist...
public:
	// Prevent UHT from generating constructors in AwesomeObject.gen.cpp
	UAwesomeObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : BaseObjectClass(ObjectInitializer) {}
	UAwesomeObject(FVTableHelper& Helper) : BaseObjectClass(Helper) {}
	~UAwesomeObject()
	{
	}

	UFUNCTION(BlueprintCallable)
	void AwesomeFunction()
	{
		UE_LOG(AwesomePlugin, Log, TEXT("%s is now awesome because it has awesome property %s!"), *Super::StaticClass()->GetFullName(), *AwesomeProperty);
	}
protected:
	// check if protected UFunction is available or not
	UFUNCTION(BlueprintCallable)
	void SuperbFunction() {}
private:
	// check if private UFunction is available or not
	UFUNCTION(BlueprintCallable)
	void DecentFunction() {}
private:
	UPROPERTY(EditAnywhere)
	FString AwesomeProperty;
};
#undef UAwesomeObject // Don't forget to undef!

// comma separated list of those UFunctions that do not have CustomThunk
#define AWESOME_UFUNCTIONS AwesomeFunction, SuperbFunction, DecentFunction

IMPLEMENT_AUTO_GENERATED_TEMPLATE_UOBJECT_FUNCTIONS(TAwesomeObject, AWESOME_UFUNCTIONS)

// define default template object class (UAwesomeObject)
DEFINE_DEFAULT_TEMPLATE_UOBJECT_CLASS(UAwesomeObject, TAwesomeObject, UObject, struct Z_Construct_UClass_UAwesomeObject_Statics, TEXT("/Script/AwesomePlugin"), AWESOMEPLUGIN_API, AWESOME_UFUNCTIONS);


// Use DEFINE_AWESOMEOBJECT_CLASS macro in your header file
// Example:
//
// DEFINE_AWESOMEOBJECT_CLASS(NO_API, AAwesomeActor, AActor, TEXT("/Script/MyGame"));
// #define UAwesomeObject AAwesomeActor
// UCLASS()
// class UMyGameAwesomeActor : public UAwesomeObject
// {
//     GENERATED_BODY()
//        :
// };
// #undef UAwesomeObject
//
#define DEFINE_AWESOMEOBJECT_CLASS(API, ClassName, BaseObjectClass, PackageName) DEFINE_TEMPLATE_UOBJECT_WRAPPER_CLASS(ClassName, UAwesomeObject, TAwesomeObject, BaseObjectClass, PackageName, API, AWESOME_UFUNCTIONS)

// Then, use the following macros in your cpp file
// Example:
//
// BEGIN_AWESOMEOBJECT_CLASS_IMPLEMENTATION(AAwesomeActor, MyGame)
// #include "AwesomeObjectImpl.h"
// END_AWESOMEOBJECT_CLASS_IMPLEMENTATION(AAwesomeActor)
//
#define BEGIN_AWESOMEOBJECT_CLASS_IMPLEMENTATION(ClassName, ModuleName) BEGIN_TEMPLATE_UOBJECT_WRAPPER_CLASS_IMPLEMENTATION(ClassName, ModuleName, AwesomePlugin, AWESOMEPLUGIN_API)
#define END_AWESOMEOBJECT_CLASS_IMPLEMENTATION(ClassName) END_TEMPLATE_UOBJECT_WRAPPER_CLASS_IMPLEMENTATION(ClassName, AWESOMEPLUGIN_API)
