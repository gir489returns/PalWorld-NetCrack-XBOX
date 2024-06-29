#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_LargeDown

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_LargeDown.BP_Action_LargeDown_C
// 0x0010 (0x0150 - 0x0140)
class UBP_Action_LargeDown_C final : public UPalActionBase
{
public:
	uint8                                         Pad_3E0B[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Const_DownTime;                                    // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_LargeDown(int32 EntryPoint);
	void FindMontage(EPalGeneralMontageType MotionType, class UAnimMontage** Montage);
	void OnBeginAction();
	void OnBlendOut_358D0402488CD580AA8B67999DF53D31(class FName NotifyName);
	void OnCompleted_358D0402488CD580AA8B67999DF53D31(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_358D0402488CD580AA8B67999DF53D31(class FName NotifyName);
	void OnNotifyBegin_358D0402488CD580AA8B67999DF53D31(class FName NotifyName);
	void OnNotifyEnd_358D0402488CD580AA8B67999DF53D31(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_LargeDown_C">();
	}
	static class UBP_Action_LargeDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_LargeDown_C>();
	}
};
static_assert(alignof(UBP_Action_LargeDown_C) == 0x000010, "Wrong alignment on UBP_Action_LargeDown_C");
static_assert(sizeof(UBP_Action_LargeDown_C) == 0x000150, "Wrong size on UBP_Action_LargeDown_C");
static_assert(offsetof(UBP_Action_LargeDown_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_LargeDown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_LargeDown_C, Const_DownTime) == 0x000148, "Member 'UBP_Action_LargeDown_C::Const_DownTime' has a wrong offset!");

}
