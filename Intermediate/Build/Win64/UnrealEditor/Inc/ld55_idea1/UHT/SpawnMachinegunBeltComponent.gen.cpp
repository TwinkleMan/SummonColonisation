// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ld55_idea1/Public/Player/SpawnMachinegunBeltComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnMachinegunBeltComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LD55_IDEA1_API UClass* Z_Construct_UClass_ABaseSpawnableActor_NoRegister();
	LD55_IDEA1_API UClass* Z_Construct_UClass_USpawnMachinegunBeltComponent();
	LD55_IDEA1_API UClass* Z_Construct_UClass_USpawnMachinegunBeltComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ld55_idea1();
// End Cross Module References
	void USpawnMachinegunBeltComponent::StaticRegisterNativesUSpawnMachinegunBeltComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnMachinegunBeltComponent);
	UClass* Z_Construct_UClass_USpawnMachinegunBeltComponent_NoRegister()
	{
		return USpawnMachinegunBeltComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SummonableBuildings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SummonableBuildings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SummonableBuildings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBeltLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnBeltLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ld55_idea1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/SpawnMachinegunBeltComponent.h" },
		{ "ModuleRelativePath", "Public/Player/SpawnMachinegunBeltComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SummonableBuildings_Inner = { "SummonableBuildings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseSpawnableActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SummonableBuildings_MetaData[] = {
		{ "Category", "SummonBeltConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of buildings that can be theoretically spawned */" },
#endif
		{ "ModuleRelativePath", "Public/Player/SpawnMachinegunBeltComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of buildings that can be theoretically spawned" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SummonableBuildings = { "SummonableBuildings", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnMachinegunBeltComponent, SummonableBuildings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SummonableBuildings_MetaData), Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SummonableBuildings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SpawnBeltLength_MetaData[] = {
		{ "Category", "SummonBeltConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of elements in spawn belt */" },
#endif
		{ "ModuleRelativePath", "Public/Player/SpawnMachinegunBeltComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of elements in spawn belt" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SpawnBeltLength = { "SpawnBeltLength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnMachinegunBeltComponent, SpawnBeltLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SpawnBeltLength_MetaData), Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SpawnBeltLength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SummonableBuildings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SummonableBuildings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::NewProp_SpawnBeltLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnMachinegunBeltComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::ClassParams = {
		&USpawnMachinegunBeltComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpawnMachinegunBeltComponent()
	{
		if (!Z_Registration_Info_UClass_USpawnMachinegunBeltComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnMachinegunBeltComponent.OuterSingleton, Z_Construct_UClass_USpawnMachinegunBeltComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnMachinegunBeltComponent.OuterSingleton;
	}
	template<> LD55_IDEA1_API UClass* StaticClass<USpawnMachinegunBeltComponent>()
	{
		return USpawnMachinegunBeltComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnMachinegunBeltComponent);
	USpawnMachinegunBeltComponent::~USpawnMachinegunBeltComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_SpawnMachinegunBeltComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_SpawnMachinegunBeltComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnMachinegunBeltComponent, USpawnMachinegunBeltComponent::StaticClass, TEXT("USpawnMachinegunBeltComponent"), &Z_Registration_Info_UClass_USpawnMachinegunBeltComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnMachinegunBeltComponent), 2685125766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_SpawnMachinegunBeltComponent_h_408311113(TEXT("/Script/ld55_idea1"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_SpawnMachinegunBeltComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ld55_idea1_Source_ld55_idea1_Public_Player_SpawnMachinegunBeltComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
