#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Coop_SpawnItem

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_Coop_SpawnItem.BP_Action_Coop_SpawnItem_C
// 0x0050 (0x0190 - 0x0140)
class UBP_Action_Coop_SpawnItem_C final : public UPalActionBase
{
public:
	uint8                                         Pad_384E[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimInstance*                          AnimInst;                                          // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          ActionCharacter;                                   // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           ChargeMontage;                                     // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFnishByAbortMontage;                             // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_384F[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalFacialComponent*                    Facial;                                            // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalFacialEyeType                             ChargeFacialEye;                                   // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3850[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ChargeTimer;                                       // 0x0178(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           FunMontage;                                        // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EPalFacialEyeType                             FunFacialEye;                                      // 0x0188(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EndProc();
	void ExecuteUbergraph_BP_Action_Coop_SpawnItem(int32 EntryPoint);
	void OnBeginAction();
	void OnBlendOut_3059B08B4A825BCA681E639E08A41646(class FName NotifyName);
	void OnBlendOut_41D0FB9F4D2B94E1D6E7B084AF2DCD56(class FName NotifyName);
	void OnCompleted_3059B08B4A825BCA681E639E08A41646(class FName NotifyName);
	void OnCompleted_41D0FB9F4D2B94E1D6E7B084AF2DCD56(class FName NotifyName);
	void OnEndAction();
	void OnEndFun();
	void OnInterrupted_3059B08B4A825BCA681E639E08A41646(class FName NotifyName);
	void OnInterrupted_41D0FB9F4D2B94E1D6E7B084AF2DCD56(class FName NotifyName);
	void OnNotifyBegin_3059B08B4A825BCA681E639E08A41646(class FName NotifyName);
	void OnNotifyBegin_41D0FB9F4D2B94E1D6E7B084AF2DCD56(class FName NotifyName);
	void OnNotifyEnd_3059B08B4A825BCA681E639E08A41646(class FName NotifyName);
	void OnNotifyEnd_41D0FB9F4D2B94E1D6E7B084AF2DCD56(class FName NotifyName);
	void StartFun();
	void StopChargeMontage();
	void StopFunMontage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Coop_SpawnItem_C">();
	}
	static class UBP_Action_Coop_SpawnItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Coop_SpawnItem_C>();
	}
};
static_assert(alignof(UBP_Action_Coop_SpawnItem_C) == 0x000010, "Wrong alignment on UBP_Action_Coop_SpawnItem_C");
static_assert(sizeof(UBP_Action_Coop_SpawnItem_C) == 0x000190, "Wrong size on UBP_Action_Coop_SpawnItem_C");
static_assert(offsetof(UBP_Action_Coop_SpawnItem_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_Coop_SpawnItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_SpawnItem_C, AnimInst) == 0x000148, "Member 'UBP_Action_Coop_SpawnItem_C::AnimInst' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_SpawnItem_C, ActionCharacter) == 0x000150, "Member 'UBP_Action_Coop_SpawnItem_C::ActionCharacter' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_SpawnItem_C, ChargeMontage) == 0x000158, "Member 'UBP_Action_Coop_SpawnItem_C::ChargeMontage' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_SpawnItem_C, IsFnishByAbortMontage) == 0x000160, "Member 'UBP_Action_Coop_SpawnItem_C::IsFnishByAbortMontage' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_SpawnItem_C, Facial) == 0x000168, "Member 'UBP_Action_Coop_SpawnItem_C::Facial' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_SpawnItem_C, ChargeFacialEye) == 0x000170, "Member 'UBP_Action_Coop_SpawnItem_C::ChargeFacialEye' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_SpawnItem_C, ChargeTimer) == 0x000178, "Member 'UBP_Action_Coop_SpawnItem_C::ChargeTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_SpawnItem_C, FunMontage) == 0x000180, "Member 'UBP_Action_Coop_SpawnItem_C::FunMontage' has a wrong offset!");
static_assert(offsetof(UBP_Action_Coop_SpawnItem_C, FunFacialEye) == 0x000188, "Member 'UBP_Action_Coop_SpawnItem_C::FunFacialEye' has a wrong offset!");

}

