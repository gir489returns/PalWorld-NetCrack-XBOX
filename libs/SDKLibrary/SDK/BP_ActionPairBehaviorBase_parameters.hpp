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

// 0x39 (0x39 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.Is Valid Target
struct UBP_ActionPairBehaviorBase_C_Is_Valid_Target_Params
{
public:
	bool                                         IsValid;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_153[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetActionTarget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_DynamicCast_AsPal_Character;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_154[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue;           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetActiveActorFlag_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_155[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_1;            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.SpawnNiagara
struct UBP_ActionPairBehaviorBase_C_SpawnNiagara_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Object;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        K2Node_DynamicCast_AsNiagara_System;               // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_157[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnCompleted
struct UBP_ActionPairBehaviorBase_C_OnCompleted_Params
{
public:
	class AActor*                                Human;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Monster;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.RemovePalMoveing
struct UBP_ActionPairBehaviorBase_C_RemovePalMoveing_Params
{
public:
	class AActor*                                CallFunc_GetActionTarget_ReturnValue;              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x38(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.GetHumanAnime
struct UBP_ActionPairBehaviorBase_C_GetHumanAnime_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.StartPettingCamera
struct UBP_ActionPairBehaviorBase_C_StartPettingCamera_Params
{
public:
	class AActor*                                CallFunc_GetActionTarget_ReturnValue;              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue;           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PettingCamera_C*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller;            // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnNotifyEnd_AFFE27B5471DDCA5938711B5A98C1BAC
struct UBP_ActionPairBehaviorBase_C_OnNotifyEnd_AFFE27B5471DDCA5938711B5A98C1BAC_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnNotifyBegin_AFFE27B5471DDCA5938711B5A98C1BAC
struct UBP_ActionPairBehaviorBase_C_OnNotifyBegin_AFFE27B5471DDCA5938711B5A98C1BAC_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnInterrupted_AFFE27B5471DDCA5938711B5A98C1BAC
struct UBP_ActionPairBehaviorBase_C_OnInterrupted_AFFE27B5471DDCA5938711B5A98C1BAC_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnBlendOut_AFFE27B5471DDCA5938711B5A98C1BAC
struct UBP_ActionPairBehaviorBase_C_OnBlendOut_AFFE27B5471DDCA5938711B5A98C1BAC_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnCompleted_AFFE27B5471DDCA5938711B5A98C1BAC
struct UBP_ActionPairBehaviorBase_C_OnCompleted_AFFE27B5471DDCA5938711B5A98C1BAC_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnNotifyEnd_195B11E24A68AB1C346EBCB5275B82C9
struct UBP_ActionPairBehaviorBase_C_OnNotifyEnd_195B11E24A68AB1C346EBCB5275B82C9_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnNotifyBegin_195B11E24A68AB1C346EBCB5275B82C9
struct UBP_ActionPairBehaviorBase_C_OnNotifyBegin_195B11E24A68AB1C346EBCB5275B82C9_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnInterrupted_195B11E24A68AB1C346EBCB5275B82C9
struct UBP_ActionPairBehaviorBase_C_OnInterrupted_195B11E24A68AB1C346EBCB5275B82C9_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnBlendOut_195B11E24A68AB1C346EBCB5275B82C9
struct UBP_ActionPairBehaviorBase_C_OnBlendOut_195B11E24A68AB1C346EBCB5275B82C9_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnCompleted_195B11E24A68AB1C346EBCB5275B82C9
struct UBP_ActionPairBehaviorBase_C_OnCompleted_195B11E24A68AB1C346EBCB5275B82C9_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnLoaded_E1928592499A4EC8EA38C6BCC85A61EE
struct UBP_ActionPairBehaviorBase_C_OnLoaded_E1928592499A4EC8EA38C6BCC85A61EE_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnNotifyEnd_00F343BB4B6F993C5A65D28008648678
struct UBP_ActionPairBehaviorBase_C_OnNotifyEnd_00F343BB4B6F993C5A65D28008648678_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnNotifyBegin_00F343BB4B6F993C5A65D28008648678
struct UBP_ActionPairBehaviorBase_C_OnNotifyBegin_00F343BB4B6F993C5A65D28008648678_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnInterrupted_00F343BB4B6F993C5A65D28008648678
struct UBP_ActionPairBehaviorBase_C_OnInterrupted_00F343BB4B6F993C5A65D28008648678_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnBlendOut_00F343BB4B6F993C5A65D28008648678
struct UBP_ActionPairBehaviorBase_C_OnBlendOut_00F343BB4B6F993C5A65D28008648678_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.OnCompleted_00F343BB4B6F993C5A65D28008648678
struct UBP_ActionPairBehaviorBase_C_OnCompleted_00F343BB4B6F993C5A65D28008648678_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.TickAction
struct UBP_ActionPairBehaviorBase_C_TickAction_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA80 (0xA80 - 0x0)
// Function BP_ActionPairBehaviorBase.BP_ActionPairBehaviorBase_C.ExecuteUbergraph_BP_ActionPairBehaviorBase
struct UBP_ActionPairBehaviorBase_C_ExecuteUbergraph_BP_ActionPairBehaviorBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_11;                  // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_10;                  // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_9;                   // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_8;                   // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x4C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_7;                   // 0x5C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x64(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_6;                   // 0x74(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x7C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_5;                   // 0x8C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x94(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0xA4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalActionType                    Temp_byte_Variable;                                // 0xC0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xC4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_4;                   // 0xD4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_3;                   // 0xDC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0xE4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_2;                   // 0xF4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xFC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_1;                   // 0x10C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x114(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName;                     // 0x124(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x12C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x13C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalActionType                    Temp_byte_Variable_1;                              // 0x144(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x148(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTime;                            // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x15C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue;           // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue;              // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_1;         // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_12;                  // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_2;         // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x1B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x1C0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x1D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue;           // 0x1E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_3;         // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_4;         // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x210(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_1;            // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x230(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x290(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x2A8(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x398(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_5;         // 0x3B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_2;            // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*             CallFunc_GetMainMesh_ReturnValue;                  // 0x3C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1;        // 0x3C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_DynamicCast_AsPal_Character;                // 0x3D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalSkeletalMeshComponent*             CallFunc_GetMainMesh_ReturnValue_1;                // 0x3E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_6;         // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_7;         // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*        CallFunc_GetComponentByClass_ReturnValue_2;        // 0x3F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*        CallFunc_GetComponentByClass_ReturnValue_3;        // 0x400(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_3;            // 0x408(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     CallFunc_GetComponentByClass_ReturnValue_4;        // 0x420(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x430(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue_1;         // 0x448(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x460(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetUpVector_ReturnValue;                  // 0x478(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x490(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x4A8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_8;         // 0x4B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_4;            // 0x4C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                   CallFunc_GetComponentByClass_ReturnValue_5;        // 0x4C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_5;            // 0x4D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                   CallFunc_GetComponentByClass_ReturnValue_6;        // 0x4D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_6;            // 0x4E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_9;         // 0x4E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                   CallFunc_GetComponentByClass_ReturnValue_7;        // 0x4F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                  CallFunc_GetComponentByClass_ReturnValue_8;        // 0x4F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_10;        // 0x500(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_7;            // 0x508(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                  CallFunc_GetComponentByClass_ReturnValue_9;        // 0x510(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                   CallFunc_GetComponentByClass_ReturnValue_10;       // 0x518(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_8;            // 0x520(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_9;            // 0x528(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                   CallFunc_GetComponentByClass_ReturnValue_11;       // 0x530(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_DynamicCast_AsPal_Character_1;              // 0x538(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_12;       // 0x548(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_10;           // 0x550(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_11;           // 0x558(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_DynamicCast_AsPal_Character_2;              // 0x560(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetActiveActorFlag_ReturnValue;           // 0x569(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_12;           // 0x570(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*             CallFunc_GetComponentByClass_ReturnValue_13;       // 0x578(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_14;       // 0x588(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_13;           // 0x590(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x598(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_11;        // 0x5B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x5B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x5D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_SpawnNiagara_ReturnValue;                 // 0x5D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller;            // 0x5E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_12;        // 0x5F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x5F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller_1;          // 0x600(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_GetHumanAnime_Montage;                    // 0x610(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_GetHumanAnime_Montage_1;                  // 0x618(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x620(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x630(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPettingPresset*                    CallFunc_GetPettingPreset_ReturnValue;             // 0x638(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDistance_ReturnValue;                  // 0x640(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue_2;         // 0x648(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x660(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue;                        // 0x678(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x690(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x6A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x6C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x6E0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult_1;    // 0x740(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue_1;       // 0x828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_13;                  // 0x82C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x834(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x848(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Vector_Normal2D_ReturnValue;              // 0x860(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_14;           // 0x878(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetMainMeshByActor_ReturnValue;           // 0x888(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_15;       // 0x898(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x8A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_Map_Find_Value;                           // 0x8A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x8B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_15;           // 0x8B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_16;           // 0x8C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_DynamicCast_AsPal_Character_3;              // 0x8C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x8D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_16;       // 0x8D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_17;       // 0x8E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_FloatToVector_ReturnValue_3;         // 0x8E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_Map_Find_Value_1;                         // 0x900(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x908(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x910(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x928(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_17;           // 0x940(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_18;       // 0x948(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1; // 0x950(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_18;           // 0x960(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_19;       // 0x968(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_13;        // 0x970(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x978(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x981(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller;        // 0x988(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_14;        // 0x998(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_3;              // 0x9A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x9A8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x9B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller_1;      // 0x9C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_19;           // 0x9D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalFacialComponent*                   CallFunc_GetComponentByClass_ReturnValue_20;       // 0x9D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_Map_Find_Value_2;                         // 0x9E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x9E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2; // 0x9F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ExistEyeNotifyInMontage_ReturnValue;      // 0x9F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x9F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_Map_Find_Value_3;                         // 0xA00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0xA08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalActionBase*                        CallFunc_PlayActionByType_ReturnValue;             // 0xA10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_20;           // 0xA18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_15;        // 0xA20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xA28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_14;                  // 0xA2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_21;           // 0xA38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetActionTarget_ReturnValue_22;           // 0xA40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Valid_Target_IsValid;                  // 0xA48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Valid_Target_IsValid_1;                // 0xA49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D6[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_tempDeltaTime_ImplicitCast;     // 0xA50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0xA58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0xA60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0xA64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RLerp_Alpha_ImplicitCast;                 // 0xA68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0xA6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast; // 0xA70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0xA78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


