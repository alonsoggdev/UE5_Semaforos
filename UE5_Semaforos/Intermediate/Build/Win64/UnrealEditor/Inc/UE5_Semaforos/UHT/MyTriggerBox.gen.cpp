// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Semaforos/MyTriggerBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTriggerBox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UE5_SEMAFOROS_API UClass* Z_Construct_UClass_AMyTriggerBox();
	UE5_SEMAFOROS_API UClass* Z_Construct_UClass_AMyTriggerBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5_Semaforos();
// End Cross Module References
	DEFINE_FUNCTION(AMyTriggerBox::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AMyTriggerBox::StaticRegisterNativesAMyTriggerBox()
	{
		UClass* Class = AMyTriggerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AMyTriggerBox::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics
	{
		struct MyTriggerBox_eventOnOverlapBegin_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTriggerBox_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyTriggerBox_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when this actor overlaps another actor\n" },
#endif
		{ "ModuleRelativePath", "MyTriggerBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this actor overlaps another actor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTriggerBox, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::MyTriggerBox_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::MyTriggerBox_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTriggerBox);
	UClass* Z_Construct_UClass_AMyTriggerBox_NoRegister()
	{
		return AMyTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_AMyTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_Semaforos,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerBox_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyTriggerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyTriggerBox_OnOverlapBegin, "OnOverlapBegin" }, // 2836795485
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerBox_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTriggerBox_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyTriggerBox.h" },
		{ "ModuleRelativePath", "MyTriggerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTriggerBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTriggerBox_Statics::ClassParams = {
		&AMyTriggerBox::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTriggerBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTriggerBox_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyTriggerBox()
	{
		if (!Z_Registration_Info_UClass_AMyTriggerBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTriggerBox.OuterSingleton, Z_Construct_UClass_AMyTriggerBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTriggerBox.OuterSingleton;
	}
	template<> UE5_SEMAFOROS_API UClass* StaticClass<AMyTriggerBox>()
	{
		return AMyTriggerBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTriggerBox);
	AMyTriggerBox::~AMyTriggerBox() {}
	struct Z_CompiledInDeferFile_FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_MyTriggerBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_MyTriggerBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTriggerBox, AMyTriggerBox::StaticClass, TEXT("AMyTriggerBox"), &Z_Registration_Info_UClass_AMyTriggerBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTriggerBox), 1144783193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_MyTriggerBox_h_3213057461(TEXT("/Script/UE5_Semaforos"),
		Z_CompiledInDeferFile_FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_MyTriggerBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GITHUB_REPOS_UE5_Semaforo_UE5_Semaforos_UE5_Semaforos_Source_UE5_Semaforos_MyTriggerBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
