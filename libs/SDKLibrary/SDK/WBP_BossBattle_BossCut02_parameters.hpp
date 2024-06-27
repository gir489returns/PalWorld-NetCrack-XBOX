#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BossBattle_BossCut02

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_BossBattle_BossCut02.WBP_BossBattle_BossCut02_C.SetTexts
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_BossBattle_BossCut02_C_SetTexts final
{
public:
	class FText                                   MainName;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   SubName;                                           // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
};
static_assert(alignof(WBP_BossBattle_BossCut02_C_SetTexts) == 0x000008, "Wrong alignment on WBP_BossBattle_BossCut02_C_SetTexts");
static_assert(sizeof(WBP_BossBattle_BossCut02_C_SetTexts) == 0x0000A8, "Wrong size on WBP_BossBattle_BossCut02_C_SetTexts");
static_assert(offsetof(WBP_BossBattle_BossCut02_C_SetTexts, MainName) == 0x000000, "Member 'WBP_BossBattle_BossCut02_C_SetTexts::MainName' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BossCut02_C_SetTexts, SubName) == 0x000018, "Member 'WBP_BossBattle_BossCut02_C_SetTexts::SubName' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BossCut02_C_SetTexts, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_BossBattle_BossCut02_C_SetTexts::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BossCut02_C_SetTexts, K2Node_MakeArray_Array) == 0x000080, "Member 'WBP_BossBattle_BossCut02_C_SetTexts::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_BossBattle_BossCut02_C_SetTexts, CallFunc_Format_ReturnValue) == 0x000090, "Member 'WBP_BossBattle_BossCut02_C_SetTexts::CallFunc_Format_ReturnValue' has a wrong offset!");

}

