#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TitleSaveDataButton_OLD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TitleSaveDataButton_OLD.WBP_TitleSaveDataButton_OLD_C
// 0x0068 (0x02E0 - 0x0278)
class UWBP_TitleSaveDataButton_OLD_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_304;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_23;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedSaveDataButton;                           // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 WorldSaveDirectoryName;                            // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FPalWorldBaseInfoSaveData              WorldBaseInfo;                                     // 0x02B8(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void OnClickedSaveDataButton__DelegateSignature(const class FString& Param_WorldSaveDirectoryName);
	void ExecuteUbergraph_WBP_TitleSaveDataButton_OLD(int32 EntryPoint);
	void Construct();
	void BndEvt__WBP_TitleFriendButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TitleSaveDataButton_OLD_C">();
	}
	static class UWBP_TitleSaveDataButton_OLD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TitleSaveDataButton_OLD_C>();
	}
};
static_assert(alignof(UWBP_TitleSaveDataButton_OLD_C) == 0x000008, "Wrong alignment on UWBP_TitleSaveDataButton_OLD_C");
static_assert(sizeof(UWBP_TitleSaveDataButton_OLD_C) == 0x0002E0, "Wrong size on UWBP_TitleSaveDataButton_OLD_C");
static_assert(offsetof(UWBP_TitleSaveDataButton_OLD_C, UberGraphFrame) == 0x000278, "Member 'UWBP_TitleSaveDataButton_OLD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TitleSaveDataButton_OLD_C, BP_PalTextBlock_C_304) == 0x000280, "Member 'UWBP_TitleSaveDataButton_OLD_C::BP_PalTextBlock_C_304' has a wrong offset!");
static_assert(offsetof(UWBP_TitleSaveDataButton_OLD_C, Image_23) == 0x000288, "Member 'UWBP_TitleSaveDataButton_OLD_C::Image_23' has a wrong offset!");
static_assert(offsetof(UWBP_TitleSaveDataButton_OLD_C, WBP_PalCommonButton) == 0x000290, "Member 'UWBP_TitleSaveDataButton_OLD_C::WBP_PalCommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_TitleSaveDataButton_OLD_C, OnClickedSaveDataButton) == 0x000298, "Member 'UWBP_TitleSaveDataButton_OLD_C::OnClickedSaveDataButton' has a wrong offset!");
static_assert(offsetof(UWBP_TitleSaveDataButton_OLD_C, WorldSaveDirectoryName) == 0x0002A8, "Member 'UWBP_TitleSaveDataButton_OLD_C::WorldSaveDirectoryName' has a wrong offset!");
static_assert(offsetof(UWBP_TitleSaveDataButton_OLD_C, WorldBaseInfo) == 0x0002B8, "Member 'UWBP_TitleSaveDataButton_OLD_C::WorldBaseInfo' has a wrong offset!");

}

