// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrafficLightActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACar;
struct FColor;
#ifdef UE5_SEMAFOROS_TrafficLightActor_generated_h
#error "TrafficLightActor.generated.h already included, missing '#pragma once' in TrafficLightActor.h"
#endif
#define UE5_SEMAFOROS_TrafficLightActor_generated_h

#define FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_SPARSE_DATA
#define FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execManageCars); \
	DECLARE_FUNCTION(execSwitchColor); \
	DECLARE_FUNCTION(execNotifyActorEndOverlap); \
	DECLARE_FUNCTION(execNotifyActorBeginOverlap);


#define FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_ACCESSORS
#define FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrafficLightActor(); \
	friend struct Z_Construct_UClass_ATrafficLightActor_Statics; \
public: \
	DECLARE_CLASS(ATrafficLightActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Semaforos"), NO_API) \
	DECLARE_SERIALIZER(ATrafficLightActor)


#define FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrafficLightActor(ATrafficLightActor&&); \
	NO_API ATrafficLightActor(const ATrafficLightActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrafficLightActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrafficLightActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrafficLightActor) \
	NO_API virtual ~ATrafficLightActor();


#define FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_12_PROLOG
#define FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_SPARSE_DATA \
	FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_ACCESSORS \
	FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_SEMAFOROS_API UClass* StaticClass<class ATrafficLightActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLightActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
