#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalActionTransportItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PalActionTransportItem.BP_PalActionTransportItem_C.ExecuteUbergraph_BP_PalActionTransportItem
// 0x01D0 (0x01D0 - 0x0000)
struct BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_242E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ReadBlackboard_StaticItemId;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_242F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2430[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x00D8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem) == 0x000010, "Wrong alignment on BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem");
static_assert(sizeof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem) == 0x0001D0, "Wrong size on BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, EntryPoint) == 0x000000, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, CallFunc_ReadBlackboard_StaticItemId) == 0x000008, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::CallFunc_ReadBlackboard_StaticItemId' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, K2Node_Event_DeltaTime) == 0x000010, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, CallFunc_GetActionCharacter_ReturnValue) == 0x000018, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, CallFunc_IsDedicatedServer_ReturnValue) == 0x000020, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, CallFunc_GetMainMesh_ReturnValue) == 0x000028, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, CallFunc_GetSocketTransform_ReturnValue) == 0x000030, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, CallFunc_BreakTransform_Location) == 0x000090, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, CallFunc_BreakTransform_Rotation) == 0x0000A8, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, CallFunc_BreakTransform_Scale) == 0x0000C0, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x0000D8, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x0001C0, "Member 'BP_PalActionTransportItem_C_ExecuteUbergraph_BP_PalActionTransportItem::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");

// Function BP_PalActionTransportItem.BP_PalActionTransportItem_C.FindMontage
// 0x0030 (0x0030 - 0x0000)
struct BP_PalActionTransportItem_C_FindMontage final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2431[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMontange_bExist;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2432[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_FindMontange_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalActionTransportItem_C_FindMontage) == 0x000008, "Wrong alignment on BP_PalActionTransportItem_C_FindMontage");
static_assert(sizeof(BP_PalActionTransportItem_C_FindMontage) == 0x000030, "Wrong size on BP_PalActionTransportItem_C_FindMontage");
static_assert(offsetof(BP_PalActionTransportItem_C_FindMontage, Montage) == 0x000000, "Member 'BP_PalActionTransportItem_C_FindMontage::Montage' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_FindMontage, Exist) == 0x000008, "Member 'BP_PalActionTransportItem_C_FindMontage::Exist' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_FindMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_PalActionTransportItem_C_FindMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_FindMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_PalActionTransportItem_C_FindMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_FindMontage, CallFunc_FindMontange_bExist) == 0x000020, "Member 'BP_PalActionTransportItem_C_FindMontage::CallFunc_FindMontange_bExist' has a wrong offset!");
static_assert(offsetof(BP_PalActionTransportItem_C_FindMontage, CallFunc_FindMontange_ReturnValue) == 0x000028, "Member 'BP_PalActionTransportItem_C_FindMontage::CallFunc_FindMontange_ReturnValue' has a wrong offset!");

// Function BP_PalActionTransportItem.BP_PalActionTransportItem_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_PalActionTransportItem_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalActionTransportItem_C_TickAction) == 0x000004, "Wrong alignment on BP_PalActionTransportItem_C_TickAction");
static_assert(sizeof(BP_PalActionTransportItem_C_TickAction) == 0x000004, "Wrong size on BP_PalActionTransportItem_C_TickAction");
static_assert(offsetof(BP_PalActionTransportItem_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_PalActionTransportItem_C_TickAction::DeltaTime' has a wrong offset!");

}

