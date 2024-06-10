// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PATRON_OBSERVER_Patron_ObserverProjectile_generated_h
#error "Patron_ObserverProjectile.generated.h already included, missing '#pragma once' in Patron_ObserverProjectile.h"
#endif
#define PATRON_OBSERVER_Patron_ObserverProjectile_generated_h

#define Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_SPARSE_DATA
#define Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPatron_ObserverProjectile(); \
	friend struct Z_Construct_UClass_APatron_ObserverProjectile_Statics; \
public: \
	DECLARE_CLASS(APatron_ObserverProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_Observer"), NO_API) \
	DECLARE_SERIALIZER(APatron_ObserverProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPatron_ObserverProjectile(); \
	friend struct Z_Construct_UClass_APatron_ObserverProjectile_Statics; \
public: \
	DECLARE_CLASS(APatron_ObserverProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_Observer"), NO_API) \
	DECLARE_SERIALIZER(APatron_ObserverProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APatron_ObserverProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APatron_ObserverProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatron_ObserverProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatron_ObserverProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatron_ObserverProjectile(APatron_ObserverProjectile&&); \
	NO_API APatron_ObserverProjectile(const APatron_ObserverProjectile&); \
public:


#define Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatron_ObserverProjectile(APatron_ObserverProjectile&&); \
	NO_API APatron_ObserverProjectile(const APatron_ObserverProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatron_ObserverProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatron_ObserverProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APatron_ObserverProjectile)


#define Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APatron_ObserverProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APatron_ObserverProjectile, ProjectileMovement); }


#define Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_12_PROLOG
#define Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_SPARSE_DATA \
	Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_RPC_WRAPPERS \
	Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_INCLASS \
	Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_SPARSE_DATA \
	Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRON_OBSERVER_API UClass* StaticClass<class APatron_ObserverProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Patron_Observer_Source_Patron_Observer_Patron_ObserverProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
