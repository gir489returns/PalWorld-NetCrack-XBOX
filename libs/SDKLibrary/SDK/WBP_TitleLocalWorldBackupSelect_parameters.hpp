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
// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OnCloseSuccessDialog
struct UWBP_TitleLocalWorldBackupSelect_C_OnCloseSuccessDialog_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OnCloseFailedDialog
struct UWBP_TitleLocalWorldBackupSelect_C_OnCloseFailedDialog_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7FF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Get_Focus_Target_Internal_Widget;         // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OnClosedCheckDialog
struct UWBP_TitleLocalWorldBackupSelect_C_OnClosedCheckDialog_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_80E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Get_Focus_Target_Internal_Widget;         // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_810[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalUIBackupSaveDisplayData           CallFunc_GetDisplayData_DIsplayData;               // 0x18(0x10)(None)
	enum class EPalSaveDataRestoreResultType     CallFunc_RestoreSaveData_ReturnValue;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_812[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OpenFailedDialog
struct UWBP_TitleLocalWorldBackupSelect_C_OpenFailedDialog_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x10(0x18)(None)
	struct FGuid                                 CallFunc_Dialog_ReturnValue;                       // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OpenSuccessDialog
struct UWBP_TitleLocalWorldBackupSelect_C_OpenSuccessDialog_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x10(0x18)(None)
	struct FGuid                                 CallFunc_Dialog_ReturnValue;                       // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.OpenCheckDialog
struct UWBP_TitleLocalWorldBackupSelect_C_OpenCheckDialog_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIBackupSaveDisplayData           CallFunc_GetDisplayData_DIsplayData;               // 0x10(0x10)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x20(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x50(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB0(0x18)(None)
	struct FGuid                                 CallFunc_Dialog_ReturnValue;                       // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.Get Focus Target Internal
struct UWBP_TitleLocalWorldBackupSelect_C_Get_Focus_Target_Internal_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetTopFocusTarget_TargetWidget;           // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.BP_GetDesiredFocusTarget
struct UWBP_TitleLocalWorldBackupSelect_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Get_Focus_Target_Internal_Widget;         // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.Setup
struct UWBP_TitleLocalWorldBackupSelect_C_Setup_Params
{
public:
	TArray<struct FPalUIBackupSaveDisplayData>   CallFunc_GetBackupDisplayData_OutDisplayData;      // 0x0(0x10)(ReferenceParm)
	class UWidget*                               CallFunc_GetTopFocusTarget_TargetWidget;           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.BndEvt__WBP_TitleLocalWorldBackupSelect_WBP_Title_BackupSelect_K2Node_ComponentBoundEvent_1_OnClickedBackup__DelegateSignature
struct UWBP_TitleLocalWorldBackupSelect_C_BndEvt__WBP_TitleLocalWorldBackupSelect_WBP_Title_BackupSelect_K2Node_ComponentBoundEvent_1_OnClickedBackup__DelegateSignature_Params
{
public:
	class UWBP_Title_BackupSelect_ListContent_C* Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_TitleLocalWorldBackupSelect.WBP_TitleLocalWorldBackupSelect_C.ExecuteUbergraph_WBP_TitleLocalWorldBackupSelect
struct UWBP_TitleLocalWorldBackupSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldBackupSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_84D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Title_BackupSelect_ListContent_C* K2Node_ComponentBoundEvent_Widget;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


