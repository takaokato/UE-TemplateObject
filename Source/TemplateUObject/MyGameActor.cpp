#include "MyGameActor.h"

BEGIN_AWESOMEOBJECT_CLASS_IMPLEMENTATION(AAwesomeActor, TemplateUObject)

#undef AWESOMEPLUGIN_API // AWESOMEPLUGIN_API definition will be restored in END_AWESOMEOBJECT_CLASS_IMPLEMENTATION macro
#define AWESOMEPLUGIN_API NO_API // replace plugin api with this module api (or NO_API)
#define Z_Construct_UClass_UObject ::Z_Construct_UClass_UObject // force global scope

#include IMPLEMENT_AWESOMEOBJECT_CLASS_FILE // include auto generated source file inside NameSpace_AAwesomeActor namespace

#undef Z_Construct_UClass_UObject

END_AWESOMEOBJECT_CLASS_IMPLEMENTATION(AAwesomeActor)


BEGIN_AWESOMEOBJECT_CLASS_IMPLEMENTATION(AAwesomeCharacter, TemplateUObject)

#undef AWESOMEPLUGIN_API // AWESOMEPLUGIN_API definition will be restored in END_AWESOMEOBJECT_CLASS_IMPLEMENTATION macro
#define AWESOMEPLUGIN_API NO_API // replace plugin api with this module api (or NO_API)
#define Z_Construct_UClass_UObject ::Z_Construct_UClass_UObject // force global scope

#include IMPLEMENT_AWESOMEOBJECT_CLASS_FILE  // include auto generated source file inside NameSpace_AAwesomeCharacter namespace

#undef Z_Construct_UClass_UObject

END_AWESOMEOBJECT_CLASS_IMPLEMENTATION(AAwesomeCharacter)
