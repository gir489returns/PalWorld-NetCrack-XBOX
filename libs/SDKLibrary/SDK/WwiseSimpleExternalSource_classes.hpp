#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WwiseSimpleExternalSource

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class WwiseSimpleExternalSource.WwiseExternalSourceSettings
// 0x0068 (0x0090 - 0x0028)
class UWwiseExternalSourceSettings final : public UObject
{
public:
	struct FSoftObjectPath                        MediaInfoTable;                                    // 0x0028(0x0020)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        ExternalSourceDefaultMedia;                        // 0x0048(0x0020)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                         ExternalSourceStagingDirectory;                    // 0x0068(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D1B[0x18];                                    // 0x0078(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WwiseExternalSourceSettings">();
	}
	static class UWwiseExternalSourceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWwiseExternalSourceSettings>();
	}
};
static_assert(alignof(UWwiseExternalSourceSettings) == 0x000008, "Wrong alignment on UWwiseExternalSourceSettings");
static_assert(sizeof(UWwiseExternalSourceSettings) == 0x000090, "Wrong size on UWwiseExternalSourceSettings");
static_assert(offsetof(UWwiseExternalSourceSettings, MediaInfoTable) == 0x000028, "Member 'UWwiseExternalSourceSettings::MediaInfoTable' has a wrong offset!");
static_assert(offsetof(UWwiseExternalSourceSettings, ExternalSourceDefaultMedia) == 0x000048, "Member 'UWwiseExternalSourceSettings::ExternalSourceDefaultMedia' has a wrong offset!");
static_assert(offsetof(UWwiseExternalSourceSettings, ExternalSourceStagingDirectory) == 0x000068, "Member 'UWwiseExternalSourceSettings::ExternalSourceStagingDirectory' has a wrong offset!");

}

