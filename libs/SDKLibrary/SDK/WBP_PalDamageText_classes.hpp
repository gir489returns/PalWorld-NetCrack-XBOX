#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalDamageText

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalDamageText.WBP_PalDamageText_C
// 0x0088 (0x04C8 - 0x0440)
class UWBP_PalDamageText_C final : public UPalUIDamageTextBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x0448(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In_Resist_0;                                       // 0x0450(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In_Weak_1;                                         // 0x0458(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In_Weak_0;                                         // 0x0460(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0468(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_CriticalEff;                                 // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_5;                                         // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_DamageValue;                                  // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TotalDamage;                                       // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48C[0x4];                                      // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AnimeSpeedScale;                                   // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalDamageTextType                            TextType;                                          // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_499[0x7];                                      // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        InterpolationLength;                               // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              OffsetPosition;                                    // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              RandomizeOffset;                                   // 0x04B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_PalDamageText(int32 EntryPoint);
	void Finished_450E32A44BB84A7C14A5248BD3F03F85();
	void GetPadding(double* Param_Padding);
	void OnInitialized();
	void OnRequestClose();
	void SetDamageColor(const struct FSlateColor& InColor);
	void SetDamageTextType(EPalDamageTextType Param_TextType);
	void SetDamageValue(int32 InValue);
	void UpdatePosition(const struct FVector& TargetWorldLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalDamageText_C">();
	}
	static class UWBP_PalDamageText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalDamageText_C>();
	}
};
static_assert(alignof(UWBP_PalDamageText_C) == 0x000008, "Wrong alignment on UWBP_PalDamageText_C");
static_assert(sizeof(UWBP_PalDamageText_C) == 0x0004C8, "Wrong size on UWBP_PalDamageText_C");
static_assert(offsetof(UWBP_PalDamageText_C, UberGraphFrame) == 0x000440, "Member 'UWBP_PalDamageText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, Out) == 0x000448, "Member 'UWBP_PalDamageText_C::Out' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, In_Resist_0) == 0x000450, "Member 'UWBP_PalDamageText_C::In_Resist_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, In_Weak_1) == 0x000458, "Member 'UWBP_PalDamageText_C::In_Weak_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, In_Weak_0) == 0x000460, "Member 'UWBP_PalDamageText_C::In_Weak_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, In) == 0x000468, "Member 'UWBP_PalDamageText_C::In' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, Image_CriticalEff) == 0x000470, "Member 'UWBP_PalDamageText_C::Image_CriticalEff' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, Overlay_5) == 0x000478, "Member 'UWBP_PalDamageText_C::Overlay_5' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, Text_DamageValue) == 0x000480, "Member 'UWBP_PalDamageText_C::Text_DamageValue' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, TotalDamage) == 0x000488, "Member 'UWBP_PalDamageText_C::TotalDamage' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, AnimeSpeedScale) == 0x000490, "Member 'UWBP_PalDamageText_C::AnimeSpeedScale' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, TextType) == 0x000498, "Member 'UWBP_PalDamageText_C::TextType' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, InterpolationLength) == 0x0004A0, "Member 'UWBP_PalDamageText_C::InterpolationLength' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, OffsetPosition) == 0x0004A8, "Member 'UWBP_PalDamageText_C::OffsetPosition' has a wrong offset!");
static_assert(offsetof(UWBP_PalDamageText_C, RandomizeOffset) == 0x0004B8, "Member 'UWBP_PalDamageText_C::RandomizeOffset' has a wrong offset!");

}

