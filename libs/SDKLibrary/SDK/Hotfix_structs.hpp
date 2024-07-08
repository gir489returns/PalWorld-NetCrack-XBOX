#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hotfix

#include "Basic.hpp"


namespace SDK
{

// Enum Hotfix.EHotfixResult
// NumValues: 0x0006
enum class EHotfixResult : uint8
{
	Failed                                   = 0,
	Success                                  = 1,
	SuccessNoChange                          = 2,
	SuccessNeedsReload                       = 3,
	SuccessNeedsRelaunch                     = 4,
	EHotfixResult_MAX                        = 5,
};

// Enum Hotfix.EUpdateState
// NumValues: 0x0009
enum class EUpdateState : uint8
{
	UpdateIdle                               = 0,
	UpdatePending                            = 1,
	CheckingForPatch                         = 2,
	DetectingPlatformEnvironment             = 3,
	CheckingForHotfix                        = 4,
	WaitingOnInitialLoad                     = 5,
	InitialLoadComplete                      = 6,
	UpdateComplete                           = 7,
	EUpdateState_MAX                         = 8,
};

// Enum Hotfix.EUpdateCompletionStatus
// NumValues: 0x000A
enum class EUpdateCompletionStatus : uint8
{
	UpdateUnknown                            = 0,
	UpdateSuccess                            = 1,
	UpdateSuccess_NoChange                   = 2,
	UpdateSuccess_NeedsReload                = 3,
	UpdateSuccess_NeedsRelaunch              = 4,
	UpdateSuccess_NeedsPatch                 = 5,
	UpdateFailure_PatchCheck                 = 6,
	UpdateFailure_HotfixCheck                = 7,
	UpdateFailure_NotLoggedIn                = 8,
	EUpdateCompletionStatus_MAX              = 9,
};

// ScriptStruct Hotfix.UpdateContextDefinition
// 0x0068 (0x0068 - 0x0000)
struct FUpdateContextDefinition final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0010(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCheckAvailabilityOnly;                            // 0x0011(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPatchCheckEnabled;                                // 0x0012(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPlatformEnvironmentDetectionEnabled;              // 0x0013(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class FString>                           AdditionalTags;                                    // 0x0018(0x0050)(Config, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUpdateContextDefinition) == 0x000008, "Wrong alignment on FUpdateContextDefinition");
static_assert(sizeof(FUpdateContextDefinition) == 0x000068, "Wrong size on FUpdateContextDefinition");
static_assert(offsetof(FUpdateContextDefinition, Name) == 0x000000, "Member 'FUpdateContextDefinition::Name' has a wrong offset!");
static_assert(offsetof(FUpdateContextDefinition, bEnabled) == 0x000010, "Member 'FUpdateContextDefinition::bEnabled' has a wrong offset!");
static_assert(offsetof(FUpdateContextDefinition, bCheckAvailabilityOnly) == 0x000011, "Member 'FUpdateContextDefinition::bCheckAvailabilityOnly' has a wrong offset!");
static_assert(offsetof(FUpdateContextDefinition, bPatchCheckEnabled) == 0x000012, "Member 'FUpdateContextDefinition::bPatchCheckEnabled' has a wrong offset!");
static_assert(offsetof(FUpdateContextDefinition, bPlatformEnvironmentDetectionEnabled) == 0x000013, "Member 'FUpdateContextDefinition::bPlatformEnvironmentDetectionEnabled' has a wrong offset!");
static_assert(offsetof(FUpdateContextDefinition, AdditionalTags) == 0x000018, "Member 'FUpdateContextDefinition::AdditionalTags' has a wrong offset!");

}

