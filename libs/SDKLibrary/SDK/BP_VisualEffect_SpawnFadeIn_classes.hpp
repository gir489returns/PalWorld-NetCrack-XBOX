#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VisualEffect_SpawnFadeIn

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VisualEffect_SpawnFadeIn.BP_VisualEffect_SpawnFadeIn_C
// 0x0020 (0x0090 - 0x0070)
class UBP_VisualEffect_SpawnFadeIn_C final : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Opacity;                                           // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TickInterval;                                      // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9A[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandle;                                       // 0x0088(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn(int32 EntryPoint);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();
	void SetOpacity(double Intensity);
	void Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffect_SpawnFadeIn_C">();
	}
	static class UBP_VisualEffect_SpawnFadeIn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffect_SpawnFadeIn_C>();
	}
};
static_assert(alignof(UBP_VisualEffect_SpawnFadeIn_C) == 0x000008, "Wrong alignment on UBP_VisualEffect_SpawnFadeIn_C");
static_assert(sizeof(UBP_VisualEffect_SpawnFadeIn_C) == 0x000090, "Wrong size on UBP_VisualEffect_SpawnFadeIn_C");
static_assert(offsetof(UBP_VisualEffect_SpawnFadeIn_C, UberGraphFrame) == 0x000070, "Member 'UBP_VisualEffect_SpawnFadeIn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFadeIn_C, Opacity) == 0x000078, "Member 'UBP_VisualEffect_SpawnFadeIn_C::Opacity' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFadeIn_C, TickInterval) == 0x000080, "Member 'UBP_VisualEffect_SpawnFadeIn_C::TickInterval' has a wrong offset!");
static_assert(offsetof(UBP_VisualEffect_SpawnFadeIn_C, TimerHandle) == 0x000088, "Member 'UBP_VisualEffect_SpawnFadeIn_C::TimerHandle' has a wrong offset!");

}

