#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_BeLiftup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_BeLiftup.BP_Action_BeLiftup_C
// 0x0070 (0x01B0 - 0x0140)
class UBP_Action_BeLiftup_C final : public UPalAction_BeLiftup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        InterpTime;                                        // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InterpTimer;                                       // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               StartRotation;                                     // 0x0158(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          StartedInterpRotation;                             // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_373D[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                StartLocation;                                     // 0x0178(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLocation;                                    // 0x0190(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_BeLiftup(int32 EntryPoint);
	void GetCarryingMontage(EPalGeneralMontageType MontageType, class UAnimMontage** Montage);
	void OnBeginAction();
	void OnEndAction();
	void OnEndInterpTransform();
	void OnStartInterpTransform();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_BeLiftup_C">();
	}
	static class UBP_Action_BeLiftup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_BeLiftup_C>();
	}
};
static_assert(alignof(UBP_Action_BeLiftup_C) == 0x000010, "Wrong alignment on UBP_Action_BeLiftup_C");
static_assert(sizeof(UBP_Action_BeLiftup_C) == 0x0001B0, "Wrong size on UBP_Action_BeLiftup_C");
static_assert(offsetof(UBP_Action_BeLiftup_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_BeLiftup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_BeLiftup_C, InterpTime) == 0x000148, "Member 'UBP_Action_BeLiftup_C::InterpTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_BeLiftup_C, InterpTimer) == 0x000150, "Member 'UBP_Action_BeLiftup_C::InterpTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_BeLiftup_C, StartRotation) == 0x000158, "Member 'UBP_Action_BeLiftup_C::StartRotation' has a wrong offset!");
static_assert(offsetof(UBP_Action_BeLiftup_C, StartedInterpRotation) == 0x000170, "Member 'UBP_Action_BeLiftup_C::StartedInterpRotation' has a wrong offset!");
static_assert(offsetof(UBP_Action_BeLiftup_C, StartLocation) == 0x000178, "Member 'UBP_Action_BeLiftup_C::StartLocation' has a wrong offset!");
static_assert(offsetof(UBP_Action_BeLiftup_C, TargetLocation) == 0x000190, "Member 'UBP_Action_BeLiftup_C::TargetLocation' has a wrong offset!");

}

