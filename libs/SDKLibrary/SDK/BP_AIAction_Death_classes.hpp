#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Death

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_Death.BP_AIAction_Death_C
// 0x0010 (0x0140 - 0x0130)
class UBP_AIAction_Death_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsPlayer;                                          // 0x0138(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_388F[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BoneIndex;                                         // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_Death(int32 EntryPoint);
	void GetDeathActionClass(class UClass** DeathAction);
	void _________0(class UPalIndividualCharacterParameter* IndividualParameter);

	bool IsInterruptibleByRecoverHungry() const;
	bool IsInterruptibleBySleep() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Death_C">();
	}
	static class UBP_AIAction_Death_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Death_C>();
	}
};
static_assert(alignof(UBP_AIAction_Death_C) == 0x000008, "Wrong alignment on UBP_AIAction_Death_C");
static_assert(sizeof(UBP_AIAction_Death_C) == 0x000140, "Wrong size on UBP_AIAction_Death_C");
static_assert(offsetof(UBP_AIAction_Death_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_Death_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Death_C, IsPlayer) == 0x000138, "Member 'UBP_AIAction_Death_C::IsPlayer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Death_C, BoneIndex) == 0x00013C, "Member 'UBP_AIAction_Death_C::BoneIndex' has a wrong offset!");

}

