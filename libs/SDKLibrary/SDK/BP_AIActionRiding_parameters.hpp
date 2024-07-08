#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionRiding

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AIActionRiding.BP_AIActionRiding_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIActionRiding_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRiding_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIActionRiding_C_ActionStart");
static_assert(sizeof(BP_AIActionRiding_C_ActionStart) == 0x000008, "Wrong size on BP_AIActionRiding_C_ActionStart");
static_assert(offsetof(BP_AIActionRiding_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIActionRiding_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIActionRiding.BP_AIActionRiding_C.ExecuteUbergraph_BP_AIActionRiding
// 0x0040 (0x0040 - 0x0000)
struct BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOff_ReturnValue;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRideMarkerComponent*                CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Ride_ReturnValue;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding) == 0x000008, "Wrong alignment on BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding");
static_assert(sizeof(BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding) == 0x000040, "Wrong size on BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding");
static_assert(offsetof(BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding, EntryPoint) == 0x000000, "Member 'BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding, K2Node_Event_ControlledPawn) == 0x000008, "Member 'BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding, CallFunc_GetOff_ReturnValue) == 0x000018, "Member 'BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding::CallFunc_GetOff_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000020, "Member 'BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000030, "Member 'BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding, CallFunc_Ride_ReturnValue) == 0x000038, "Member 'BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding::CallFunc_Ride_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'BP_AIActionRiding_C_ExecuteUbergraph_BP_AIActionRiding::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_AIActionRiding.BP_AIActionRiding_C.SetRidingCharacter
// 0x0008 (0x0008 - 0x0000)
struct BP_AIActionRiding_C_SetRidingCharacter final
{
public:
	class APalCharacter*                          Param_RidingCharacter;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionRiding_C_SetRidingCharacter) == 0x000008, "Wrong alignment on BP_AIActionRiding_C_SetRidingCharacter");
static_assert(sizeof(BP_AIActionRiding_C_SetRidingCharacter) == 0x000008, "Wrong size on BP_AIActionRiding_C_SetRidingCharacter");
static_assert(offsetof(BP_AIActionRiding_C_SetRidingCharacter, Param_RidingCharacter) == 0x000000, "Member 'BP_AIActionRiding_C_SetRidingCharacter::Param_RidingCharacter' has a wrong offset!");

}

