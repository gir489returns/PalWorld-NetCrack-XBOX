#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass BP_WorldSecurityLaw_TheftItem.BP_WorldSecurityLaw_TheftItem_C
class UBP_WorldSecurityLaw_TheftItem_C : public UPalWorldSecurityLawTrigger_ItemMove
{
public:

	static class UClass* StaticClass();
	static class UBP_WorldSecurityLaw_TheftItem_C* GetDefaultObj();

	bool Condition(struct FPalItemOperationInfo_Move& EventInfo, bool CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue, bool CallFunc_IsEqualsGroupIndividualIdAndSlotIds_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
};

}


