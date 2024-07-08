#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_PartsSelectPanel

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.AddMeshPresets
// 0x01C0 (0x01C0 - 0x0000)
struct WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets final
{
public:
	TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow> PresetMap;                                         // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x0058(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalCharacterCreationMeshPresetDataRow CallFunc_Map_Find_Value;                           // 0x0088(0x0108)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_CharaCre_PartsSelect_sq_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0194(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelect_sq_C*         CallFunc_Create_ReturnValue;                       // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets) == 0x000008, "Wrong alignment on WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets");
static_assert(sizeof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets) == 0x0001C0, "Wrong size on WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, PresetMap) == 0x000000, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::PresetMap' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, CallFunc_Map_Keys_Keys) == 0x000058, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, Temp_int_Array_Index_Variable) == 0x000074, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, CallFunc_Array_Get_Item) == 0x000078, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, CallFunc_NotEqual_NameName_ReturnValue) == 0x000080, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, CallFunc_Map_Find_Value) == 0x000088, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, CallFunc_Map_Find_ReturnValue) == 0x000190, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, K2Node_CreateDelegate_OutputDelegate) == 0x000194, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0001A8, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, CallFunc_Create_ReturnValue) == 0x0001B0, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets, CallFunc_AddChild_ReturnValue) == 0x0001B8, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddMeshPresets::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.AddPreset
// 0x0060 (0x0060 - 0x0000)
struct WBP_CharaCre_PartsSelectPanel_C_AddPreset final
{
public:
	class FName                                   PresetName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              SoftIconTexture;                                   // 0x0008(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TDelegate<void(class UWBP_CharaCre_PartsSelect_sq_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelect_sq_C*         CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PartsSelectPanel_C_AddPreset) == 0x000008, "Wrong alignment on WBP_CharaCre_PartsSelectPanel_C_AddPreset");
static_assert(sizeof(WBP_CharaCre_PartsSelectPanel_C_AddPreset) == 0x000060, "Wrong size on WBP_CharaCre_PartsSelectPanel_C_AddPreset");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddPreset, PresetName) == 0x000000, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddPreset::PresetName' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddPreset, SoftIconTexture) == 0x000008, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddPreset::SoftIconTexture' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddPreset, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddPreset::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddPreset, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000048, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddPreset::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddPreset, CallFunc_Create_ReturnValue) == 0x000050, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddPreset::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_AddPreset, CallFunc_AddChild_ReturnValue) == 0x000058, "Member 'WBP_CharaCre_PartsSelectPanel_C_AddPreset::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel
// 0x0004 (0x0004 - 0x0000)
struct WBP_CharaCre_PartsSelectPanel_C_ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PartsSelectPanel_C_ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel) == 0x000004, "Wrong alignment on WBP_CharaCre_PartsSelectPanel_C_ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel");
static_assert(sizeof(WBP_CharaCre_PartsSelectPanel_C_ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel) == 0x000004, "Wrong size on WBP_CharaCre_PartsSelectPanel_C_ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel, EntryPoint) == 0x000000, "Member 'WBP_CharaCre_PartsSelectPanel_C_ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel::EntryPoint' has a wrong offset!");

// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.GetTopFocusTarget
// 0x0020 (0x0020 - 0x0000)
struct WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelect_sq_C*         K2Node_DynamicCast_AsWBP_Chara_Cre_Parts_Select_Sq; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget) == 0x000008, "Wrong alignment on WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget");
static_assert(sizeof(WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget) == 0x000020, "Wrong size on WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget, Widget) == 0x000000, "Member 'WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget, K2Node_DynamicCast_AsWBP_Chara_Cre_Parts_Select_Sq) == 0x000010, "Member 'WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget::K2Node_DynamicCast_AsWBP_Chara_Cre_Parts_Select_Sq' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.OnClicked_Internal
// 0x0018 (0x0018 - 0x0000)
struct WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal final
{
public:
	class UWBP_CharaCre_PartsSelect_sq_C*         Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetBindedPresetName_PresetName;           // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal) == 0x000008, "Wrong alignment on WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal");
static_assert(sizeof(WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal) == 0x000018, "Wrong size on WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal, Button) == 0x000000, "Member 'WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal::Button' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal, CallFunc_GetBindedPresetName_PresetName) == 0x00000C, "Member 'WBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal::CallFunc_GetBindedPresetName_PresetName' has a wrong offset!");

// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.OnClickedAnyContent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharaCre_PartsSelectPanel_C_OnClickedAnyContent__DelegateSignature final
{
public:
	class FName                                   BindedName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PartsSelectPanel_C_OnClickedAnyContent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_CharaCre_PartsSelectPanel_C_OnClickedAnyContent__DelegateSignature");
static_assert(sizeof(WBP_CharaCre_PartsSelectPanel_C_OnClickedAnyContent__DelegateSignature) == 0x000008, "Wrong size on WBP_CharaCre_PartsSelectPanel_C_OnClickedAnyContent__DelegateSignature");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_OnClickedAnyContent__DelegateSignature, BindedName) == 0x000000, "Member 'WBP_CharaCre_PartsSelectPanel_C_OnClickedAnyContent__DelegateSignature::BindedName' has a wrong offset!");

// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.SetSelectedPresetName
// 0x0018 (0x0018 - 0x0000)
struct WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName final
{
public:
	class FName                                   PresetName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelect_sq_C*         CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName) == 0x000008, "Wrong alignment on WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName");
static_assert(sizeof(WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName) == 0x000018, "Wrong size on WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName, PresetName) == 0x000000, "Member 'WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName::PresetName' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName, CallFunc_Map_Find_Value) == 0x000008, "Member 'WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000012, "Member 'WBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

}

