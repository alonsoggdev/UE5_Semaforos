// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Semaforos/TrafficLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrafficLight() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere();
	UE5_SEMAFOROS_API UClass* Z_Construct_UClass_ATrafficLight();
	UE5_SEMAFOROS_API UClass* Z_Construct_UClass_ATrafficLight_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_Semaforos();
// End Cross Module References
	DEFINE_FUNCTION(ATrafficLight::execSwitchColor)
	{
		P_GET_STRUCT(FColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchColor(Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrafficLight::execNotifyActorEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyActorEndOverlap(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATrafficLight::execNotifyActorBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyActorBeginOverlap(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ATrafficLight::StaticRegisterNativesATrafficLight()
	{
		UClass* Class = ATrafficLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyActorBeginOverlap", &ATrafficLight::execNotifyActorBeginOverlap },
			{ "NotifyActorEndOverlap", &ATrafficLight::execNotifyActorEndOverlap },
			{ "SwitchColor", &ATrafficLight::execSwitchColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics
	{
		struct TrafficLight_eventNotifyActorBeginOverlap_Parms
		{
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrafficLight_eventNotifyActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TrafficLight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrafficLight, nullptr, "NotifyActorBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::TrafficLight_eventNotifyActorBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::TrafficLight_eventNotifyActorBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics
	{
		struct TrafficLight_eventNotifyActorEndOverlap_Parms
		{
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrafficLight_eventNotifyActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TrafficLight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrafficLight, nullptr, "NotifyActorEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::TrafficLight_eventNotifyActorEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::TrafficLight_eventNotifyActorEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics
	{
		struct TrafficLight_eventSwitchColor_Parms
		{
			FColor color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrafficLight_eventSwitchColor_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TrafficLight.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrafficLight, nullptr, "SwitchColor", nullptr, nullptr, Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::TrafficLight_eventSwitchColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::TrafficLight_eventSwitchColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATrafficLight_SwitchColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrafficLight_SwitchColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrafficLight);
	UClass* Z_Construct_UClass_ATrafficLight_NoRegister()
	{
		return ATrafficLight::StaticClass();
	}
	struct Z_Construct_UClass_ATrafficLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrafficLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerSphere,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_Semaforos,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficLight_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATrafficLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrafficLight_NotifyActorBeginOverlap, "NotifyActorBeginOverlap" }, // 3005435635
		{ &Z_Construct_UFunction_ATrafficLight_NotifyActorEndOverlap, "NotifyActorEndOverlap" }, // 2252972048
		{ &Z_Construct_UFunction_ATrafficLight_SwitchColor, "SwitchColor" }, // 1471784102
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficLight_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrafficLight_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TrafficLight.h" },
		{ "ModuleRelativePath", "TrafficLight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrafficLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrafficLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrafficLight_Statics::ClassParams = {
		&ATrafficLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficLight_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrafficLight_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATrafficLight()
	{
		if (!Z_Registration_Info_UClass_ATrafficLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrafficLight.OuterSingleton, Z_Construct_UClass_ATrafficLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrafficLight.OuterSingleton;
	}
	template<> UE5_SEMAFOROS_API UClass* StaticClass<ATrafficLight>()
	{
		return ATrafficLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrafficLight);
	ATrafficLight::~ATrafficLight() {}
	struct Z_CompiledInDeferFile_FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrafficLight, ATrafficLight::StaticClass, TEXT("ATrafficLight"), &Z_Registration_Info_UClass_ATrafficLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrafficLight), 1573937764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLight_h_2730594481(TEXT("/Script/UE5_Semaforos"),
		Z_CompiledInDeferFile_FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_TrafficLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
