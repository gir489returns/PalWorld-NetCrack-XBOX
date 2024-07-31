#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalAIBlackboard_Common

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalAIBlackboard_Common.BP_PalAIBlackboard_Common_C
// 0x00F8 (0x0120 - 0x0028)
class UBP_PalAIBlackboard_Common_C final : public UPalAIBlackboardBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                MoveGoal_BB;                                       // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRestMode_BB;                                     // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReturnTerritoryMode_BB;                          // 0x0049(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SpawnedPosition_BB;                                // 0x0050(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SpawnerLocation_BB;                                // 0x0068(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ReturnTerritoryRadius_BB;                          // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WalkingRadius_BB;                                  // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBattleMode_BB;                                   // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                BattleStartLocation_BB;                            // 0x0098(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                         TalkerID_BB;                                       // 0x00B0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsEscapeMode_BB;                                   // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SleepStartTime_BB;                                 // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SleepEndTime_BB;                                   // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  DrinkWaterSpotID_BB;                               // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDrinkWaterMode_BB;                               // 0x0108(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Disable_ReturnTerritory_WildPal;                   // 0x0109(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10A[0x6];                                      // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        InvaderStartDelayTime_BB;                          // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Disable_Escape_Invader;                            // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalAIBlackboard_Common(int32 EntryPoint);
	void Initialize_PalBB(class AActor* SelfActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalAIBlackboard_Common_C">();
	}
	static class UBP_PalAIBlackboard_Common_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalAIBlackboard_Common_C>();
	}
};
static_assert(alignof(UBP_PalAIBlackboard_Common_C) == 0x000008, "Wrong alignment on UBP_PalAIBlackboard_Common_C");
static_assert(sizeof(UBP_PalAIBlackboard_Common_C) == 0x000120, "Wrong size on UBP_PalAIBlackboard_Common_C");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, UberGraphFrame) == 0x000028, "Member 'UBP_PalAIBlackboard_Common_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, MoveGoal_BB) == 0x000030, "Member 'UBP_PalAIBlackboard_Common_C::MoveGoal_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, IsRestMode_BB) == 0x000048, "Member 'UBP_PalAIBlackboard_Common_C::IsRestMode_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, IsReturnTerritoryMode_BB) == 0x000049, "Member 'UBP_PalAIBlackboard_Common_C::IsReturnTerritoryMode_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, SpawnedPosition_BB) == 0x000050, "Member 'UBP_PalAIBlackboard_Common_C::SpawnedPosition_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, SpawnerLocation_BB) == 0x000068, "Member 'UBP_PalAIBlackboard_Common_C::SpawnerLocation_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, ReturnTerritoryRadius_BB) == 0x000080, "Member 'UBP_PalAIBlackboard_Common_C::ReturnTerritoryRadius_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, WalkingRadius_BB) == 0x000088, "Member 'UBP_PalAIBlackboard_Common_C::WalkingRadius_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, IsBattleMode_BB) == 0x000090, "Member 'UBP_PalAIBlackboard_Common_C::IsBattleMode_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, BattleStartLocation_BB) == 0x000098, "Member 'UBP_PalAIBlackboard_Common_C::BattleStartLocation_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, TalkerID_BB) == 0x0000B0, "Member 'UBP_PalAIBlackboard_Common_C::TalkerID_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, IsEscapeMode_BB) == 0x0000E0, "Member 'UBP_PalAIBlackboard_Common_C::IsEscapeMode_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, SleepStartTime_BB) == 0x0000E8, "Member 'UBP_PalAIBlackboard_Common_C::SleepStartTime_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, SleepEndTime_BB) == 0x0000F0, "Member 'UBP_PalAIBlackboard_Common_C::SleepEndTime_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, DrinkWaterSpotID_BB) == 0x0000F8, "Member 'UBP_PalAIBlackboard_Common_C::DrinkWaterSpotID_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, IsDrinkWaterMode_BB) == 0x000108, "Member 'UBP_PalAIBlackboard_Common_C::IsDrinkWaterMode_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, Disable_ReturnTerritory_WildPal) == 0x000109, "Member 'UBP_PalAIBlackboard_Common_C::Disable_ReturnTerritory_WildPal' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, InvaderStartDelayTime_BB) == 0x000110, "Member 'UBP_PalAIBlackboard_Common_C::InvaderStartDelayTime_BB' has a wrong offset!");
static_assert(offsetof(UBP_PalAIBlackboard_Common_C, Disable_Escape_Invader) == 0x000118, "Member 'UBP_PalAIBlackboard_Common_C::Disable_Escape_Invader' has a wrong offset!");

}

