#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionRideBase

#include "Basic.hpp"

#include "ERideActionState_structs.hpp"
#include "ERideActionDirection_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionRideBase.BP_ActionRideBase_C
// 0x0350 (0x0490 - 0x0140)
class UBP_ActionRideBase_C : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsSuccess;                                         // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ToFinalTime;                                       // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InterpTimer;                                       // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalRiderComponent*                     RiderComponent;                                    // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalRideMarkerComponent*                RideMarker;                                        // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             StartTransform;                                    // 0x0170(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             JunctionPoint;                                     // 0x01D0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ToJunctionTime;                                    // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERideActionState                              State;                                             // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               StartMonsterRotator;                               // 0x0240(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               EndMonsterRotator;                                 // 0x0258(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        MonsterRotatorInterpTime;                          // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MonsterRotatorInterpTimer;                         // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCancelMonsterRotation;                           // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                StartMeshLocation;                                 // 0x0288(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndMeshLocation;                                   // 0x02A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             RightJunctionPoint;                                // 0x02C0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             LeftJunctionPoint;                                 // 0x0320(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           FrontRideAnimation;                                // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           RearRideAnimation;                                 // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           LeftRideAnimation;                                 // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           RightRideAnimation;                                // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           RideAnimation;                                     // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A8[0x8];                                      // 0x03A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             FrontJunctionPoint;                                // 0x03B0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             RearJunctionPoint;                                 // 0x0410(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          RideStartSoundAKEvent;                             // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          RideCompleteSoundAKEvent;                          // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   ShooterComponent;                                  // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckDirection(class AActor* RideTarget, ERideActionDirection* Direction);
	void CheckRidingCompleted();
	void DebugDrawLocationLocation(const struct FVector& Location);
	void ExecuteUbergraph_BP_ActionRideBase(int32 EntryPoint);
	void GetLocalLocationOnFloor(const struct FVector& NativeLocation, struct FVector* Location);
	void InterpMonsterRotation(double DeltaTime);
	void InterpRiderLocation(double DeltaTime);
	void OnBeginAction();
	void OnBlendOut_CD532E1C42E1BEC6059709A5FB6CCC91(class FName NotifyName);
	void OnBreakAction();
	void OnCompleted_CD532E1C42E1BEC6059709A5FB6CCC91(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_CD532E1C42E1BEC6059709A5FB6CCC91(class FName NotifyName);
	void OnNotifyBegin_CD532E1C42E1BEC6059709A5FB6CCC91(class FName NotifyName);
	void OnNotifyEnd_CD532E1C42E1BEC6059709A5FB6CCC91(class FName NotifyName);
	void PlayRideCompleteSound();
	void PlayRideStartSound();
	void SetupRider(class APalCharacter* Rider, bool* Param_IsSuccess);
	void TickAction(float DeltaTime);
	void Update_Ground_Ray_Cast(class APalCharacter* Rider);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionRideBase_C">();
	}
	static class UBP_ActionRideBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionRideBase_C>();
	}
};
static_assert(alignof(UBP_ActionRideBase_C) == 0x000010, "Wrong alignment on UBP_ActionRideBase_C");
static_assert(sizeof(UBP_ActionRideBase_C) == 0x000490, "Wrong size on UBP_ActionRideBase_C");
static_assert(offsetof(UBP_ActionRideBase_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionRideBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, IsSuccess) == 0x000148, "Member 'UBP_ActionRideBase_C::IsSuccess' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, ToFinalTime) == 0x000150, "Member 'UBP_ActionRideBase_C::ToFinalTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, InterpTimer) == 0x000158, "Member 'UBP_ActionRideBase_C::InterpTimer' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, RiderComponent) == 0x000160, "Member 'UBP_ActionRideBase_C::RiderComponent' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, RideMarker) == 0x000168, "Member 'UBP_ActionRideBase_C::RideMarker' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, StartTransform) == 0x000170, "Member 'UBP_ActionRideBase_C::StartTransform' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, JunctionPoint) == 0x0001D0, "Member 'UBP_ActionRideBase_C::JunctionPoint' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, ToJunctionTime) == 0x000230, "Member 'UBP_ActionRideBase_C::ToJunctionTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, State) == 0x000238, "Member 'UBP_ActionRideBase_C::State' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, StartMonsterRotator) == 0x000240, "Member 'UBP_ActionRideBase_C::StartMonsterRotator' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, EndMonsterRotator) == 0x000258, "Member 'UBP_ActionRideBase_C::EndMonsterRotator' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, MonsterRotatorInterpTime) == 0x000270, "Member 'UBP_ActionRideBase_C::MonsterRotatorInterpTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, MonsterRotatorInterpTimer) == 0x000278, "Member 'UBP_ActionRideBase_C::MonsterRotatorInterpTimer' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, IsCancelMonsterRotation) == 0x000280, "Member 'UBP_ActionRideBase_C::IsCancelMonsterRotation' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, StartMeshLocation) == 0x000288, "Member 'UBP_ActionRideBase_C::StartMeshLocation' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, EndMeshLocation) == 0x0002A0, "Member 'UBP_ActionRideBase_C::EndMeshLocation' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, RightJunctionPoint) == 0x0002C0, "Member 'UBP_ActionRideBase_C::RightJunctionPoint' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, LeftJunctionPoint) == 0x000320, "Member 'UBP_ActionRideBase_C::LeftJunctionPoint' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, FrontRideAnimation) == 0x000380, "Member 'UBP_ActionRideBase_C::FrontRideAnimation' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, RearRideAnimation) == 0x000388, "Member 'UBP_ActionRideBase_C::RearRideAnimation' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, LeftRideAnimation) == 0x000390, "Member 'UBP_ActionRideBase_C::LeftRideAnimation' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, RightRideAnimation) == 0x000398, "Member 'UBP_ActionRideBase_C::RightRideAnimation' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, RideAnimation) == 0x0003A0, "Member 'UBP_ActionRideBase_C::RideAnimation' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, FrontJunctionPoint) == 0x0003B0, "Member 'UBP_ActionRideBase_C::FrontJunctionPoint' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, RearJunctionPoint) == 0x000410, "Member 'UBP_ActionRideBase_C::RearJunctionPoint' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, RideStartSoundAKEvent) == 0x000470, "Member 'UBP_ActionRideBase_C::RideStartSoundAKEvent' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, RideCompleteSoundAKEvent) == 0x000478, "Member 'UBP_ActionRideBase_C::RideCompleteSoundAKEvent' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, ShooterComponent) == 0x000480, "Member 'UBP_ActionRideBase_C::ShooterComponent' has a wrong offset!");
static_assert(offsetof(UBP_ActionRideBase_C, FlagName) == 0x000488, "Member 'UBP_ActionRideBase_C::FlagName' has a wrong offset!");

}

