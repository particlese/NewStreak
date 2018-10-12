// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SETTINGFUNCTIONALITY_SettingFunctionalityBPLibrary_generated_h
#error "SettingFunctionalityBPLibrary.generated.h already included, missing '#pragma once' in SettingFunctionalityBPLibrary.h"
#endif
#define SETTINGFUNCTIONALITY_SettingFunctionalityBPLibrary_generated_h

#define MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeApplicationUIScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USettingFunctionalityBPLibrary::ChangeApplicationUIScale(Z_Param_newScale); \
		P_NATIVE_END; \
	}


#define MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeApplicationUIScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USettingFunctionalityBPLibrary::ChangeApplicationUIScale(Z_Param_newScale); \
		P_NATIVE_END; \
	}


#define MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingFunctionalityBPLibrary(); \
	friend SETTINGFUNCTIONALITY_API class UClass* Z_Construct_UClass_USettingFunctionalityBPLibrary(); \
public: \
	DECLARE_CLASS(USettingFunctionalityBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SettingFunctionality"), NO_API) \
	DECLARE_SERIALIZER(USettingFunctionalityBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUSettingFunctionalityBPLibrary(); \
	friend SETTINGFUNCTIONALITY_API class UClass* Z_Construct_UClass_USettingFunctionalityBPLibrary(); \
public: \
	DECLARE_CLASS(USettingFunctionalityBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SettingFunctionality"), NO_API) \
	DECLARE_SERIALIZER(USettingFunctionalityBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingFunctionalityBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingFunctionalityBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingFunctionalityBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingFunctionalityBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingFunctionalityBPLibrary(USettingFunctionalityBPLibrary&&); \
	NO_API USettingFunctionalityBPLibrary(const USettingFunctionalityBPLibrary&); \
public:


#define MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingFunctionalityBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingFunctionalityBPLibrary(USettingFunctionalityBPLibrary&&); \
	NO_API USettingFunctionalityBPLibrary(const USettingFunctionalityBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingFunctionalityBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingFunctionalityBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingFunctionalityBPLibrary)


#define MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET
#define MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_27_PROLOG
#define MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_RPC_WRAPPERS \
	MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_INCLASS \
	MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
	MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SettingFunctionalityBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MenuSystem_Plugins_SettingFunctionality_Source_SettingFunctionality_Public_SettingFunctionalityBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
