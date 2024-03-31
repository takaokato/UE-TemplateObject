#pragma once

#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "AwesomeObject.h"
#include "MyGameActor.generated.h"

// Define `AAwesomeActor` class which wraps `TAwesomeObject<AActor>` class.
DEFINE_AWESOMEOBJECT_CLASS(NO_API, AAwesomeActor, AActor, TEXT("/Script/TemplateUObject"));

// We would like to use `AAwesomeActor` class as the base class of `UMyGameAwesomeActor` class.
// However UHT cannot recognize `AAwesomeActor` class as a UObject class.
// We need to use `UAwesomeObject` instead...
#define UAwesomeObject AAwesomeActor
UCLASS()
class UMyGameAwesomeActor : public UAwesomeObject
{
	GENERATED_BODY()
};
#undef UAwesomeObject

// `UAwesomeObject` is already defined in AwesomePlugin
UCLASS()
class UMyGameAwesomeObject : public UAwesomeObject
{
	GENERATED_BODY()
};

// Define another wrapper class.
DEFINE_AWESOMEOBJECT_CLASS(NO_API, AAwesomeCharacter, ACharacter, TEXT("/Script/TemplateUObject"));
