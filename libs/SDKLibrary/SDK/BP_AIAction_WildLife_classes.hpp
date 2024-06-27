#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_WildLife

#include "Basic.hpp"

#include "EWildPalAIMoveMode_structs.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EWildPalAIRestType_structs.hpp"
#include "BP_AIAction_CanCombatBase_classes.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_WildLife.BP_AIAction_WildLife_C
// 0x00F8 (0x0250 - 0x0158)
class UBP_AIAction_WildLife_C : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_WildLife_C;             // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                SpawnedPosition;                                   // 0x0160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GoalPosition;                                      // 0x0178(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InitEnd;                                           // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FB4[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PrePos;                                            // 0x0198(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           StackTimerHandle;                                  // 0x01B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SpawnerLocation;                                   // 0x01B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WalkingTimer;                                      // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TempDeltaTime;                                     // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RestMode;                                          // 0x01E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FB5[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FollowRandomDistance;                              // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           StateUpdateTimerHandle;                            // 0x01F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RestStartPosition;                                 // 0x01F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWildPalAIMoveMode                            MoveMode;                                          // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWildPalAIRestType                            RestType;                                          // 0x0211(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FB6[0x6];                                     // 0x0212(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        WalkingRadius;                                     // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGroupBehavior;                                   // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCancelThisAIAction;                              // 0x0221(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTickStop;                                        // 0x0222(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FB7[0x5];                                     // 0x0223(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TickStopTimer;                                     // 0x0228(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DrinkWaterTimerHandle;                             // 0x0230(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DrinkWaterCheckFlag;                               // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FB8[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CurrentTarget;                                     // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EPalAIResponseType                            CurrentResponse;                                   // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSleep;                                           // 0x0249(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds);
	void ChangeNextMovePosition(double Radius, const struct FVector& CenterPos);
	void CheckDrinkWater_ForLeader(bool* ChangeState);
	void CheckDrinkWater_ForNotLeader(bool* ChangeAction);
	void Event_StopFalse();
	void ExecuteUbergraph_BP_AIAction_WildLife(int32 EntryPoint);
	void FollowLeader();
	void GetLeaderRestMode(bool* Rest);
	void GetMyLocation(struct FVector* NewParam);
	void IsSleepTime(bool* Sleep);
	void MoveAndAction(EPalActionType Action);
	void OnFail_B707D59048A2C3D7CD1D13834143E5F8(EPathFollowingResult MovementResult);
	void OnFail_D878AC8F4430A5C3183029AD1B4F53CF(EPathFollowingResult MovementResult);
	void OnSuccess_B707D59048A2C3D7CD1D13834143E5F8(EPathFollowingResult MovementResult);
	void OnSuccess_D878AC8F4430A5C3183029AD1B4F53CF(EPathFollowingResult MovementResult);
	void PlayNightSleep();
	void RandomRestModeStart();
	void ResetSelfAction();
	void RestModeUpdate(bool Nest);
	void RestModeWalk();
	void SetDrinkWaterFlag();
	void SoundEvent(const struct FVector& EmitLocation);
	void StateUpdate();
	void _________Stack();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_WildLife_C">();
	}
	static class UBP_AIAction_WildLife_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_WildLife_C>();
	}
};
static_assert(alignof(UBP_AIAction_WildLife_C) == 0x000008, "Wrong alignment on UBP_AIAction_WildLife_C");
static_assert(sizeof(UBP_AIAction_WildLife_C) == 0x000250, "Wrong size on UBP_AIAction_WildLife_C");
static_assert(offsetof(UBP_AIAction_WildLife_C, UberGraphFrame_BP_AIAction_WildLife_C) == 0x000158, "Member 'UBP_AIAction_WildLife_C::UberGraphFrame_BP_AIAction_WildLife_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, SpawnedPosition) == 0x000160, "Member 'UBP_AIAction_WildLife_C::SpawnedPosition' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, GoalPosition) == 0x000178, "Member 'UBP_AIAction_WildLife_C::GoalPosition' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, InitEnd) == 0x000190, "Member 'UBP_AIAction_WildLife_C::InitEnd' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, PrePos) == 0x000198, "Member 'UBP_AIAction_WildLife_C::PrePos' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, StackTimerHandle) == 0x0001B0, "Member 'UBP_AIAction_WildLife_C::StackTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, SpawnerLocation) == 0x0001B8, "Member 'UBP_AIAction_WildLife_C::SpawnerLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, WalkingTimer) == 0x0001D0, "Member 'UBP_AIAction_WildLife_C::WalkingTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, TempDeltaTime) == 0x0001D8, "Member 'UBP_AIAction_WildLife_C::TempDeltaTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, RestMode) == 0x0001E0, "Member 'UBP_AIAction_WildLife_C::RestMode' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, FollowRandomDistance) == 0x0001E8, "Member 'UBP_AIAction_WildLife_C::FollowRandomDistance' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, StateUpdateTimerHandle) == 0x0001F0, "Member 'UBP_AIAction_WildLife_C::StateUpdateTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, RestStartPosition) == 0x0001F8, "Member 'UBP_AIAction_WildLife_C::RestStartPosition' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, MoveMode) == 0x000210, "Member 'UBP_AIAction_WildLife_C::MoveMode' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, RestType) == 0x000211, "Member 'UBP_AIAction_WildLife_C::RestType' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, WalkingRadius) == 0x000218, "Member 'UBP_AIAction_WildLife_C::WalkingRadius' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, IsGroupBehavior) == 0x000220, "Member 'UBP_AIAction_WildLife_C::IsGroupBehavior' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, IsCancelThisAIAction) == 0x000221, "Member 'UBP_AIAction_WildLife_C::IsCancelThisAIAction' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, IsTickStop) == 0x000222, "Member 'UBP_AIAction_WildLife_C::IsTickStop' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, TickStopTimer) == 0x000228, "Member 'UBP_AIAction_WildLife_C::TickStopTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, DrinkWaterTimerHandle) == 0x000230, "Member 'UBP_AIAction_WildLife_C::DrinkWaterTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, DrinkWaterCheckFlag) == 0x000238, "Member 'UBP_AIAction_WildLife_C::DrinkWaterCheckFlag' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, CurrentTarget) == 0x000240, "Member 'UBP_AIAction_WildLife_C::CurrentTarget' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, CurrentResponse) == 0x000248, "Member 'UBP_AIAction_WildLife_C::CurrentResponse' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_WildLife_C, IsSleep) == 0x000249, "Member 'UBP_AIAction_WildLife_C::IsSleep' has a wrong offset!");

}

