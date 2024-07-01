#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommonReward

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommonReward.WBP_CommonReward_C
// 0x00A8 (0x04B0 - 0x0408)
class UWBP_CommonReward_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_PurpleColor;                                   // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_DefaultColor;                                  // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_RewardInfo;                                   // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Title;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FPalUICommonRewardDisplayData>  RewardInfos;                                       // 0x0448(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Queuing;                                           // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA8[0x7];                                     // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalUIRewardDisplayType, struct FDataTableRowHandle> TitleMap;                                          // 0x0460(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

public:
	void ChangeColor(bool IsPurple);
	void ExecuteUbergraph_WBP_CommonReward(int32 EntryPoint);
	void Finished_8B86E03B4C9B039B2D1E43872343E0D8();
	void Finished_99C931904947D8826978CE8B6DE53642();
	void OnSetup();
	void QueueRewardInfo(const struct FPalUICommonRewardDisplayData& Info);
	void SetInfo(const struct FPalUICommonRewardDisplayData& Info);
	void ShowInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonReward_C">();
	}
	static class UWBP_CommonReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonReward_C>();
	}
};
static_assert(alignof(UWBP_CommonReward_C) == 0x000008, "Wrong alignment on UWBP_CommonReward_C");
static_assert(sizeof(UWBP_CommonReward_C) == 0x0004B0, "Wrong size on UWBP_CommonReward_C");
static_assert(offsetof(UWBP_CommonReward_C, UberGraphFrame) == 0x000408, "Member 'UWBP_CommonReward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CommonReward_C, Anm_PurpleColor) == 0x000410, "Member 'UWBP_CommonReward_C::Anm_PurpleColor' has a wrong offset!");
static_assert(offsetof(UWBP_CommonReward_C, Anm_DefaultColor) == 0x000418, "Member 'UWBP_CommonReward_C::Anm_DefaultColor' has a wrong offset!");
static_assert(offsetof(UWBP_CommonReward_C, Anm_Close) == 0x000420, "Member 'UWBP_CommonReward_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_CommonReward_C, Anm_Open) == 0x000428, "Member 'UWBP_CommonReward_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_CommonReward_C, Icon) == 0x000430, "Member 'UWBP_CommonReward_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_CommonReward_C, Text_RewardInfo) == 0x000438, "Member 'UWBP_CommonReward_C::Text_RewardInfo' has a wrong offset!");
static_assert(offsetof(UWBP_CommonReward_C, Text_Title) == 0x000440, "Member 'UWBP_CommonReward_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_CommonReward_C, RewardInfos) == 0x000448, "Member 'UWBP_CommonReward_C::RewardInfos' has a wrong offset!");
static_assert(offsetof(UWBP_CommonReward_C, Queuing) == 0x000458, "Member 'UWBP_CommonReward_C::Queuing' has a wrong offset!");
static_assert(offsetof(UWBP_CommonReward_C, TitleMap) == 0x000460, "Member 'UWBP_CommonReward_C::TitleMap' has a wrong offset!");

}

