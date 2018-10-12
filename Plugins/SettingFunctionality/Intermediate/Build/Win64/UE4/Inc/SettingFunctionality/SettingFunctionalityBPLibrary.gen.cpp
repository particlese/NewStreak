// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SettingFunctionalityBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingFunctionalityBPLibrary() {}
// Cross Module References
	SETTINGFUNCTIONALITY_API UClass* Z_Construct_UClass_USettingFunctionalityBPLibrary_NoRegister();
	SETTINGFUNCTIONALITY_API UClass* Z_Construct_UClass_USettingFunctionalityBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SettingFunctionality();
	SETTINGFUNCTIONALITY_API UFunction* Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale();
// End Cross Module References
	void USettingFunctionalityBPLibrary::StaticRegisterNativesUSettingFunctionalityBPLibrary()
	{
		UClass* Class = USettingFunctionalityBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeApplicationUIScale", &USettingFunctionalityBPLibrary::execChangeApplicationUIScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale()
	{
		struct SettingFunctionalityBPLibrary_eventChangeApplicationUIScale_Parms
		{
			float newScale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newScale = { UE4CodeGen_Private::EPropertyClass::Float, "newScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SettingFunctionalityBPLibrary_eventChangeApplicationUIScale_Parms, newScale), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newScale,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Menu System|UI" },
				{ "DisplayName", "Changes application UI scale" },
				{ "Keywords", "Menu System UI Scale" },
				{ "ModuleRelativePath", "Public/SettingFunctionalityBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingFunctionalityBPLibrary, "ChangeApplicationUIScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SettingFunctionalityBPLibrary_eventChangeApplicationUIScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USettingFunctionalityBPLibrary_NoRegister()
	{
		return USettingFunctionalityBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_USettingFunctionalityBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_SettingFunctionality,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale, "ChangeApplicationUIScale" }, // 1560608280
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SettingFunctionalityBPLibrary.h" },
				{ "ModuleRelativePath", "Public/SettingFunctionalityBPLibrary.h" },
				{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USettingFunctionalityBPLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USettingFunctionalityBPLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USettingFunctionalityBPLibrary, 1141596469);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USettingFunctionalityBPLibrary(Z_Construct_UClass_USettingFunctionalityBPLibrary, &USettingFunctionalityBPLibrary::StaticClass, TEXT("/Script/SettingFunctionality"), TEXT("USettingFunctionalityBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingFunctionalityBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
