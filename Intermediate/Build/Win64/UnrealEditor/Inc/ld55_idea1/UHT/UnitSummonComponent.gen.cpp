// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ld55_idea1/Public/Player/UnitSummonComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitSummonComponent() {}
// Cross Module References
	LD55_IDEA1_API UClass* Z_Construct_UClass_UBaseSummonComponent();
	LD55_IDEA1_API UClass* Z_Construct_UClass_UUnitSummonComponent();
	LD55_IDEA1_API UClass* Z_Construct_UClass_UUnitSummonComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ld55_idea1();
// End Cross Module References
	void UUnitSummonComponent::StaticRegisterNativesUUnitSummonComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitSummonComponent);
	UClass* Z_Construct_UClass_UUnitSummonComponent_NoRegister()
	{
		return UUnitSummonComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUnitSummonComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnitSummonComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSummonComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ld55_idea1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitSummonComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitSummonComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/UnitSummonComponent.h" },
		{ "ModuleRelativePath", "Public/Player/UnitSummonComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnitSummonComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitSummonComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitSummonComponent_Statics::ClassParams = {
		&UUnitSummonComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitSummonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnitSummonComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUnitSummonComponent()
	{
		if (!Z_Registration_Info_UClass_UUnitSummonComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitSummonComponent.OuterSingleton, Z_Construct_UClass_UUnitSummonComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnitSummonComponent.OuterSingleton;
	}
	template<> LD55_IDEA1_API UClass* StaticClass<UUnitSummonComponent>()
	{
		return UUnitSummonComponent::StaticClass();
	}
	UUnitSummonComponent::UUnitSummonComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitSummonComponent);
	UUnitSummonComponent::~UUnitSummonComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_UnitSummonComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_UnitSummonComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnitSummonComponent, UUnitSummonComponent::StaticClass, TEXT("UUnitSummonComponent"), &Z_Registration_Info_UClass_UUnitSummonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitSummonComponent), 1730000899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_UnitSummonComponent_h_3788834812(TEXT("/Script/ld55_idea1"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_UnitSummonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_UnitSummonComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
