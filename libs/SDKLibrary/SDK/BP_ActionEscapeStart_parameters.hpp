#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionEscapeStart

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ActionEscapeStart.BP_ActionEscapeStart_C.ExecuteUbergraph_BP_ActionEscapeStart
// 0x0018 (0x0018 - 0x0000)
struct BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_405D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart) == 0x000008, "Wrong alignment on BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart");
static_assert(sizeof(BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart) == 0x000018, "Wrong size on BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart");
static_assert(offsetof(BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart, EntryPoint) == 0x000000, "Member 'BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000008, "Member 'BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");

}

