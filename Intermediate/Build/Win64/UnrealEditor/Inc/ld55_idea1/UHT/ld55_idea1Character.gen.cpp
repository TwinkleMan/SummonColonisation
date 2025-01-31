// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ld55_idea1/ld55_idea1Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeld55_idea1Character() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	LD55_IDEA1_API UClass* Z_Construct_UClass_Ald55_idea1Character();
	LD55_IDEA1_API UClass* Z_Construct_UClass_Ald55_idea1Character_NoRegister();
	LD55_IDEA1_API UClass* Z_Construct_UClass_UBaseSummonComponent_NoRegister();
	LD55_IDEA1_API UClass* Z_Construct_UClass_USpawnMachinegunBeltComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ld55_idea1();
// End Cross Module References
	void Ald55_idea1Character::StaticRegisterNativesAld55_idea1Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ald55_idea1Character);
	UClass* Z_Construct_UClass_Ald55_idea1Character_NoRegister()
	{
		return Ald55_idea1Character::StaticClass();
	}
	struct Z_Construct_UClass_Ald55_idea1Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SummonComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SummonComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBeltComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnBeltComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ald55_idea1Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ld55_idea1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1Character_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1Character_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ld55_idea1Character.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ld55_idea1Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_SummonComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ld55_idea1Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_SummonComponent = { "SummonComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ald55_idea1Character, SummonComponent), Z_Construct_UClass_UBaseSummonComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_SummonComponent_MetaData), Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_SummonComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_SpawnBeltComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ld55_idea1Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_SpawnBeltComponent = { "SpawnBeltComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ald55_idea1Character, SpawnBeltComponent), Z_Construct_UClass_USpawnMachinegunBeltComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_SpawnBeltComponent_MetaData), Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_SpawnBeltComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ld55_idea1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ald55_idea1Character, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_TopDownCameraComponent_MetaData), Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_TopDownCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ld55_idea1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ald55_idea1Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_CameraBoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ald55_idea1Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_SummonComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_SpawnBeltComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ald55_idea1Character_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ald55_idea1Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ald55_idea1Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ald55_idea1Character_Statics::ClassParams = {
		&Ald55_idea1Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Ald55_idea1Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1Character_Statics::Class_MetaDataParams), Z_Construct_UClass_Ald55_idea1Character_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1Character_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_Ald55_idea1Character()
	{
		if (!Z_Registration_Info_UClass_Ald55_idea1Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ald55_idea1Character.OuterSingleton, Z_Construct_UClass_Ald55_idea1Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ald55_idea1Character.OuterSingleton;
	}
	template<> LD55_IDEA1_API UClass* StaticClass<Ald55_idea1Character>()
	{
		return Ald55_idea1Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ald55_idea1Character);
	Ald55_idea1Character::~Ald55_idea1Character() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ald55_idea1Character, Ald55_idea1Character::StaticClass, TEXT("Ald55_idea1Character"), &Z_Registration_Info_UClass_Ald55_idea1Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ald55_idea1Character), 797730663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1Character_h_4277891495(TEXT("/Script/ld55_idea1"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
