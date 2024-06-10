// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Observer/Patron_ObserverGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatron_ObserverGameMode() {}
// Cross Module References
	PATRON_OBSERVER_API UClass* Z_Construct_UClass_APatron_ObserverGameMode_NoRegister();
	PATRON_OBSERVER_API UClass* Z_Construct_UClass_APatron_ObserverGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Patron_Observer();
// End Cross Module References
	void APatron_ObserverGameMode::StaticRegisterNativesAPatron_ObserverGameMode()
	{
	}
	UClass* Z_Construct_UClass_APatron_ObserverGameMode_NoRegister()
	{
		return APatron_ObserverGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APatron_ObserverGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatron_ObserverGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatron_ObserverGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Patron_ObserverGameMode.h" },
		{ "ModuleRelativePath", "Patron_ObserverGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatron_ObserverGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatron_ObserverGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatron_ObserverGameMode_Statics::ClassParams = {
		&APatron_ObserverGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APatron_ObserverGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatron_ObserverGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatron_ObserverGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatron_ObserverGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatron_ObserverGameMode, 2319722659);
	template<> PATRON_OBSERVER_API UClass* StaticClass<APatron_ObserverGameMode>()
	{
		return APatron_ObserverGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatron_ObserverGameMode(Z_Construct_UClass_APatron_ObserverGameMode, &APatron_ObserverGameMode::StaticClass, TEXT("/Script/Patron_Observer"), TEXT("APatron_ObserverGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatron_ObserverGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
