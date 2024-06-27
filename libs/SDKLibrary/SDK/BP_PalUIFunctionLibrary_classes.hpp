#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalUIFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalUIFunctionLibrary.BP_PalUIFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PalUIFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void BuildPassiveSkillDescText(class FName PassiveName, class UObject* __WorldContext, class FText* Text);
	static void CanUseItemInInventory(class FName StaticItemId, class UObject* __WorldContext, bool* CanUse);
	static void ChangeTextFontMaterial(class UPalTextBlockBase* TargetTextBlock, class UMaterial* NewMaterial, class UObject* __WorldContext);
	static void ChangeTextFontMaterialInstance(class UPalTextBlockBase* TargetTextBlock, class UMaterialInstance* NewMaterial, class UObject* __WorldContext);
	static void GetLocalizedTextFromHandle(const struct FDataTableRowHandle& RowHandle, EPalLocalizeTextCategory TextVategory, class UObject* __WorldContext, class FText* Text);
	static void GetPalGenderText(EPalGenderType GenderType, class UObject* __WorldContext, class FText* Text);
	static void GetPartnerSkillIcon(class FName PalName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* SoftIconTexture, bool* IsSquare);
	static void GetTalentValueTextMaterial(int32 TalentValue, class UObject* __WorldContext, class UMaterialInstance** FontMaterial);
	static void GetTechnologyIcon(class FName TechnologyName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* SoftIconTexture);
	static void GetWorkDetailName(class UPalIndividualCharacterHandle* Handle, bool NotBattle, class UObject* __WorldContext, class FText* OutText);
	static void IsDisplayWorkSuitability_ForUI(EPalWorkSuitability Suitability, class UObject* __WorldContext, bool* ShouldDisplay);
	static void Project_Icon_Position_to_World_Postion(const struct FVector2D& MinLandscapePositionXY, const struct FVector2D& MaxLandscapePositionXY, class UWidget* TargetWigdet, class UCanvasPanel* TargetCanvas, double Scale, class UObject* __WorldContext, struct FVector* WorldPosition);
	static void ProjectIconToWorldMap(const struct FVector2D& MinLandscapePositionXY, const struct FVector2D& MaxLandscapePositionXY, class UCanvasPanel* TargetCanvas, const struct FVector& WorldLocation, class UWidget* AddWidget, class UObject* __WorldContext);
	static void SetItemInfo(class FName ItemId, class UPalTextBlockBase* NameTextBlock, class UPalTextBlockBase* DescTextBlock, class UImage* IconImage, class UObject* __WorldContext);
	static void SetMapObjectInfo(class FName MapObjectId, class UPalTextBlockBase* NameTextBlock, class UPalTextBlockBase* DescTextBlock, class UImage* IconImage, class UObject* __WorldContext);
	static void SetSanityToTextBox(class UPalTextBlockBase* TargetText, int32 NowSanity, int32 MaxSanity, class UMaterial* NormalMaterial, class UMaterial* MiddleSanityMaterial, class UMaterial* LowSanityMaterial, class UObject* __WorldContext);
	static void SetStatusValueToText(class UBP_PalTextBlock_C* MeleeText, class UBP_PalTextBlock_C* RangeText, class UBP_PalTextBlock_C* DefenseText, class UBP_PalTextBlock_C* SupportText, class UBP_PalTextBlock_C* SpeedText, class UPalIndividualCharacterParameter* IndividualParam, bool IsBuffedValue, class UObject* __WorldContext);
	static void Setup_Pal_Characteristic_Widget(TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>& CharacteristicWidget, TArray<class FName>& PassiveList, class UObject* __WorldContext);
	static void SetupGenusCategoryWidget(class UWBP_PalGenusCategoryIcon_C* IconWidget, class UPalTextBlockBase* TextBlock, class FName CharacterID, class UObject* __WorldContext);
	static void SetupPalConditionWidget(TArray<class UWBP_MainMenu_Pal_State_C*>& ConditionWidget, TArray<EPalUIConditionType>& Conditions, class UObject* __WorldContext);
	static void SetupPalWazaWidget(TArray<class UWBP_MainMenu_Pal_Skill_Active_C*>& WazaWidget, TArray<EPalWazaID>& WazaID, bool ShowEmptySlot, class UObject* __WorldContext);
	static void SetupTalentText(class UBP_PalTextBlock_C* TalentHP_ValueText, class UBP_PalTextBlock_C* TalentATK_ValueText, class UBP_PalTextBlock_C* TalentDEF_ValueText, int32 TalentHP, int32 TalentATK, int32 TalentDEF, class UObject* __WorldContext);
	static void SetupWorkSuitabilityWidgetToUniformGrid(class UUniformGridPanel* UniformGridPanel, int32 RowNum, int32 ColumnNum, const TMap<EPalWorkSuitability, int32>& SuitabilityRankMap, class UObject* __WorldContext);
	static void SetWeaponSubParameterToWidgets(const struct FPalWeaponSubParameterData& SubParameter, class UBP_PalTextBlock_C* DPSTextBlock, class UProgressBar* RangeGauge, class UProgressBar* StabilityGauge, class UProgressBar* AccuracyGauge, class UObject* __WorldContext);
	static void SnapWidgetPosition(class UWidget* TargetWidget, class UWidget* RelativeWidget, const struct FVector2D& AnchorPosition, bool IsFitViewport, const struct FVector2D& FitViewportPadding, class UWidget* OffsetRootWidget, class UObject* __WorldContext);
	static void UpdateWorldMapIconPosition(const struct FVector2D& MinLandscapePositionXY, const struct FVector2D& MaxLandscapePositionXY, class UCanvasPanel* TargetCanvas, const struct FVector& WorldLocation, class UWidget* TargetWidget, class UObject* __WorldContext);
	static void WorldLocationToWidgetOffset(const struct FVector2D& LandscapeMinXY, const struct FVector2D& LandscapeMaxXY, const struct FVector& WorldLocation, class UObject* __WorldContext, struct FVector2D* Offset);
	static void WrapSizeBox(class UWidget* ChildWidget, double OverrideWidth, double OverrideHeight, class UObject* SizeBoxOuter, class UObject* __WorldContext, class USizeBox** CreatedSizeBox);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalUIFunctionLibrary_C">();
	}
	static class UBP_PalUIFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalUIFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_PalUIFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_PalUIFunctionLibrary_C");
static_assert(sizeof(UBP_PalUIFunctionLibrary_C) == 0x000028, "Wrong size on UBP_PalUIFunctionLibrary_C");

}

