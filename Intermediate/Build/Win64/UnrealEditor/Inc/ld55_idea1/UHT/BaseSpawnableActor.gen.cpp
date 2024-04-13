// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ld55_idea1/Public/BaseSpawnableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSpawnableActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LD55_IDEA1_API UClass* Z_Construct_UClass_ABaseSpawnableActor();
	LD55_IDEA1_API UClass* Z_Construct_UClass_ABaseSpawnableActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ld55_idea1();
// End Cross Module References
	void ABaseSpawnableActor::StaticRegisterNativesABaseSpawnableActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseSpawnableActor);
	UClass* Z_Construct_UClass_ABaseSpawnableActor_NoRegister()
	{
		return ABaseSpawnableActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseSpawnableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseSpawnableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ld55_idea1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSpawnableActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSpawnableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseSpawnableActor.h" },
		{ "ModuleRelativePath", "Public/BaseSpawnableActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseSpawnableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseSpawnableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseSpawnableActor_Statics::ClassParams = {
		&ABaseSpawnableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSpawnableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseSpawnableActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABaseSpawnableActor()
	{
		if (!Z_Registration_Info_UClass_ABaseSpawnableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseSpawnableActor.OuterSingleton, Z_Construct_UClass_ABaseSpawnableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseSpawnableActor.OuterSingleton;
	}
	template<> LD55_IDEA1_API UClass* StaticClass<ABaseSpawnableActor>()
	{
		return ABaseSpawnableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseSpawnableActor);
	ABaseSpawnableActor::~ABaseSpawnableActor() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_BaseSpawnableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_BaseSpawnableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseSpawnableActor, ABaseSpawnableActor::StaticClass, TEXT("ABaseSpawnableActor"), &Z_Registration_Info_UClass_ABaseSpawnableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseSpawnableActor), 3533235826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_BaseSpawnableActor_h_3861789577(TEXT("/Script/ld55_idea1"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_BaseSpawnableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_BaseSpawnableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
