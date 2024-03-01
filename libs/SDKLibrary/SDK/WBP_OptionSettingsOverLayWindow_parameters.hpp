#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x90 - 0x0)
// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnKeySetting
struct UWBP_OptionSettingsOverLayWindow_C_OnKeySetting_Params
{
public:
	struct FKey                                  NewKey;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	enum class EPalKeyConfigCategory             Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalKeyConfigCategory             Temp_byte_Variable_1;                              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalKeyConfigCategory             Temp_byte_Variable_2;                              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalKeyConfigCategory             Temp_byte_Variable_3;                              // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalKeyConfigCategory             K2Node_Select_Default;                             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CA8[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalKeyAction                         K2Node_MakeStruct_PalKeyAction;                    // 0x24(0xC)(NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalKeyConfigCategory             K2Node_Select_Default_1;                           // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CA9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Select_Default_2;                           // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CAC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalPlayerInput*                       CallFunc_GetLocalPalPlayerInput_ReturnValue;       // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEnableKey_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CAD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CAF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x68(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_InvalidateTimerHandle_ReturnValue;     // 0x70(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x78(0x18)(None)
};

// 0x20B (0x20B - 0x0)
// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.OnKeyDown
struct UWBP_OptionSettingsOverLayWindow_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x40(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x80(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x138(0xB8)(None)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x1F0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x20A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.BP_GetDesiredFocusTarget
struct UWBP_OptionSettingsOverLayWindow_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x220 (0x220 - 0x0)
// Function WBP_OptionSettingsOverLayWindow.WBP_OptionSettingsOverLayWindow_C.ExecuteUbergraph_WBP_OptionSettingsOverLayWindow
struct UWBP_OptionSettingsOverLayWindow_C_ExecuteUbergraph_WBP_OptionSettingsOverLayWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_HUDDispatchParameter_KeyConfig_C*  K2Node_DynamicCast_AsBP_HUDDispatch_Parameter_Key_Config; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x30(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x48(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue;        // 0x78(0x4)(NoDestructor)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_1;      // 0x7C(0x4)(NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FPalKeyAction                         K2Node_MakeStruct_PalKeyAction;                    // 0x98(0xC)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value;                           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xC4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default;                             // 0xCC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedText_ReturnValue;             // 0xD8(0x18)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x100(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x160(0x10)(ReferenceParm)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x178(0x18)(None)
	class FText                                  CallFunc_GetLocalizedText_ReturnValue_1;           // 0x190(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1A8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x1F8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x208(0x18)(None)
};

}
}


