#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalKeyGuideIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C
// 0x0078 (0x0480 - 0x0408)
class UWBP_PalKeyGuideIcon_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalUIActionWidgetBase*                 PalUIActionWidgetBase_24;                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction     bindActionName;                                    // 0x0420(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TMap<ECommonInputType, struct FSlateBrush>    OverrideImageMap;                                  // 0x0428(0x0050)(Edit, BlueprintVisible)
	bool                                          EnableOverrideImage;                               // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void Construct();
	void ExecuteUbergraph_WBP_PalKeyGuideIcon(int32 EntryPoint);
	void OnInitialized();
	void OverrideImage();
	void OverrideInputType(ECommonInputType InputType);
	void SetInputAction(class FName ActionName);
	void SetOverrideSize(const struct FVector2D& Size);
	void UpdateOverrideImage(const struct FPalKeyConfigSettings& PrevSettings, const struct FPalKeyConfigSettings& NewSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalKeyGuideIcon_C">();
	}
	static class UWBP_PalKeyGuideIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalKeyGuideIcon_C>();
	}
};
static_assert(alignof(UWBP_PalKeyGuideIcon_C) == 0x000008, "Wrong alignment on UWBP_PalKeyGuideIcon_C");
static_assert(sizeof(UWBP_PalKeyGuideIcon_C) == 0x000480, "Wrong size on UWBP_PalKeyGuideIcon_C");
static_assert(offsetof(UWBP_PalKeyGuideIcon_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalKeyGuideIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalKeyGuideIcon_C, PalUIActionWidgetBase_24) == 0x000410, "Member 'UWBP_PalKeyGuideIcon_C::PalUIActionWidgetBase_24' has a wrong offset!");
static_assert(offsetof(UWBP_PalKeyGuideIcon_C, SizeBox_0) == 0x000418, "Member 'UWBP_PalKeyGuideIcon_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalKeyGuideIcon_C, bindActionName) == 0x000420, "Member 'UWBP_PalKeyGuideIcon_C::bindActionName' has a wrong offset!");
static_assert(offsetof(UWBP_PalKeyGuideIcon_C, OverrideImageMap) == 0x000428, "Member 'UWBP_PalKeyGuideIcon_C::OverrideImageMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalKeyGuideIcon_C, EnableOverrideImage) == 0x000478, "Member 'UWBP_PalKeyGuideIcon_C::EnableOverrideImage' has a wrong offset!");

}

