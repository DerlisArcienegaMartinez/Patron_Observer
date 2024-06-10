// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATRON_OBSERVER_Observador_generated_h
#error "Observador.generated.h already included, missing '#pragma once' in Observador.h"
#endif
#define PATRON_OBSERVER_Observador_generated_h

#define Patron_Observer_Source_Patron_Observer_Observador_h_13_SPARSE_DATA
#define Patron_Observer_Source_Patron_Observer_Observador_h_13_RPC_WRAPPERS
#define Patron_Observer_Source_Patron_Observer_Observador_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Patron_Observer_Source_Patron_Observer_Observador_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PATRON_OBSERVER_API UObservador(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObservador) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PATRON_OBSERVER_API, UObservador); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObservador); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PATRON_OBSERVER_API UObservador(UObservador&&); \
	PATRON_OBSERVER_API UObservador(const UObservador&); \
public:


#define Patron_Observer_Source_Patron_Observer_Observador_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PATRON_OBSERVER_API UObservador(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PATRON_OBSERVER_API UObservador(UObservador&&); \
	PATRON_OBSERVER_API UObservador(const UObservador&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PATRON_OBSERVER_API, UObservador); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObservador); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObservador)


#define Patron_Observer_Source_Patron_Observer_Observador_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObservador(); \
	friend struct Z_Construct_UClass_UObservador_Statics; \
public: \
	DECLARE_CLASS(UObservador, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Patron_Observer"), PATRON_OBSERVER_API) \
	DECLARE_SERIALIZER(UObservador)


#define Patron_Observer_Source_Patron_Observer_Observador_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Patron_Observer_Source_Patron_Observer_Observador_h_13_GENERATED_UINTERFACE_BODY() \
	Patron_Observer_Source_Patron_Observer_Observador_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Observer_Source_Patron_Observer_Observador_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Patron_Observer_Source_Patron_Observer_Observador_h_13_GENERATED_UINTERFACE_BODY() \
	Patron_Observer_Source_Patron_Observer_Observador_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Observer_Source_Patron_Observer_Observador_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObservador() {} \
public: \
	typedef UObservador UClassType; \
	typedef IObservador ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Patron_Observer_Source_Patron_Observer_Observador_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IObservador() {} \
public: \
	typedef UObservador UClassType; \
	typedef IObservador ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Patron_Observer_Source_Patron_Observer_Observador_h_10_PROLOG
#define Patron_Observer_Source_Patron_Observer_Observador_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Observer_Source_Patron_Observer_Observador_h_13_SPARSE_DATA \
	Patron_Observer_Source_Patron_Observer_Observador_h_13_RPC_WRAPPERS \
	Patron_Observer_Source_Patron_Observer_Observador_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Observer_Source_Patron_Observer_Observador_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Observer_Source_Patron_Observer_Observador_h_13_SPARSE_DATA \
	Patron_Observer_Source_Patron_Observer_Observador_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Patron_Observer_Source_Patron_Observer_Observador_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRON_OBSERVER_API UClass* StaticClass<class UObservador>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Patron_Observer_Source_Patron_Observer_Observador_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
