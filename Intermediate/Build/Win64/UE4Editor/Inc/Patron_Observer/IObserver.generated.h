// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATRON_OBSERVER_IObserver_generated_h
#error "IObserver.generated.h already included, missing '#pragma once' in IObserver.h"
#endif
#define PATRON_OBSERVER_IObserver_generated_h

#define Patron_Observer_Source_Patron_Observer_IObserver_h_13_SPARSE_DATA
#define Patron_Observer_Source_Patron_Observer_IObserver_h_13_RPC_WRAPPERS
#define Patron_Observer_Source_Patron_Observer_IObserver_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Patron_Observer_Source_Patron_Observer_IObserver_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PATRON_OBSERVER_API UIObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PATRON_OBSERVER_API, UIObserver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PATRON_OBSERVER_API UIObserver(UIObserver&&); \
	PATRON_OBSERVER_API UIObserver(const UIObserver&); \
public:


#define Patron_Observer_Source_Patron_Observer_IObserver_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PATRON_OBSERVER_API UIObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PATRON_OBSERVER_API UIObserver(UIObserver&&); \
	PATRON_OBSERVER_API UIObserver(const UIObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PATRON_OBSERVER_API, UIObserver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIObserver)


#define Patron_Observer_Source_Patron_Observer_IObserver_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIObserver(); \
	friend struct Z_Construct_UClass_UIObserver_Statics; \
public: \
	DECLARE_CLASS(UIObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Patron_Observer"), PATRON_OBSERVER_API) \
	DECLARE_SERIALIZER(UIObserver)


#define Patron_Observer_Source_Patron_Observer_IObserver_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Patron_Observer_Source_Patron_Observer_IObserver_h_13_GENERATED_UINTERFACE_BODY() \
	Patron_Observer_Source_Patron_Observer_IObserver_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Observer_Source_Patron_Observer_IObserver_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Patron_Observer_Source_Patron_Observer_IObserver_h_13_GENERATED_UINTERFACE_BODY() \
	Patron_Observer_Source_Patron_Observer_IObserver_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Observer_Source_Patron_Observer_IObserver_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIObserver() {} \
public: \
	typedef UIObserver UClassType; \
	typedef IIObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Patron_Observer_Source_Patron_Observer_IObserver_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIObserver() {} \
public: \
	typedef UIObserver UClassType; \
	typedef IIObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Patron_Observer_Source_Patron_Observer_IObserver_h_10_PROLOG
#define Patron_Observer_Source_Patron_Observer_IObserver_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Observer_Source_Patron_Observer_IObserver_h_13_SPARSE_DATA \
	Patron_Observer_Source_Patron_Observer_IObserver_h_13_RPC_WRAPPERS \
	Patron_Observer_Source_Patron_Observer_IObserver_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Observer_Source_Patron_Observer_IObserver_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Observer_Source_Patron_Observer_IObserver_h_13_SPARSE_DATA \
	Patron_Observer_Source_Patron_Observer_IObserver_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Patron_Observer_Source_Patron_Observer_IObserver_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRON_OBSERVER_API UClass* StaticClass<class UIObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Patron_Observer_Source_Patron_Observer_IObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
