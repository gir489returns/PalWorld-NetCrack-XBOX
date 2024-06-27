#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonLoadingScreen

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class CommonLoadingScreen.CommonLoadingScreenSettings
// 0x0038 (0x0070 - 0x0038)
class UCommonLoadingScreenSettings final : public UDeveloperSettingsBackedByCVars
{
public:
	struct FSoftClassPath                         LoadingScreenWidget;                               // 0x0038(0x0020)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LoadingScreenZOrder;                               // 0x0058(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HoldLoadingScreenAdditionalSecs;                   // 0x005C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LoadingScreenHeartbeatHangDuration;                // 0x0060(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LogLoadingScreenHeartbeatInterval;                 // 0x0064(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          LogLoadingScreenReasonEveryFrame;                  // 0x0068(0x0001)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ForceLoadingScreenVisible;                         // 0x0069(0x0001)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HoldLoadingScreenAdditionalSecsEvenInEditor;       // 0x006A(0x0001)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ForceTickLoadingScreenEvenInEditor;                // 0x006B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B85[0x4];                                     // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonLoadingScreenSettings">();
	}
	static class UCommonLoadingScreenSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonLoadingScreenSettings>();
	}
};
static_assert(alignof(UCommonLoadingScreenSettings) == 0x000008, "Wrong alignment on UCommonLoadingScreenSettings");
static_assert(sizeof(UCommonLoadingScreenSettings) == 0x000070, "Wrong size on UCommonLoadingScreenSettings");
static_assert(offsetof(UCommonLoadingScreenSettings, LoadingScreenWidget) == 0x000038, "Member 'UCommonLoadingScreenSettings::LoadingScreenWidget' has a wrong offset!");
static_assert(offsetof(UCommonLoadingScreenSettings, LoadingScreenZOrder) == 0x000058, "Member 'UCommonLoadingScreenSettings::LoadingScreenZOrder' has a wrong offset!");
static_assert(offsetof(UCommonLoadingScreenSettings, HoldLoadingScreenAdditionalSecs) == 0x00005C, "Member 'UCommonLoadingScreenSettings::HoldLoadingScreenAdditionalSecs' has a wrong offset!");
static_assert(offsetof(UCommonLoadingScreenSettings, LoadingScreenHeartbeatHangDuration) == 0x000060, "Member 'UCommonLoadingScreenSettings::LoadingScreenHeartbeatHangDuration' has a wrong offset!");
static_assert(offsetof(UCommonLoadingScreenSettings, LogLoadingScreenHeartbeatInterval) == 0x000064, "Member 'UCommonLoadingScreenSettings::LogLoadingScreenHeartbeatInterval' has a wrong offset!");
static_assert(offsetof(UCommonLoadingScreenSettings, LogLoadingScreenReasonEveryFrame) == 0x000068, "Member 'UCommonLoadingScreenSettings::LogLoadingScreenReasonEveryFrame' has a wrong offset!");
static_assert(offsetof(UCommonLoadingScreenSettings, ForceLoadingScreenVisible) == 0x000069, "Member 'UCommonLoadingScreenSettings::ForceLoadingScreenVisible' has a wrong offset!");
static_assert(offsetof(UCommonLoadingScreenSettings, HoldLoadingScreenAdditionalSecsEvenInEditor) == 0x00006A, "Member 'UCommonLoadingScreenSettings::HoldLoadingScreenAdditionalSecsEvenInEditor' has a wrong offset!");
static_assert(offsetof(UCommonLoadingScreenSettings, ForceTickLoadingScreenEvenInEditor) == 0x00006B, "Member 'UCommonLoadingScreenSettings::ForceTickLoadingScreenEvenInEditor' has a wrong offset!");

// Class CommonLoadingScreen.LoadingProcessInterface
// 0x0000 (0x0028 - 0x0028)
class ILoadingProcessInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingProcessInterface">();
	}
	static class ILoadingProcessInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ILoadingProcessInterface>();
	}
};
static_assert(alignof(ILoadingProcessInterface) == 0x000008, "Wrong alignment on ILoadingProcessInterface");
static_assert(sizeof(ILoadingProcessInterface) == 0x000028, "Wrong size on ILoadingProcessInterface");

// Class CommonLoadingScreen.LoadingProcessTask
// 0x0018 (0x0040 - 0x0028)
class ULoadingProcessTask final : public UObject
{
public:
	uint8                                         Pad_1B86[0x18];                                    // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class ULoadingProcessTask* CreateLoadingScreenProcessTask(class UObject* WorldContextObject, const class FString& ShowLoadingScreenReason);

	void SetShowLoadingScreenReason(const class FString& InReason);
	void Unregister();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingProcessTask">();
	}
	static class ULoadingProcessTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingProcessTask>();
	}
};
static_assert(alignof(ULoadingProcessTask) == 0x000008, "Wrong alignment on ULoadingProcessTask");
static_assert(sizeof(ULoadingProcessTask) == 0x000040, "Wrong size on ULoadingProcessTask");

// Class CommonLoadingScreen.LoadingScreenManager
// 0x0080 (0x00B0 - 0x0030)
class ULoadingScreenManager final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_1B87[0x80];                                    // 0x0030(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FString GetDebugReasonForShowingOrHidingLoadingScreen() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingScreenManager">();
	}
	static class ULoadingScreenManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingScreenManager>();
	}
};
static_assert(alignof(ULoadingScreenManager) == 0x000008, "Wrong alignment on ULoadingScreenManager");
static_assert(sizeof(ULoadingScreenManager) == 0x0000B0, "Wrong size on ULoadingScreenManager");

}

