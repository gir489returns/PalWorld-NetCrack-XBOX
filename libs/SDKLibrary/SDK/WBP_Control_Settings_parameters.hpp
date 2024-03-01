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

// 0x10 (0x10 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.GetDesiredFocusTarget
struct UWBP_Control_Settings_C_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               Target;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonButtonBase_C*            CallFunc_Array_Get_Item;                           // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.SwitchTab
struct UWBP_Control_Settings_C_SwitchTab_Params
{
public:
	bool                                         Next;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.SwitchPanel
struct UWBP_Control_Settings_C_SwitchPanel_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnDashChanged
struct UWBP_Control_Settings_C_OnDashChanged_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnMouseSensiChanged
struct UWBP_Control_Settings_C_OnMouseSensiChanged_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnMouseAIMChanged
struct UWBP_Control_Settings_C_OnMouseAIMChanged_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnMouseYChanged
struct UWBP_Control_Settings_C_OnMouseYChanged_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnMouseXChanged
struct UWBP_Control_Settings_C_OnMouseXChanged_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnGPDashChanged
struct UWBP_Control_Settings_C_OnGPDashChanged_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnGPAimChanged
struct UWBP_Control_Settings_C_OnGPAimChanged_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnRStickThreChanged
struct UWBP_Control_Settings_C_OnRStickThreChanged_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnLStickThreChanged
struct UWBP_Control_Settings_C_OnLStickThreChanged_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnRStickSensiChanged
struct UWBP_Control_Settings_C_OnRStickSensiChanged_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnRStickYChanged
struct UWBP_Control_Settings_C_OnRStickYChanged_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnRStickXChanged
struct UWBP_Control_Settings_C_OnRStickXChanged_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnVibChanged
struct UWBP_Control_Settings_C_OnVibChanged_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnHideChatChanged
struct UWBP_Control_Settings_C_OnHideChatChanged_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnToggleLongPressChanged_GP
struct UWBP_Control_Settings_C_OnToggleLongPressChanged_GP_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.OnToggleLongPressChanged
struct UWBP_Control_Settings_C_OnToggleLongPressChanged_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x440 (0x440 - 0x0)
// Function WBP_Control_Settings.WBP_Control_Settings_C.ExecuteUbergraph_WBP_Control_Settings
struct UWBP_Control_Settings_C_ExecuteUbergraph_WBP_Control_Settings_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUGCFilter_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalOptionSubsystem*                   CallFunc_GetOptionSubsystem_ReturnValue;           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOptionSubsystem*                   CallFunc_GetOptionSubsystem_ReturnValue_1;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalOptionPadSettings                 CallFunc_GetPadSettings_ReturnValue;               // 0x38(0x1C)(ConstParm, NoDestructor)
	struct FPalOptionLocalStaticSettings         CallFunc_GetOptionLocalStaticSettings_ReturnValue; // 0x54(0x40)(ConstParm, NoDestructor)
	struct FPalOptionKeyboardSettings            CallFunc_GetKeyboardSettings_ReturnValue;          // 0x94(0x14)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_Next;                           // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          CallFunc_Array_Get_Item;                           // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          CallFunc_Array_Get_Item_1;                         // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          CallFunc_Array_Get_Item_2;                         // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          CallFunc_Array_Get_Item_3;                         // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Index;                          // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          CallFunc_Array_Get_Item_4;                         // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x108(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsOn_9;                         // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x11B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x11C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_CustomEvent_Value_5;                        // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CustomEvent_Value_4;                        // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsOn_8;                         // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsOn_7;                         // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x144(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x154(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x164(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x175(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x176(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46C0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalOptionKeyboardSettings            K2Node_MakeStruct_PalOptionKeyboardSettings;       // 0x178(0x14)(NoDestructor)
	uint8                                        Pad_46C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetDesiredFocusTarget_Target;             // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalCommonButtonBase_C*>    K2Node_MakeArray_Array;                            // 0x198(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_GetDesiredFocusTarget_Target_1;           // 0x1A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1C4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x1D4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x1E4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x1F4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x204(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x214(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x224(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalOptionPadSettings                 K2Node_MakeStruct_PalOptionPadSettings;            // 0x234(0x1C)(NoDestructor)
	bool                                         K2Node_CustomEvent_IsOn_6;                         // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0x251(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46C7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_CustomEvent_Value_3;                        // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CustomEvent_Value_2;                        // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CustomEvent_Value_1;                        // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CustomEvent_Value;                          // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsOn_5;                         // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsOn_4;                         // 0x289(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsOn_3;                         // 0x28A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46CB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          CallFunc_Array_Get_Item_5;                         // 0x290(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x298(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalSupportedPlatformType         CallFunc_GetPlatformType_ReturnValue;              // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          K2Node_Select_Default_1;                           // 0x2B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UVerticalBox*>                  K2Node_MakeArray_Array_1;                          // 0x2B8(0x10)(ReferenceParm, ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x2C8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsOn_2;                         // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_8;                // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x2DC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsOn_1;                         // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsOn;                           // 0x2ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x2F0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_CurrentValue_ImplicitCast;      // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_CurrentValue_ImplicitCast_1;    // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_CurrentValue_ImplicitCast_2;    // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_CurrentValue_ImplicitCast_3;    // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_CurrentValue_ImplicitCast_4;    // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_CurrentValue_ImplicitCast_5;    // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_MouseSensitivity_ImplicitCast; // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetSlider_Min_ImplicitCast;               // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast;               // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_MouseAimSensitivity_ImplicitCast; // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetSlider_Min_ImplicitCast_1;             // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast_1;             // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_CurrentValue_ImplicitCast_6;    // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_CurrentValue_ImplicitCast_7;    // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Min_ImplicitCast_2;             // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast_2;             // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Min_ImplicitCast_3;             // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast_3;             // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_CurrentValue_ImplicitCast_8;    // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_CurrentValue_ImplicitCast_9;    // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Min_ImplicitCast_4;             // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast_4;             // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Min_ImplicitCast_5;             // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast_5;             // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Min_ImplicitCast_6;             // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast_6;             // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Min_ImplicitCast_7;             // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast_7;             // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Min_ImplicitCast_8;             // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast_8;             // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Min_ImplicitCast_9;             // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast_9;             // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Min_ImplicitCast_10;            // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast_10;            // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Min_ImplicitCast_11;            // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetSlider_Max_ImplicitCast_11;            // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_RightStickAimSensitivity_ImplicitCast; // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_RightStickThreshold_ImplicitCast; // 0x434(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_LeftStickThreshold_ImplicitCast; // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_RightStickSensitivity_ImplicitCast; // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


