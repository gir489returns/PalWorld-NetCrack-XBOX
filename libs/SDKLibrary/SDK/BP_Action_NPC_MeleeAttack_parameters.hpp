#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_NPC_MeleeAttack

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.ExecuteUbergraph_BP_Action_NPC_MeleeAttack
// 0x00B0 (0x00B0 - 0x0000)
struct BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C64[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C65[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetGeneralPurposeIndex_ReturnValue;       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack) == 0x000008, "Wrong alignment on BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack) == 0x0000B0, "Wrong size on BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, EntryPoint) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, K2Node_CustomEvent_NotifyName_4) == 0x000004, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, K2Node_CustomEvent_NotifyName_3) == 0x00001C, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, K2Node_CustomEvent_NotifyName_2) == 0x000034, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, K2Node_CustomEvent_NotifyName_1) == 0x00004C, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, K2Node_CustomEvent_NotifyName) == 0x000064, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, K2Node_CreateDelegate_OutputDelegate_4) == 0x00006C, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, Temp_name_Variable) == 0x00007C, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, CallFunc_GetActionCharacter_ReturnValue) == 0x000088, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, CallFunc_GetMainMesh_ReturnValue) == 0x000090, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000098, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, CallFunc_GetGeneralPurposeIndex_ReturnValue) == 0x0000A4, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::CallFunc_GetGeneralPurposeIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'BP_Action_NPC_MeleeAttack_C_ExecuteUbergraph_BP_Action_NPC_MeleeAttack::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.OnBlendOut_B1694066412380A7CADF2F9E8FC00237
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttack_C_OnBlendOut_B1694066412380A7CADF2F9E8FC00237 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_C_OnBlendOut_B1694066412380A7CADF2F9E8FC00237) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttack_C_OnBlendOut_B1694066412380A7CADF2F9E8FC00237");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_C_OnBlendOut_B1694066412380A7CADF2F9E8FC00237) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttack_C_OnBlendOut_B1694066412380A7CADF2F9E8FC00237");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_OnBlendOut_B1694066412380A7CADF2F9E8FC00237, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_C_OnBlendOut_B1694066412380A7CADF2F9E8FC00237::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.OnCompleted_B1694066412380A7CADF2F9E8FC00237
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttack_C_OnCompleted_B1694066412380A7CADF2F9E8FC00237 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_C_OnCompleted_B1694066412380A7CADF2F9E8FC00237) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttack_C_OnCompleted_B1694066412380A7CADF2F9E8FC00237");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_C_OnCompleted_B1694066412380A7CADF2F9E8FC00237) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttack_C_OnCompleted_B1694066412380A7CADF2F9E8FC00237");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_OnCompleted_B1694066412380A7CADF2F9E8FC00237, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_C_OnCompleted_B1694066412380A7CADF2F9E8FC00237::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.OnInterrupted_B1694066412380A7CADF2F9E8FC00237
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttack_C_OnInterrupted_B1694066412380A7CADF2F9E8FC00237 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_C_OnInterrupted_B1694066412380A7CADF2F9E8FC00237) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttack_C_OnInterrupted_B1694066412380A7CADF2F9E8FC00237");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_C_OnInterrupted_B1694066412380A7CADF2F9E8FC00237) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttack_C_OnInterrupted_B1694066412380A7CADF2F9E8FC00237");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_OnInterrupted_B1694066412380A7CADF2F9E8FC00237, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_C_OnInterrupted_B1694066412380A7CADF2F9E8FC00237::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttack_C_OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_C_OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttack_C_OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_C_OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttack_C_OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_C_OnNotifyBegin_B1694066412380A7CADF2F9E8FC00237::NotifyName' has a wrong offset!");

// Function BP_Action_NPC_MeleeAttack.BP_Action_NPC_MeleeAttack_C.OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_NPC_MeleeAttack_C_OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_NPC_MeleeAttack_C_OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237) == 0x000004, "Wrong alignment on BP_Action_NPC_MeleeAttack_C_OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237");
static_assert(sizeof(BP_Action_NPC_MeleeAttack_C_OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237) == 0x000008, "Wrong size on BP_Action_NPC_MeleeAttack_C_OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237");
static_assert(offsetof(BP_Action_NPC_MeleeAttack_C_OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237, NotifyName) == 0x000000, "Member 'BP_Action_NPC_MeleeAttack_C_OnNotifyEnd_B1694066412380A7CADF2F9E8FC00237::NotifyName' has a wrong offset!");

}

