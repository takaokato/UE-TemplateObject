// Please include 

#undef AWESOMEPLUGIN_API            // AWESOMEPLUGIN_API definition will be restored in END_AWESOMEOBJECT_CLASS_IMPLEMENTATION macro
#define AWESOMEPLUGIN_API DLLEXPORT // this file must be included in cpp file. API macro is supposed to be `export`

#define Z_Construct_UClass_UObject ::Z_Construct_UClass_UObject // force global scope

#include "AwesomeObject.gen.cpp"

#undef Z_Construct_UClass_UObject
