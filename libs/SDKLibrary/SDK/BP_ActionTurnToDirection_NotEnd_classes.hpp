#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionTurnToDirection_NotEnd

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionTurnToDirection_NotEnd.BP_ActionTurnToDirection_NotEnd_C
// 0x0020 (0x0160 - 0x0140)
class UBP_ActionTurnToDirection_NotEnd_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        SpeedRate;                                         // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DeleteTimer;                                       // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionTurnToDirection_NotEnd(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionTurnToDirection_NotEnd_C">();
	}
	static class UBP_ActionTurnToDirection_NotEnd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionTurnToDirection_NotEnd_C>();
	}
};
static_assert(alignof(UBP_ActionTurnToDirection_NotEnd_C) == 0x000010, "Wrong alignment on UBP_ActionTurnToDirection_NotEnd_C");
static_assert(sizeof(UBP_ActionTurnToDirection_NotEnd_C) == 0x000160, "Wrong size on UBP_ActionTurnToDirection_NotEnd_C");
static_assert(offsetof(UBP_ActionTurnToDirection_NotEnd_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionTurnToDirection_NotEnd_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionTurnToDirection_NotEnd_C, SpeedRate) == 0x000148, "Member 'UBP_ActionTurnToDirection_NotEnd_C::SpeedRate' has a wrong offset!");
static_assert(offsetof(UBP_ActionTurnToDirection_NotEnd_C, DeleteTimer) == 0x000150, "Member 'UBP_ActionTurnToDirection_NotEnd_C::DeleteTimer' has a wrong offset!");

}

