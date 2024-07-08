#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionWakeupFromRagdoll

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionWakeupFromRagdoll.BP_ActionWakeupFromRagdoll_C
// 0x0010 (0x0150 - 0x0140)
class UBP_ActionWakeupFromRagdoll_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionWakeupFromRagdoll(int32 EntryPoint);
	void GroundCheckAdjust();
	void OnBeginAction();
	void OnBlendOut_7DDA652645DB1077111C1B809FF79A5C(class FName NotifyName);
	void OnBlendOut_A0FD85AB4B6F54D9353E768175ABF7B9(class FName NotifyName);
	void OnBlendOut_ED4CF3F7468B1088DE5A0494D23DDF61(class FName NotifyName);
	void OnCompleted_7DDA652645DB1077111C1B809FF79A5C(class FName NotifyName);
	void OnCompleted_A0FD85AB4B6F54D9353E768175ABF7B9(class FName NotifyName);
	void OnCompleted_ED4CF3F7468B1088DE5A0494D23DDF61(class FName NotifyName);
	void OnInterrupted_7DDA652645DB1077111C1B809FF79A5C(class FName NotifyName);
	void OnInterrupted_A0FD85AB4B6F54D9353E768175ABF7B9(class FName NotifyName);
	void OnInterrupted_ED4CF3F7468B1088DE5A0494D23DDF61(class FName NotifyName);
	void OnNotifyBegin_7DDA652645DB1077111C1B809FF79A5C(class FName NotifyName);
	void OnNotifyBegin_A0FD85AB4B6F54D9353E768175ABF7B9(class FName NotifyName);
	void OnNotifyBegin_ED4CF3F7468B1088DE5A0494D23DDF61(class FName NotifyName);
	void OnNotifyEnd_7DDA652645DB1077111C1B809FF79A5C(class FName NotifyName);
	void OnNotifyEnd_A0FD85AB4B6F54D9353E768175ABF7B9(class FName NotifyName);
	void OnNotifyEnd_ED4CF3F7468B1088DE5A0494D23DDF61(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionWakeupFromRagdoll_C">();
	}
	static class UBP_ActionWakeupFromRagdoll_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionWakeupFromRagdoll_C>();
	}
};
static_assert(alignof(UBP_ActionWakeupFromRagdoll_C) == 0x000010, "Wrong alignment on UBP_ActionWakeupFromRagdoll_C");
static_assert(sizeof(UBP_ActionWakeupFromRagdoll_C) == 0x000150, "Wrong size on UBP_ActionWakeupFromRagdoll_C");
static_assert(offsetof(UBP_ActionWakeupFromRagdoll_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionWakeupFromRagdoll_C::UberGraphFrame' has a wrong offset!");

}

