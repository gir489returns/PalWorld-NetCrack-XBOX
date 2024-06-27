#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BossDemoSnowyMountain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_BossDemoBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BossDemoSnowyMountain.WBP_BossDemoSnowyMountain_C
// 0x0038 (0x0440 - 0x0408)
class UWBP_BossDemoSnowyMountain_C final : public UWBP_BossDemoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Flash;                                             // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_107;                                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_179;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_BossCut04_C*            WBP_BossBattle_BossCut04;                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_BossCutBase04_C*        WBP_BossBattle_BossCutBase04;                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AnmEvent_Open();
	void ExecuteUbergraph_WBP_BossDemoSnowyMountain(int32 EntryPoint);
	void Finished_2D6C15E94F53558D3EC2C8B9EA43EA40();
	void OnStartEvent();
	void SetupText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BossDemoSnowyMountain_C">();
	}
	static class UWBP_BossDemoSnowyMountain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BossDemoSnowyMountain_C>();
	}
};
static_assert(alignof(UWBP_BossDemoSnowyMountain_C) == 0x000008, "Wrong alignment on UWBP_BossDemoSnowyMountain_C");
static_assert(sizeof(UWBP_BossDemoSnowyMountain_C) == 0x000440, "Wrong size on UWBP_BossDemoSnowyMountain_C");
static_assert(offsetof(UWBP_BossDemoSnowyMountain_C, UberGraphFrame) == 0x000408, "Member 'UWBP_BossDemoSnowyMountain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BossDemoSnowyMountain_C, Anm_Open) == 0x000410, "Member 'UWBP_BossDemoSnowyMountain_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_BossDemoSnowyMountain_C, Flash) == 0x000418, "Member 'UWBP_BossDemoSnowyMountain_C::Flash' has a wrong offset!");
static_assert(offsetof(UWBP_BossDemoSnowyMountain_C, Image_107) == 0x000420, "Member 'UWBP_BossDemoSnowyMountain_C::Image_107' has a wrong offset!");
static_assert(offsetof(UWBP_BossDemoSnowyMountain_C, Image_179) == 0x000428, "Member 'UWBP_BossDemoSnowyMountain_C::Image_179' has a wrong offset!");
static_assert(offsetof(UWBP_BossDemoSnowyMountain_C, WBP_BossBattle_BossCut04) == 0x000430, "Member 'UWBP_BossDemoSnowyMountain_C::WBP_BossBattle_BossCut04' has a wrong offset!");
static_assert(offsetof(UWBP_BossDemoSnowyMountain_C, WBP_BossBattle_BossCutBase04) == 0x000438, "Member 'UWBP_BossDemoSnowyMountain_C::WBP_BossBattle_BossCutBase04' has a wrong offset!");

}

