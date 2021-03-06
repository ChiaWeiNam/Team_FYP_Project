// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FYP.h"
#include "FYP.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FYP() {}
	void AMyAvatar::StaticRegisterNativesAMyAvatar()
	{
	}
	IMPLEMENT_CLASS(AMyAvatar, 1881123734);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();

	FYP_API class UClass* Z_Construct_UClass_AMyAvatar_NoRegister();
	FYP_API class UClass* Z_Construct_UClass_AMyAvatar();
	FYP_API class UPackage* Z_Construct_UPackage__Script_FYP();
	UClass* Z_Construct_UClass_AMyAvatar_NoRegister()
	{
		return AMyAvatar::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyAvatar()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_FYP();
			OuterClass = AMyAvatar::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyAvatar.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyAvatar.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyAvatar(Z_Construct_UClass_AMyAvatar, &AMyAvatar::StaticClass, TEXT("AMyAvatar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAvatar);
	UPackage* Z_Construct_UPackage__Script_FYP()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/FYP")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x77578ECC;
			Guid.B = 0x2D92B82D;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
