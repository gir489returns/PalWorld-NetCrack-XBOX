#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_OtomoFollow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EOtomoFollowState_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_OtomoFollow.BP_AIAction_OtomoFollow_C
// 0x00D8 (0x0208 - 0x0130)
class UBP_AIAction_OtomoFollow_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                          Trainer;                                           // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  SelfActor;                                         // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoveMode;                                        // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_398C[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Destination;                                       // 0x0150(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentMoveSpeedRate;                              // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         Movement;                                          // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        TempDeltaTime;                                     // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOtomoFollowState                             FollowState;                                       // 0x0180(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_398D[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FolowEndDistance;                                  // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DelayedDestination;                                // 0x0190(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultMaxSpeed;                                   // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ConstMaxSpeedRateVsPlayer;                         // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentSpeedVsPlayer;                              // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTurnMode;                                        // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_398E[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SprintSpeedVsPlayer;                               // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelayedTrainerYawDegree;                           // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WarpTimer;                                         // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PreSelfLocation;                                   // 0x01E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          JumpAble;                                          // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerDelayJumpAble;                               // 0x01F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsForceFitGoal;                                    // 0x01FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_398F[0x1];                                     // 0x01FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TargetLocationDistanceForward;                     // 0x01FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetLocationDistanceRight;                       // 0x0200(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ChangeStateByRange();
	void DelayTrainerYaw();
	void DoWarpNearPlayer();
	void ExecuteUbergraph_BP_AIAction_OtomoFollow(int32 EntryPoint);
	void ForwardRayCheckJump(bool* DoJump);
	void GetTargetLocationInAim(struct FVector* Location);
	void GetTargetLocationInBuildingMode(struct FVector* Location);
	void GetTargetLocationInHighSpeed(struct FVector* Location);
	void GetTargetLocationInWalk(struct FVector* Location);
	void IsBuildingMode(bool* IsBuilding);
	void IsTurnInBuildingMode(bool* IsTurn);
	void OnFail_1EB8A4B348D9F7922741CD9438D88086(EPathFollowingResult MovementResult);
	void OnFail_F8B4E13F434B182E285FEEA53BAAED7C(EPathFollowingResult MovementResult);
	void OnSuccess_1EB8A4B348D9F7922741CD9438D88086(EPathFollowingResult MovementResult);
	void OnSuccess_F8B4E13F434B182E285FEEA53BAAED7C(EPathFollowingResult MovementResult);
	void PlayerCameraCheck(bool* InCamera);
	void PlayerJumpEvent(class UPalCharacterMovementComponent* Component);
	void SetInitialValue();
	void Speed_Control(double DeltaTime);
	void TargetPosition_2();
	void TryWarpToPlayer();

	void GetFollowInterpolatedPosFromController(struct FVector* FollowInterpolatedPos) const;
	void GetFollowSpeedFromController(double* FollowSpeed) const;
	void TryGetTrainer(class APalCharacter** Param_Trainer) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_OtomoFollow_C">();
	}
	static class UBP_AIAction_OtomoFollow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_OtomoFollow_C>();
	}
};
static_assert(alignof(UBP_AIAction_OtomoFollow_C) == 0x000008, "Wrong alignment on UBP_AIAction_OtomoFollow_C");
static_assert(sizeof(UBP_AIAction_OtomoFollow_C) == 0x000208, "Wrong size on UBP_AIAction_OtomoFollow_C");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_OtomoFollow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, Trainer) == 0x000138, "Member 'UBP_AIAction_OtomoFollow_C::Trainer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, SelfActor) == 0x000140, "Member 'UBP_AIAction_OtomoFollow_C::SelfActor' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, IsMoveMode) == 0x000148, "Member 'UBP_AIAction_OtomoFollow_C::IsMoveMode' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, Destination) == 0x000150, "Member 'UBP_AIAction_OtomoFollow_C::Destination' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, CurrentMoveSpeedRate) == 0x000168, "Member 'UBP_AIAction_OtomoFollow_C::CurrentMoveSpeedRate' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, Movement) == 0x000170, "Member 'UBP_AIAction_OtomoFollow_C::Movement' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, TempDeltaTime) == 0x000178, "Member 'UBP_AIAction_OtomoFollow_C::TempDeltaTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, FollowState) == 0x000180, "Member 'UBP_AIAction_OtomoFollow_C::FollowState' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, FolowEndDistance) == 0x000188, "Member 'UBP_AIAction_OtomoFollow_C::FolowEndDistance' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, DelayedDestination) == 0x000190, "Member 'UBP_AIAction_OtomoFollow_C::DelayedDestination' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, DefaultMaxSpeed) == 0x0001A8, "Member 'UBP_AIAction_OtomoFollow_C::DefaultMaxSpeed' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, ConstMaxSpeedRateVsPlayer) == 0x0001B0, "Member 'UBP_AIAction_OtomoFollow_C::ConstMaxSpeedRateVsPlayer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, CurrentSpeedVsPlayer) == 0x0001B8, "Member 'UBP_AIAction_OtomoFollow_C::CurrentSpeedVsPlayer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, IsTurnMode) == 0x0001C0, "Member 'UBP_AIAction_OtomoFollow_C::IsTurnMode' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, SprintSpeedVsPlayer) == 0x0001C8, "Member 'UBP_AIAction_OtomoFollow_C::SprintSpeedVsPlayer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, DelayedTrainerYawDegree) == 0x0001D0, "Member 'UBP_AIAction_OtomoFollow_C::DelayedTrainerYawDegree' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, WarpTimer) == 0x0001D8, "Member 'UBP_AIAction_OtomoFollow_C::WarpTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, PreSelfLocation) == 0x0001E0, "Member 'UBP_AIAction_OtomoFollow_C::PreSelfLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, JumpAble) == 0x0001F8, "Member 'UBP_AIAction_OtomoFollow_C::JumpAble' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, PlayerDelayJumpAble) == 0x0001F9, "Member 'UBP_AIAction_OtomoFollow_C::PlayerDelayJumpAble' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, IsForceFitGoal) == 0x0001FA, "Member 'UBP_AIAction_OtomoFollow_C::IsForceFitGoal' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, TargetLocationDistanceForward) == 0x0001FC, "Member 'UBP_AIAction_OtomoFollow_C::TargetLocationDistanceForward' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_OtomoFollow_C, TargetLocationDistanceRight) == 0x000200, "Member 'UBP_AIAction_OtomoFollow_C::TargetLocationDistanceRight' has a wrong offset!");

}

