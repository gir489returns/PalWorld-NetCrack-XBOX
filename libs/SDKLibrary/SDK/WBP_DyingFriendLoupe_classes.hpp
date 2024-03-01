#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x4D0 - 0x488)
// WidgetBlueprintGeneratedClass WBP_DyingFriendLoupe.WBP_DyingFriendLoupe_C
class UWBP_DyingFriendLoupe_C : public UWBP_LoupeBase_C
{
public:
	class UWBP_GuildMemberGauge_C*               WBP_GuildMemberGauge;                              // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         TargetHandle;                                      // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_Status_Dying_C*                    Dying_Status;                                      // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                        SyncId;                                            // 0x4A0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DyingFriendLoupe_C* GetDefaultObj();

	void OnSyncIndividualParameter(const struct FPalInstanceID& InstanceId, bool CallFunc_IsValidInstanceID_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue, class UPalStatusBase* CallFunc_GetExecutionStatus_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UBP_Status_Dying_C* K2Node_DynamicCast_AsBP_Status_Dying, bool K2Node_DynamicCast_bSuccess);
	void Setup(class UBP_Status_Dying_C* DyingStatus, const struct FPalInstanceID& CallFunc_GetIndividualID_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValidInstanceID_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetNickName_outName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void SetFinalWidgetOpacity(double CalcedOpacity, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	bool IsEnableLoupe(bool CallFunc_IsValid_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPalStatusBase* CallFunc_GetExecutionStatus_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UBP_Status_Dying_C* K2Node_DynamicCast_AsBP_Status_Dying, bool K2Node_DynamicCast_bSuccess, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void GetTargetWidgetSize(struct FVector2D* OutVector, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue);
	void GetLoupeWidgetSize(struct FVector2D* WidgetSize, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue);
	void GetTranslationTarget(class UWidget** Widget);
	void UpdateArrowImageAngle(double NewAngle, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void CalcScreenPosition(const struct FVector& CallFunc_GetTargetWorldLocation_outVector, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue);
	void GetTargetWorldLocation(struct FVector* OutVector, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


