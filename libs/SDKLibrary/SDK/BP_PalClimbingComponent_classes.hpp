#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalClimbingComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalClimbingComponent.BP_PalClimbingComponent_C
// 0x00B8 (0x0158 - 0x00A0)
class UBP_PalClimbingComponent_C final : public UPalClimbingComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsClimbing;                                        // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_3CF5[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PrevClimbDirection;                                // 0x00B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          CanClimbing;                                       // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	ETraceTypeQuery                               Const_RayChannel;                                  // 0x00C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF6[0x2];                                     // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FlagName;                                          // 0x00CC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF7[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DownRayCancelTimer;                                // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	EDrawDebugTrace                               DebugType;                                         // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TraceComplex;                                      // 0x00E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF8[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Const_ForwardRayLength;                            // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_UpRayLength;                                 // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_RightRayLength;                              // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Const_OffsetBack;                                  // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpAtTopMode;                                       // 0x0108(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF9[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveVector*                           UpToTopMoveCurve;                                  // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        UpToTopTimer;                                      // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                UpToTopFromPlayer;                                 // 0x0120(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                UpToTopStartPos;                                   // 0x0138(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnding;                                          // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Cancel_Ray_Check();
	void CanClimbingStart(bool* Result);
	void CenterRayCast(bool* IsHit, struct FVector* HitPos);
	void CheckClimbingMode();
	void CheckUpToTop(bool* Finish);
	void ClimbingMainUpdate(double DeltaTime);
	void ClimbUpAtTopEvent();
	void DelayCanClimbing();
	void DiagonalRayCast(bool IsUp, bool IsRight, bool* IsHit, struct FVector* HitPoint);
	void ExecuteUbergraph_BP_PalClimbingComponent(int32 EntryPoint);
	void ForceCancelClimb();
	void GetSelfLocationWithOffsetBack(struct FVector* SelfPos);
	void GroundCheck(bool* IsGround);
	void HandIK();
	void IsStaminaEmpty(bool* Empty);
	void LineTrace_ForClimbComponent(const struct FVector& StartPos, const struct FVector& EndPos, bool* IsHit, struct FHitResult* HitResult);
	void ObjectName_DebugShow();
	void OnBlendOut_085F600F42305157C1A542B1D6539EF9(class FName NotifyName);
	void OnCompleted_085F600F42305157C1A542B1D6539EF9(class FName NotifyName);
	void OnEndClimbing();
	void OnInterrupted_085F600F42305157C1A542B1D6539EF9(class FName NotifyName);
	void OnMovementModeChangedDelegate______0(class UPalCharacterMovementComponent* Component, EMovementMode PrevMode, EMovementMode NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
	void OnNotifyBegin_085F600F42305157C1A542B1D6539EF9(class FName NotifyName);
	void OnNotifyEnd_085F600F42305157C1A542B1D6539EF9(class FName NotifyName);
	void RayCollisionCheckEndExtrusion();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RequestEndClimbing();
	void ResetPlayerCollision();
	void SideRayCast(bool IsRight, bool* IsHit, struct FVector* HitPoint);
	void SphereTrace_ForClimbComponent(const struct FVector& StartPos, const struct FVector& EndPos, bool* IsHit, struct FHitResult* HitResult);
	void StartClimb(const struct FHitResult& Result);
	void StartClimbByNetwork();
	void StartClimbing(const struct FHitResult& HitResult);
	bool TryClimbAfterGrappling();
	void UpdateActorRotate(const struct FVector& CheckDirection);
	void UpRayCast(bool IsUp, bool* IsHit, struct FVector* HitPos);
	void UpToTopUpdate(double DeltaTime);
	void _________OnDead(const struct FPalDeadInfo& DeadInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalClimbingComponent_C">();
	}
	static class UBP_PalClimbingComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalClimbingComponent_C>();
	}
};
static_assert(alignof(UBP_PalClimbingComponent_C) == 0x000008, "Wrong alignment on UBP_PalClimbingComponent_C");
static_assert(sizeof(UBP_PalClimbingComponent_C) == 0x000158, "Wrong size on UBP_PalClimbingComponent_C");
static_assert(offsetof(UBP_PalClimbingComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_PalClimbingComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, IsClimbing) == 0x0000A8, "Member 'UBP_PalClimbingComponent_C::IsClimbing' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, PrevClimbDirection) == 0x0000B0, "Member 'UBP_PalClimbingComponent_C::PrevClimbDirection' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, CanClimbing) == 0x0000C8, "Member 'UBP_PalClimbingComponent_C::CanClimbing' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, Const_RayChannel) == 0x0000C9, "Member 'UBP_PalClimbingComponent_C::Const_RayChannel' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, FlagName) == 0x0000CC, "Member 'UBP_PalClimbingComponent_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, DownRayCancelTimer) == 0x0000D8, "Member 'UBP_PalClimbingComponent_C::DownRayCancelTimer' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, DebugType) == 0x0000E0, "Member 'UBP_PalClimbingComponent_C::DebugType' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, TraceComplex) == 0x0000E1, "Member 'UBP_PalClimbingComponent_C::TraceComplex' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, Const_ForwardRayLength) == 0x0000E8, "Member 'UBP_PalClimbingComponent_C::Const_ForwardRayLength' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, Const_UpRayLength) == 0x0000F0, "Member 'UBP_PalClimbingComponent_C::Const_UpRayLength' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, Const_RightRayLength) == 0x0000F8, "Member 'UBP_PalClimbingComponent_C::Const_RightRayLength' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, Const_OffsetBack) == 0x000100, "Member 'UBP_PalClimbingComponent_C::Const_OffsetBack' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, UpAtTopMode) == 0x000108, "Member 'UBP_PalClimbingComponent_C::UpAtTopMode' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, UpToTopMoveCurve) == 0x000110, "Member 'UBP_PalClimbingComponent_C::UpToTopMoveCurve' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, UpToTopTimer) == 0x000118, "Member 'UBP_PalClimbingComponent_C::UpToTopTimer' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, UpToTopFromPlayer) == 0x000120, "Member 'UBP_PalClimbingComponent_C::UpToTopFromPlayer' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, UpToTopStartPos) == 0x000138, "Member 'UBP_PalClimbingComponent_C::UpToTopStartPos' has a wrong offset!");
static_assert(offsetof(UBP_PalClimbingComponent_C, IsEnding) == 0x000150, "Member 'UBP_PalClimbingComponent_C::IsEnding' has a wrong offset!");

}

