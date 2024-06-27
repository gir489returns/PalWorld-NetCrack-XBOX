#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NISBlueprint

#include "Basic.hpp"

#include "NISBlueprint_structs.hpp"


namespace SDK::Params
{

// Function NISBlueprint.NISLibrary.GetDefaultNISMode
// 0x0001 (0x0001 - 0x0000)
struct NISLibrary_GetDefaultNISMode final
{
public:
	EUNISMode                                     ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NISLibrary_GetDefaultNISMode) == 0x000001, "Wrong alignment on NISLibrary_GetDefaultNISMode");
static_assert(sizeof(NISLibrary_GetDefaultNISMode) == 0x000001, "Wrong size on NISLibrary_GetDefaultNISMode");
static_assert(offsetof(NISLibrary_GetDefaultNISMode, ReturnValue) == 0x000000, "Member 'NISLibrary_GetDefaultNISMode::ReturnValue' has a wrong offset!");

// Function NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage
// 0x0008 (0x0008 - 0x0000)
struct NISLibrary_GetNISRecommendedScreenPercentage final
{
public:
	EUNISMode                                     NISMode;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_189C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NISLibrary_GetNISRecommendedScreenPercentage) == 0x000004, "Wrong alignment on NISLibrary_GetNISRecommendedScreenPercentage");
static_assert(sizeof(NISLibrary_GetNISRecommendedScreenPercentage) == 0x000008, "Wrong size on NISLibrary_GetNISRecommendedScreenPercentage");
static_assert(offsetof(NISLibrary_GetNISRecommendedScreenPercentage, NISMode) == 0x000000, "Member 'NISLibrary_GetNISRecommendedScreenPercentage::NISMode' has a wrong offset!");
static_assert(offsetof(NISLibrary_GetNISRecommendedScreenPercentage, ReturnValue) == 0x000004, "Member 'NISLibrary_GetNISRecommendedScreenPercentage::ReturnValue' has a wrong offset!");

// Function NISBlueprint.NISLibrary.GetNISScreenPercentageRange
// 0x0008 (0x0008 - 0x0000)
struct NISLibrary_GetNISScreenPercentageRange final
{
public:
	float                                         MinScreenPercentage;                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxScreenPercentage;                               // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NISLibrary_GetNISScreenPercentageRange) == 0x000004, "Wrong alignment on NISLibrary_GetNISScreenPercentageRange");
static_assert(sizeof(NISLibrary_GetNISScreenPercentageRange) == 0x000008, "Wrong size on NISLibrary_GetNISScreenPercentageRange");
static_assert(offsetof(NISLibrary_GetNISScreenPercentageRange, MinScreenPercentage) == 0x000000, "Member 'NISLibrary_GetNISScreenPercentageRange::MinScreenPercentage' has a wrong offset!");
static_assert(offsetof(NISLibrary_GetNISScreenPercentageRange, MaxScreenPercentage) == 0x000004, "Member 'NISLibrary_GetNISScreenPercentageRange::MaxScreenPercentage' has a wrong offset!");

// Function NISBlueprint.NISLibrary.GetSupportedNISModes
// 0x0010 (0x0010 - 0x0000)
struct NISLibrary_GetSupportedNISModes final
{
public:
	TArray<EUNISMode>                             ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(NISLibrary_GetSupportedNISModes) == 0x000008, "Wrong alignment on NISLibrary_GetSupportedNISModes");
static_assert(sizeof(NISLibrary_GetSupportedNISModes) == 0x000010, "Wrong size on NISLibrary_GetSupportedNISModes");
static_assert(offsetof(NISLibrary_GetSupportedNISModes, ReturnValue) == 0x000000, "Member 'NISLibrary_GetSupportedNISModes::ReturnValue' has a wrong offset!");

// Function NISBlueprint.NISLibrary.IsNISModeSupported
// 0x0002 (0x0002 - 0x0000)
struct NISLibrary_IsNISModeSupported final
{
public:
	EUNISMode                                     NISMode;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NISLibrary_IsNISModeSupported) == 0x000001, "Wrong alignment on NISLibrary_IsNISModeSupported");
static_assert(sizeof(NISLibrary_IsNISModeSupported) == 0x000002, "Wrong size on NISLibrary_IsNISModeSupported");
static_assert(offsetof(NISLibrary_IsNISModeSupported, NISMode) == 0x000000, "Member 'NISLibrary_IsNISModeSupported::NISMode' has a wrong offset!");
static_assert(offsetof(NISLibrary_IsNISModeSupported, ReturnValue) == 0x000001, "Member 'NISLibrary_IsNISModeSupported::ReturnValue' has a wrong offset!");

// Function NISBlueprint.NISLibrary.IsNISSupported
// 0x0001 (0x0001 - 0x0000)
struct NISLibrary_IsNISSupported final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NISLibrary_IsNISSupported) == 0x000001, "Wrong alignment on NISLibrary_IsNISSupported");
static_assert(sizeof(NISLibrary_IsNISSupported) == 0x000001, "Wrong size on NISLibrary_IsNISSupported");
static_assert(offsetof(NISLibrary_IsNISSupported, ReturnValue) == 0x000000, "Member 'NISLibrary_IsNISSupported::ReturnValue' has a wrong offset!");

// Function NISBlueprint.NISLibrary.SetNISCustomScreenPercentage
// 0x0004 (0x0004 - 0x0000)
struct NISLibrary_SetNISCustomScreenPercentage final
{
public:
	float                                         CustomScreenPercentage;                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NISLibrary_SetNISCustomScreenPercentage) == 0x000004, "Wrong alignment on NISLibrary_SetNISCustomScreenPercentage");
static_assert(sizeof(NISLibrary_SetNISCustomScreenPercentage) == 0x000004, "Wrong size on NISLibrary_SetNISCustomScreenPercentage");
static_assert(offsetof(NISLibrary_SetNISCustomScreenPercentage, CustomScreenPercentage) == 0x000000, "Member 'NISLibrary_SetNISCustomScreenPercentage::CustomScreenPercentage' has a wrong offset!");

// Function NISBlueprint.NISLibrary.SetNISMode
// 0x0001 (0x0001 - 0x0000)
struct NISLibrary_SetNISMode final
{
public:
	EUNISMode                                     NISMode;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NISLibrary_SetNISMode) == 0x000001, "Wrong alignment on NISLibrary_SetNISMode");
static_assert(sizeof(NISLibrary_SetNISMode) == 0x000001, "Wrong size on NISLibrary_SetNISMode");
static_assert(offsetof(NISLibrary_SetNISMode, NISMode) == 0x000000, "Member 'NISLibrary_SetNISMode::NISMode' has a wrong offset!");

// Function NISBlueprint.NISLibrary.SetNISSharpness
// 0x0004 (0x0004 - 0x0000)
struct NISLibrary_SetNISSharpness final
{
public:
	float                                         Sharpness;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NISLibrary_SetNISSharpness) == 0x000004, "Wrong alignment on NISLibrary_SetNISSharpness");
static_assert(sizeof(NISLibrary_SetNISSharpness) == 0x000004, "Wrong size on NISLibrary_SetNISSharpness");
static_assert(offsetof(NISLibrary_SetNISSharpness, Sharpness) == 0x000000, "Member 'NISLibrary_SetNISSharpness::Sharpness' has a wrong offset!");

}

