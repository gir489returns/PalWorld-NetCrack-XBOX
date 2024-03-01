#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.OnCompleted
struct UBP_ActionPairBehavior_FeedItem_C_OnCompleted_Params
{
public:
	class AActor*                                Human;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Monster;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.GetHumanAnime
struct UBP_ActionPairBehavior_FeedItem_C_GetHumanAnime_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalGeneralMontageType            Temp_byte_Variable;                                // 0x8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalGeneralMontageType            Temp_byte_Variable_1;                              // 0x9(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalGeneralMontageType            Temp_byte_Variable_2;                              // 0xA(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalGeneralMontageType            Temp_byte_Variable_3;                              // 0xB(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1;        // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_Map_Find_Value;                           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AFC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_Map_Find_Value_1;                         // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_Map_Find_Value_2;                         // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_Map_Find_Value_3;                         // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x131 (0x131 - 0x0)
// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.ExecuteUbergraph_BP_ActionPairBehavior_FeedItem
struct UBP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemContainerManager*              CallFunc_GetItemContainerManager_ReturnValue;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue;           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalControlActor_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B1E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterHandle*         CallFunc_GetIndividualCharacterHandleByActor_ReturnValue; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalNetArchive                        CallFunc_GetBlackboard_ReturnValue;                // 0x38(0x10)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemSlotId                        CallFunc_ReadPlayerFeedItemTo_ItemSlotId;          // 0x4C(0x14)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ReadPlayerFeedItemTo_ItemNum;             // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalItemSlotIdAndNum                  K2Node_MakeStruct_PalItemSlotIdAndNum;             // 0x64(0x18)(NoDestructor)
	uint8                                        Pad_2B21[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemSlot*                          CallFunc_TryGetSlot_Slot;                          // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetSlot_ReturnValue;                   // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalInstanceID                        CallFunc_GetIndividualID_ReturnValue;              // 0x90(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0xC4(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterParameter*      CallFunc_TryGetIndividualParameter_ReturnValue;    // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalMealLogDisplayData                K2Node_MakeStruct_PalMealLogDisplayData;           // 0xF8(0x38)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


