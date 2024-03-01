#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x138 - 0x130)
// BlueprintGeneratedClass BP_AIAction_Invader_Idle.BP_AIAction_Invader_Idle_C
class UBP_AIAction_Invader_Idle_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_AIAction_Invader_Idle_C* GetDefaultObj();

	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_Invader_Idle(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, class APawn* K2Node_Event_ControlledPawn);
};

}


