#pragma once

#include "UObject/GeneratedCppIncludes.h"

#define UOBJECT_TEMPLATE_ARGS_DECL class BaseObjectClass, class WrapperClass, class FriendStruct
#define UOBJECT_TEMPLATE_ARGS BaseObjectClass, WrapperClass, FriendStruct
#define FOWARD_TEMPLATE_ARGS(...) __VA_ARGS__

#define DEFINE_INLINE_UOBJECT_CONSTRUCTORS(ThisClass, SuperClass) \
ThisClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : SuperClass(ObjectInitializer) {} \
ThisClass(FVTableHelper& Helper) : SuperClass(Helper) {}

#define DECLARE_UFUNCTION_0()
#define DECLARE_UFUNCTION_1(F1) DECLARE_FUNCTION(exec##F1)
#define DECLARE_UFUNCTION_2(F1, F2) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_1(F2)
#define DECLARE_UFUNCTION_3(F1, F2, F3) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_2(F2, F3)
#define DECLARE_UFUNCTION_4(F1, F2, F3, F4) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_3(F2, F3, F4)
#define DECLARE_UFUNCTION_5(F1, F2, F3, F4, F5) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_4(F2, F3, F4, F5)
#define DECLARE_UFUNCTION_6(F1, F2, F3, F4, F5, F6) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_5(F2, F3, F4, F5, F6)
#define DECLARE_UFUNCTION_7(F1, F2, F3, F4, F5, F6, F7) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_6(F2, F3, F4, F5, F6, F7)
#define DECLARE_UFUNCTION_8(F1, F2, F3, F4, F5, F6, F7, F8) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_7(F2, F3, F4, F5, F6, F7, F8)
#define DECLARE_UFUNCTION_9(F1, F2, F3, F4, F5, F6, F7, F8, F9) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_8(F2, F3, F4, F5, F6, F7, F8, F9)
#define DECLARE_UFUNCTION_10(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_9(F2, F3, F4, F5, F6, F7, F8, F9, F10)
#define DECLARE_UFUNCTION_11(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_10(F2, F3, F4, F5, F6, F7, F8, F9, F10, F11)
#define DECLARE_UFUNCTION_12(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_11(F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12)
#define DECLARE_UFUNCTION_13(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_12(F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13)
#define DECLARE_UFUNCTION_14(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_13(F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14)
#define DECLARE_UFUNCTION_15(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_14(F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15)
#define DECLARE_UFUNCTION_16(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_15(F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16)
#define DECLARE_UFUNCTION_17(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_16(F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17)
#define DECLARE_UFUNCTION_18(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_17(F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18)
#define DECLARE_UFUNCTION_19(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18, F19) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_18(F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18, F19)
#define DECLARE_UFUNCTION_20(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18, F19, F20) DECLARE_FUNCTION(exec##F1); DECLARE_UFUNCTION_19(F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18, F19, F20)
#define DECLARE_UFUNCTION_MACROS DECLARE_UFUNCTION_20, DECLARE_UFUNCTION_19, DECLARE_UFUNCTION_18, DECLARE_UFUNCTION_17, DECLARE_UFUNCTION_16, DECLARE_UFUNCTION_15, DECLARE_UFUNCTION_14, DECLARE_UFUNCTION_13, DECLARE_UFUNCTION_12, DECLARE_UFUNCTION_11, DECLARE_UFUNCTION_10, DECLARE_UFUNCTION_9, DECLARE_UFUNCTION_8, DECLARE_UFUNCTION_7, DECLARE_UFUNCTION_6, DECLARE_UFUNCTION_5, DECLARE_UFUNCTION_4, DECLARE_UFUNCTION_3, DECLARE_UFUNCTION_2, DECLARE_UFUNCTION_1, DECLARE_UFUNCTION_0
#define GET_DECLARE_UFUNCTION_MACRO_IMPL(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18, F19, F20, X, ...) X
#define GET_DECLARE_UFUNCTION_MACRO(...) GET_DECLARE_UFUNCTION_MACRO_IMPL(__VA_ARGS__)
#define DECLARE_UFUNCTIONS(...) GET_DECLARE_UFUNCTION_MACRO(__VA_ARGS__, DECLARE_UFUNCTION_MACROS)(__VA_ARGS__)

#define IMPLEMENT_UFUNCTION_0()
#define IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) template <UOBJECT_TEMPLATE_ARGS_DECL> DEFINE_FUNCTION(TemplateClassName<UOBJECT_TEMPLATE_ARGS>::exec##F1) {}
#define IMPLEMENT_UFUNCTION_2(TemplateClassName, F1, F2) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_1(TemplateClassName, F2)
#define IMPLEMENT_UFUNCTION_3(TemplateClassName, F1, F2, F3) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_2(TemplateClassName, F2, F3)
#define IMPLEMENT_UFUNCTION_4(TemplateClassName, F1, F2, F3, F4) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_3(TemplateClassName, F2, F3, F4)
#define IMPLEMENT_UFUNCTION_5(TemplateClassName, F1, F2, F3, F4, F5) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_4(TemplateClassName, F2, F3, F4, F5)
#define IMPLEMENT_UFUNCTION_6(TemplateClassName, F1, F2, F3, F4, F5, F6) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_5(TemplateClassName, F2, F3, F4, F5, F6)
#define IMPLEMENT_UFUNCTION_7(TemplateClassName, F1, F2, F3, F4, F5, F6, F7) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_6(TemplateClassName, F2, F3, F4, F5, F6, F7)
#define IMPLEMENT_UFUNCTION_8(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_7(TemplateClassName, F2, F3, F4, F5, F6, F7, F8)
#define IMPLEMENT_UFUNCTION_9(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_8(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9)
#define IMPLEMENT_UFUNCTION_10(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_9(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9, F10)
#define IMPLEMENT_UFUNCTION_11(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_10(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11)
#define IMPLEMENT_UFUNCTION_12(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_11(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12)
#define IMPLEMENT_UFUNCTION_13(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_12(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13)
#define IMPLEMENT_UFUNCTION_14(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_13(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14)
#define IMPLEMENT_UFUNCTION_15(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_14(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15)
#define IMPLEMENT_UFUNCTION_16(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_15(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16)
#define IMPLEMENT_UFUNCTION_17(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_16(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17)
#define IMPLEMENT_UFUNCTION_18(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_17(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18)
#define IMPLEMENT_UFUNCTION_19(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18, F19) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_18(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18, F19)
#define IMPLEMENT_UFUNCTION_20(TemplateClassName, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18, F19, F20) IMPLEMENT_UFUNCTION_1(TemplateClassName, F1) IMPLEMENT_UFUNCTION_19(TemplateClassName, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18, F19, F20)
#define IMPLEMENT_UFUNCTION_MACROS IMPLEMENT_UFUNCTION_20, IMPLEMENT_UFUNCTION_19, IMPLEMENT_UFUNCTION_18, IMPLEMENT_UFUNCTION_17, IMPLEMENT_UFUNCTION_16, IMPLEMENT_UFUNCTION_15, IMPLEMENT_UFUNCTION_14, IMPLEMENT_UFUNCTION_13, IMPLEMENT_UFUNCTION_12, IMPLEMENT_UFUNCTION_11, IMPLEMENT_UFUNCTION_10, IMPLEMENT_UFUNCTION_9, IMPLEMENT_UFUNCTION_8, IMPLEMENT_UFUNCTION_7, IMPLEMENT_UFUNCTION_6, IMPLEMENT_UFUNCTION_5, IMPLEMENT_UFUNCTION_4, IMPLEMENT_UFUNCTION_3, IMPLEMENT_UFUNCTION_2, IMPLEMENT_UFUNCTION_1, IMPLEMENT_UFUNCTION_0
#define GET_IMPLEMENT_UFUNCTION_MACRO_IMPL(F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15, F16, F17, F18, F19, F20, X, ...) X
#define GET_IMPLEMENT_UFUNCTION_MACRO(...) GET_IMPLEMENT_UFUNCTION_MACRO_IMPL(__VA_ARGS__)
#define IMPLEMENT_UFUNCTIONS(TemplateClassName, ...) GET_IMPLEMENT_UFUNCTION_MACRO(__VA_ARGS__, IMPLEMENT_UFUNCTION_MACROS)(TemplateClassName, __VA_ARGS__)

#define IMPLEMENT_AUTO_GENERATED_TEMPLATE_UOBJECT_FUNCTIONS(TemplateClassName, ...) \
template <UOBJECT_TEMPLATE_ARGS_DECL> \
UClass* TemplateClassName<UOBJECT_TEMPLATE_ARGS>::GetPrivateStaticClass() \
{ \
	/*shouldn't be called*/ \
	check(false); \
	return nullptr; \
} \
template <UOBJECT_TEMPLATE_ARGS_DECL> \
void TemplateClassName<UOBJECT_TEMPLATE_ARGS>::StaticRegisterNativesUAwesomeObject() \
{ \
	/*shouldn't be called*/ \
	check(false); \
} \
template <UOBJECT_TEMPLATE_ARGS_DECL> \
TemplateClassName<UOBJECT_TEMPLATE_ARGS>& TemplateClassName<UOBJECT_TEMPLATE_ARGS>::operator=(const TemplateClassName<UOBJECT_TEMPLATE_ARGS>&) \
{ \
	/*shouldn't be called*/ \
	check(false); \
	return *this; \
} \
template <UOBJECT_TEMPLATE_ARGS_DECL> \
TemplateClassName<UOBJECT_TEMPLATE_ARGS>& TemplateClassName<UOBJECT_TEMPLATE_ARGS>::operator=(TemplateClassName<UOBJECT_TEMPLATE_ARGS>&&) \
{ \
	/*shouldn't be called*/ \
	check(false); \
	return *this; \
} \
IMPLEMENT_UFUNCTIONS(TemplateClassName, __VA_ARGS__)

#define DEFINE_DEFAULT_TEMPLATE_UOBJECT_CLASS(WrapperClass, TemplateClass, BaseObjectClass, FriendStruct, PackageName, API, ...) \
class API WrapperClass : public TemplateClass<BaseObjectClass, WrapperClass, FriendStruct> \
{ \
private: \
	WrapperClass(const WrapperClass&) = delete; \
	WrapperClass(WrapperClass&&) = delete; \
	static void StaticRegisterNatives##WrapperClass(); \
	friend struct Z_Construct_UClass_##WrapperClass##_Statics; \
public: \
	DECLARE_CLASS(WrapperClass, BaseObjectClass, TemplateClass<FOWARD_TEMPLATE_ARGS(BaseObjectClass, WrapperClass, FriendStruct)>::StaticClassFlags, TemplateClass<FOWARD_TEMPLATE_ARGS(BaseObjectClass, WrapperClass, FriendStruct)>::StaticClassCastFlags(), PackageName, NO_API) \
	DECLARE_SERIALIZER(WrapperClass) \
	DEFINE_INLINE_UOBJECT_CONSTRUCTORS(WrapperClass, TemplateClass<FOWARD_TEMPLATE_ARGS(BaseObjectClass, WrapperClass, FriendStruct)>) \
	DECLARE_UFUNCTIONS(__VA_ARGS__); \
}

#define DEFINE_TEMPLATE_UOBJECT_WRAPPER_CLASS(ClassName, WrapperClass, TemplateClass, BaseObjectClass, PackageName, API, ...) \
namespace NameSpace_##ClassName { \
	struct Z_Construct_UClass_##WrapperClass##_Statics; \
	DEFINE_DEFAULT_TEMPLATE_UOBJECT_CLASS(WrapperClass, TemplateClass, BaseObjectClass, NameSpace_##ClassName::Z_Construct_UClass_##WrapperClass##_Statics, PackageName, API, __VA_ARGS__); \
	struct FRegisterCompiledInInfo \
	{ \
		FRegisterCompiledInInfo(const TCHAR* InPackageName, const FClassRegisterCompiledInInfo* ClassInfo, size_t NumClassInfo, const FStructRegisterCompiledInInfo* StructInfo, size_t NumStructInfo, const FEnumRegisterCompiledInInfo* EnumInfo, size_t NumEnumInfo) \
		{ \
			TemplateObjectHelper::RegisterCompiledInInfoWithClassName<WrapperClass>(InPackageName, ClassInfo, NumClassInfo, #ClassName); \
		} \
	}; \
} \
typedef NameSpace_##ClassName::WrapperClass ClassName

#define BEGIN_TEMPLATE_UOBJECT_WRAPPER_CLASS_IMPLEMENTATION(ClassName, TargetModuleName, TemplateModuleName, TEMPLATE_API) \
UE_PUSH_MACRO(#TEMPLATE_API) \
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(); \
UPackage* Z_Construct_UPackage__Script_##TargetModuleName(); \
namespace NameSpace_##ClassName { \
	template <class Class> UClass* StaticClass() { return nullptr; } \
	UPackage* Z_Construct_UPackage__Script_##TemplateModuleName() \
	{ \
		return ::Z_Construct_UPackage__Script_##TargetModuleName(); \
	} \
	template <typename ... Args> \
	void GetPrivateStaticClassBody(const TCHAR* PackageName, const TCHAR* Name, Args&& ... args) \
	{ \
		/* replace class name */ \
		::GetPrivateStaticClassBody(PackageName, TEXT(#ClassName) + 1, std::forward<Args>(args)...); \
	}


#define END_TEMPLATE_UOBJECT_WRAPPER_CLASS_IMPLEMENTATION(ClassName, TEMPLATE_API) \
} \
template<> UClass* StaticClass<ClassName>() { return NameSpace_##ClassName::StaticClass<ClassName>(); } \
UE_POP_MACRO(#TEMPLATE_API)

namespace TemplateObjectHelper
{
	template <class Class>
	void RegisterCompiledInInfoWithClassName(const TCHAR* PackageName, const FClassRegisterCompiledInInfo* ClassInfo, size_t NumClassInfo, const FString& NewClassName)
	{
		for (size_t i = 0; i < NumClassInfo; ++i)
		{
			if (ClassInfo[i].InnerRegister == Class::StaticClass)
			{
				FClassRegisterCompiledInInfo Info = ClassInfo[i];
				Info.Name = *NewClassName;
				RegisterCompiledInInfo(Info.OuterRegister, Info.InnerRegister, PackageName, Info.Name, *Info.Info, Info.VersionInfo);
				break;
			}
		}
	}
}
