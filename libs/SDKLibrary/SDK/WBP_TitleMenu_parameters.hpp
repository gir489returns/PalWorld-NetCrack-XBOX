#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TitleMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_TitleMenu.WBP_TitleMenu_C.�������
// 0x0001 (0x0001 - 0x0000)
struct WBP_TitleMenu_C_________ final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleMenu_C_________) == 0x000001, "Wrong alignment on WBP_TitleMenu_C_________");
static_assert(sizeof(WBP_TitleMenu_C_________) == 0x000001, "Wrong size on WBP_TitleMenu_C_________");
static_assert(offsetof(WBP_TitleMenu_C_________, bResult) == 0x000000, "Member 'WBP_TitleMenu_C_________::bResult' has a wrong offset!");

// Function WBP_TitleMenu.WBP_TitleMenu_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_TitleMenu_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleMenu_C_Tick) == 0x000008, "Wrong alignment on WBP_TitleMenu_C_Tick");
static_assert(sizeof(WBP_TitleMenu_C_Tick) == 0x000048, "Wrong size on WBP_TitleMenu_C_Tick");
static_assert(offsetof(WBP_TitleMenu_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_TitleMenu_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_TitleMenu_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_TitleMenu.WBP_TitleMenu_C.OnClickedMenu__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_TitleMenu_C_OnClickedMenu__DelegateSignature final
{
public:
	class UWBP_Title_MenuButton_C*                ButtonWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleMenu_C_OnClickedMenu__DelegateSignature) == 0x000008, "Wrong alignment on WBP_TitleMenu_C_OnClickedMenu__DelegateSignature");
static_assert(sizeof(WBP_TitleMenu_C_OnClickedMenu__DelegateSignature) == 0x000008, "Wrong size on WBP_TitleMenu_C_OnClickedMenu__DelegateSignature");
static_assert(offsetof(WBP_TitleMenu_C_OnClickedMenu__DelegateSignature, ButtonWidget) == 0x000000, "Member 'WBP_TitleMenu_C_OnClickedMenu__DelegateSignature::ButtonWidget' has a wrong offset!");

// Function WBP_TitleMenu.WBP_TitleMenu_C.GetTopButton
// 0x0008 (0x0008 - 0x0000)
struct WBP_TitleMenu_C_GetTopButton final
{
public:
	class UWidget*                                TargetWidget;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleMenu_C_GetTopButton) == 0x000008, "Wrong alignment on WBP_TitleMenu_C_GetTopButton");
static_assert(sizeof(WBP_TitleMenu_C_GetTopButton) == 0x000008, "Wrong size on WBP_TitleMenu_C_GetTopButton");
static_assert(offsetof(WBP_TitleMenu_C_GetTopButton, TargetWidget) == 0x000000, "Member 'WBP_TitleMenu_C_GetTopButton::TargetWidget' has a wrong offset!");

// Function WBP_TitleMenu.WBP_TitleMenu_C.ExecuteUbergraph_WBP_TitleMenu
// 0x0298 (0x0298 - 0x0000)
struct WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPocketpairUserSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UPocketpairUserInfo*              CallFunc_GetLocalUserInfo_ReturnValue;             // 0x0010(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameInstance*                       K2Node_DynamicCast_AsPal_Game_Instance;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetOnlineSubsystemName_ReturnValue;       // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNickname_ReturnValue;                  // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0050(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D0(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0128(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0138(0x0018)()
	class FString                                 CallFunc_GetBuildConfiguration_ReturnValue;        // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Map_Find_Value;                           // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMultiplayRestricted_ReturnValue;        // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayVersion_ReturnValue;            // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCanPlayDedicatedServer_ReturnValue;     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01B8(0x0018)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x01D0(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0218(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0230(0x0018)()
	bool                                          CallFunc_IsGDK_ReturnValue;                        // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCanOpenExternalWebSite_ReturnValue;     // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCanPlayInviteCode_ReturnValue;          // 0x024A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCanPlaySinglePlay_ReturnValue;          // 0x024B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bResult)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x024C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bResult;                        // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25D[0x3];                                      // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_2;        // 0x0268(0x0018)()
	struct FGuid                                  CallFunc_Dialog_ReturnValue;                       // 0x0280(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsXB1_ReturnValue;                        // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsXSX_ReturnValue;                        // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGDK_ReturnValue_1;                      // 0x0292(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0293(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu) == 0x000008, "Wrong alignment on WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu");
static_assert(sizeof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu) == 0x000298, "Wrong size on WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, EntryPoint) == 0x000000, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_GetLocalUserInfo_ReturnValue) == 0x000010, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_GetLocalUserInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, K2Node_DynamicCast_AsPal_Game_Instance) == 0x000028, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::K2Node_DynamicCast_AsPal_Game_Instance' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_GetOnlineSubsystemName_ReturnValue) == 0x000034, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_GetOnlineSubsystemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_GetNickname_ReturnValue) == 0x000040, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_GetNickname_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_Conv_NameToText_ReturnValue) == 0x000050, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D0, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000120, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, K2Node_MakeArray_Array) == 0x000128, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_Format_ReturnValue) == 0x000138, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_GetBuildConfiguration_ReturnValue) == 0x000150, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_GetBuildConfiguration_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_Map_Find_Value) == 0x000160, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_Map_Find_ReturnValue) == 0x000170, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_Concat_StrStr_ReturnValue) == 0x000178, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_IsMultiplayRestricted_ReturnValue) == 0x000188, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_IsMultiplayRestricted_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_GetDisplayVersion_ReturnValue) == 0x000190, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_GetDisplayVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0001A0, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_IsCanPlayDedicatedServer_ReturnValue) == 0x0001B0, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_IsCanPlayDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001B8, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, K2Node_Event_MyGeometry) == 0x0001D0, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, K2Node_Event_InDeltaTime) == 0x000210, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000218, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000230, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_IsGDK_ReturnValue) == 0x000248, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_IsGDK_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_IsCanOpenExternalWebSite_ReturnValue) == 0x000249, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_IsCanOpenExternalWebSite_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_IsCanPlayInviteCode_ReturnValue) == 0x00024A, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_IsCanPlayInviteCode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_IsCanPlaySinglePlay_ReturnValue) == 0x00024B, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_IsCanPlaySinglePlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, K2Node_CreateDelegate_OutputDelegate) == 0x00024C, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, K2Node_CustomEvent_bResult) == 0x00025C, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::K2Node_CustomEvent_bResult' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_GetHUDService_ReturnValue) == 0x000260, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_GetLocalizedTextFromHandle_Text_2) == 0x000268, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_GetLocalizedTextFromHandle_Text_2' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_Dialog_ReturnValue) == 0x000280, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_Dialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_IsXB1_ReturnValue) == 0x000290, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_IsXB1_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_IsXSX_ReturnValue) == 0x000291, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_IsXSX_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_IsGDK_ReturnValue_1) == 0x000292, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_IsGDK_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu, CallFunc_BooleanOR_ReturnValue) == 0x000293, "Member 'WBP_TitleMenu_C_ExecuteUbergraph_WBP_TitleMenu::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

