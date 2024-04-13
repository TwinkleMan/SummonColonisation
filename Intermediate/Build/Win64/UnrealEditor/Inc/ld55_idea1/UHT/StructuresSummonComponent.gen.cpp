// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ld55_idea1/Public/Player/StructuresSummonComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructuresSummonComponent() {}
// Cross Module References
	LD55_IDEA1_API UClass* Z_Construct_UClass_UBaseSummonComponent();
	LD55_IDEA1_API UClass* Z_Construct_UClass_UStructuresSummonComponent();
	LD55_IDEA1_API UClass* Z_Construct_UClass_UStructuresSummonComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ld55_idea1();
// End Cross Module References
	void UStructuresSummonComponent::StaticRegisterNativesUStructuresSummonComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStructuresSummonComponent);
	UClass* Z_Construct_UClass_UStructuresSummonComponent_NoRegister()
	{
		return UStructuresSummonComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStructuresSummonComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStructuresSummonComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSummonComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ld55_idea1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStructuresSummonComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructuresSummonComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/StructuresSummonComponent.h" },
		{ "ModuleRelativePath", "Public/Player/StructuresSummonComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStructuresSummonComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructuresSummonComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructuresSummonComponent_Statics::ClassParams = {
		&UStructuresSummonComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStructuresSummonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStructuresSummonComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UStructuresSummonComponent()
	{
		if (!Z_Registration_Info_UClass_UStructuresSummonComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructuresSummonComponent.OuterSingleton, Z_Construct_UClass_UStructuresSummonComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStructuresSummonComponent.OuterSingleton;
	}
	template<> LD55_IDEA1_API UClass* StaticClass<UStructuresSummonComponent>()
	{
		return UStructuresSummonComponent::StaticClass();
	}
	UStructuresSummonComponent::UStructuresSummonComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStructuresSummonComponent);
	UStructuresSummonComponent::~UStructuresSummonComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_StructuresSummonComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_StructuresSummonComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStructuresSummonComponent, UStructuresSummonComponent::StaticClass, TEXT("UStructuresSummonComponent"), &Z_Registration_Info_UClass_UStructuresSummonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructuresSummonComponent), 2907517761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_StructuresSummonComponent_h_1798568773(TEXT("/Script/ld55_idea1"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_StructuresSummonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_StructuresSummonComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
