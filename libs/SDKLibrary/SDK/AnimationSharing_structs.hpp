#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationSharing

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AnimationSharing.AnimationSetup
// 0x0018 (0x0018 - 0x0000)
struct FAnimationSetup final
{
public:
	class UAnimSequence*                          AnimSequence;                                      // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimSharingStateInstance>  AnimBlueprint;                                     // 0x0008(0x0008)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                        NumRandomizedInstances;                            // 0x0010(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformBool                       Enabled;                                           // 0x0014(0x0001)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_22A2[0x3];                                     // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimationSetup) == 0x000008, "Wrong alignment on FAnimationSetup");
static_assert(sizeof(FAnimationSetup) == 0x000018, "Wrong size on FAnimationSetup");
static_assert(offsetof(FAnimationSetup, AnimSequence) == 0x000000, "Member 'FAnimationSetup::AnimSequence' has a wrong offset!");
static_assert(offsetof(FAnimationSetup, AnimBlueprint) == 0x000008, "Member 'FAnimationSetup::AnimBlueprint' has a wrong offset!");
static_assert(offsetof(FAnimationSetup, NumRandomizedInstances) == 0x000010, "Member 'FAnimationSetup::NumRandomizedInstances' has a wrong offset!");
static_assert(offsetof(FAnimationSetup, Enabled) == 0x000014, "Member 'FAnimationSetup::Enabled' has a wrong offset!");

// ScriptStruct AnimationSharing.AnimationStateEntry
// 0x0030 (0x0030 - 0x0000)
struct FAnimationStateEntry final
{
public:
	uint8                                         State;                                             // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22A3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAnimationSetup>                AnimationSetups;                                   // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bOnDemand;                                         // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAdditive;                                         // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22A4[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendTime;                                         // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReturnToPreviousState;                            // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSetNextState;                                     // 0x0021(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         NextState;                                         // 0x0022(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22A5[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPerPlatformInt                        MaximumNumberOfConcurrentInstances;                // 0x0024(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         WiggleTimePercentage;                              // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRequiresCurves;                                   // 0x002C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22A6[0x3];                                     // 0x002D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimationStateEntry) == 0x000008, "Wrong alignment on FAnimationStateEntry");
static_assert(sizeof(FAnimationStateEntry) == 0x000030, "Wrong size on FAnimationStateEntry");
static_assert(offsetof(FAnimationStateEntry, State) == 0x000000, "Member 'FAnimationStateEntry::State' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, AnimationSetups) == 0x000008, "Member 'FAnimationStateEntry::AnimationSetups' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, bOnDemand) == 0x000018, "Member 'FAnimationStateEntry::bOnDemand' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, bAdditive) == 0x000019, "Member 'FAnimationStateEntry::bAdditive' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, BlendTime) == 0x00001C, "Member 'FAnimationStateEntry::BlendTime' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, bReturnToPreviousState) == 0x000020, "Member 'FAnimationStateEntry::bReturnToPreviousState' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, bSetNextState) == 0x000021, "Member 'FAnimationStateEntry::bSetNextState' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, NextState) == 0x000022, "Member 'FAnimationStateEntry::NextState' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, MaximumNumberOfConcurrentInstances) == 0x000024, "Member 'FAnimationStateEntry::MaximumNumberOfConcurrentInstances' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, WiggleTimePercentage) == 0x000028, "Member 'FAnimationStateEntry::WiggleTimePercentage' has a wrong offset!");
static_assert(offsetof(FAnimationStateEntry, bRequiresCurves) == 0x00002C, "Member 'FAnimationStateEntry::bRequiresCurves' has a wrong offset!");

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// 0x0038 (0x0038 - 0x0000)
struct FPerSkeletonAnimationSharingSetup final
{
public:
	class USkeleton*                              Skeleton;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x0008(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimSharingTransitionInstance> BlendAnimBlueprint;                                // 0x0010(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;                             // 0x0018(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimationSharingStateProcessor> StateProcessorClass;                               // 0x0020(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimationStateEntry>           AnimationStates;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPerSkeletonAnimationSharingSetup) == 0x000008, "Wrong alignment on FPerSkeletonAnimationSharingSetup");
static_assert(sizeof(FPerSkeletonAnimationSharingSetup) == 0x000038, "Wrong size on FPerSkeletonAnimationSharingSetup");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, Skeleton) == 0x000000, "Member 'FPerSkeletonAnimationSharingSetup::Skeleton' has a wrong offset!");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, SkeletalMesh) == 0x000008, "Member 'FPerSkeletonAnimationSharingSetup::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, BlendAnimBlueprint) == 0x000010, "Member 'FPerSkeletonAnimationSharingSetup::BlendAnimBlueprint' has a wrong offset!");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AdditiveAnimBlueprint) == 0x000018, "Member 'FPerSkeletonAnimationSharingSetup::AdditiveAnimBlueprint' has a wrong offset!");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, StateProcessorClass) == 0x000020, "Member 'FPerSkeletonAnimationSharingSetup::StateProcessorClass' has a wrong offset!");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AnimationStates) == 0x000028, "Member 'FPerSkeletonAnimationSharingSetup::AnimationStates' has a wrong offset!");

// ScriptStruct AnimationSharing.AnimationSharingScalability
// 0x0010 (0x0010 - 0x0000)
struct FAnimationSharingScalability final
{
public:
	struct FPerPlatformBool                       UseBlendTransitions;                               // 0x0000(0x0001)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_22A7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPerPlatformFloat                      BlendSignificanceValue;                            // 0x0004(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                        MaximumNumberConcurrentBlends;                     // 0x0008(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformFloat                      TickSignificanceValue;                             // 0x000C(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAnimationSharingScalability) == 0x000004, "Wrong alignment on FAnimationSharingScalability");
static_assert(sizeof(FAnimationSharingScalability) == 0x000010, "Wrong size on FAnimationSharingScalability");
static_assert(offsetof(FAnimationSharingScalability, UseBlendTransitions) == 0x000000, "Member 'FAnimationSharingScalability::UseBlendTransitions' has a wrong offset!");
static_assert(offsetof(FAnimationSharingScalability, BlendSignificanceValue) == 0x000004, "Member 'FAnimationSharingScalability::BlendSignificanceValue' has a wrong offset!");
static_assert(offsetof(FAnimationSharingScalability, MaximumNumberConcurrentBlends) == 0x000008, "Member 'FAnimationSharingScalability::MaximumNumberConcurrentBlends' has a wrong offset!");
static_assert(offsetof(FAnimationSharingScalability, TickSignificanceValue) == 0x00000C, "Member 'FAnimationSharingScalability::TickSignificanceValue' has a wrong offset!");

// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// 0x0008 (0x0030 - 0x0028)
struct FTickAnimationSharingFunction final : public FTickFunction
{
public:
	uint8                                         Pad_22A8[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTickAnimationSharingFunction) == 0x000008, "Wrong alignment on FTickAnimationSharingFunction");
static_assert(sizeof(FTickAnimationSharingFunction) == 0x000030, "Wrong size on FTickAnimationSharingFunction");

}

