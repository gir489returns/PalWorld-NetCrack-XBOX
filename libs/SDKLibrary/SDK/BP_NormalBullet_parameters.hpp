#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NormalBullet

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_NormalBullet.BP_NormalBullet_C.ExecuteUbergraph_BP_NormalBullet
// 0x0200 (0x0200 - 0x0000)
struct BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_497A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_HitComp;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherCharacter;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0020(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_497B[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_497C[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_497D[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_497E[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_497F[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet) == 0x000008, "Wrong alignment on BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet");
static_assert(sizeof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet) == 0x000200, "Wrong size on BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, EntryPoint) == 0x000000, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, K2Node_Event_HitComp) == 0x000008, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::K2Node_Event_HitComp' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, K2Node_Event_OtherCharacter) == 0x000010, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::K2Node_Event_OtherCharacter' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, K2Node_Event_OtherComp) == 0x000018, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, K2Node_Event_Hit) == 0x000020, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_bBlockingHit) == 0x000108, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_bInitialOverlap) == 0x000109, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_Time) == 0x00010C, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_Distance) == 0x000110, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_Location) == 0x000118, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_ImpactPoint) == 0x000130, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_Normal) == 0x000148, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_ImpactNormal) == 0x000160, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_PhysMat) == 0x000178, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_HitActor) == 0x000180, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_HitComponent) == 0x000188, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_HitBoneName) == 0x000190, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_BoneName) == 0x000198, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_HitItem) == 0x0001A0, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_ElementIndex) == 0x0001A4, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_FaceIndex) == 0x0001A8, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_TraceStart) == 0x0001B0, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_BreakHitResult_TraceEnd) == 0x0001C8, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_IsValid_ReturnValue) == 0x0001E0, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, K2Node_DynamicCast_AsPal_Character) == 0x0001E8, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, K2Node_DynamicCast_bSuccess) == 0x0001F0, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x0001F8, "Member 'BP_NormalBullet_C_ExecuteUbergraph_BP_NormalBullet::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");

// Function BP_NormalBullet.BP_NormalBullet_C.GetHitEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_NormalBullet_C_GetHitEffect final
{
public:
	class UNiagaraSystem*                         NiagaraEffect;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NormalBullet_C_GetHitEffect) == 0x000008, "Wrong alignment on BP_NormalBullet_C_GetHitEffect");
static_assert(sizeof(BP_NormalBullet_C_GetHitEffect) == 0x000008, "Wrong size on BP_NormalBullet_C_GetHitEffect");
static_assert(offsetof(BP_NormalBullet_C_GetHitEffect, NiagaraEffect) == 0x000000, "Member 'BP_NormalBullet_C_GetHitEffect::NiagaraEffect' has a wrong offset!");

// Function BP_NormalBullet.BP_NormalBullet_C.OnDestroy
// 0x0100 (0x0100 - 0x0000)
struct BP_NormalBullet_C_OnDestroy final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherCharacter;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_NormalBullet_C_OnDestroy) == 0x000008, "Wrong alignment on BP_NormalBullet_C_OnDestroy");
static_assert(sizeof(BP_NormalBullet_C_OnDestroy) == 0x000100, "Wrong size on BP_NormalBullet_C_OnDestroy");
static_assert(offsetof(BP_NormalBullet_C_OnDestroy, HitComp) == 0x000000, "Member 'BP_NormalBullet_C_OnDestroy::HitComp' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_OnDestroy, OtherCharacter) == 0x000008, "Member 'BP_NormalBullet_C_OnDestroy::OtherCharacter' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_OnDestroy, OtherComp) == 0x000010, "Member 'BP_NormalBullet_C_OnDestroy::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_OnDestroy, Hit) == 0x000018, "Member 'BP_NormalBullet_C_OnDestroy::Hit' has a wrong offset!");

// Function BP_NormalBullet.BP_NormalBullet_C.SpawnHitEffects
// 0x0058 (0x0058 - 0x0000)
struct BP_NormalBullet_C_SpawnHitEffects final
{
public:
	struct FVector                                ImpactPoint;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactNormal;                                      // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UNiagaraSystem*                         CallFunc_GetHitEffect_NiagaraEffect;               // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NormalBullet_C_SpawnHitEffects) == 0x000008, "Wrong alignment on BP_NormalBullet_C_SpawnHitEffects");
static_assert(sizeof(BP_NormalBullet_C_SpawnHitEffects) == 0x000058, "Wrong size on BP_NormalBullet_C_SpawnHitEffects");
static_assert(offsetof(BP_NormalBullet_C_SpawnHitEffects, ImpactPoint) == 0x000000, "Member 'BP_NormalBullet_C_SpawnHitEffects::ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_SpawnHitEffects, ImpactNormal) == 0x000018, "Member 'BP_NormalBullet_C_SpawnHitEffects::ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_SpawnHitEffects, CallFunc_MakeRotFromX_ReturnValue) == 0x000030, "Member 'BP_NormalBullet_C_SpawnHitEffects::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_SpawnHitEffects, CallFunc_GetHitEffect_NiagaraEffect) == 0x000048, "Member 'BP_NormalBullet_C_SpawnHitEffects::CallFunc_GetHitEffect_NiagaraEffect' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_SpawnHitEffects, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000050, "Member 'BP_NormalBullet_C_SpawnHitEffects::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_NormalBullet.BP_NormalBullet_C.SpawnHitEffectsInStun
// 0x0038 (0x0038 - 0x0000)
struct BP_NormalBullet_C_SpawnHitEffectsInStun final
{
public:
	struct FVector                                ImpactPoint;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NormalBullet_C_SpawnHitEffectsInStun) == 0x000008, "Wrong alignment on BP_NormalBullet_C_SpawnHitEffectsInStun");
static_assert(sizeof(BP_NormalBullet_C_SpawnHitEffectsInStun) == 0x000038, "Wrong size on BP_NormalBullet_C_SpawnHitEffectsInStun");
static_assert(offsetof(BP_NormalBullet_C_SpawnHitEffectsInStun, ImpactPoint) == 0x000000, "Member 'BP_NormalBullet_C_SpawnHitEffectsInStun::ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_SpawnHitEffectsInStun, CallFunc_MakeRotFromX_ReturnValue) == 0x000018, "Member 'BP_NormalBullet_C_SpawnHitEffectsInStun::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NormalBullet_C_SpawnHitEffectsInStun, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000030, "Member 'BP_NormalBullet_C_SpawnHitEffectsInStun::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

}

