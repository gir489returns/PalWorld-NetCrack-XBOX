#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionHappy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionHappy.BP_ActionHappy_C
// 0x0020 (0x0160 - 0x0140)
class UBP_ActionHappy_C final : public UPalActionBase
{
public:
	uint8                                         Pad_3725[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeFace(bool Smile);
	void ExecuteUbergraph_BP_ActionHappy(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();
	void OnLoaded_EC2E853A48D294FC93D7F1A792BBC3C8(class UObject* Loaded);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionHappy_C">();
	}
	static class UBP_ActionHappy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionHappy_C>();
	}
};
static_assert(alignof(UBP_ActionHappy_C) == 0x000010, "Wrong alignment on UBP_ActionHappy_C");
static_assert(sizeof(UBP_ActionHappy_C) == 0x000160, "Wrong size on UBP_ActionHappy_C");
static_assert(offsetof(UBP_ActionHappy_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionHappy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionHappy_C, Niagara) == 0x000148, "Member 'UBP_ActionHappy_C::Niagara' has a wrong offset!");
static_assert(offsetof(UBP_ActionHappy_C, Timer) == 0x000150, "Member 'UBP_ActionHappy_C::Timer' has a wrong offset!");

}

