// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ld55_idea1/ld55_idea1PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeld55_idea1PlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	LD55_IDEA1_API UClass* Z_Construct_UClass_Ald55_idea1PlayerController();
	LD55_IDEA1_API UClass* Z_Construct_UClass_Ald55_idea1PlayerController_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ld55_idea1();
// End Cross Module References
	void Ald55_idea1PlayerController::StaticRegisterNativesAld55_idea1PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ald55_idea1PlayerController);
	UClass* Z_Construct_UClass_Ald55_idea1PlayerController_NoRegister()
	{
		return Ald55_idea1PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_Ald55_idea1PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SummonAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SummonAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ald55_idea1PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ld55_idea1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1PlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ld55_idea1PlayerController.h" },
		{ "ModuleRelativePath", "ld55_idea1PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "ld55_idea1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ald55_idea1PlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_ShortPressThreshold_MetaData), Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_ShortPressThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "ld55_idea1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ald55_idea1PlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_FXCursor_MetaData), Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_FXCursor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "ld55_idea1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ald55_idea1PlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Walk Input Action */" },
#endif
		{ "ModuleRelativePath", "ld55_idea1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Walk Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ald55_idea1PlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SetDestinationClickAction_MetaData), Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SetDestinationClickAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Walk but touch Input Action */" },
#endif
		{ "ModuleRelativePath", "ld55_idea1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Walk but touch Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ald55_idea1PlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData), Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SetDestinationTouchAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SummonAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Summon Input Action */" },
#endif
		{ "ModuleRelativePath", "ld55_idea1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Summon Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SummonAction = { "SummonAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ald55_idea1PlayerController, SummonAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SummonAction_MetaData), Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SummonAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_CooldownTime_MetaData[] = {
		{ "Category", "Summon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Summon cooldown */" },
#endif
		{ "ModuleRelativePath", "ld55_idea1PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Summon cooldown" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ald55_idea1PlayerController, CooldownTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_CooldownTime_MetaData), Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_CooldownTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ald55_idea1PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_FXCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SetDestinationClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SetDestinationTouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_SummonAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ald55_idea1PlayerController_Statics::NewProp_CooldownTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ald55_idea1PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ald55_idea1PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ald55_idea1PlayerController_Statics::ClassParams = {
		&Ald55_idea1PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Ald55_idea1PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1PlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_Ald55_idea1PlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1PlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_Ald55_idea1PlayerController()
	{
		if (!Z_Registration_Info_UClass_Ald55_idea1PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ald55_idea1PlayerController.OuterSingleton, Z_Construct_UClass_Ald55_idea1PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ald55_idea1PlayerController.OuterSingleton;
	}
	template<> LD55_IDEA1_API UClass* StaticClass<Ald55_idea1PlayerController>()
	{
		return Ald55_idea1PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ald55_idea1PlayerController);
	Ald55_idea1PlayerController::~Ald55_idea1PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ald55_idea1PlayerController, Ald55_idea1PlayerController::StaticClass, TEXT("Ald55_idea1PlayerController"), &Z_Registration_Info_UClass_Ald55_idea1PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ald55_idea1PlayerController), 3763737386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1PlayerController_h_2840384376(TEXT("/Script/ld55_idea1"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
