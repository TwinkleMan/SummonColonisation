// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ld55_idea1/ld55_idea1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeld55_idea1GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	LD55_IDEA1_API UClass* Z_Construct_UClass_Ald55_idea1GameMode();
	LD55_IDEA1_API UClass* Z_Construct_UClass_Ald55_idea1GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ld55_idea1();
// End Cross Module References
	void Ald55_idea1GameMode::StaticRegisterNativesAld55_idea1GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Ald55_idea1GameMode);
	UClass* Z_Construct_UClass_Ald55_idea1GameMode_NoRegister()
	{
		return Ald55_idea1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Ald55_idea1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ald55_idea1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ld55_idea1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ald55_idea1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ld55_idea1GameMode.h" },
		{ "ModuleRelativePath", "ld55_idea1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ald55_idea1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ald55_idea1GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ald55_idea1GameMode_Statics::ClassParams = {
		&Ald55_idea1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ald55_idea1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Ald55_idea1GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_Ald55_idea1GameMode()
	{
		if (!Z_Registration_Info_UClass_Ald55_idea1GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ald55_idea1GameMode.OuterSingleton, Z_Construct_UClass_Ald55_idea1GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Ald55_idea1GameMode.OuterSingleton;
	}
	template<> LD55_IDEA1_API UClass* StaticClass<Ald55_idea1GameMode>()
	{
		return Ald55_idea1GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ald55_idea1GameMode);
	Ald55_idea1GameMode::~Ald55_idea1GameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Ald55_idea1GameMode, Ald55_idea1GameMode::StaticClass, TEXT("Ald55_idea1GameMode"), &Z_Registration_Info_UClass_Ald55_idea1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ald55_idea1GameMode), 13675698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1GameMode_h_2749172296(TEXT("/Script/ld55_idea1"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_ld55_idea1GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
