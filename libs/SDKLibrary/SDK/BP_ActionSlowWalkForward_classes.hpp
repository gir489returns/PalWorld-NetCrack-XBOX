#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionSlowWalkForward

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionSlowWalkForward.BP_ActionSlowWalkForward_C
// 0x0010 (0x0150 - 0x0140)
class UBP_ActionSlowWalkForward_C final : public UPalActionBase
{
public:
	uint8                                         Pad_3807[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionSlowWalkForward(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionSlowWalkForward_C">();
	}
	static class UBP_ActionSlowWalkForward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionSlowWalkForward_C>();
	}
};
static_assert(alignof(UBP_ActionSlowWalkForward_C) == 0x000010, "Wrong alignment on UBP_ActionSlowWalkForward_C");
static_assert(sizeof(UBP_ActionSlowWalkForward_C) == 0x000150, "Wrong size on UBP_ActionSlowWalkForward_C");
static_assert(offsetof(UBP_ActionSlowWalkForward_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionSlowWalkForward_C::UberGraphFrame' has a wrong offset!");

}

