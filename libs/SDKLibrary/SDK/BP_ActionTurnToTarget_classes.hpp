#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionTurnToTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionTurnToTarget.BP_ActionTurnToTarget_C
// 0x0010 (0x0150 - 0x0140)
class UBP_ActionTurnToTarget_C final : public UPalActionBase
{
public:
	uint8                                         Pad_37CD[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionTurnToTarget(int32 EntryPoint);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionTurnToTarget_C">();
	}
	static class UBP_ActionTurnToTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionTurnToTarget_C>();
	}
};
static_assert(alignof(UBP_ActionTurnToTarget_C) == 0x000010, "Wrong alignment on UBP_ActionTurnToTarget_C");
static_assert(sizeof(UBP_ActionTurnToTarget_C) == 0x000150, "Wrong size on UBP_ActionTurnToTarget_C");
static_assert(offsetof(UBP_ActionTurnToTarget_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionTurnToTarget_C::UberGraphFrame' has a wrong offset!");

}

