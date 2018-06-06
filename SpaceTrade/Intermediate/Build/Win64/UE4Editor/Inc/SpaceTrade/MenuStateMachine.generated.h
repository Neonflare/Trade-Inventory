// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACETRADE_MenuStateMachine_generated_h
#error "MenuStateMachine.generated.h already included, missing '#pragma once' in MenuStateMachine.h"
#endif
#define SPACETRADE_MenuStateMachine_generated_h

#define SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_9_DELEGATE \
struct _Script_SpaceTrade_eventStateChangeDelegate_Parms \
{ \
	FString NewState; \
	FString OldState; \
}; \
static inline void FStateChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& StateChangeDelegate, const FString& NewState, const FString& OldState) \
{ \
	_Script_SpaceTrade_eventStateChangeDelegate_Parms Parms; \
	Parms.NewState=NewState; \
	Parms.OldState=OldState; \
	StateChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddInitialStates) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_initialstates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddInitialStates(Z_Param_Out_initialstates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_desiredstate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetState(Z_Param_desiredstate); \
		P_NATIVE_END; \
	}


#define SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddInitialStates) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_initialstates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddInitialStates(Z_Param_Out_initialstates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_desiredstate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetState(Z_Param_desiredstate); \
		P_NATIVE_END; \
	}


#define SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuStateMachine(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_UMenuStateMachine(); \
public: \
	DECLARE_CLASS(UMenuStateMachine, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(UMenuStateMachine) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMenuStateMachine(); \
	friend SPACETRADE_API class UClass* Z_Construct_UClass_UMenuStateMachine(); \
public: \
	DECLARE_CLASS(UMenuStateMachine, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SpaceTrade"), NO_API) \
	DECLARE_SERIALIZER(UMenuStateMachine) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuStateMachine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuStateMachine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuStateMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuStateMachine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuStateMachine(UMenuStateMachine&&); \
	NO_API UMenuStateMachine(const UMenuStateMachine&); \
public:


#define SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuStateMachine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuStateMachine(UMenuStateMachine&&); \
	NO_API UMenuStateMachine(const UMenuStateMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuStateMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuStateMachine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuStateMachine)


#define SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_PRIVATE_PROPERTY_OFFSET
#define SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_14_PROLOG
#define SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_RPC_WRAPPERS \
	SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_INCLASS \
	SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_INCLASS_NO_PURE_DECLS \
	SpaceTrade_Source_SpaceTrade_MenuStateMachine_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceTrade_Source_SpaceTrade_MenuStateMachine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
