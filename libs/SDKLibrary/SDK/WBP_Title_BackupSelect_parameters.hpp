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

// 0x2A (0x2A - 0x0)
// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.CustomNavi_ToListTop
struct UWBP_Title_BackupSelect_C_CustomNavi_ToListTop_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4615[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Title_BackupSelect_ListContent_C* K2Node_DynamicCast_AsWBP_Title_Backup_Select_List_Content; // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.CustomNavi_ToCloseButton
struct UWBP_Title_BackupSelect_C_CustomNavi_ToCloseButton_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4616[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.GetTopFocusTarget
struct UWBP_Title_BackupSelect_C_GetTopFocusTarget_Params
{
public:
	class UWidget*                               TargetWidget;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4617[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Title_BackupSelect_ListContent_C* K2Node_DynamicCast_AsWBP_Title_Backup_Select_List_Content; // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.OnClickedBackupButton_Internal
struct UWBP_Title_BackupSelect_C_OnClickedBackupButton_Internal_Params
{
public:
	class UWBP_Title_BackupSelect_ListContent_C* Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xC9 (0xC9 - 0x0)
// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.SetBackupDisplayData
struct UWBP_Title_BackupSelect_C_SetBackupDisplayData_Params
{
public:
	TArray<struct FPalUIBackupSaveDisplayData>   DisplayData;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4618[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_461D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalUIBackupSaveDisplayData           CallFunc_Array_Get_Item;                           // 0x60(0x10)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox_1;                 // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4620[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Title_BackupSelect_ListContent_C* CallFunc_Create_ReturnValue;                       // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBoxSlot*                        K2Node_DynamicCast_AsScroll_Box_Slot;              // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.ExecuteUbergraph_WBP_Title_BackupSelect
struct UWBP_Title_BackupSelect_C_ExecuteUbergraph_WBP_Title_BackupSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_BackupSelect.WBP_Title_BackupSelect_C.OnClickedBackup__DelegateSignature
struct UWBP_Title_BackupSelect_C_OnClickedBackup__DelegateSignature_Params
{
public:
	class UWBP_Title_BackupSelect_ListContent_C* Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


