// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFakeFall_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FakeFall;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FakeFall()
	{
		if (!Z_Registration_Info_UPackage__Script_FakeFall.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FakeFall",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9C8673F7,
				0x70847645,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FakeFall.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FakeFall.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FakeFall(Z_Construct_UPackage__Script_FakeFall, TEXT("/Script/FakeFall"), Z_Registration_Info_UPackage__Script_FakeFall, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9C8673F7, 0x70847645));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
