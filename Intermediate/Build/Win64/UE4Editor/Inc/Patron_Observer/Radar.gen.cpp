// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Observer/Radar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadar() {}
// Cross Module References
	PATRON_OBSERVER_API UClass* Z_Construct_UClass_ARadar_NoRegister();
	PATRON_OBSERVER_API UClass* Z_Construct_UClass_ARadar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Patron_Observer();
// End Cross Module References
	void ARadar::StaticRegisterNativesARadar()
	{
	}
	UClass* Z_Construct_UClass_ARadar_NoRegister()
	{
		return ARadar::StaticClass();
	}
	struct Z_Construct_UClass_ARadar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARadar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Radar.h" },
		{ "ModuleRelativePath", "Radar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARadar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARadar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARadar_Statics::ClassParams = {
		&ARadar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARadar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARadar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARadar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARadar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARadar, 1859196189);
	template<> PATRON_OBSERVER_API UClass* StaticClass<ARadar>()
	{
		return ARadar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARadar(Z_Construct_UClass_ARadar, &ARadar::StaticClass, TEXT("/Script/Patron_Observer"), TEXT("ARadar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARadar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
