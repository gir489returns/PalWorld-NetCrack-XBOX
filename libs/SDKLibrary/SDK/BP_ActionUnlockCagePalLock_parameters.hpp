#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionUnlockCagePalLock

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_ActionUnlockCagePalLock.BP_ActionUnlockCagePalLock_C.ExecuteUbergraph_BP_ActionUnlockCagePalLock
// 0x0068 (0x0068 - 0x0000)
struct BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FEF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FF0[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0038(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_1;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FF1[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ExecuteAction_ReturnValue;                // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock) == 0x000008, "Wrong alignment on BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock");
static_assert(sizeof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock) == 0x000068, "Wrong size on BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, EntryPoint) == 0x000000, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000018, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, K2Node_DynamicCast_AsPlayer_Controller) == 0x000020, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, CallFunc_GetController_ReturnValue_1) == 0x000030, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, Temp_delegate_Variable) == 0x000038, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, K2Node_DynamicCast_AsPlayer_Controller_1) == 0x000048, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::K2Node_DynamicCast_AsPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000058, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, CallFunc_PostEvent_ReturnValue) == 0x000060, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock, CallFunc_ExecuteAction_ReturnValue) == 0x000064, "Member 'BP_ActionUnlockCagePalLock_C_ExecuteUbergraph_BP_ActionUnlockCagePalLock::CallFunc_ExecuteAction_ReturnValue' has a wrong offset!");

// Function BP_ActionUnlockCagePalLock.BP_ActionUnlockCagePalLock_C.RotateToLockModel
// 0x0090 (0x0090 - 0x0000)
struct BP_ActionUnlockCagePalLock_C_RotateToLockModel final
{
public:
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionVelocity_ReturnValue;            // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUnlockCagePalLock_C_RotateToLockModel) == 0x000008, "Wrong alignment on BP_ActionUnlockCagePalLock_C_RotateToLockModel");
static_assert(sizeof(BP_ActionUnlockCagePalLock_C_RotateToLockModel) == 0x000090, "Wrong size on BP_ActionUnlockCagePalLock_C_RotateToLockModel");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_RotateToLockModel, CallFunc_GetActionCharacter_ReturnValue) == 0x000000, "Member 'BP_ActionUnlockCagePalLock_C_RotateToLockModel::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_RotateToLockModel, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000008, "Member 'BP_ActionUnlockCagePalLock_C_RotateToLockModel::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_RotateToLockModel, CallFunc_GetActionVelocity_ReturnValue) == 0x000010, "Member 'BP_ActionUnlockCagePalLock_C_RotateToLockModel::CallFunc_GetActionVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_RotateToLockModel, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'BP_ActionUnlockCagePalLock_C_RotateToLockModel::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_RotateToLockModel, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000040, "Member 'BP_ActionUnlockCagePalLock_C_RotateToLockModel::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_RotateToLockModel, CallFunc_Vector_Normal2D_ReturnValue) == 0x000058, "Member 'BP_ActionUnlockCagePalLock_C_RotateToLockModel::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_RotateToLockModel, CallFunc_MakeRotFromX_ReturnValue) == 0x000070, "Member 'BP_ActionUnlockCagePalLock_C_RotateToLockModel::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUnlockCagePalLock_C_RotateToLockModel, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000088, "Member 'BP_ActionUnlockCagePalLock_C_RotateToLockModel::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

}

