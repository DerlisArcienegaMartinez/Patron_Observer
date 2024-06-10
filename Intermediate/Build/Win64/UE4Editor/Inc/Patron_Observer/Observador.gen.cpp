// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Observer/Observador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObservador() {}
// Cross Module References
	PATRON_OBSERVER_API UClass* Z_Construct_UClass_UObservador_NoRegister();
	PATRON_OBSERVER_API UClass* Z_Construct_UClass_UObservador();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Patron_Observer();
// End Cross Module References
	void UObservador::StaticRegisterNativesUObservador()
	{
	}
	UClass* Z_Construct_UClass_UObservador_NoRegister()
	{
		return UObservador::StaticClass();
	}
	struct Z_Construct_UClass_UObservador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObservador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObservador_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Observador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObservador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObservador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObservador_Statics::ClassParams = {
		&UObservador::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UObservador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObservador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObservador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObservador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObservador, 3173221358);
	template<> PATRON_OBSERVER_API UClass* StaticClass<UObservador>()
	{
		return UObservador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObservador(Z_Construct_UClass_UObservador, &UObservador::StaticClass, TEXT("/Script/Patron_Observer"), TEXT("UObservador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObservador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
