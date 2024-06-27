#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventoryEquipment_ItemInfo_Tecnology

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryEquipment_ItemInfo_Tecnology.WBP_InventoryEquipment_ItemInfo_Tecnology_C.ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology
// 0x0098 (0x0098 - 0x0000)
struct WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPalStaticItemIdAndNum>         K2Node_CustomEvent_MatDetail;                      // 0x0010(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_CustomEvent_WithStock;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A6D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                 CallFunc_Array_Get_Item;                           // 0x0030(0x000C)(NoDestructor)
	uint8                                         Pad_3A6E[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_InventoryEquipment_ItemInfo_TecnologyList_C* CallFunc_SpawnObject_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStockNum_Stock;                        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A6F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemName_outName;                      // 0x0058(0x0018)()
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       K2Node_DynamicCast_AsVertical_Box_Slot;            // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A70[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStaticItemDataBase*                 CallFunc_GetStaticItemData_ReturnValue;            // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology) == 0x000008, "Wrong alignment on WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology");
static_assert(sizeof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology) == 0x000098, "Wrong size on WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, EntryPoint) == 0x000000, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, K2Node_CustomEvent_MatDetail) == 0x000010, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::K2Node_CustomEvent_MatDetail' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, K2Node_CustomEvent_WithStock) == 0x000020, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::K2Node_CustomEvent_WithStock' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000028, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, CallFunc_SpawnObject_ReturnValue) == 0x000040, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, CallFunc_GetStockNum_Stock) == 0x00004C, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::CallFunc_GetStockNum_Stock' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, CallFunc_GetItemName_outName) == 0x000058, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::CallFunc_GetItemName_outName' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, CallFunc_AddChild_ReturnValue) == 0x000070, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, CallFunc_GetItemIDManager_ReturnValue) == 0x000078, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, K2Node_DynamicCast_AsVertical_Box_Slot) == 0x000080, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::K2Node_DynamicCast_AsVertical_Box_Slot' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology, CallFunc_GetStaticItemData_ReturnValue) == 0x000090, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology::CallFunc_GetStaticItemData_ReturnValue' has a wrong offset!");

// Function WBP_InventoryEquipment_ItemInfo_Tecnology.WBP_InventoryEquipment_ItemInfo_Tecnology_C.GetStockNum
// 0x0050 (0x0050 - 0x0000)
struct WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum final
{
public:
	class FName                                   StaticItemId;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WithStock;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A71[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Stock;                                             // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A72[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalStaticItemIdAndNum>         CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos; // 0x0028(0x0010)(ReferenceParm)
	struct FPalStaticItemIdAndNum                 CallFunc_Array_Get_Item;                           // 0x0038(0x000C)(NoDestructor)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A73[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum) == 0x000008, "Wrong alignment on WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum");
static_assert(sizeof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum) == 0x000050, "Wrong size on WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum, StaticItemId) == 0x000000, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum::StaticItemId' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum, WithStock) == 0x000008, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum::WithStock' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum, Stock) == 0x00000C, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum::Stock' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum, K2Node_MakeArray_Array) == 0x000010, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum, CallFunc_SelectInt_ReturnValue) == 0x000020, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum, CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos) == 0x000028, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum::CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum, CallFunc_Array_IsEmpty_ReturnValue) == 0x000044, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum, CallFunc_SelectInt_ReturnValue_1) == 0x000048, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");

// Function WBP_InventoryEquipment_ItemInfo_Tecnology.WBP_InventoryEquipment_ItemInfo_Tecnology_C.SetDetails
// 0x0018 (0x0018 - 0x0000)
struct WBP_InventoryEquipment_ItemInfo_Tecnology_C_SetDetails final
{
public:
	TArray<struct FPalStaticItemIdAndNum>         MatDetail;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          WithStock;                                         // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_SetDetails) == 0x000008, "Wrong alignment on WBP_InventoryEquipment_ItemInfo_Tecnology_C_SetDetails");
static_assert(sizeof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_SetDetails) == 0x000018, "Wrong size on WBP_InventoryEquipment_ItemInfo_Tecnology_C_SetDetails");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_SetDetails, MatDetail) == 0x000000, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_SetDetails::MatDetail' has a wrong offset!");
static_assert(offsetof(WBP_InventoryEquipment_ItemInfo_Tecnology_C_SetDetails, WithStock) == 0x000010, "Member 'WBP_InventoryEquipment_ItemInfo_Tecnology_C_SetDetails::WithStock' has a wrong offset!");

}

