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

// 0x1 (0x1 - 0x0)
// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.OverrideInputType
struct UWBP_PalKeyGuideIcon_C_OverrideInputType_Params
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.SetOverrideSize
struct UWBP_PalKeyGuideIcon_C_SetOverrideSize_Params
{
public:
	struct FVector2D                             Size;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X;                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6C1 (0x6C1 - 0x0)
// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.OverrideImage
struct UWBP_PalKeyGuideIcon_C_OverrideImage_Params
{
public:
	TMap<enum class ECommonInputType, struct FSlateBrush> TempOverrideMap;                                   // 0x0(0x50)(Edit, BlueprintVisible)
	enum class ECommonInputType                  Temp_byte_Variable;                                // 0x50(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_274F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2751[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ECommonInputType, struct FSlateBrush> K2Node_MakeVariable_MakeVariableOutput;            // 0x68(0x50)(None)
	uint8                                        Pad_2752[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_Map_Find_Value;                           // 0xC0(0xD0)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2754[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalOptionSubsystem*                   CallFunc_GetOptionSubsystem_ReturnValue;           // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2755[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FPalKeyConfigSettings                 CallFunc_GetKeyConfigSettings_ReturnValue;         // 0x1C8(0x160)(ConstParm)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_Map_Find_Value_1;                         // 0x330(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2758[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_Map_Find_Value_2;                         // 0x350(0xD0)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2759[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetKeyIconByKey_ReturnValue;              // 0x430(0xD0)(None)
	struct FKey                                  CallFunc_Map_Find_Value_3;                         // 0x500(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_275B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_GetIcon_ReturnValue;                      // 0x520(0xD0)(None)
	struct FSlateBrush                           CallFunc_GetKeyIconByKey_ReturnValue_1;            // 0x5F0(0xD0)(None)
	enum class ECommonInputType                  Temp_byte_Variable_1;                              // 0x6C0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.SetInputAction
struct UWBP_PalKeyGuideIcon_C_SetInputAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    K2Node_MakeStruct_PalDataTableRowName_UIInputAction; // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetUIInputActionRowHandle_outHandle;      // 0x10(0x10)(NoDestructor)
	bool                                         CallFunc_GetUIInputActionRowHandle_ReturnValue;    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UWBP_PalKeyGuideIcon_C_BndEvt__WBP_PalKeyGuideIcon_PalUIActionWidgetBase_24_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C0 (0x2C0 - 0x0)
// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.UpdateOverrideImage
struct UWBP_PalKeyGuideIcon_C_UpdateOverrideImage_Params
{
public:
	struct FPalKeyConfigSettings                 PrevSettings;                                      // 0x0(0x160)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPalKeyConfigSettings                 NewSettings;                                       // 0x160(0x160)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2E1 (0x2E1 - 0x0)
// Function WBP_PalKeyGuideIcon.WBP_PalKeyGuideIcon_C.ExecuteUbergraph_WBP_PalKeyGuideIcon
struct UWBP_PalKeyGuideIcon_C_ExecuteUbergraph_WBP_PalKeyGuideIcon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2781[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalOptionSubsystem*                   CallFunc_GetOptionSubsystem_ReturnValue;           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalKeyConfigSettings                 K2Node_CustomEvent_PrevSettings;                   // 0x20(0x160)(ConstParm)
	struct FPalKeyConfigSettings                 K2Node_CustomEvent_NewSettings;                    // 0x180(0x160)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


