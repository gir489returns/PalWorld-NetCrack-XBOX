#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_CollectItem

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "FPassiveSkillCollectItemLotteryData_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Status_CollectItem.BP_Status_CollectItem_C
// 0x00D8 (0x0130 - 0x0058)
class UBP_Status_CollectItem_C final : public UPalStatusCollectItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         CollectItemTimeMinuteMin;                          // 0x0060(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CollectItemTimeMinuteMax;                          // 0x0064(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CollectItemTimeSec;                                // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ElapsedTimeSec;                                    // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFPassiveSkillCollectItemLotteryData> LotteryTable;                                      // 0x0078(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 RankTable;                                         // 0x0088(0x0010)(Edit, BlueprintVisible)
	TMap<class FName, int32>                      DebugLotteryCounter;                               // 0x0098(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsDebugLottery;                                    // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D92[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DebugLotteryItemName;                              // 0x00EC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                 AddItemInfo;                                       // 0x00F4(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsPaused;                                          // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D93[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 BaseCampActionClass;                               // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                       AIAction;                                          // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UDataTable*>                     LotteryTables;                                     // 0x0118(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsActionPlaying;                                   // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddItem(const struct FPalStaticItemIdAndNum& ItemInfo);
	void AddLog_UseSkill();
	void AddLog_UseSkillInBaseCamp();
	void CreateLotteryTable(TArray<struct FFPassiveSkillCollectItemLotteryData>* Result);
	void ExecuteUbergraph_BP_Status_CollectItem(int32 EntryPoint);
	void Get_Base_Camp_Action_Class(class UClass** Param_Class);
	void Get_Lottery_Index(int32 LotteryValue, int32* Param_Index);
	void GetLotteryDataTable(class UDataTable** DataTable);
	void GetRandVal(int32 Max, int32* RandVal);
	void GetRank(int32* Rank);
	void Is_Actor_Active(bool* IsActive);
	void IsActorDead(bool* IsDead);
	void LotteryItem(struct FPalStaticItemIdAndNum* ItemInfo);
	void Observe_AIAction();
	void OnAddItem(EPalItemOperationResult Result);
	void OnBeginStatus();
	void OnBreakStatus();
	void OnEndStatus();
	void PlayAction_SpawnItem(const struct FPalStaticItemIdAndNum& Param_AddItemInfo);
	void ResetElapsedTime();
	void SetCollectItemTime();
	void SetPause(bool Pause);
	void TickStatus(float DeltaTime);
	void UpdateSkill(double DeltaTime);

	void Get_Name_Text_Id(class FName* SkillNameTextId) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_CollectItem_C">();
	}
	static class UBP_Status_CollectItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_CollectItem_C>();
	}
};
static_assert(alignof(UBP_Status_CollectItem_C) == 0x000008, "Wrong alignment on UBP_Status_CollectItem_C");
static_assert(sizeof(UBP_Status_CollectItem_C) == 0x000130, "Wrong size on UBP_Status_CollectItem_C");
static_assert(offsetof(UBP_Status_CollectItem_C, UberGraphFrame) == 0x000058, "Member 'UBP_Status_CollectItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, CollectItemTimeMinuteMin) == 0x000060, "Member 'UBP_Status_CollectItem_C::CollectItemTimeMinuteMin' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, CollectItemTimeMinuteMax) == 0x000064, "Member 'UBP_Status_CollectItem_C::CollectItemTimeMinuteMax' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, CollectItemTimeSec) == 0x000068, "Member 'UBP_Status_CollectItem_C::CollectItemTimeSec' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, ElapsedTimeSec) == 0x000070, "Member 'UBP_Status_CollectItem_C::ElapsedTimeSec' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, LotteryTable) == 0x000078, "Member 'UBP_Status_CollectItem_C::LotteryTable' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, RankTable) == 0x000088, "Member 'UBP_Status_CollectItem_C::RankTable' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, DebugLotteryCounter) == 0x000098, "Member 'UBP_Status_CollectItem_C::DebugLotteryCounter' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, IsDebugLottery) == 0x0000E8, "Member 'UBP_Status_CollectItem_C::IsDebugLottery' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, DebugLotteryItemName) == 0x0000EC, "Member 'UBP_Status_CollectItem_C::DebugLotteryItemName' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, AddItemInfo) == 0x0000F4, "Member 'UBP_Status_CollectItem_C::AddItemInfo' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, IsPaused) == 0x000100, "Member 'UBP_Status_CollectItem_C::IsPaused' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, BaseCampActionClass) == 0x000108, "Member 'UBP_Status_CollectItem_C::BaseCampActionClass' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, AIAction) == 0x000110, "Member 'UBP_Status_CollectItem_C::AIAction' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, LotteryTables) == 0x000118, "Member 'UBP_Status_CollectItem_C::LotteryTables' has a wrong offset!");
static_assert(offsetof(UBP_Status_CollectItem_C, IsActionPlaying) == 0x000128, "Member 'UBP_Status_CollectItem_C::IsActionPlaying' has a wrong offset!");

}

