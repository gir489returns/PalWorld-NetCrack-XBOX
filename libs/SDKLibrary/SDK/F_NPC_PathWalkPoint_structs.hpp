#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_NPC_PathWalkPoint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_NPC_PathWalkPoint.F_NPC_PathWalkPoint
// 0x0030 (0x0030 - 0x0000)
struct FF_NPC_PathWalkPoint final
{
public:
	struct FVector                                Point_10_C92533D74DD6280F6FDA69B577B9BC99;         // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                WaitAction_14_5739D87348286264ED66708DF7FC3D1B;    // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_380A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        WaitTime_15_C7E545C5478904095A8A57B5CD072C65;      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Yaw_13_9634CB3043B1505237E811853806822B;           // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_NPC_PathWalkPoint) == 0x000008, "Wrong alignment on FF_NPC_PathWalkPoint");
static_assert(sizeof(FF_NPC_PathWalkPoint) == 0x000030, "Wrong size on FF_NPC_PathWalkPoint");
static_assert(offsetof(FF_NPC_PathWalkPoint, Point_10_C92533D74DD6280F6FDA69B577B9BC99) == 0x000000, "Member 'FF_NPC_PathWalkPoint::Point_10_C92533D74DD6280F6FDA69B577B9BC99' has a wrong offset!");
static_assert(offsetof(FF_NPC_PathWalkPoint, WaitAction_14_5739D87348286264ED66708DF7FC3D1B) == 0x000018, "Member 'FF_NPC_PathWalkPoint::WaitAction_14_5739D87348286264ED66708DF7FC3D1B' has a wrong offset!");
static_assert(offsetof(FF_NPC_PathWalkPoint, WaitTime_15_C7E545C5478904095A8A57B5CD072C65) == 0x000020, "Member 'FF_NPC_PathWalkPoint::WaitTime_15_C7E545C5478904095A8A57B5CD072C65' has a wrong offset!");
static_assert(offsetof(FF_NPC_PathWalkPoint, Yaw_13_9634CB3043B1505237E811853806822B) == 0x000028, "Member 'FF_NPC_PathWalkPoint::Yaw_13_9634CB3043B1505237E811853806822B' has a wrong offset!");

}

