#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WazaButton

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WazaButton.WBP_WazaButton_C
// 0x0100 (0x0378 - 0x0278)
class UWBP_WazaButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Border;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_85;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DamageText;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ElementBG;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               FocusFrame;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_116;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SkillLearnedIndicator;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SkillNameText;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsLearned;                                        // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B80[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLearnedStateChanged;                             // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   WazaID;                                            // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   WazaName;                                          // 0x0300(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	EPalWazaID                                    WazaEnum;                                          // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4B81[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPalElementType, TSoftObjectPtr<class UTexture2D>> IconMap;                                           // 0x0320(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Damage;                                            // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EPalElementType                               Element;                                           // 0x0374(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void SetLearnedState(bool Param_bIsLearned);
	void PreConstruct(bool IsDesignTime);
	void OnLearnedStateChanged__DelegateSignature(bool Param_bIsLearned, class UWBP_WazaButton_C* WazaElement);
	void ExecuteUbergraph_WBP_WazaButton(int32 EntryPoint);
	void Construct();
	void BndEvt__WBP_WazaButton_Button_85_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_WazaButton_Button_85_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_WazaButton_Button_85_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WazaButton_C">();
	}
	static class UWBP_WazaButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WazaButton_C>();
	}
};
static_assert(alignof(UWBP_WazaButton_C) == 0x000008, "Wrong alignment on UWBP_WazaButton_C");
static_assert(sizeof(UWBP_WazaButton_C) == 0x000378, "Wrong size on UWBP_WazaButton_C");
static_assert(offsetof(UWBP_WazaButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_WazaButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, Border) == 0x000280, "Member 'UWBP_WazaButton_C::Border' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, Button_85) == 0x000288, "Member 'UWBP_WazaButton_C::Button_85' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, DamageText) == 0x000290, "Member 'UWBP_WazaButton_C::DamageText' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, ElementBG) == 0x000298, "Member 'UWBP_WazaButton_C::ElementBG' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, FocusFrame) == 0x0002A0, "Member 'UWBP_WazaButton_C::FocusFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, Image) == 0x0002A8, "Member 'UWBP_WazaButton_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, Image_1) == 0x0002B0, "Member 'UWBP_WazaButton_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, Image_2) == 0x0002B8, "Member 'UWBP_WazaButton_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, Image_3) == 0x0002C0, "Member 'UWBP_WazaButton_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, Image_116) == 0x0002C8, "Member 'UWBP_WazaButton_C::Image_116' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, SkillLearnedIndicator) == 0x0002D0, "Member 'UWBP_WazaButton_C::SkillLearnedIndicator' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, SkillNameText) == 0x0002D8, "Member 'UWBP_WazaButton_C::SkillNameText' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, bIsLearned) == 0x0002E0, "Member 'UWBP_WazaButton_C::bIsLearned' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, OnLearnedStateChanged) == 0x0002E8, "Member 'UWBP_WazaButton_C::OnLearnedStateChanged' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, WazaID) == 0x0002F8, "Member 'UWBP_WazaButton_C::WazaID' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, WazaName) == 0x000300, "Member 'UWBP_WazaButton_C::WazaName' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, WazaEnum) == 0x000318, "Member 'UWBP_WazaButton_C::WazaEnum' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, IconMap) == 0x000320, "Member 'UWBP_WazaButton_C::IconMap' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, Damage) == 0x000370, "Member 'UWBP_WazaButton_C::Damage' has a wrong offset!");
static_assert(offsetof(UWBP_WazaButton_C, Element) == 0x000374, "Member 'UWBP_WazaButton_C::Element' has a wrong offset!");

}
