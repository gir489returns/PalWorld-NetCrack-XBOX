#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalAIBlackboard_Common

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_PalAIBlackboard_Common.BP_PalAIBlackboard_Common_C.ExecuteUbergraph_BP_PalAIBlackboard_Common
// 0x0004 (0x0004 - 0x0000)
struct BP_PalAIBlackboard_Common_C_ExecuteUbergraph_BP_PalAIBlackboard_Common final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAIBlackboard_Common_C_ExecuteUbergraph_BP_PalAIBlackboard_Common) == 0x000004, "Wrong alignment on BP_PalAIBlackboard_Common_C_ExecuteUbergraph_BP_PalAIBlackboard_Common");
static_assert(sizeof(BP_PalAIBlackboard_Common_C_ExecuteUbergraph_BP_PalAIBlackboard_Common) == 0x000004, "Wrong size on BP_PalAIBlackboard_Common_C_ExecuteUbergraph_BP_PalAIBlackboard_Common");
static_assert(offsetof(BP_PalAIBlackboard_Common_C_ExecuteUbergraph_BP_PalAIBlackboard_Common, EntryPoint) == 0x000000, "Member 'BP_PalAIBlackboard_Common_C_ExecuteUbergraph_BP_PalAIBlackboard_Common::EntryPoint' has a wrong offset!");

// Function BP_PalAIBlackboard_Common.BP_PalAIBlackboard_Common_C.Initialize_PalBB
// 0x0020 (0x0020 - 0x0000)
struct BP_PalAIBlackboard_Common_C_Initialize_PalBB final
{
public:
	class AActor*                                 SelfActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalAIBlackboard_Common_C_Initialize_PalBB) == 0x000008, "Wrong alignment on BP_PalAIBlackboard_Common_C_Initialize_PalBB");
static_assert(sizeof(BP_PalAIBlackboard_Common_C_Initialize_PalBB) == 0x000020, "Wrong size on BP_PalAIBlackboard_Common_C_Initialize_PalBB");
static_assert(offsetof(BP_PalAIBlackboard_Common_C_Initialize_PalBB, SelfActor) == 0x000000, "Member 'BP_PalAIBlackboard_Common_C_Initialize_PalBB::SelfActor' has a wrong offset!");
static_assert(offsetof(BP_PalAIBlackboard_Common_C_Initialize_PalBB, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_PalAIBlackboard_Common_C_Initialize_PalBB::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

}

