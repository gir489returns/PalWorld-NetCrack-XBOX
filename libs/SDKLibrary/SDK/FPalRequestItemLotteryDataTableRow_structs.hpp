#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FPalRequestItemLotteryDataTableRow

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct FPalRequestItemLotteryDataTableRow.FPalRequestItemLotteryDataTableRow
// 0x0018 (0x0018 - 0x0000)
struct FFPalRequestItemLotteryDataTableRow final
{
public:
	class FName                                   ItemName_2_BD5693AE46A268A165B9F0A534652D84;       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemNum_28_5D424FC741B30676B343719C44549878;       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A03[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Weight_8_F7EB66974C769D7AA8EA0B99E234AE6B;         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFPalRequestItemLotteryDataTableRow) == 0x000008, "Wrong alignment on FFPalRequestItemLotteryDataTableRow");
static_assert(sizeof(FFPalRequestItemLotteryDataTableRow) == 0x000018, "Wrong size on FFPalRequestItemLotteryDataTableRow");
static_assert(offsetof(FFPalRequestItemLotteryDataTableRow, ItemName_2_BD5693AE46A268A165B9F0A534652D84) == 0x000000, "Member 'FFPalRequestItemLotteryDataTableRow::ItemName_2_BD5693AE46A268A165B9F0A534652D84' has a wrong offset!");
static_assert(offsetof(FFPalRequestItemLotteryDataTableRow, ItemNum_28_5D424FC741B30676B343719C44549878) == 0x000008, "Member 'FFPalRequestItemLotteryDataTableRow::ItemNum_28_5D424FC741B30676B343719C44549878' has a wrong offset!");
static_assert(offsetof(FFPalRequestItemLotteryDataTableRow, Weight_8_F7EB66974C769D7AA8EA0B99E234AE6B) == 0x000010, "Member 'FFPalRequestItemLotteryDataTableRow::Weight_8_F7EB66974C769D7AA8EA0B99E234AE6B' has a wrong offset!");

}

