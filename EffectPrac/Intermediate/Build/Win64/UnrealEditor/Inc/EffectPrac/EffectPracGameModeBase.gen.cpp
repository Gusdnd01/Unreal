// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EffectPrac/EffectPracGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectPracGameModeBase() {}
// Cross Module References
	EFFECTPRAC_API UClass* Z_Construct_UClass_AEffectPracGameModeBase_NoRegister();
	EFFECTPRAC_API UClass* Z_Construct_UClass_AEffectPracGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EffectPrac();
// End Cross Module References
	void AEffectPracGameModeBase::StaticRegisterNativesAEffectPracGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEffectPracGameModeBase);
	UClass* Z_Construct_UClass_AEffectPracGameModeBase_NoRegister()
	{
		return AEffectPracGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEffectPracGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEffectPracGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EffectPrac,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEffectPracGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EffectPracGameModeBase.h" },
		{ "ModuleRelativePath", "EffectPracGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEffectPracGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEffectPracGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEffectPracGameModeBase_Statics::ClassParams = {
		&AEffectPracGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEffectPracGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEffectPracGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEffectPracGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AEffectPracGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEffectPracGameModeBase.OuterSingleton, Z_Construct_UClass_AEffectPracGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEffectPracGameModeBase.OuterSingleton;
	}
	template<> EFFECTPRAC_API UClass* StaticClass<AEffectPracGameModeBase>()
	{
		return AEffectPracGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEffectPracGameModeBase);
	struct Z_CompiledInDeferFile_FID_EffectPrac_Source_EffectPrac_EffectPracGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EffectPrac_Source_EffectPrac_EffectPracGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEffectPracGameModeBase, AEffectPracGameModeBase::StaticClass, TEXT("AEffectPracGameModeBase"), &Z_Registration_Info_UClass_AEffectPracGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEffectPracGameModeBase), 331043222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EffectPrac_Source_EffectPrac_EffectPracGameModeBase_h_4187216252(TEXT("/Script/EffectPrac"),
		Z_CompiledInDeferFile_FID_EffectPrac_Source_EffectPrac_EffectPracGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EffectPrac_Source_EffectPrac_EffectPracGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
