#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Drown

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Status_Drown.BP_Status_Drown_C
// 0x0018 (0x0060 - 0x0048)
class UBP_Status_Drown_C final : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsDrowning;                                        // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer;                                             // 0x0058(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Status_Drown(int32 EntryPoint);
	void GetOwnerHP(int64* OwnerHP);
	void GetSlipDamage(int32* Damage);
	void IsDrown(bool* IsDrawning);
	void IsDrownInWater(bool* IsDrawningInWater);
	void OnBeginStatus();
	void OnEndStatus();
	void _________SlipDamage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_Drown_C">();
	}
	static class UBP_Status_Drown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_Drown_C>();
	}
};
static_assert(alignof(UBP_Status_Drown_C) == 0x000008, "Wrong alignment on UBP_Status_Drown_C");
static_assert(sizeof(UBP_Status_Drown_C) == 0x000060, "Wrong size on UBP_Status_Drown_C");
static_assert(offsetof(UBP_Status_Drown_C, UberGraphFrame) == 0x000048, "Member 'UBP_Status_Drown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Status_Drown_C, IsDrowning) == 0x000050, "Member 'UBP_Status_Drown_C::IsDrowning' has a wrong offset!");
static_assert(offsetof(UBP_Status_Drown_C, Timer) == 0x000058, "Member 'UBP_Status_Drown_C::Timer' has a wrong offset!");

}

