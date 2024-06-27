#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenu_Task_Tutorial

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.AddQuest
// 0x0050 (0x0050 - 0x0000)
struct WBP_IngameMenu_Task_Tutorial_C_AddQuest final
{
public:
	class UPalQuestData*                          QuestData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48F4[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalQuestData*>                  CallFunc_Map_Values_Values;                        // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48F5[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_IngameMenu_Task_Tutorial_List_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48F6[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_Tutorial_List_C*   CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Tutorial_C_AddQuest) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Tutorial_C_AddQuest");
static_assert(sizeof(WBP_IngameMenu_Task_Tutorial_C_AddQuest) == 0x000050, "Wrong size on WBP_IngameMenu_Task_Tutorial_C_AddQuest");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_AddQuest, QuestData) == 0x000000, "Member 'WBP_IngameMenu_Task_Tutorial_C_AddQuest::QuestData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_AddQuest, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_Task_Tutorial_C_AddQuest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_AddQuest, CallFunc_Map_Values_Values) == 0x000010, "Member 'WBP_IngameMenu_Task_Tutorial_C_AddQuest::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_AddQuest, CallFunc_Array_Contains_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_Task_Tutorial_C_AddQuest::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_AddQuest, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'WBP_IngameMenu_Task_Tutorial_C_AddQuest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_AddQuest, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_Task_Tutorial_C_AddQuest::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_AddQuest, CallFunc_Create_ReturnValue) == 0x000040, "Member 'WBP_IngameMenu_Task_Tutorial_C_AddQuest::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_AddQuest, CallFunc_AddChild_ReturnValue) == 0x000048, "Member 'WBP_IngameMenu_Task_Tutorial_C_AddQuest::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.GetNowDisplayQuestWidgetNum
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum) == 0x000004, "Wrong alignment on WBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum");
static_assert(sizeof(WBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum) == 0x000008, "Wrong size on WBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum, Num) == 0x000000, "Member 'WBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum::Num' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum, CallFunc_Map_Length_ReturnValue) == 0x000004, "Member 'WBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum::CallFunc_Map_Length_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.OnClosedQuestWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget final
{
public:
	class UWBP_IngameMenu_Task_Tutorial_List_C*   Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget");
static_assert(sizeof(WBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget) == 0x000010, "Wrong size on WBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget, Widget) == 0x000000, "Member 'WBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget, CallFunc_Map_Remove_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");

}

