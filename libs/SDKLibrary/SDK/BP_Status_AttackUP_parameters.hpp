#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_AttackUP

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Status_AttackUP.BP_Status_AttackUP_C.ExecuteUbergraph_BP_Status_AttackUP
// 0x0070 (0x0070 - 0x0000)
struct BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP) == 0x000008, "Wrong alignment on BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP");
static_assert(sizeof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP) == 0x000070, "Wrong size on BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, EntryPoint) == 0x000000, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, Temp_object_Variable) == 0x000010, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, K2Node_DynamicCast_AsNiagara_System) == 0x000018, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::K2Node_DynamicCast_AsNiagara_System' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000030, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000048, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, CallFunc_GetOwner_ReturnValue_1) == 0x000050, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, CallFunc_GetComponentByClass_ReturnValue) == 0x000058, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, CallFunc_GetOwner_ReturnValue_2) == 0x000060, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000068, "Member 'BP_Status_AttackUP_C_ExecuteUbergraph_BP_Status_AttackUP::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");

// Function BP_Status_AttackUP.BP_Status_AttackUP_C.OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0
// 0x0008 (0x0008 - 0x0000)
struct BP_Status_AttackUP_C_OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_AttackUP_C_OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0) == 0x000008, "Wrong alignment on BP_Status_AttackUP_C_OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0");
static_assert(sizeof(BP_Status_AttackUP_C_OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0) == 0x000008, "Wrong size on BP_Status_AttackUP_C_OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0");
static_assert(offsetof(BP_Status_AttackUP_C_OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0, Loaded) == 0x000000, "Member 'BP_Status_AttackUP_C_OnLoaded_FD22363D4A5A9DE9CE4C0BABF4CAA7C0::Loaded' has a wrong offset!");

}

