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

// 0xA (0xA - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.OnClosedWorldNameInputWindow
struct UWBP_WorldSetting_C_OnClosedWorldNameInputWindow_Params
{
public:
	class UPalHUDDispatchParameterBase*          Param;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryRequestWorldNameFilter_ReturnValue;    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.OpenWorldNameInputWindow
struct UWBP_WorldSetting_C_OpenWorldNameInputWindow_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_HUDDispatchParameter_WorldNameInput_C* CallFunc_SpawnObject_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetWorldName_WorldName;                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Push_ReturnValue;                         // 0x28(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.OnClosedStartGameDialog
struct UWBP_WorldSetting_C_OnClosedStartGameDialog_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetFocusTarget_TargetWidget;              // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalOptionWorldSettings               CallFunc_GetEditedWorldSetting_WorldSetting;       // 0x10(0x138)(None)
	bool                                         CallFunc_CompleteSetting_ReturnValue;              // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.OpenStartGameCheckDialog
struct UWBP_WorldSetting_C_OpenStartGameCheckDialog_Params
{
public:
	struct FDataTableRowHandle                   NewLocalVar_0;                                     // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x20(0x18)(None)
	struct FGuid                                 CallFunc_Dialog_ReturnValue;                       // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A9 (0x2A9 - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.StartNewGame
struct UWBP_WorldSetting_C_StartNewGame_Params
{
public:
	struct FPalOptionWorldSettings               Option;                                            // 0x0(0x138)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPalOptionWorldSettings               NewLocalVar_1;                                     // 0x138(0x138)(Edit, BlueprintVisible)
	class FString                                CallFunc_GetWorldName_WorldName;                   // 0x270(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x280(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalGameInstance_C*                 K2Node_DynamicCast_AsBP_Pal_Game_Instance;         // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameInstance*                      K2Node_DynamicCast_AsPal_Game_Instance;            // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.OnClosedSaveSettingDialog
struct UWBP_WorldSetting_C_OnClosedSaveSettingDialog_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C56[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalOptionWorldSettings               CallFunc_GetEditedWorldSetting_WorldSetting;       // 0x8(0x138)(None)
	class UWidget*                               CallFunc_GetFocusTarget_TargetWidget;              // 0x140(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CompleteSetting_ReturnValue;              // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.OpenCheckSaveSettingDialog
struct UWBP_WorldSetting_C_OpenCheckSaveSettingDialog_Params
{
public:
	struct FDataTableRowHandle                   NewLocalVar;                                       // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x20(0x18)(None)
	struct FGuid                                 CallFunc_Dialog_ReturnValue;                       // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.OnCancelAction
struct UWBP_WorldSetting_C_OnCancelAction_Params
{
public:
	bool                                         CallFunc_IsTextEditing_IsEditing;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.BP_GetDesiredFocusTarget
struct UWBP_WorldSetting_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTarget_TargetWidget;              // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.OnCompletedSaveSetting
struct UWBP_WorldSetting_C_OnCompletedSaveSetting_Params
{
public:
	bool                                         IsSuccess;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.OnFilteredWorldName
struct UWBP_WorldSetting_C_OnFilteredWorldName_Params
{
public:
	class FString                                NewWorldName;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WBP_WorldSetting.WBP_WorldSetting_C.ExecuteUbergraph_WBP_WorldSetting
struct UWBP_WorldSetting_C_ExecuteUbergraph_WBP_WorldSetting_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C69[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_WorldSetting* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Setting; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x30(0x18)(None)
	bool                                         CallFunc_IsEditedSetting_IsEdited;                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsSuccess;                            // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C6B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_NewWorldName;                         // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


