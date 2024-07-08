#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Freeze

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Status_Freeze.BP_Status_Freeze_C.ExecuteUbergraph_BP_Status_Freeze
// 0x01E8 (0x01E8 - 0x0000)
struct BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIgnoreElement_Ignore;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalAIActionComponent*                  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0038(0x0050)(NoDestructor)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBodyTemperatureComponent*           CallFunc_GetComponentByClass_ReturnValue_2;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalBodyTemperatureComponent*           CallFunc_GetComponentByClass_ReturnValue_3;        // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;                   // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_5;                   // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue_4;        // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00F8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRiding_ReturnValue;                     // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x01E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze) == 0x000008, "Wrong alignment on BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze");
static_assert(sizeof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze) == 0x0001E8, "Wrong size on BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, EntryPoint) == 0x000000, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_IsIgnoreElement_Ignore) == 0x000004, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_IsIgnoreElement_Ignore' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetOwner_ReturnValue_1) == 0x000010, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetController_ReturnValue) == 0x000018, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000030, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000038, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_SetActionClassParameter_ReturnValue) == 0x000088, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetOwner_ReturnValue_2) == 0x000098, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetOwner_ReturnValue_3) == 0x0000A0, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetComponentByClass_ReturnValue_2) == 0x0000A8, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetComponentByClass_ReturnValue_3) == 0x0000B0, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_IsValid_ReturnValue_2) == 0x0000B8, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_IsValid_ReturnValue_3) == 0x0000B9, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetOwner_ReturnValue_4) == 0x0000C0, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, K2Node_Event_DeltaTime) == 0x0000C8, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000D0, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetOwner_ReturnValue_5) == 0x0000E8, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetOwner_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_GetComponentByClass_ReturnValue_4) == 0x0000F0, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_GetComponentByClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000F8, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0001E0, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_IsValid_ReturnValue_4) == 0x0001E1, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_IsRiding_ReturnValue) == 0x0001E2, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_IsRiding_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze, CallFunc_IsServer_ReturnValue) == 0x0001E3, "Member 'BP_Status_Freeze_C_ExecuteUbergraph_BP_Status_Freeze::CallFunc_IsServer_ReturnValue' has a wrong offset!");

// Function BP_Status_Freeze.BP_Status_Freeze_C.SetFlag
// 0x0058 (0x0058 - 0x0000)
struct BP_Status_Freeze_C_SetFlag final
{
public:
	bool                                          IsFreeze;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalShooterComponent*                   Shooter;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         Movement;                                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Freeze_C_SetFlag) == 0x000008, "Wrong alignment on BP_Status_Freeze_C_SetFlag");
static_assert(sizeof(BP_Status_Freeze_C_SetFlag) == 0x000058, "Wrong size on BP_Status_Freeze_C_SetFlag");
static_assert(offsetof(BP_Status_Freeze_C_SetFlag, IsFreeze) == 0x000000, "Member 'BP_Status_Freeze_C_SetFlag::IsFreeze' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_SetFlag, Shooter) == 0x000008, "Member 'BP_Status_Freeze_C_SetFlag::Shooter' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_SetFlag, Movement) == 0x000010, "Member 'BP_Status_Freeze_C_SetFlag::Movement' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_SetFlag, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_Status_Freeze_C_SetFlag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_SetFlag, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_Status_Freeze_C_SetFlag::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_SetFlag, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_Status_Freeze_C_SetFlag::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_SetFlag, CallFunc_GetOwner_ReturnValue_1) == 0x000030, "Member 'BP_Status_Freeze_C_SetFlag::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_SetFlag, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000038, "Member 'BP_Status_Freeze_C_SetFlag::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_SetFlag, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'BP_Status_Freeze_C_SetFlag::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_SetFlag, CallFunc_GetOwner_ReturnValue_2) == 0x000048, "Member 'BP_Status_Freeze_C_SetFlag::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Status_Freeze_C_SetFlag, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000050, "Member 'BP_Status_Freeze_C_SetFlag::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");

// Function BP_Status_Freeze.BP_Status_Freeze_C.TickStatus
// 0x0004 (0x0004 - 0x0000)
struct BP_Status_Freeze_C_TickStatus final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Status_Freeze_C_TickStatus) == 0x000004, "Wrong alignment on BP_Status_Freeze_C_TickStatus");
static_assert(sizeof(BP_Status_Freeze_C_TickStatus) == 0x000004, "Wrong size on BP_Status_Freeze_C_TickStatus");
static_assert(offsetof(BP_Status_Freeze_C_TickStatus, DeltaTime) == 0x000000, "Member 'BP_Status_Freeze_C_TickStatus::DeltaTime' has a wrong offset!");

}

