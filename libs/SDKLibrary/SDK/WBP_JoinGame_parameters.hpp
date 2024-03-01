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

// 0x30 (0x30 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.RequestGetServerListBP
struct UWBP_JoinGame_C_RequestGetServerListBP_Params
{
public:
	enum class EPalUIServerListFilterType        Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Region;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsCleanCache;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NextPage;                                          // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Word;                                              // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.OnCloseJoinServerDialog
struct UWBP_JoinGame_C_OnCloseJoinServerDialog_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Title_WorldSelect_ListContent_C*  K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content; // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.OpenJoinServerDialog
struct UWBP_JoinGame_C_OpenJoinServerDialog_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x10(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x40(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x58(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xA8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xF8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x108(0x18)(None)
	struct FGuid                                 CallFunc_Dialog_ReturnValue;                       // 0x120(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.OnCancelAction
struct UWBP_JoinGame_C_OnCancelAction_Params
{
public:
	bool                                         CallFunc_IsEditingSearchWord_IsEditing;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.BP_GetDesiredFocusTarget
struct UWBP_JoinGame_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTargetForServerList_Widget;       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Title_WorldSelect_ListContent_C*  K2Node_DynamicCast_AsWBP_Title_World_Select_List_Content; // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.DisplayServer
struct UWBP_JoinGame_C_DisplayServer_Params
{
public:
	struct FPalUIServerDataCollectInfo           K2Node_MakeStruct_PalUIServerDataCollectInfo;      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPalUIServerDisplayData>       CallFunc_CollectServerDisplayInfo_OutServerInfo;   // 0x8(0x10)(ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.Completed_B0C690024643A528EA9A2B9DAEA567A3
struct UWBP_JoinGame_C_Completed_B0C690024643A528EA9A2B9DAEA567A3_Params
{
public:
	class FString                                ResponseBody;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bResponseOK;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ResponseCode;                                      // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.Passworde›Œ
struct UWBP_JoinGame_C_Passworde___Params
{
public:
	class UPalHUDDispatchParameterBase*          Param;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.OnChangeVersionIgnoreCheckbox
struct UWBP_JoinGame_C_OnChangeVersionIgnoreCheckbox_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedServerButton__DelegateSignature
struct UWBP_JoinGame_C_BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedServerButton__DelegateSignature_Params
{
public:
	class UWBP_Title_WorldSelect_ListContent_C*  Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedServerSearchButton__DelegateSignature
struct UWBP_JoinGame_C_BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedServerSearchButton__DelegateSignature_Params
{
public:
	class FString                                SearchWord;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.OnClicked_JoinByIPButton
struct UWBP_JoinGame_C_OnClicked_JoinByIPButton_Params
{
public:
	class FString                                Address;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.«¹¿à¤ÙóÈ
struct UWBP_JoinGame_C__________Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnSelectedServerSortType__DelegateSignature
struct UWBP_JoinGame_C_BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnSelectedServerSortType__DelegateSignature_Params
{
public:
	enum class EPalUIServerListSortType          SortType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.«¹¿à¤ÙóÈ_0
struct UWBP_JoinGame_C__________0_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.Ñ¹ïüÉKÕe›
struct UWBP_JoinGame_C______K_e__Params
{
public:
	class UPalHUDDispatchParameterBase*          Param;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4B0 (0x4B0 - 0x0)
// Function WBP_JoinGame.WBP_JoinGame_C.ExecuteUbergraph_WBP_JoinGame
struct UWBP_JoinGame_C_ExecuteUbergraph_WBP_JoinGame_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ResponseBody;                   // 0x18(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bResponseOK;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_ResponseCode;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x48(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FJsonObjectWrapper                    CallFunc_FromString_OutJsonObject;                 // 0x58(0x20)(None)
	bool                                         CallFunc_FromString_ReturnValue;                   // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x7C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetField_OutValue;                        // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetField_ReturnValue;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_Dialog_ReturnValue;                       // 0xA4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetField_OutValue_1;                      // 0xB8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetField_ReturnValue_1;                   // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPocketpairUserSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParame_JoinGameInputCode* CallFunc_SpawnObject_ReturnValue;                  // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xE8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Push_ReturnValue;                         // 0xF8(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*          K2Node_CustomEvent_Param_1;                        // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPassword_ReturnValue;                  // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetSelectRegion_Region;                   // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x13C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsChecked;                     // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Title_WorldSelect_ListContent_C*  K2Node_ComponentBoundEvent_Widget;                 // 0x150(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWBP_Title_WorldSelect_ListContent_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x158(0x30)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	struct FPalUIServerDisplayData               CallFunc_GetBindedServerDisplayData_DisplayData;   // 0x188(0x1A0)(None)
	class FString                                K2Node_ComponentBoundEvent_SearchWord;             // 0x328(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x338(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x348(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSelectRegion_Region_1;                 // 0x358(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Address;                        // 0x368(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x378(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x388(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bResult_1;                      // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalUIServerListSortType          K2Node_ComponentBoundEvent_SortType;               // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bResult;                        // 0x3A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalOptionSubsystem*                   CallFunc_GetOptionSubsystem_ReturnValue;           // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x3B0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x3C8(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x420(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x430(0x18)(None)
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue_1;              // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x450(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UPalHUDDispatchParame_JoinGameInputCode* CallFunc_SpawnObject_ReturnValue_1;                // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHTTPRequestAsyncFunction*             CallFunc_HTTPRequestAsyncFunction_ReturnValue;     // 0x468(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Push_ReturnValue_1;                       // 0x470(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x484(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDDispatchParameterBase*          K2Node_CustomEvent_Param;                          // 0x498(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetSelectRegion_Region_2;                 // 0x4A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


