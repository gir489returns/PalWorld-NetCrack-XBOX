#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x198 - 0x180)
// BlueprintGeneratedClass BP_ActionArchitecture.BP_ActionArchitecture_C
class UBP_ActionArchitecture_C : public UBP_ActionInteractBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x180(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                HammerActor;                                       // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  FlagName;                                          // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionArchitecture_C* GetDefaultObj();

	void OnEndAction();
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionArchitecture(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, class FName CallFunc_DecreaseFullStomachRate_Work_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class ABP_ArchitectureHammer_C* CallFunc_FinishSpawningActor_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue_1, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


