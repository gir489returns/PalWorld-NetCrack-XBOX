#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AdvancedWidgets

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class AdvancedWidgets.RadialSlider
// 0x0690 (0x07E0 - 0x0150)
class URadialSlider final : public UWidget
{
public:
	float                                         Value;                                             // 0x0150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             ValueDelegate;                                     // 0x0154(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseCustomDefaultValue;                            // 0x0164(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_165[0x3];                                      // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CustomDefaultValue;                                // 0x0168(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     SliderRange;                                       // 0x0170(0x0088)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<float>                                 ValueTags;                                         // 0x01F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         SliderHandleStartAngle;                            // 0x0208(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SliderHandleEndAngle;                              // 0x020C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularOffset;                                     // 0x0210(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              HandStartEndRatio;                                 // 0x0218(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_228[0x8];                                      // 0x0228(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSliderStyle                           WidgetStyle;                                       // 0x0230(0x0500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderBarColor;                                    // 0x0730(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderProgressColor;                               // 0x0740(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderHandleColor;                                 // 0x0750(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           CenterBackgroundColor;                             // 0x0760(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Locked;                                            // 0x0770(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          MouseUsesStep;                                     // 0x0771(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RequiresControllerLock;                            // 0x0772(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_773[0x1];                                      // 0x0773(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StepSize;                                          // 0x0774(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsFocusable;                                       // 0x0778(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseVerticalDrag;                                   // 0x0779(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowSliderHandle;                                  // 0x077A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowSliderHand;                                    // 0x077B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_77C[0x4];                                      // 0x077C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMouseCaptureBegin;                               // 0x0780(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnMouseCaptureEnd;                                 // 0x0790(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnControllerCaptureBegin;                          // 0x07A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnControllerCaptureEnd;                            // 0x07B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnValueChanged;                                    // 0x07C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_7D0[0x10];                                     // 0x07D0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAngularOffset(float InValue);
	void SetCenterBackgroundColor(const struct FLinearColor& InValue);
	void SetCustomDefaultValue(float InValue);
	void SetHandStartEndRatio(const struct FVector2D& InValue);
	void SetLocked(bool InValue);
	void SetShowSliderHand(bool InShowSliderHand);
	void SetShowSliderHandle(bool InShowSliderHandle);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderHandleEndAngle(float InValue);
	void SetSliderHandleStartAngle(float InValue);
	void SetSliderProgressColor(const struct FLinearColor& InValue);
	void SetSliderRange(const struct FRuntimeFloatCurve& InSliderRange);
	void SetStepSize(float InValue);
	void SetUseVerticalDrag(bool InUseVerticalDrag);
	void SetValue(float InValue);
	void SetValueTags(const TArray<float>& InValueTags);

	float GetCustomDefaultValue() const;
	float GetNormalizedSliderHandlePosition() const;
	float GetValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RadialSlider">();
	}
	static class URadialSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadialSlider>();
	}
};
static_assert(alignof(URadialSlider) == 0x000010, "Wrong alignment on URadialSlider");
static_assert(sizeof(URadialSlider) == 0x0007E0, "Wrong size on URadialSlider");
static_assert(offsetof(URadialSlider, Value) == 0x000150, "Member 'URadialSlider::Value' has a wrong offset!");
static_assert(offsetof(URadialSlider, ValueDelegate) == 0x000154, "Member 'URadialSlider::ValueDelegate' has a wrong offset!");
static_assert(offsetof(URadialSlider, bUseCustomDefaultValue) == 0x000164, "Member 'URadialSlider::bUseCustomDefaultValue' has a wrong offset!");
static_assert(offsetof(URadialSlider, CustomDefaultValue) == 0x000168, "Member 'URadialSlider::CustomDefaultValue' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderRange) == 0x000170, "Member 'URadialSlider::SliderRange' has a wrong offset!");
static_assert(offsetof(URadialSlider, ValueTags) == 0x0001F8, "Member 'URadialSlider::ValueTags' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderHandleStartAngle) == 0x000208, "Member 'URadialSlider::SliderHandleStartAngle' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderHandleEndAngle) == 0x00020C, "Member 'URadialSlider::SliderHandleEndAngle' has a wrong offset!");
static_assert(offsetof(URadialSlider, AngularOffset) == 0x000210, "Member 'URadialSlider::AngularOffset' has a wrong offset!");
static_assert(offsetof(URadialSlider, HandStartEndRatio) == 0x000218, "Member 'URadialSlider::HandStartEndRatio' has a wrong offset!");
static_assert(offsetof(URadialSlider, WidgetStyle) == 0x000230, "Member 'URadialSlider::WidgetStyle' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderBarColor) == 0x000730, "Member 'URadialSlider::SliderBarColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderProgressColor) == 0x000740, "Member 'URadialSlider::SliderProgressColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, SliderHandleColor) == 0x000750, "Member 'URadialSlider::SliderHandleColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, CenterBackgroundColor) == 0x000760, "Member 'URadialSlider::CenterBackgroundColor' has a wrong offset!");
static_assert(offsetof(URadialSlider, Locked) == 0x000770, "Member 'URadialSlider::Locked' has a wrong offset!");
static_assert(offsetof(URadialSlider, MouseUsesStep) == 0x000771, "Member 'URadialSlider::MouseUsesStep' has a wrong offset!");
static_assert(offsetof(URadialSlider, RequiresControllerLock) == 0x000772, "Member 'URadialSlider::RequiresControllerLock' has a wrong offset!");
static_assert(offsetof(URadialSlider, StepSize) == 0x000774, "Member 'URadialSlider::StepSize' has a wrong offset!");
static_assert(offsetof(URadialSlider, IsFocusable) == 0x000778, "Member 'URadialSlider::IsFocusable' has a wrong offset!");
static_assert(offsetof(URadialSlider, UseVerticalDrag) == 0x000779, "Member 'URadialSlider::UseVerticalDrag' has a wrong offset!");
static_assert(offsetof(URadialSlider, ShowSliderHandle) == 0x00077A, "Member 'URadialSlider::ShowSliderHandle' has a wrong offset!");
static_assert(offsetof(URadialSlider, ShowSliderHand) == 0x00077B, "Member 'URadialSlider::ShowSliderHand' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnMouseCaptureBegin) == 0x000780, "Member 'URadialSlider::OnMouseCaptureBegin' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnMouseCaptureEnd) == 0x000790, "Member 'URadialSlider::OnMouseCaptureEnd' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnControllerCaptureBegin) == 0x0007A0, "Member 'URadialSlider::OnControllerCaptureBegin' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnControllerCaptureEnd) == 0x0007B0, "Member 'URadialSlider::OnControllerCaptureEnd' has a wrong offset!");
static_assert(offsetof(URadialSlider, OnValueChanged) == 0x0007C0, "Member 'URadialSlider::OnValueChanged' has a wrong offset!");

}

