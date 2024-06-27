#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CapturePrismBullet

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CapturePrismBullet.BP_CapturePrismBullet_C.BndEvt__BP_CapturePrismBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// 0x0100 (0x0100 - 0x0000)
struct BP_CapturePrismBullet_C_BndEvt__BP_CapturePrismBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature final
{
public:
	struct FHitResult                             ImpactResult;                                      // 0x0000(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                ImpactVelocity;                                    // 0x00E8(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrismBullet_C_BndEvt__BP_CapturePrismBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_CapturePrismBullet_C_BndEvt__BP_CapturePrismBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");
static_assert(sizeof(BP_CapturePrismBullet_C_BndEvt__BP_CapturePrismBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature) == 0x000100, "Wrong size on BP_CapturePrismBullet_C_BndEvt__BP_CapturePrismBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");
static_assert(offsetof(BP_CapturePrismBullet_C_BndEvt__BP_CapturePrismBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature, ImpactResult) == 0x000000, "Member 'BP_CapturePrismBullet_C_BndEvt__BP_CapturePrismBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature::ImpactResult' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_BndEvt__BP_CapturePrismBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature, ImpactVelocity) == 0x0000E8, "Member 'BP_CapturePrismBullet_C_BndEvt__BP_CapturePrismBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature::ImpactVelocity' has a wrong offset!");

// Function BP_CapturePrismBullet.BP_CapturePrismBullet_C.ExecuteUbergraph_BP_CapturePrismBullet
// 0x02C0 (0x02C0 - 0x0000)
struct BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42A9[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGuid& SpawnGUID, class AActor* SpawnActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_SpawnActorBroadcast_SpawnGuid;            // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SpawnActorBroadcast_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42AA[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_HitComp;                              // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x00B8(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42AB[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_ImpactResult;           // 0x01B0(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                K2Node_ComponentBoundEvent_ImpactVelocity;         // 0x0298(0x0018)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateRotation_DeltaTime_ImplicitCast;    // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet) == 0x000010, "Wrong alignment on BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet");
static_assert(sizeof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet) == 0x0002C0, "Wrong size on BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, EntryPoint) == 0x000000, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000070, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, CallFunc_SpawnActorBroadcast_SpawnGuid) == 0x000088, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::CallFunc_SpawnActorBroadcast_SpawnGuid' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, CallFunc_SpawnActorBroadcast_ReturnValue) == 0x000098, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::CallFunc_SpawnActorBroadcast_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, CallFunc_IsValid_ReturnValue) == 0x000099, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, K2Node_Event_HitComp) == 0x0000A0, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::K2Node_Event_HitComp' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, K2Node_Event_OtherActor) == 0x0000A8, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, K2Node_Event_OtherComp) == 0x0000B0, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, K2Node_Event_Hit) == 0x0000B8, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, K2Node_DynamicCast_AsPal_Character) == 0x0001A0, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, K2Node_DynamicCast_bSuccess) == 0x0001A8, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, K2Node_Event_DeltaSeconds) == 0x0001AC, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, K2Node_ComponentBoundEvent_ImpactResult) == 0x0001B0, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::K2Node_ComponentBoundEvent_ImpactResult' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, K2Node_ComponentBoundEvent_ImpactVelocity) == 0x000298, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::K2Node_ComponentBoundEvent_ImpactVelocity' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet, CallFunc_UpdateRotation_DeltaTime_ImplicitCast) == 0x0002B0, "Member 'BP_CapturePrismBullet_C_ExecuteUbergraph_BP_CapturePrismBullet::CallFunc_UpdateRotation_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_CapturePrismBullet.BP_CapturePrismBullet_C.IsDestroy
// 0x0108 (0x0108 - 0x0000)
struct BP_CapturePrismBullet_C_IsDestroy final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherCharacter;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x0100(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrismBullet_C_IsDestroy) == 0x000008, "Wrong alignment on BP_CapturePrismBullet_C_IsDestroy");
static_assert(sizeof(BP_CapturePrismBullet_C_IsDestroy) == 0x000108, "Wrong size on BP_CapturePrismBullet_C_IsDestroy");
static_assert(offsetof(BP_CapturePrismBullet_C_IsDestroy, HitComp) == 0x000000, "Member 'BP_CapturePrismBullet_C_IsDestroy::HitComp' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_IsDestroy, OtherCharacter) == 0x000008, "Member 'BP_CapturePrismBullet_C_IsDestroy::OtherCharacter' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_IsDestroy, OtherComp) == 0x000010, "Member 'BP_CapturePrismBullet_C_IsDestroy::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_IsDestroy, Hit) == 0x000018, "Member 'BP_CapturePrismBullet_C_IsDestroy::Hit' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_IsDestroy, ReturnValue) == 0x000100, "Member 'BP_CapturePrismBullet_C_IsDestroy::ReturnValue' has a wrong offset!");

// Function BP_CapturePrismBullet.BP_CapturePrismBullet_C.OnHitToActor
// 0x0100 (0x0100 - 0x0000)
struct BP_CapturePrismBullet_C_OnHitToActor final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_CapturePrismBullet_C_OnHitToActor) == 0x000008, "Wrong alignment on BP_CapturePrismBullet_C_OnHitToActor");
static_assert(sizeof(BP_CapturePrismBullet_C_OnHitToActor) == 0x000100, "Wrong size on BP_CapturePrismBullet_C_OnHitToActor");
static_assert(offsetof(BP_CapturePrismBullet_C_OnHitToActor, HitComp) == 0x000000, "Member 'BP_CapturePrismBullet_C_OnHitToActor::HitComp' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_OnHitToActor, OtherActor) == 0x000008, "Member 'BP_CapturePrismBullet_C_OnHitToActor::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_OnHitToActor, OtherComp) == 0x000010, "Member 'BP_CapturePrismBullet_C_OnHitToActor::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_OnHitToActor, Hit) == 0x000018, "Member 'BP_CapturePrismBullet_C_OnHitToActor::Hit' has a wrong offset!");

// Function BP_CapturePrismBullet.BP_CapturePrismBullet_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CapturePrismBullet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrismBullet_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CapturePrismBullet_C_ReceiveTick");
static_assert(sizeof(BP_CapturePrismBullet_C_ReceiveTick) == 0x000004, "Wrong size on BP_CapturePrismBullet_C_ReceiveTick");
static_assert(offsetof(BP_CapturePrismBullet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CapturePrismBullet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_CapturePrismBullet.BP_CapturePrismBullet_C.SpawnCaptureObject
// 0x0028 (0x0028 - 0x0000)
struct BP_CapturePrismBullet_C_SpawnCaptureObject final
{
public:
	struct FGuid                                  Guid;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalCaptureJudgeObject_C*            K2Node_DynamicCast_AsBP_Pal_Capture_Judge_Object;  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrismBullet_C_SpawnCaptureObject) == 0x000008, "Wrong alignment on BP_CapturePrismBullet_C_SpawnCaptureObject");
static_assert(sizeof(BP_CapturePrismBullet_C_SpawnCaptureObject) == 0x000028, "Wrong size on BP_CapturePrismBullet_C_SpawnCaptureObject");
static_assert(offsetof(BP_CapturePrismBullet_C_SpawnCaptureObject, Guid) == 0x000000, "Member 'BP_CapturePrismBullet_C_SpawnCaptureObject::Guid' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_SpawnCaptureObject, Actor) == 0x000010, "Member 'BP_CapturePrismBullet_C_SpawnCaptureObject::Actor' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_SpawnCaptureObject, K2Node_DynamicCast_AsBP_Pal_Capture_Judge_Object) == 0x000018, "Member 'BP_CapturePrismBullet_C_SpawnCaptureObject::K2Node_DynamicCast_AsBP_Pal_Capture_Judge_Object' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_SpawnCaptureObject, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_CapturePrismBullet_C_SpawnCaptureObject::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_CapturePrismBullet.BP_CapturePrismBullet_C.UpdateRotation
// 0x0128 (0x0128 - 0x0000)
struct BP_CapturePrismBullet_C_UpdateRotation final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Multiply_RotatorFloat_ReturnValue;        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Multiply_RotatorFloat_B_ImplicitCast;     // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CapturePrismBullet_C_UpdateRotation) == 0x000008, "Wrong alignment on BP_CapturePrismBullet_C_UpdateRotation");
static_assert(sizeof(BP_CapturePrismBullet_C_UpdateRotation) == 0x000128, "Wrong size on BP_CapturePrismBullet_C_UpdateRotation");
static_assert(offsetof(BP_CapturePrismBullet_C_UpdateRotation, DeltaTime) == 0x000000, "Member 'BP_CapturePrismBullet_C_UpdateRotation::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_UpdateRotation, CallFunc_Multiply_RotatorFloat_ReturnValue) == 0x000008, "Member 'BP_CapturePrismBullet_C_UpdateRotation::CallFunc_Multiply_RotatorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_UpdateRotation, CallFunc_ComposeRotators_ReturnValue) == 0x000020, "Member 'BP_CapturePrismBullet_C_UpdateRotation::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_UpdateRotation, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000038, "Member 'BP_CapturePrismBullet_C_UpdateRotation::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CapturePrismBullet_C_UpdateRotation, CallFunc_Multiply_RotatorFloat_B_ImplicitCast) == 0x000120, "Member 'BP_CapturePrismBullet_C_UpdateRotation::CallFunc_Multiply_RotatorFloat_B_ImplicitCast' has a wrong offset!");

}

