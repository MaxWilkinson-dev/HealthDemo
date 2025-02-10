// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyProjectPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectPlayerController();
MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class AMyProjectPlayerController
void AMyProjectPlayerController::StaticRegisterNativesAMyProjectPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyProjectPlayerController);
UClass* Z_Construct_UClass_AMyProjectPlayerController_NoRegister()
{
	return AMyProjectPlayerController::StaticClass();
}
struct Z_Construct_UClass_AMyProjectPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyProjectPlayerController.h" },
		{ "ModuleRelativePath", "MyProjectPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "MyProjectPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyProjectPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProjectPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyProjectPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectPlayerController_Statics::ClassParams = {
	&AMyProjectPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyProjectPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyProjectPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyProjectPlayerController()
{
	if (!Z_Registration_Info_UClass_AMyProjectPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyProjectPlayerController.OuterSingleton, Z_Construct_UClass_AMyProjectPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyProjectPlayerController.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<AMyProjectPlayerController>()
{
	return AMyProjectPlayerController::StaticClass();
}
AMyProjectPlayerController::AMyProjectPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectPlayerController);
AMyProjectPlayerController::~AMyProjectPlayerController() {}
// End Class AMyProjectPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_24810577_OneDrive___MMU_Documents_New_folder_HealthDemo_MyProject_Source_MyProject_MyProjectPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyProjectPlayerController, AMyProjectPlayerController::StaticClass, TEXT("AMyProjectPlayerController"), &Z_Registration_Info_UClass_AMyProjectPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyProjectPlayerController), 1202273498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_24810577_OneDrive___MMU_Documents_New_folder_HealthDemo_MyProject_Source_MyProject_MyProjectPlayerController_h_1208678200(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_24810577_OneDrive___MMU_Documents_New_folder_HealthDemo_MyProject_Source_MyProject_MyProjectPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_24810577_OneDrive___MMU_Documents_New_folder_HealthDemo_MyProject_Source_MyProject_MyProjectPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
