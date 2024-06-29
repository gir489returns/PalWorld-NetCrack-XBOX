#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HistoryButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_HistoryButton.WBP_HistoryButton_C.StopAnim
// 0x0008 (0x0008 - 0x0000)
struct WBP_HistoryButton_C_StopAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HistoryButton_C_StopAnim) == 0x000008, "Wrong alignment on WBP_HistoryButton_C_StopAnim");
static_assert(sizeof(WBP_HistoryButton_C_StopAnim) == 0x000008, "Wrong size on WBP_HistoryButton_C_StopAnim");
static_assert(offsetof(WBP_HistoryButton_C_StopAnim, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'WBP_HistoryButton_C_StopAnim::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function WBP_HistoryButton.WBP_HistoryButton_C.PrintToModLoader
// 0x0010 (0x0010 - 0x0000)
struct WBP_HistoryButton_C_PrintToModLoader final
{
public:
	class FString                                 Message;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HistoryButton_C_PrintToModLoader) == 0x000008, "Wrong alignment on WBP_HistoryButton_C_PrintToModLoader");
static_assert(sizeof(WBP_HistoryButton_C_PrintToModLoader) == 0x000010, "Wrong size on WBP_HistoryButton_C_PrintToModLoader");
static_assert(offsetof(WBP_HistoryButton_C_PrintToModLoader, Message) == 0x000000, "Member 'WBP_HistoryButton_C_PrintToModLoader::Message' has a wrong offset!");

// Function WBP_HistoryButton.WBP_HistoryButton_C.OnUnhovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_HistoryButton_C_OnUnhovered__DelegateSignature final
{
public:
	class UWBP_HistoryButton_C*                   Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HistoryButton_C_OnUnhovered__DelegateSignature) == 0x000008, "Wrong alignment on WBP_HistoryButton_C_OnUnhovered__DelegateSignature");
static_assert(sizeof(WBP_HistoryButton_C_OnUnhovered__DelegateSignature) == 0x000008, "Wrong size on WBP_HistoryButton_C_OnUnhovered__DelegateSignature");
static_assert(offsetof(WBP_HistoryButton_C_OnUnhovered__DelegateSignature, Button) == 0x000000, "Member 'WBP_HistoryButton_C_OnUnhovered__DelegateSignature::Button' has a wrong offset!");

// Function WBP_HistoryButton.WBP_HistoryButton_C.OnMouseButtonUp
// 0x0248 (0x0248 - 0x0000)
struct WBP_HistoryButton_C_OnMouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0190(0x00B8)()
};
static_assert(alignof(WBP_HistoryButton_C_OnMouseButtonUp) == 0x000008, "Wrong alignment on WBP_HistoryButton_C_OnMouseButtonUp");
static_assert(sizeof(WBP_HistoryButton_C_OnMouseButtonUp) == 0x000248, "Wrong size on WBP_HistoryButton_C_OnMouseButtonUp");
static_assert(offsetof(WBP_HistoryButton_C_OnMouseButtonUp, MyGeometry) == 0x000000, "Member 'WBP_HistoryButton_C_OnMouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_OnMouseButtonUp, MouseEvent) == 0x000040, "Member 'WBP_HistoryButton_C_OnMouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_OnMouseButtonUp, ReturnValue) == 0x0000D8, "Member 'WBP_HistoryButton_C_OnMouseButtonUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_OnMouseButtonUp, CallFunc_Handled_ReturnValue) == 0x000190, "Member 'WBP_HistoryButton_C_OnMouseButtonUp::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_HistoryButton.WBP_HistoryButton_C.OnMouseButtonDown
// 0x0250 (0x0250 - 0x0000)
struct WBP_HistoryButton_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0190(0x00B8)()
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HistoryButton_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBP_HistoryButton_C_OnMouseButtonDown");
static_assert(sizeof(WBP_HistoryButton_C_OnMouseButtonDown) == 0x000250, "Wrong size on WBP_HistoryButton_C_OnMouseButtonDown");
static_assert(offsetof(WBP_HistoryButton_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_HistoryButton_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_OnMouseButtonDown, MouseEvent) == 0x000040, "Member 'WBP_HistoryButton_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_OnMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'WBP_HistoryButton_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000190, "Member 'WBP_HistoryButton_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_OnMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x000248, "Member 'WBP_HistoryButton_C_OnMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");

// Function WBP_HistoryButton.WBP_HistoryButton_C.OnLoaded_848D22AE4AF0383BD758FFB1975D56D7
// 0x0008 (0x0008 - 0x0000)
struct WBP_HistoryButton_C_OnLoaded_848D22AE4AF0383BD758FFB1975D56D7 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HistoryButton_C_OnLoaded_848D22AE4AF0383BD758FFB1975D56D7) == 0x000008, "Wrong alignment on WBP_HistoryButton_C_OnLoaded_848D22AE4AF0383BD758FFB1975D56D7");
static_assert(sizeof(WBP_HistoryButton_C_OnLoaded_848D22AE4AF0383BD758FFB1975D56D7) == 0x000008, "Wrong size on WBP_HistoryButton_C_OnLoaded_848D22AE4AF0383BD758FFB1975D56D7");
static_assert(offsetof(WBP_HistoryButton_C_OnLoaded_848D22AE4AF0383BD758FFB1975D56D7, Loaded) == 0x000000, "Member 'WBP_HistoryButton_C_OnLoaded_848D22AE4AF0383BD758FFB1975D56D7::Loaded' has a wrong offset!");

// Function WBP_HistoryButton.WBP_HistoryButton_C.OnHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_HistoryButton_C_OnHovered__DelegateSignature final
{
public:
	class UWBP_HistoryButton_C*                   Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HistoryButton_C_OnHovered__DelegateSignature) == 0x000008, "Wrong alignment on WBP_HistoryButton_C_OnHovered__DelegateSignature");
static_assert(sizeof(WBP_HistoryButton_C_OnHovered__DelegateSignature) == 0x000008, "Wrong size on WBP_HistoryButton_C_OnHovered__DelegateSignature");
static_assert(offsetof(WBP_HistoryButton_C_OnHovered__DelegateSignature, Button) == 0x000000, "Member 'WBP_HistoryButton_C_OnHovered__DelegateSignature::Button' has a wrong offset!");

// Function WBP_HistoryButton.WBP_HistoryButton_C.OnDeleteRequested__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_HistoryButton_C_OnDeleteRequested__DelegateSignature final
{
public:
	class UWBP_HistoryButton_C*                   Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HistoryButton_C_OnDeleteRequested__DelegateSignature) == 0x000008, "Wrong alignment on WBP_HistoryButton_C_OnDeleteRequested__DelegateSignature");
static_assert(sizeof(WBP_HistoryButton_C_OnDeleteRequested__DelegateSignature) == 0x000008, "Wrong size on WBP_HistoryButton_C_OnDeleteRequested__DelegateSignature");
static_assert(offsetof(WBP_HistoryButton_C_OnDeleteRequested__DelegateSignature, Button) == 0x000000, "Member 'WBP_HistoryButton_C_OnDeleteRequested__DelegateSignature::Button' has a wrong offset!");

// Function WBP_HistoryButton.WBP_HistoryButton_C.OnClicked__DelegateSignature
// 0x02C0 (0x02C0 - 0x0000)
struct WBP_HistoryButton_C_OnClicked__DelegateSignature final
{
public:
	struct FPalIndividualCharacterSaveParameter   Param_Data;                                        // 0x0000(0x02C0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_HistoryButton_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_HistoryButton_C_OnClicked__DelegateSignature");
static_assert(sizeof(WBP_HistoryButton_C_OnClicked__DelegateSignature) == 0x0002C0, "Wrong size on WBP_HistoryButton_C_OnClicked__DelegateSignature");
static_assert(offsetof(WBP_HistoryButton_C_OnClicked__DelegateSignature, Param_Data) == 0x000000, "Member 'WBP_HistoryButton_C_OnClicked__DelegateSignature::Param_Data' has a wrong offset!");

// Function WBP_HistoryButton.WBP_HistoryButton_C.GetText
// 0x0038 (0x0038 - 0x0000)
struct WBP_HistoryButton_C_GetText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedCharacterName_OutText;        // 0x0020(0x0018)()
};
static_assert(alignof(WBP_HistoryButton_C_GetText) == 0x000008, "Wrong alignment on WBP_HistoryButton_C_GetText");
static_assert(sizeof(WBP_HistoryButton_C_GetText) == 0x000038, "Wrong size on WBP_HistoryButton_C_GetText");
static_assert(offsetof(WBP_HistoryButton_C_GetText, ReturnValue) == 0x000000, "Member 'WBP_HistoryButton_C_GetText::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_GetText, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000018, "Member 'WBP_HistoryButton_C_GetText::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_GetText, CallFunc_GetLocalizedCharacterName_OutText) == 0x000020, "Member 'WBP_HistoryButton_C_GetText::CallFunc_GetLocalizedCharacterName_OutText' has a wrong offset!");

// Function WBP_HistoryButton.WBP_HistoryButton_C.ExecuteUbergraph_WBP_HistoryButton
// 0x0270 (0x0270 - 0x0000)
struct WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B5D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B5E[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x005C(0x0014)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_Message;                        // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B5F[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B60[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B61[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B62[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalCharacterParameterDatabaseRow      CallFunc_GetDataTableRowFromName_OutRow;           // 0x00E8(0x0138)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B63[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;            // 0x0224(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B64[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterIconTexture_ReturnValue;      // 0x0240(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton) == 0x000008, "Wrong alignment on WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton");
static_assert(sizeof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton) == 0x000270, "Wrong size on WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, EntryPoint) == 0x000000, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, K2Node_CustomEvent_Loaded) == 0x000018, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, Temp_object_Variable) == 0x000020, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, K2Node_DynamicCast_AsTexture_2D) == 0x000028, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, Temp_bool_Variable) == 0x000032, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, Temp_object_Variable_1) == 0x000038, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, K2Node_Select_Default) == 0x000040, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, K2Node_MakeStruct_SlateColor_1) == 0x00005C, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, K2Node_CustomEvent_Message) == 0x000080, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000090, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000098, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x0000A0, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_IsValid_ReturnValue_1) == 0x0000A8, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x0000B0, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x0000B8, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_IsValid_ReturnValue_2) == 0x0000C0, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_BreakVector2D_X) == 0x0000C8, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_BreakVector2D_Y) == 0x0000D0, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0000D8, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x0000E0, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000E8, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000220, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, K2Node_CreateDelegate_OutputDelegate_2) == 0x000224, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_GetDatabaseCharacterParameter_ReturnValue_1) == 0x000238, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_GetDatabaseCharacterParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton, CallFunc_GetCharacterIconTexture_ReturnValue) == 0x000240, "Member 'WBP_HistoryButton_C_ExecuteUbergraph_WBP_HistoryButton::CallFunc_GetCharacterIconTexture_ReturnValue' has a wrong offset!");

}
