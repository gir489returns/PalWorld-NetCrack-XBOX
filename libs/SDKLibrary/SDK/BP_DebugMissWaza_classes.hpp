#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugMissWaza

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DebugMissWaza.BP_DebugMissWaza_C
// 0x0070 (0x01B0 - 0x0140)
class UBP_DebugMissWaza_C final : public UPalActionBase
{
public:
	uint8                                         Pad_419D[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Scale;                                             // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        YawSpeed;                                          // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Sequence;                                          // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Yaw;                                               // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TempDeltaTime;                                     // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pos;                                               // 0x0170(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ShootModeCenterPos;                                // 0x0188(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ConstShootInterval;                                // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShootTimer;                                        // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DebugMissWaza(int32 EntryPoint);
	void OnBeginAction();
	void SetTransform();
	void Shoot();
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DebugMissWaza_C">();
	}
	static class UBP_DebugMissWaza_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DebugMissWaza_C>();
	}
};
static_assert(alignof(UBP_DebugMissWaza_C) == 0x000010, "Wrong alignment on UBP_DebugMissWaza_C");
static_assert(sizeof(UBP_DebugMissWaza_C) == 0x0001B0, "Wrong size on UBP_DebugMissWaza_C");
static_assert(offsetof(UBP_DebugMissWaza_C, UberGraphFrame) == 0x000140, "Member 'UBP_DebugMissWaza_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DebugMissWaza_C, Scale) == 0x000148, "Member 'UBP_DebugMissWaza_C::Scale' has a wrong offset!");
static_assert(offsetof(UBP_DebugMissWaza_C, YawSpeed) == 0x000150, "Member 'UBP_DebugMissWaza_C::YawSpeed' has a wrong offset!");
static_assert(offsetof(UBP_DebugMissWaza_C, Sequence) == 0x000158, "Member 'UBP_DebugMissWaza_C::Sequence' has a wrong offset!");
static_assert(offsetof(UBP_DebugMissWaza_C, Yaw) == 0x000160, "Member 'UBP_DebugMissWaza_C::Yaw' has a wrong offset!");
static_assert(offsetof(UBP_DebugMissWaza_C, TempDeltaTime) == 0x000168, "Member 'UBP_DebugMissWaza_C::TempDeltaTime' has a wrong offset!");
static_assert(offsetof(UBP_DebugMissWaza_C, Pos) == 0x000170, "Member 'UBP_DebugMissWaza_C::Pos' has a wrong offset!");
static_assert(offsetof(UBP_DebugMissWaza_C, ShootModeCenterPos) == 0x000188, "Member 'UBP_DebugMissWaza_C::ShootModeCenterPos' has a wrong offset!");
static_assert(offsetof(UBP_DebugMissWaza_C, ConstShootInterval) == 0x0001A0, "Member 'UBP_DebugMissWaza_C::ConstShootInterval' has a wrong offset!");
static_assert(offsetof(UBP_DebugMissWaza_C, ShootTimer) == 0x0001A8, "Member 'UBP_DebugMissWaza_C::ShootTimer' has a wrong offset!");

}

