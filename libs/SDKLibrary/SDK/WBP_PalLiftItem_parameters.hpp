#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalLiftItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_PalLiftItem.WBP_PalLiftItem_C.Dispose
// 0x0024 (0x0024 - 0x0000)
struct WBP_PalLiftItem_C_Dispose final
{
public:
	TDelegate<void(TSoftObjectPtr<class UTexture2D> IconTexture)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Count)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLiftItem_C_Dispose) == 0x000004, "Wrong alignment on WBP_PalLiftItem_C_Dispose");
static_assert(sizeof(WBP_PalLiftItem_C_Dispose) == 0x000024, "Wrong size on WBP_PalLiftItem_C_Dispose");
static_assert(offsetof(WBP_PalLiftItem_C_Dispose, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalLiftItem_C_Dispose::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_Dispose, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_PalLiftItem_C_Dispose::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_Dispose, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_PalLiftItem_C_Dispose::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalLiftItem.WBP_PalLiftItem_C.On Update Icon Texture Path
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalLiftItem_C_On_Update_Icon_Texture_Path final
{
public:
	TSoftObjectPtr<class UTexture2D>              IconTexture;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLiftItem_C_On_Update_Icon_Texture_Path) == 0x000008, "Wrong alignment on WBP_PalLiftItem_C_On_Update_Icon_Texture_Path");
static_assert(sizeof(WBP_PalLiftItem_C_On_Update_Icon_Texture_Path) == 0x000038, "Wrong size on WBP_PalLiftItem_C_On_Update_Icon_Texture_Path");
static_assert(offsetof(WBP_PalLiftItem_C_On_Update_Icon_Texture_Path, IconTexture) == 0x000000, "Member 'WBP_PalLiftItem_C_On_Update_Icon_Texture_Path::IconTexture' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_On_Update_Icon_Texture_Path, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_PalLiftItem_C_On_Update_Icon_Texture_Path::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalLiftItem.WBP_PalLiftItem_C.OnDragOver
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_PalLiftItem_C_OnDragOver final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0040(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00D8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLiftItem_C_OnDragOver) == 0x000008, "Wrong alignment on WBP_PalLiftItem_C_OnDragOver");
static_assert(sizeof(WBP_PalLiftItem_C_OnDragOver) == 0x0000E8, "Wrong size on WBP_PalLiftItem_C_OnDragOver");
static_assert(offsetof(WBP_PalLiftItem_C_OnDragOver, MyGeometry) == 0x000000, "Member 'WBP_PalLiftItem_C_OnDragOver::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_OnDragOver, PointerEvent) == 0x000040, "Member 'WBP_PalLiftItem_C_OnDragOver::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_OnDragOver, Operation) == 0x0000D8, "Member 'WBP_PalLiftItem_C_OnDragOver::Operation' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_OnDragOver, ReturnValue) == 0x0000E0, "Member 'WBP_PalLiftItem_C_OnDragOver::ReturnValue' has a wrong offset!");

// Function WBP_PalLiftItem.WBP_PalLiftItem_C.OnFailedItemOperation
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalLiftItem_C_OnFailedItemOperation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLiftItem_C_OnFailedItemOperation) == 0x000008, "Wrong alignment on WBP_PalLiftItem_C_OnFailedItemOperation");
static_assert(sizeof(WBP_PalLiftItem_C_OnFailedItemOperation) == 0x000008, "Wrong size on WBP_PalLiftItem_C_OnFailedItemOperation");
static_assert(offsetof(WBP_PalLiftItem_C_OnFailedItemOperation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WBP_PalLiftItem_C_OnFailedItemOperation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_PalLiftItem.WBP_PalLiftItem_C.OnMouseMove
// 0x0268 (0x0268 - 0x0000)
struct WBP_PalLiftItem_C_OnMouseMove final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            K2Node_MakeStruct_EventReply;                      // 0x0190(0x00B8)()
	struct FVector2D                              CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x0248(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_Vector2dToString_ReturnValue;        // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLiftItem_C_OnMouseMove) == 0x000008, "Wrong alignment on WBP_PalLiftItem_C_OnMouseMove");
static_assert(sizeof(WBP_PalLiftItem_C_OnMouseMove) == 0x000268, "Wrong size on WBP_PalLiftItem_C_OnMouseMove");
static_assert(offsetof(WBP_PalLiftItem_C_OnMouseMove, MyGeometry) == 0x000000, "Member 'WBP_PalLiftItem_C_OnMouseMove::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_OnMouseMove, MouseEvent) == 0x000040, "Member 'WBP_PalLiftItem_C_OnMouseMove::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_OnMouseMove, ReturnValue) == 0x0000D8, "Member 'WBP_PalLiftItem_C_OnMouseMove::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_OnMouseMove, K2Node_MakeStruct_EventReply) == 0x000190, "Member 'WBP_PalLiftItem_C_OnMouseMove::K2Node_MakeStruct_EventReply' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_OnMouseMove, CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue) == 0x000248, "Member 'WBP_PalLiftItem_C_OnMouseMove::CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_OnMouseMove, CallFunc_Conv_Vector2dToString_ReturnValue) == 0x000258, "Member 'WBP_PalLiftItem_C_OnMouseMove::CallFunc_Conv_Vector2dToString_ReturnValue' has a wrong offset!");

// Function WBP_PalLiftItem.WBP_PalLiftItem_C.OnUpdateCount
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalLiftItem_C_OnUpdateCount final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C24[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WBP_PalLiftItem_C_OnUpdateCount) == 0x000008, "Wrong alignment on WBP_PalLiftItem_C_OnUpdateCount");
static_assert(sizeof(WBP_PalLiftItem_C_OnUpdateCount) == 0x000020, "Wrong size on WBP_PalLiftItem_C_OnUpdateCount");
static_assert(offsetof(WBP_PalLiftItem_C_OnUpdateCount, Count) == 0x000000, "Member 'WBP_PalLiftItem_C_OnUpdateCount::Count' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_OnUpdateCount, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_PalLiftItem_C_OnUpdateCount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_PalLiftItem.WBP_PalLiftItem_C.OnUpdateHandleSlot
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalLiftItem_C_OnUpdateHandleSlot final
{
public:
	class UPalIndividualCharacterSlot*            TargetHandleSlot;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLiftItem_C_OnUpdateHandleSlot) == 0x000008, "Wrong alignment on WBP_PalLiftItem_C_OnUpdateHandleSlot");
static_assert(sizeof(WBP_PalLiftItem_C_OnUpdateHandleSlot) == 0x000008, "Wrong size on WBP_PalLiftItem_C_OnUpdateHandleSlot");
static_assert(offsetof(WBP_PalLiftItem_C_OnUpdateHandleSlot, TargetHandleSlot) == 0x000000, "Member 'WBP_PalLiftItem_C_OnUpdateHandleSlot::TargetHandleSlot' has a wrong offset!");

// Function WBP_PalLiftItem.WBP_PalLiftItem_C.Setup
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalLiftItem_C_Setup final
{
public:
	class UPalUILiftSlotModel*                    Param_Model;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterSlot* TargetHandleSlot)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSoftObjectPtr<class UTexture2D> IconTexture)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Count)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLiftItem_C_Setup) == 0x000008, "Wrong alignment on WBP_PalLiftItem_C_Setup");
static_assert(sizeof(WBP_PalLiftItem_C_Setup) == 0x000048, "Wrong size on WBP_PalLiftItem_C_Setup");
static_assert(offsetof(WBP_PalLiftItem_C_Setup, Param_Model) == 0x000000, "Member 'WBP_PalLiftItem_C_Setup::Param_Model' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalLiftItem_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_PalLiftItem_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_Setup, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'WBP_PalLiftItem_C_Setup::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalLiftItem_C_Setup, K2Node_CreateDelegate_OutputDelegate_3) == 0x000038, "Member 'WBP_PalLiftItem_C_Setup::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

}

