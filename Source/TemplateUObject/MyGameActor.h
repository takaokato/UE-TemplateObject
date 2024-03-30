#pragma once

#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "AwesomeObject.h"
#include "MyGameActor.generated.h"

DEFINE_AWESOMEOBJECT_CLASS(NO_API, AAwesomeActor, AActor, TEXT("/Script/TemplateUObject"));

#define UAwesomeObject AAwesomeActor

UCLASS()
class UMyGameAwesomeActor : public UAwesomeObject
{
	GENERATED_BODY()
};

#undef UAwesomeObject

UCLASS()
class UMyGameAwesomeObject : public UAwesomeObject
{
	GENERATED_BODY()
};

DEFINE_AWESOMEOBJECT_CLASS(NO_API, AAwesomeCharacter, ACharacter, TEXT("/Script/TemplateUObject"));
