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
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.WBP_TitleLocalWorldSelect_AutoGenFunc
struct UWBP_TitleLocalWorldSelect_C_WBP_TitleLocalWorldSelect_AutoGenFunc_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.On Closed Delete World Window
struct UWBP_TitleLocalWorldSelect_C_On_Closed_Delete_World_Window_Params
{
public:
	class UPalHUDDispatchParameterBase*          Param;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_HUDDIspatchParameter_DeleteWorld_C* K2Node_DynamicCast_AsBP_HUDDIspatch_Parameter_Delete_World; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalUILocalWorldDisplayData>   CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue; // 0x18(0x10)(ReferenceParm)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetFocusTargetForLocalWorldList_TargetWidget; // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DeleteWorld_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.On Closed World Setting Window
struct UWBP_TitleLocalWorldSelect_C_On_Closed_World_Setting_Window_Params
{
public:
	class UPalHUDDispatchParameterBase*          Param;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_WorldSetting* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_World_Setting; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalUILocalWorldDisplayData           CallFunc_Map_Find_Value;                           // 0x18(0x58)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalUILocalWorldDisplayData           K2Node_SetFieldsInStruct_StructOut;                // 0x78(0x58)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.OnCancelAction
struct UWBP_TitleLocalWorldSelect_C_OnCancelAction_Params
{
public:
	class UWidget*                               CallFunc_GetFocusTargetForLocalWorldList_TargetWidget; // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.SetupWorldList
struct UWBP_TitleLocalWorldSelect_C_SetupWorldList_Params
{
public:
	TArray<struct FPalUILocalWorldDisplayData>   CallFunc_GetSortedWorldDisplayInfoArray_ReturnValue; // 0x0(0x10)(ReferenceParm)
	class UWidget*                               CallFunc_GetFocusTargetForLocalWorldList_TargetWidget; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FPalUILocalWorldDisplayData> CallFunc_GetWorldDisplayInfo_OutDisplayInfo;       // 0x18(0x50)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BP_GetDesiredFocusTarget
struct UWBP_TitleLocalWorldSelect_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTargetForLocalWorldList_TargetWidget; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature
struct UWBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_0_OnClickedWorldButton__DelegateSignature_Params
{
public:
	class UWBP_Title_WorldSelect_ListContent_C*  ButtonWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature
struct UWBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_1_OnClickedNewWorldButton__DelegateSignature_Params
{
public:
	class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* ButtonWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.«¹¿à¤ÙóÈ
struct UWBP_TitleLocalWorldSelect_C__________Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature
struct UWBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedOpenDirectoryButton__DelegateSignature_Params
{
public:
	class UWBP_Title_WorldSelect_ListContent_C*  SelectedWorldButton;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature
struct UWBP_TitleLocalWorldSelect_C_BndEvt__WBP_TitleLocalWorldSelect_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedSelectBackupButton__DelegateSignature_Params
{
public:
	class UWBP_Title_WorldSelect_ListContent_C*  SelectedWorldButton;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x308 (0x308 - 0x0)
// Function WBP_TitleLocalWorldSelect.WBP_TitleLocalWorldSelect_C.ExecuteUbergraph_WBP_TitleLocalWorldSelect
struct UWBP_TitleLocalWorldSelect_C_ExecuteUbergraph_WBP_TitleLocalWorldSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_SaveDataBackupSelect* CallFunc_SpawnObject_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Push_ReturnValue;                         // 0x18(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTargetForLocalWorldList_TargetWidget; // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue_1;              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x48(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_WorldSetting* CallFunc_SpawnObject_ReturnValue_1;                // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Push_ReturnValue_1;                       // 0x60(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x70(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* K2Node_ComponentBoundEvent_ButtonWidget;           // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Title_WorldSelect_ListContent_C*  K2Node_ComponentBoundEvent_ButtonWidget_1;         // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBindedSaveDirectoryName_DirectoryName; // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_HUDDIspatchParameter_DeleteWorld_C* CallFunc_CreateDispatchParameterForK2Node_ReturnValue; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Push_ReturnValue_2;                       // 0xA8(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue_2;              // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xC0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_WorldSetting* CallFunc_SpawnObject_ReturnValue_2;                // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Push_ReturnValue_3;                       // 0xD8(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xE8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalOptionWorldSaveData               CallFunc_SelectWorld_OptionWorldData;              // 0xF8(0x138)(None)
	bool                                         CallFunc_SelectWorld_ReturnValue;                  // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_Dialog_ReturnValue;                       // 0x234(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bResult;                        // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DAE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalGameInstance_C*                 K2Node_DynamicCast_AsBP_Pal_Game_Instance;         // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Title_WorldSelect_ListContent_C*  K2Node_ComponentBoundEvent_SelectedWorldButton_1;  // 0x260(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetBindedSaveDirectoryName_DirectoryName_1; // 0x270(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FPalUILocalWorldDisplayData           CallFunc_Map_Find_Value;                           // 0x280(0x58)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWindows_ReturnValue;                    // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Title_WorldSelect_ListContent_C*  K2Node_ComponentBoundEvent_SelectedWorldButton;    // 0x2E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x2E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetBindedSaveDirectoryName_DirectoryName_2; // 0x2F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


