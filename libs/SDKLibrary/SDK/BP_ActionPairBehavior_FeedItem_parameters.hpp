#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPairBehavior_FeedItem

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.ExecuteUbergraph_BP_ActionPairBehavior_FeedItem
// 0x0138 (0x0138 - 0x0000)
struct BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F7E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemContainerManager*               CallFunc_GetItemContainerManager_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F7F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalControlActor_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F80[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualCharacterHandleByActor_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalNetArchive                         CallFunc_GetBlackboard_ReturnValue;                // 0x0038(0x0010)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F81[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemSlotId                         CallFunc_ReadPlayerFeedItemTo_ItemSlotId;          // 0x004C(0x0014)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReadPlayerFeedItemTo_ItemNum;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalItemSlotIdAndNum                   K2Node_MakeStruct_PalItemSlotIdAndNum;             // 0x0064(0x0018)(NoDestructor)
	uint8                                         Pad_3F82[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           CallFunc_TryGetSlot_Slot;                          // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetSlot_ReturnValue;                   // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F83[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalInstanceID                         CallFunc_GetIndividualID_ReturnValue;              // 0x0090(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F84[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemId                             CallFunc_GetItemId_ReturnValue;                    // 0x00C4(0x0028)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F85[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalMealLogDisplayData                 K2Node_MakeStruct_PalMealLogDisplayData;           // 0x00F8(0x0038)()
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem) == 0x000008, "Wrong alignment on BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem");
static_assert(sizeof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem) == 0x000138, "Wrong size on BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, EntryPoint) == 0x000000, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_GetItemContainerManager_ReturnValue) == 0x000008, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_GetItemContainerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_GetActionCharacter_ReturnValue) == 0x000018, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_GetActionTarget_ReturnValue) == 0x000020, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_IsLocalControlActor_ReturnValue) == 0x000028, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_IsLocalControlActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_GetIndividualCharacterHandleByActor_ReturnValue) == 0x000030, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_GetIndividualCharacterHandleByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_GetBlackboard_ReturnValue) == 0x000038, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_IsValid_ReturnValue_2) == 0x000048, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_ReadPlayerFeedItemTo_ItemSlotId) == 0x00004C, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_ReadPlayerFeedItemTo_ItemSlotId' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_ReadPlayerFeedItemTo_ItemNum) == 0x000060, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_ReadPlayerFeedItemTo_ItemNum' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, K2Node_MakeStruct_PalItemSlotIdAndNum) == 0x000064, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::K2Node_MakeStruct_PalItemSlotIdAndNum' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_TryGetSlot_Slot) == 0x000080, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_TryGetSlot_Slot' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_TryGetSlot_ReturnValue) == 0x000088, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_TryGetSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_GetIndividualID_ReturnValue) == 0x000090, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_GetIndividualID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_IsValid_ReturnValue_3) == 0x0000C0, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_GetItemId_ReturnValue) == 0x0000C4, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_GetItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x0000F0, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, K2Node_MakeStruct_PalMealLogDisplayData) == 0x0000F8, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::K2Node_MakeStruct_PalMealLogDisplayData' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem, CallFunc_IsValid_ReturnValue_4) == 0x000130, "Member 'BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.GetHumanAnime
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionPairBehavior_FeedItem_C_GetHumanAnime final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F86[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPairBehavior_FeedItem_C_GetHumanAnime) == 0x000008, "Wrong alignment on BP_ActionPairBehavior_FeedItem_C_GetHumanAnime");
static_assert(sizeof(BP_ActionPairBehavior_FeedItem_C_GetHumanAnime) == 0x000030, "Wrong size on BP_ActionPairBehavior_FeedItem_C_GetHumanAnime");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_GetHumanAnime, Montage) == 0x000000, "Member 'BP_ActionPairBehavior_FeedItem_C_GetHumanAnime::Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_GetHumanAnime, Temp_byte_Variable) == 0x000008, "Member 'BP_ActionPairBehavior_FeedItem_C_GetHumanAnime::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_GetHumanAnime, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionPairBehavior_FeedItem_C_GetHumanAnime::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_GetHumanAnime, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_ActionPairBehavior_FeedItem_C_GetHumanAnime::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_GetHumanAnime, CallFunc_Map_Find_Value) == 0x000020, "Member 'BP_ActionPairBehavior_FeedItem_C_GetHumanAnime::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_GetHumanAnime, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'BP_ActionPairBehavior_FeedItem_C_GetHumanAnime::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.OnCompleted
// 0x0010 (0x0010 - 0x0000)
struct BP_ActionPairBehavior_FeedItem_C_OnCompleted final
{
public:
	class AActor*                                 Human;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Monster;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionPairBehavior_FeedItem_C_OnCompleted) == 0x000008, "Wrong alignment on BP_ActionPairBehavior_FeedItem_C_OnCompleted");
static_assert(sizeof(BP_ActionPairBehavior_FeedItem_C_OnCompleted) == 0x000010, "Wrong size on BP_ActionPairBehavior_FeedItem_C_OnCompleted");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_OnCompleted, Human) == 0x000000, "Member 'BP_ActionPairBehavior_FeedItem_C_OnCompleted::Human' has a wrong offset!");
static_assert(offsetof(BP_ActionPairBehavior_FeedItem_C_OnCompleted, Monster) == 0x000008, "Member 'BP_ActionPairBehavior_FeedItem_C_OnCompleted::Monster' has a wrong offset!");

}

