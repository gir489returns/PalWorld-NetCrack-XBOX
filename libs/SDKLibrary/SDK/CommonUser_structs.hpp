#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonUser

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum CommonUser.ECommonUserAvailability
// NumValues: 0x0007
enum class ECommonUserAvailability : uint8
{
	Unknown                                  = 0,
	NowAvailable                             = 1,
	PossiblyAvailable                        = 2,
	CurrentlyUnavailable                     = 3,
	AlwaysUnavailable                        = 4,
	Invalid                                  = 5,
	ECommonUserAvailability_MAX              = 6,
};

// Enum CommonUser.ECommonUserPrivilege
// NumValues: 0x0008
enum class ECommonUserPrivilege : uint8
{
	CanPlay                                  = 0,
	CanPlayOnline                            = 1,
	CanCommunicateViaTextOnline              = 2,
	CanCommunicateViaVoiceOnline             = 3,
	CanUseUserGeneratedContent               = 4,
	CanUseCrossPlay                          = 5,
	Invalid_Count                            = 6,
	ECommonUserPrivilege_MAX                 = 7,
};

// Enum CommonUser.ECommonUserOnlineContext
// NumValues: 0x0008
enum class ECommonUserOnlineContext : uint8
{
	Game                                     = 0,
	Default                                  = 1,
	Service                                  = 2,
	ServiceOrDefault                         = 3,
	Platform                                 = 4,
	PlatformOrDefault                        = 5,
	Invalid                                  = 6,
	ECommonUserOnlineContext_MAX             = 7,
};

// Enum CommonUser.ECommonUserInitializationState
// NumValues: 0x0008
enum class ECommonUserInitializationState : uint8
{
	Unknown                                  = 0,
	DoingInitialLogin                        = 1,
	DoingNetworkLogin                        = 2,
	FailedtoLogin                            = 3,
	LoggedInOnline                           = 4,
	LoggedInLocalOnly                        = 5,
	Invalid                                  = 6,
	ECommonUserInitializationState_MAX       = 7,
};

// Enum CommonUser.ECommonUserPrivilegeResult
// NumValues: 0x000B
enum class ECommonUserPrivilegeResult : uint8
{
	Unknown                                  = 0,
	Available                                = 1,
	UserNotLoggedIn                          = 2,
	LicenseInvalid                           = 3,
	VersionOutdated                          = 4,
	NetworkConnectionUnavailable             = 5,
	AgeRestricted                            = 6,
	AccountTypeRestricted                    = 7,
	AccountUseRestricted                     = 8,
	PlatformFailure                          = 9,
	ECommonUserPrivilegeResult_MAX           = 10,
};

// Enum CommonUser.ECommonSessionOnlineMode
// NumValues: 0x0004
enum class ECommonSessionOnlineMode : uint8
{
	Offline                                  = 0,
	LAN                                      = 1,
	Online                                   = 2,
	ECommonSessionOnlineMode_MAX             = 3,
};

// ScriptStruct CommonUser.OnlineResultInformation
// 0x0030 (0x0030 - 0x0000)
struct FOnlineResultInformation final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorId;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ErrorText;                                         // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
static_assert(alignof(FOnlineResultInformation) == 0x000008, "Wrong alignment on FOnlineResultInformation");
static_assert(sizeof(FOnlineResultInformation) == 0x000030, "Wrong size on FOnlineResultInformation");
static_assert(offsetof(FOnlineResultInformation, bWasSuccessful) == 0x000000, "Member 'FOnlineResultInformation::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(FOnlineResultInformation, ErrorId) == 0x000008, "Member 'FOnlineResultInformation::ErrorId' has a wrong offset!");
static_assert(offsetof(FOnlineResultInformation, ErrorText) == 0x000018, "Member 'FOnlineResultInformation::ErrorText' has a wrong offset!");

// ScriptStruct CommonUser.CommonUserInitializeParams
// 0x0028 (0x0028 - 0x0000)
struct FCommonUserInitializeParams final
{
public:
	int32                                         LocalPlayerIndex;                                  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ControllerId;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputDeviceId                         PrimaryInputDevice;                                // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlatformUserId                        PlatformUser;                                      // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonUserPrivilege                          RequestedPrivilege;                                // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonUserOnlineContext                      OnlineContext;                                     // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanCreateNewLocalPlayer;                          // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanUseGuestLogin;                                 // 0x0013(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuppressLoginErrors;                              // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCommonUserInfo* UserInfo, bool bSuccess, class FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext)> OnUserInitializeComplete;                          // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCommonUserInitializeParams) == 0x000004, "Wrong alignment on FCommonUserInitializeParams");
static_assert(sizeof(FCommonUserInitializeParams) == 0x000028, "Wrong size on FCommonUserInitializeParams");
static_assert(offsetof(FCommonUserInitializeParams, LocalPlayerIndex) == 0x000000, "Member 'FCommonUserInitializeParams::LocalPlayerIndex' has a wrong offset!");
static_assert(offsetof(FCommonUserInitializeParams, ControllerId) == 0x000004, "Member 'FCommonUserInitializeParams::ControllerId' has a wrong offset!");
static_assert(offsetof(FCommonUserInitializeParams, PrimaryInputDevice) == 0x000008, "Member 'FCommonUserInitializeParams::PrimaryInputDevice' has a wrong offset!");
static_assert(offsetof(FCommonUserInitializeParams, PlatformUser) == 0x00000C, "Member 'FCommonUserInitializeParams::PlatformUser' has a wrong offset!");
static_assert(offsetof(FCommonUserInitializeParams, RequestedPrivilege) == 0x000010, "Member 'FCommonUserInitializeParams::RequestedPrivilege' has a wrong offset!");
static_assert(offsetof(FCommonUserInitializeParams, OnlineContext) == 0x000011, "Member 'FCommonUserInitializeParams::OnlineContext' has a wrong offset!");
static_assert(offsetof(FCommonUserInitializeParams, bCanCreateNewLocalPlayer) == 0x000012, "Member 'FCommonUserInitializeParams::bCanCreateNewLocalPlayer' has a wrong offset!");
static_assert(offsetof(FCommonUserInitializeParams, bCanUseGuestLogin) == 0x000013, "Member 'FCommonUserInitializeParams::bCanUseGuestLogin' has a wrong offset!");
static_assert(offsetof(FCommonUserInitializeParams, bSuppressLoginErrors) == 0x000014, "Member 'FCommonUserInitializeParams::bSuppressLoginErrors' has a wrong offset!");
static_assert(offsetof(FCommonUserInitializeParams, OnUserInitializeComplete) == 0x000018, "Member 'FCommonUserInitializeParams::OnUserInitializeComplete' has a wrong offset!");

}

