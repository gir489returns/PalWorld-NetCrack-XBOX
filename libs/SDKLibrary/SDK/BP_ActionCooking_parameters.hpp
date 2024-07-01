#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionCooking

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionCooking.BP_ActionCooking_C.ExecuteUbergraph_BP_ActionCooking
// 0x00B0 (0x00B0 - 0x0000)
struct BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4193[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4194[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_CookingFryingPan_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking) == 0x000010, "Wrong alignment on BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking");
static_assert(sizeof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking) == 0x0000B0, "Wrong size on BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking");
static_assert(offsetof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking, EntryPoint) == 0x000000, "Member 'BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking, CallFunc_GetActionCharacter_ReturnValue) == 0x000078, "Member 'BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000080, "Member 'BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000088, "Member 'BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking, CallFunc_GetMainMesh_ReturnValue) == 0x000090, "Member 'BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking, CallFunc_FinishSpawningActor_ReturnValue) == 0x000098, "Member 'BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking, K2Node_DynamicCast_AsPal_Player_Character) == 0x0000A0, "Member 'BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

