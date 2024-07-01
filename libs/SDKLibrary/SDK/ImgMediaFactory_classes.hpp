#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImgMediaFactory

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class ImgMediaFactory.ImgMediaSettings
// 0x0040 (0x0068 - 0x0028)
class UImgMediaSettings final : public UObject
{
public:
	struct FFrameRate                             DefaultFrameRate;                                  // 0x0028(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CacheBehindPercentage;                             // 0x0030(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CacheSizeGB;                                       // 0x0034(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CacheThreads;                                      // 0x0038(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CacheThreadStackSizeKB;                            // 0x003C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GlobalCacheSizeGB;                                 // 0x0040(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseGlobalCache;                                    // 0x0044(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2453[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        ExrDecoderThreads;                                 // 0x0048(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2454[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DefaultProxy;                                      // 0x0050(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          UseDefaultProxy;                                   // 0x0060(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2455[0x7];                                     // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImgMediaSettings">();
	}
	static class UImgMediaSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImgMediaSettings>();
	}
};
static_assert(alignof(UImgMediaSettings) == 0x000008, "Wrong alignment on UImgMediaSettings");
static_assert(sizeof(UImgMediaSettings) == 0x000068, "Wrong size on UImgMediaSettings");
static_assert(offsetof(UImgMediaSettings, DefaultFrameRate) == 0x000028, "Member 'UImgMediaSettings::DefaultFrameRate' has a wrong offset!");
static_assert(offsetof(UImgMediaSettings, CacheBehindPercentage) == 0x000030, "Member 'UImgMediaSettings::CacheBehindPercentage' has a wrong offset!");
static_assert(offsetof(UImgMediaSettings, CacheSizeGB) == 0x000034, "Member 'UImgMediaSettings::CacheSizeGB' has a wrong offset!");
static_assert(offsetof(UImgMediaSettings, CacheThreads) == 0x000038, "Member 'UImgMediaSettings::CacheThreads' has a wrong offset!");
static_assert(offsetof(UImgMediaSettings, CacheThreadStackSizeKB) == 0x00003C, "Member 'UImgMediaSettings::CacheThreadStackSizeKB' has a wrong offset!");
static_assert(offsetof(UImgMediaSettings, GlobalCacheSizeGB) == 0x000040, "Member 'UImgMediaSettings::GlobalCacheSizeGB' has a wrong offset!");
static_assert(offsetof(UImgMediaSettings, UseGlobalCache) == 0x000044, "Member 'UImgMediaSettings::UseGlobalCache' has a wrong offset!");
static_assert(offsetof(UImgMediaSettings, ExrDecoderThreads) == 0x000048, "Member 'UImgMediaSettings::ExrDecoderThreads' has a wrong offset!");
static_assert(offsetof(UImgMediaSettings, DefaultProxy) == 0x000050, "Member 'UImgMediaSettings::DefaultProxy' has a wrong offset!");
static_assert(offsetof(UImgMediaSettings, UseDefaultProxy) == 0x000060, "Member 'UImgMediaSettings::UseDefaultProxy' has a wrong offset!");

}

