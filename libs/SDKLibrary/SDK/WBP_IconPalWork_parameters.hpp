#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IconPalWork

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_IconPalWork.WBP_IconPalWork_C.SetSuitability
// 0x0018 (0x0018 - 0x0000)
struct WBP_IconPalWork_C_SetSuitability final
{
public:
	EPalWorkSuitability                           Suitability;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4047[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IconPalWork_C_SetSuitability) == 0x000008, "Wrong alignment on WBP_IconPalWork_C_SetSuitability");
static_assert(sizeof(WBP_IconPalWork_C_SetSuitability) == 0x000018, "Wrong size on WBP_IconPalWork_C_SetSuitability");
static_assert(offsetof(WBP_IconPalWork_C_SetSuitability, Suitability) == 0x000000, "Member 'WBP_IconPalWork_C_SetSuitability::Suitability' has a wrong offset!");
static_assert(offsetof(WBP_IconPalWork_C_SetSuitability, CallFunc_Map_Find_Value) == 0x000008, "Member 'WBP_IconPalWork_C_SetSuitability::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_IconPalWork_C_SetSuitability, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'WBP_IconPalWork_C_SetSuitability::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

}

