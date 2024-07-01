#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FSR2MovieRenderPipeline

#include "Basic.hpp"

#include "FSR2MovieRenderPipeline_structs.hpp"
#include "MovieRenderPipelineCore_classes.hpp"


namespace SDK
{

// Class FSR2MovieRenderPipeline.FSR2MoviePipelineSettings
// 0x0008 (0x0050 - 0x0048)
class UFSR2MoviePipelineSettings final : public UMoviePipelineViewFamilySetting
{
public:
	EFSR2MoviePipelineQuality                     FSR2Quality;                                       // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_192A[0x7];                                     // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FSR2MoviePipelineSettings">();
	}
	static class UFSR2MoviePipelineSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFSR2MoviePipelineSettings>();
	}
};
static_assert(alignof(UFSR2MoviePipelineSettings) == 0x000008, "Wrong alignment on UFSR2MoviePipelineSettings");
static_assert(sizeof(UFSR2MoviePipelineSettings) == 0x000050, "Wrong size on UFSR2MoviePipelineSettings");
static_assert(offsetof(UFSR2MoviePipelineSettings, FSR2Quality) == 0x000048, "Member 'UFSR2MoviePipelineSettings::FSR2Quality' has a wrong offset!");

}

