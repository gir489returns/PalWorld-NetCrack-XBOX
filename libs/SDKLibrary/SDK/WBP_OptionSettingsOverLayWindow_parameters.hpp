#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionSettingsOverLayWindow

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnMouseButtonDown
// 0x0320 (0x0320 - 0x0000)
struct WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0190(0x00B8)()
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0248(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD4[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0268(0x00B8)()
};
static_assert(alignof(WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown");
static_assert(sizeof(WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown) == 0x000320, "Wrong size on WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown, MouseEvent) == 0x000040, "Member 'WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000190, "Member 'WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000248, "Member 'WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000260, "Member 'WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000268, "Member 'WBP_OptionSettingsOverLayWindow_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnKeySetting
// 0x0090 (0x0090 - 0x0000)
struct WBP_OptionSettingsOverLayWindow_C_OnKeySetting final
{
public:
	struct FKey                                   NewKey;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	EPalKeyConfigCategory                         Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalKeyConfigCategory                         Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalKeyConfigCategory                         Temp_byte_Variable_2;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalKeyConfigCategory                         Temp_byte_Variable_3;                              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalKeyConfigCategory                         K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD5[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalKeyAction                          K2Node_MakeStruct_PalKeyAction;                    // 0x0024(0x000C)(NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Map_Find_Value;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalKeyConfigCategory                         K2Node_Select_Default_1;                           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD6[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_2;                           // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD7[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerInput*                        CallFunc_GetLocalPalPlayerInput_ReturnValue;       // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableKey_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD8[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AD9[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_InvalidateTimerHandle_ReturnValue;     // 0x0070(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0078(0x0018)()
};
static_assert(alignof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting) == 0x000008, "Wrong alignment on WBP_OptionSettingsOverLayWindow_C_OnKeySetting");
static_assert(sizeof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting) == 0x000090, "Wrong size on WBP_OptionSettingsOverLayWindow_C_OnKeySetting");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, NewKey) == 0x000000, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::NewKey' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, Temp_byte_Variable) == 0x000018, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, Temp_byte_Variable_1) == 0x000019, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, Temp_bool_Variable) == 0x00001A, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, Temp_bool_Variable_1) == 0x00001B, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, Temp_byte_Variable_2) == 0x00001C, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, Temp_byte_Variable_3) == 0x00001D, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, Temp_bool_Variable_2) == 0x00001E, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001F, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, K2Node_Select_Default) == 0x000020, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000021, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000022, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, K2Node_MakeStruct_PalKeyAction) == 0x000024, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::K2Node_MakeStruct_PalKeyAction' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, CallFunc_Map_Find_Value) == 0x000030, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, K2Node_Select_Default_1) == 0x000039, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, K2Node_Select_Default_2) == 0x00003C, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, CallFunc_GetLocalPalPlayerInput_ReturnValue) == 0x000048, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::CallFunc_GetLocalPalPlayerInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, CallFunc_IsEnableKey_ReturnValue) == 0x000050, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::CallFunc_IsEnableKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, K2Node_CreateDelegate_OutputDelegate) == 0x000054, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000068, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, CallFunc_K2_InvalidateTimerHandle_ReturnValue) == 0x000070, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::CallFunc_K2_InvalidateTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeySetting, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000078, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeySetting::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");

// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnKeyDown
// 0x0210 (0x0210 - 0x0000)
struct WBP_OptionSettingsOverLayWindow_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0040(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0080(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0138(0x00B8)()
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x01F0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettingsOverLayWindow_C_OnKeyDown) == 0x000008, "Wrong alignment on WBP_OptionSettingsOverLayWindow_C_OnKeyDown");
static_assert(sizeof(WBP_OptionSettingsOverLayWindow_C_OnKeyDown) == 0x000210, "Wrong size on WBP_OptionSettingsOverLayWindow_C_OnKeyDown");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeyDown, InKeyEvent) == 0x000040, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeyDown, ReturnValue) == 0x000080, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeyDown, CallFunc_Handled_ReturnValue) == 0x000138, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x0001F0, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000208, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x000209, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_OnKeyDown, CallFunc_BooleanOR_ReturnValue) == 0x00020A, "Member 'WBP_OptionSettingsOverLayWindow_C_OnKeyDown::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.ExecuteUbergraph_WBP_OptionSettingsOverLayWindow
// 0x0220 (0x0220 - 0x0000)
struct WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ADA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_HUDDispatchParameter_KeyConfig_C*   K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Key_Config; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ADB[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0030(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0048(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x0078(0x0004)(NoDestructor)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue_1;      // 0x007C(0x0004)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ADC[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FPalKeyAction                          K2Node_MakeStruct_PalKeyAction;                    // 0x0098(0x000C)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ADD[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Map_Find_Value;                           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ADE[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00C4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4ADF[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x00D8(0x0018)()
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0100(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0178(0x0018)()
	class FText                                   CallFunc_GetLocalizedText_ReturnValue_1;           // 0x0190(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01A8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01F8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0208(0x0018)()
};
static_assert(alignof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow) == 0x000008, "Wrong alignment on WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow");
static_assert(sizeof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow) == 0x000220, "Wrong size on WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, EntryPoint) == 0x000000, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, Temp_bool_Variable) == 0x000004, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_GetParam_ReturnValue) == 0x000018, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Key_Config) == 0x000020, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Key_Config' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000030, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000048, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x000060, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_MakeLiteralName_ReturnValue) == 0x000070, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_RegisterActionBinding_ReturnValue) == 0x000078, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_RegisterActionBinding_ReturnValue_1) == 0x00007C, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_RegisterActionBinding_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000080, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_Conv_NameToString_ReturnValue) == 0x000088, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, K2Node_MakeStruct_PalKeyAction) == 0x000098, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::K2Node_MakeStruct_PalKeyAction' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_Concat_StrStr_ReturnValue) == 0x0000A8, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_Map_Find_Value) == 0x0000B8, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_Map_Find_ReturnValue) == 0x0000C0, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_Conv_StringToName_ReturnValue) == 0x0000C4, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, K2Node_Select_Default) == 0x0000CC, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_GetLocalizedText_ReturnValue) == 0x0000D8, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_Conv_NameToString_ReturnValue_1) == 0x0000F0, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, K2Node_MakeStruct_FormatArgumentData) == 0x000100, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000150, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, K2Node_MakeArray_Array) == 0x000160, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000170, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_Format_ReturnValue) == 0x000178, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_GetLocalizedText_ReturnValue_1) == 0x000190, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_GetLocalizedText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001A8, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, K2Node_MakeArray_Array_1) == 0x0001F8, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow, CallFunc_Format_ReturnValue_1) == 0x000208, "Member 'WBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_OptionSettingsOverLayWindow_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OptionSettingsOverLayWindow_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_OptionSettingsOverLayWindow_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_OptionSettingsOverLayWindow_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_OptionSettingsOverLayWindow_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_OptionSettingsOverLayWindow_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_OptionSettingsOverLayWindow_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

