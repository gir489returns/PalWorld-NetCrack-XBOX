#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x180 - 0x168)
// BlueprintGeneratedClass BP_ActionInteractBase.BP_ActionInteractBase_C
class UBP_ActionInteractBase_C : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  InteractFlagName;                                  // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          MovableTimer;                                      // 0x178(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionInteractBase_C* GetDefaultObj();

	void OnJumpDelegate(class UPalCharacterMovementComponent* Component);
	void EnableMove(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void UnbindDelegates(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CancelInteract(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsInteracting_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BindDelegates(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetPlayerFlags(bool IsDisable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalInteractComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsToggleInteracting_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void OnBeginAction();
	void OnEndAction();
	void ExecuteUbergraph_BP_ActionInteractBase(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


