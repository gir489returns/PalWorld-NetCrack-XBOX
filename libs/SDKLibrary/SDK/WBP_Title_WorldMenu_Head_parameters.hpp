#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_WorldMenu_Head

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Title_WorldMenu_Head.WBP_Title_WorldMenu_Head_C.ExecuteUbergraph_WBP_Title_WorldMenu_Head
// 0x0020 (0x0020 - 0x0000)
struct WBP_Title_WorldMenu_Head_C_ExecuteUbergraph_WBP_Title_WorldMenu_Head final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4811[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0008(0x0018)()
};
static_assert(alignof(WBP_Title_WorldMenu_Head_C_ExecuteUbergraph_WBP_Title_WorldMenu_Head) == 0x000008, "Wrong alignment on WBP_Title_WorldMenu_Head_C_ExecuteUbergraph_WBP_Title_WorldMenu_Head");
static_assert(sizeof(WBP_Title_WorldMenu_Head_C_ExecuteUbergraph_WBP_Title_WorldMenu_Head) == 0x000020, "Wrong size on WBP_Title_WorldMenu_Head_C_ExecuteUbergraph_WBP_Title_WorldMenu_Head");
static_assert(offsetof(WBP_Title_WorldMenu_Head_C_ExecuteUbergraph_WBP_Title_WorldMenu_Head, EntryPoint) == 0x000000, "Member 'WBP_Title_WorldMenu_Head_C_ExecuteUbergraph_WBP_Title_WorldMenu_Head::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Title_WorldMenu_Head_C_ExecuteUbergraph_WBP_Title_WorldMenu_Head, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000008, "Member 'WBP_Title_WorldMenu_Head_C_ExecuteUbergraph_WBP_Title_WorldMenu_Head::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");

}

