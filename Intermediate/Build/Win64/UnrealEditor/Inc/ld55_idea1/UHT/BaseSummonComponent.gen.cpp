// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ld55_idea1/Public/Player/BaseSummonComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSummonComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LD55_IDEA1_API UClass* Z_Construct_UClass_UBaseSummonComponent();
	LD55_IDEA1_API UClass* Z_Construct_UClass_UBaseSummonComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ld55_idea1();
// End Cross Module References
	void UBaseSummonComponent::StaticRegisterNativesUBaseSummonComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseSummonComponent);
	UClass* Z_Construct_UClass_UBaseSummonComponent_NoRegister()
	{
		return UBaseSummonComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBaseSummonComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseSummonComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ld55_idea1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSummonComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseSummonComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/BaseSummonComponent.h" },
		{ "ModuleRelativePath", "Public/Player/BaseSummonComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseSummonComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseSummonComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseSummonComponent_Statics::ClassParams = {
		&UBaseSummonComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseSummonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseSummonComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBaseSummonComponent()
	{
		if (!Z_Registration_Info_UClass_UBaseSummonComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseSummonComponent.OuterSingleton, Z_Construct_UClass_UBaseSummonComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseSummonComponent.OuterSingleton;
	}
	template<> LD55_IDEA1_API UClass* StaticClass<UBaseSummonComponent>()
	{
		return UBaseSummonComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseSummonComponent);
	UBaseSummonComponent::~UBaseSummonComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_BaseSummonComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_BaseSummonComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseSummonComponent, UBaseSummonComponent::StaticClass, TEXT("UBaseSummonComponent"), &Z_Registration_Info_UClass_UBaseSummonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseSummonComponent), 786059945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_BaseSummonComponent_h_2708040366(TEXT("/Script/ld55_idea1"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_BaseSummonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_BaseSummonComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
