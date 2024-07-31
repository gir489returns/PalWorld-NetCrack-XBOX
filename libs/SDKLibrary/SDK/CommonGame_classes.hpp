#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonGame

#include "Basic.hpp"

#include "CommonUser_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "CommonInput_structs.hpp"
#include "ModularGameplayActors_classes.hpp"
#include "InputCore_structs.hpp"
#include "CommonGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// Class CommonGame.AsyncAction_CreateWidgetAsync
// 0x0078 (0x00A8 - 0x0030)
class UAsyncAction_CreateWidgetAsync final : public UCancellableAsyncAction
{
public:
	FMulticastInlineDelegateProperty_             OnComplete;                                        // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x68];                                      // 0x0040(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UAsyncAction_CreateWidgetAsync* CreateWidgetAsync(class UObject* WorldContextObject, TSoftClassPtr<class UClass> UserWidgetSoftClass, class APlayerController* OwningPlayer, bool bSuspendInputUntilComplete);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncAction_CreateWidgetAsync">();
	}
	static class UAsyncAction_CreateWidgetAsync* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncAction_CreateWidgetAsync>();
	}
};
static_assert(alignof(UAsyncAction_CreateWidgetAsync) == 0x000008, "Wrong alignment on UAsyncAction_CreateWidgetAsync");
static_assert(sizeof(UAsyncAction_CreateWidgetAsync) == 0x0000A8, "Wrong size on UAsyncAction_CreateWidgetAsync");
static_assert(offsetof(UAsyncAction_CreateWidgetAsync, OnComplete) == 0x000030, "Member 'UAsyncAction_CreateWidgetAsync::OnComplete' has a wrong offset!");

// Class CommonGame.AsyncAction_PushContentToLayerForPlayer
// 0x0078 (0x00A8 - 0x0030)
class UAsyncAction_PushContentToLayerForPlayer final : public UCancellableAsyncAction
{
public:
	FMulticastInlineDelegateProperty_             BeforePush;                                        // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             AfterPush;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x58];                                      // 0x0050(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UAsyncAction_PushContentToLayerForPlayer* PushContentToLayerForPlayer(class APlayerController* OwningPlayer, TSoftClassPtr<class UClass> WidgetClass, const struct FGameplayTag& LayerName, bool bSuspendInputUntilComplete);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncAction_PushContentToLayerForPlayer">();
	}
	static class UAsyncAction_PushContentToLayerForPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncAction_PushContentToLayerForPlayer>();
	}
};
static_assert(alignof(UAsyncAction_PushContentToLayerForPlayer) == 0x000008, "Wrong alignment on UAsyncAction_PushContentToLayerForPlayer");
static_assert(sizeof(UAsyncAction_PushContentToLayerForPlayer) == 0x0000A8, "Wrong size on UAsyncAction_PushContentToLayerForPlayer");
static_assert(offsetof(UAsyncAction_PushContentToLayerForPlayer, BeforePush) == 0x000030, "Member 'UAsyncAction_PushContentToLayerForPlayer::BeforePush' has a wrong offset!");
static_assert(offsetof(UAsyncAction_PushContentToLayerForPlayer, AfterPush) == 0x000040, "Member 'UAsyncAction_PushContentToLayerForPlayer::AfterPush' has a wrong offset!");

// Class CommonGame.AsyncAction_ShowConfirmation
// 0x0028 (0x0058 - 0x0030)
class UAsyncAction_ShowConfirmation final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             OnResult;                                          // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                                WorldContextObject;                                // 0x0040(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULocalPlayer*                           TargetLocalPlayer;                                 // 0x0048(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonGameDialogDescriptor*            Descriptor;                                        // 0x0050(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UAsyncAction_ShowConfirmation* ShowConfirmationCustom(class UObject* InWorldContextObject, class UCommonGameDialogDescriptor* Param_Descriptor);
	static class UAsyncAction_ShowConfirmation* ShowConfirmationOkCancel(class UObject* InWorldContextObject, const class FText& Title, const class FText& Message);
	static class UAsyncAction_ShowConfirmation* ShowConfirmationYesNo(class UObject* InWorldContextObject, const class FText& Title, const class FText& Message);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncAction_ShowConfirmation">();
	}
	static class UAsyncAction_ShowConfirmation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncAction_ShowConfirmation>();
	}
};
static_assert(alignof(UAsyncAction_ShowConfirmation) == 0x000008, "Wrong alignment on UAsyncAction_ShowConfirmation");
static_assert(sizeof(UAsyncAction_ShowConfirmation) == 0x000058, "Wrong size on UAsyncAction_ShowConfirmation");
static_assert(offsetof(UAsyncAction_ShowConfirmation, OnResult) == 0x000030, "Member 'UAsyncAction_ShowConfirmation::OnResult' has a wrong offset!");
static_assert(offsetof(UAsyncAction_ShowConfirmation, WorldContextObject) == 0x000040, "Member 'UAsyncAction_ShowConfirmation::WorldContextObject' has a wrong offset!");
static_assert(offsetof(UAsyncAction_ShowConfirmation, TargetLocalPlayer) == 0x000048, "Member 'UAsyncAction_ShowConfirmation::TargetLocalPlayer' has a wrong offset!");
static_assert(offsetof(UAsyncAction_ShowConfirmation, Descriptor) == 0x000050, "Member 'UAsyncAction_ShowConfirmation::Descriptor' has a wrong offset!");

// Class CommonGame.CommonGameInstance
// 0x0010 (0x01D0 - 0x01C0)
class UCommonGameInstance final : public UGameInstance
{
public:
	uint8                                         Pad_1C0[0x8];                                      // 0x01C0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonSession_SearchResult*            RequestedSession;                                  // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void HandlePrivilegeChanged(const class UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability);
	void HandleSystemMessage(const struct FGameplayTag& MessageType, const class FText& Title, const class FText& Message);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonGameInstance">();
	}
	static class UCommonGameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonGameInstance>();
	}
};
static_assert(alignof(UCommonGameInstance) == 0x000008, "Wrong alignment on UCommonGameInstance");
static_assert(sizeof(UCommonGameInstance) == 0x0001D0, "Wrong size on UCommonGameInstance");
static_assert(offsetof(UCommonGameInstance, RequestedSession) == 0x0001C8, "Member 'UCommonGameInstance::RequestedSession' has a wrong offset!");

// Class CommonGame.CommonLocalPlayer
// 0x0050 (0x02E8 - 0x0298)
class UCommonLocalPlayer : public ULocalPlayer
{
public:
	uint8                                         Pad_298[0x50];                                     // 0x0298(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonLocalPlayer">();
	}
	static class UCommonLocalPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonLocalPlayer>();
	}
};
static_assert(alignof(UCommonLocalPlayer) == 0x000008, "Wrong alignment on UCommonLocalPlayer");
static_assert(sizeof(UCommonLocalPlayer) == 0x0002E8, "Wrong size on UCommonLocalPlayer");

// Class CommonGame.CommonPlayerController
// 0x0000 (0x0850 - 0x0850)
class ACommonPlayerController : public AModularPlayerController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonPlayerController">();
	}
	static class ACommonPlayerController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACommonPlayerController>();
	}
};
static_assert(alignof(ACommonPlayerController) == 0x000008, "Wrong alignment on ACommonPlayerController");
static_assert(sizeof(ACommonPlayerController) == 0x000850, "Wrong size on ACommonPlayerController");

// Class CommonGame.CommonPlayerInputKey
// 0x0450 (0x06F0 - 0x02A0)
class UCommonPlayerInputKey final : public UCommonUserWidget
{
public:
	class FName                                   BoundAction;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AxisScale;                                         // 0x02A8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   BoundKeyFallback;                                  // 0x02B0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonInputType                              InputTypeOverride;                                 // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C9[0x3];                                      // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   PresetNameOverride;                                // 0x02CC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonKeybindForcedHoldStatus                ForcedHoldKeybindStatus;                           // 0x02D4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsHoldKeybind;                                    // 0x02D5(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShowKeybindBorder;                                // 0x02D6(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2D7[0x1];                                      // 0x02D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              FrameSize;                                         // 0x02D8(0x0010)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShowTimeCountDown;                                // 0x02E8(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   BoundKey;                                          // 0x02F0(0x0018)(BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_308[0x8];                                      // 0x0308(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            HoldProgressBrush;                                 // 0x0310(0x00D0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                            KeyBindTextBorder;                                 // 0x03E0(0x00D0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                          bShowUnboundStatus;                                // 0x04B0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4B1[0x7];                                      // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         KeyBindTextFont;                                   // 0x04B8(0x0060)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateFontInfo                         CountdownTextFont;                                 // 0x0518(0x0060)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMeasuredText                          CountdownText;                                     // 0x0578(0x0030)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FMeasuredText                          KeybindText;                                       // 0x05A8(0x0030)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FMargin                                KeybindTextPadding;                                // 0x05D8(0x0010)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                              KeybindFrameMinimumSize;                           // 0x05E8(0x0010)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   PercentageMaterialParameterName;                   // 0x05F8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*               ProgressPercentageMID;                             // 0x0600(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_608[0x18];                                     // 0x0608(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CachedKeyBrush;                                    // 0x0620(0x00D0)(Transient, NativeAccessSpecifierPrivate)

public:
	void SetAxisScale(const float NewValue);
	void SetBoundAction(class FName NewBoundAction);
	void SetBoundKey(const struct FKey& NewBoundAction);
	void SetForcedHoldKeybind(bool InForcedHoldKeybind);
	void SetForcedHoldKeybindStatus(ECommonKeybindForcedHoldStatus InForcedHoldKeybindStatus);
	void SetPresetNameOverride(const class FName NewValue);
	void SetShowProgressCountDown(bool bShow);
	void StartHoldProgress(class FName HoldActionName, float HoldDuration);
	void StopHoldProgress(class FName HoldActionName, bool bCompletedSuccessfully);
	void UpdateKeybindWidget();

	bool IsBoundKeyValid() const;
	bool IsHoldKeybind() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonPlayerInputKey">();
	}
	static class UCommonPlayerInputKey* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonPlayerInputKey>();
	}
};
static_assert(alignof(UCommonPlayerInputKey) == 0x000010, "Wrong alignment on UCommonPlayerInputKey");
static_assert(sizeof(UCommonPlayerInputKey) == 0x0006F0, "Wrong size on UCommonPlayerInputKey");
static_assert(offsetof(UCommonPlayerInputKey, BoundAction) == 0x0002A0, "Member 'UCommonPlayerInputKey::BoundAction' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, AxisScale) == 0x0002A8, "Member 'UCommonPlayerInputKey::AxisScale' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, BoundKeyFallback) == 0x0002B0, "Member 'UCommonPlayerInputKey::BoundKeyFallback' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, InputTypeOverride) == 0x0002C8, "Member 'UCommonPlayerInputKey::InputTypeOverride' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, PresetNameOverride) == 0x0002CC, "Member 'UCommonPlayerInputKey::PresetNameOverride' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, ForcedHoldKeybindStatus) == 0x0002D4, "Member 'UCommonPlayerInputKey::ForcedHoldKeybindStatus' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, bIsHoldKeybind) == 0x0002D5, "Member 'UCommonPlayerInputKey::bIsHoldKeybind' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, bShowKeybindBorder) == 0x0002D6, "Member 'UCommonPlayerInputKey::bShowKeybindBorder' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, FrameSize) == 0x0002D8, "Member 'UCommonPlayerInputKey::FrameSize' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, bShowTimeCountDown) == 0x0002E8, "Member 'UCommonPlayerInputKey::bShowTimeCountDown' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, BoundKey) == 0x0002F0, "Member 'UCommonPlayerInputKey::BoundKey' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, HoldProgressBrush) == 0x000310, "Member 'UCommonPlayerInputKey::HoldProgressBrush' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, KeyBindTextBorder) == 0x0003E0, "Member 'UCommonPlayerInputKey::KeyBindTextBorder' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, bShowUnboundStatus) == 0x0004B0, "Member 'UCommonPlayerInputKey::bShowUnboundStatus' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, KeyBindTextFont) == 0x0004B8, "Member 'UCommonPlayerInputKey::KeyBindTextFont' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, CountdownTextFont) == 0x000518, "Member 'UCommonPlayerInputKey::CountdownTextFont' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, CountdownText) == 0x000578, "Member 'UCommonPlayerInputKey::CountdownText' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, KeybindText) == 0x0005A8, "Member 'UCommonPlayerInputKey::KeybindText' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, KeybindTextPadding) == 0x0005D8, "Member 'UCommonPlayerInputKey::KeybindTextPadding' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, KeybindFrameMinimumSize) == 0x0005E8, "Member 'UCommonPlayerInputKey::KeybindFrameMinimumSize' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, PercentageMaterialParameterName) == 0x0005F8, "Member 'UCommonPlayerInputKey::PercentageMaterialParameterName' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, ProgressPercentageMID) == 0x000600, "Member 'UCommonPlayerInputKey::ProgressPercentageMID' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, CachedKeyBrush) == 0x000620, "Member 'UCommonPlayerInputKey::CachedKeyBrush' has a wrong offset!");

// Class CommonGame.CommonUIExtensions
// 0x0000 (0x0028 - 0x0028)
class UCommonUIExtensions final : public UBlueprintFunctionLibrary
{
public:
	static class ULocalPlayer* GetLocalPlayerFromController(class APlayerController* PlayerController);
	static ECommonInputType GetOwningPlayerInputType(const class UUserWidget* WidgetContextObject);
	static bool IsOwningPlayerUsingGamepad(const class UUserWidget* WidgetContextObject);
	static bool IsOwningPlayerUsingTouch(const class UUserWidget* WidgetContextObject);
	static void PopContentFromLayer(class UCommonActivatableWidget* ActivatableWidget);
	static class UCommonActivatableWidget* PushContentToLayer_ForPlayer(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& LayerName, TSubclassOf<class UCommonActivatableWidget> WidgetClass);
	static void PushStreamedContentToLayer_ForPlayer(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& LayerName, TSoftClassPtr<class UClass> WidgetClass);
	static void ResumeInputForPlayer(class APlayerController* PlayerController, class FName SuspendToken);
	static class FName SuspendInputForPlayer(class APlayerController* PlayerController, class FName SuspendReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIExtensions">();
	}
	static class UCommonUIExtensions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIExtensions>();
	}
};
static_assert(alignof(UCommonUIExtensions) == 0x000008, "Wrong alignment on UCommonUIExtensions");
static_assert(sizeof(UCommonUIExtensions) == 0x000028, "Wrong size on UCommonUIExtensions");

// Class CommonGame.GameUIManagerSubsystem
// 0x0038 (0x0068 - 0x0030)
class UGameUIManagerSubsystem : public UGameInstanceSubsystem
{
public:
	class UGameUIPolicy*                          CurrentPolicy;                                     // 0x0030(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UClass>                   DefaultUIPolicyClass;                              // 0x0038(0x0030)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameUIManagerSubsystem">();
	}
	static class UGameUIManagerSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameUIManagerSubsystem>();
	}
};
static_assert(alignof(UGameUIManagerSubsystem) == 0x000008, "Wrong alignment on UGameUIManagerSubsystem");
static_assert(sizeof(UGameUIManagerSubsystem) == 0x000068, "Wrong size on UGameUIManagerSubsystem");
static_assert(offsetof(UGameUIManagerSubsystem, CurrentPolicy) == 0x000030, "Member 'UGameUIManagerSubsystem::CurrentPolicy' has a wrong offset!");
static_assert(offsetof(UGameUIManagerSubsystem, DefaultUIPolicyClass) == 0x000038, "Member 'UGameUIManagerSubsystem::DefaultUIPolicyClass' has a wrong offset!");

// Class CommonGame.GameUIPolicy
// 0x0048 (0x0070 - 0x0028)
class UGameUIPolicy : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   LayoutClass;                                       // 0x0030(0x0030)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FRootViewportLayoutInfo>        RootViewportLayouts;                               // 0x0060(0x0010)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameUIPolicy">();
	}
	static class UGameUIPolicy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameUIPolicy>();
	}
};
static_assert(alignof(UGameUIPolicy) == 0x000008, "Wrong alignment on UGameUIPolicy");
static_assert(sizeof(UGameUIPolicy) == 0x000070, "Wrong size on UGameUIPolicy");
static_assert(offsetof(UGameUIPolicy, LayoutClass) == 0x000030, "Member 'UGameUIPolicy::LayoutClass' has a wrong offset!");
static_assert(offsetof(UGameUIPolicy, RootViewportLayouts) == 0x000060, "Member 'UGameUIPolicy::RootViewportLayouts' has a wrong offset!");

// Class CommonGame.CommonGameDialogDescriptor
// 0x0040 (0x0068 - 0x0028)
class UCommonGameDialogDescriptor final : public UObject
{
public:
	class FText                                   Header;                                            // 0x0028(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   Body;                                              // 0x0040(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FConfirmationDialogAction>      ButtonActions;                                     // 0x0058(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonGameDialogDescriptor">();
	}
	static class UCommonGameDialogDescriptor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonGameDialogDescriptor>();
	}
};
static_assert(alignof(UCommonGameDialogDescriptor) == 0x000008, "Wrong alignment on UCommonGameDialogDescriptor");
static_assert(sizeof(UCommonGameDialogDescriptor) == 0x000068, "Wrong size on UCommonGameDialogDescriptor");
static_assert(offsetof(UCommonGameDialogDescriptor, Header) == 0x000028, "Member 'UCommonGameDialogDescriptor::Header' has a wrong offset!");
static_assert(offsetof(UCommonGameDialogDescriptor, Body) == 0x000040, "Member 'UCommonGameDialogDescriptor::Body' has a wrong offset!");
static_assert(offsetof(UCommonGameDialogDescriptor, ButtonActions) == 0x000058, "Member 'UCommonGameDialogDescriptor::ButtonActions' has a wrong offset!");

// Class CommonGame.CommonGameDialog
// 0x0000 (0x03C8 - 0x03C8)
class UCommonGameDialog final : public UCommonActivatableWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonGameDialog">();
	}
	static class UCommonGameDialog* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonGameDialog>();
	}
};
static_assert(alignof(UCommonGameDialog) == 0x000008, "Wrong alignment on UCommonGameDialog");
static_assert(sizeof(UCommonGameDialog) == 0x0003C8, "Wrong size on UCommonGameDialog");

// Class CommonGame.CommonMessagingSubsystem
// 0x0000 (0x0030 - 0x0030)
class UCommonMessagingSubsystem final : public ULocalPlayerSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonMessagingSubsystem">();
	}
	static class UCommonMessagingSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonMessagingSubsystem>();
	}
};
static_assert(alignof(UCommonMessagingSubsystem) == 0x000008, "Wrong alignment on UCommonMessagingSubsystem");
static_assert(sizeof(UCommonMessagingSubsystem) == 0x000030, "Wrong size on UCommonMessagingSubsystem");

// Class CommonGame.PrimaryGameLayout
// 0x0068 (0x0308 - 0x02A0)
class UPrimaryGameLayout : public UCommonUserWidget
{
public:
	uint8                                         Pad_2A0[0x18];                                     // 0x02A0(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGameplayTag, class UCommonActivatableWidgetContainerBase*> Layers;                                            // 0x02B8(0x0050)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	void RegisterLayer(const struct FGameplayTag& LayerTag, class UCommonActivatableWidgetContainerBase* LayerWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrimaryGameLayout">();
	}
	static class UPrimaryGameLayout* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrimaryGameLayout>();
	}
};
static_assert(alignof(UPrimaryGameLayout) == 0x000008, "Wrong alignment on UPrimaryGameLayout");
static_assert(sizeof(UPrimaryGameLayout) == 0x000308, "Wrong size on UPrimaryGameLayout");
static_assert(offsetof(UPrimaryGameLayout, Layers) == 0x0002B8, "Member 'UPrimaryGameLayout::Layers' has a wrong offset!");

}

