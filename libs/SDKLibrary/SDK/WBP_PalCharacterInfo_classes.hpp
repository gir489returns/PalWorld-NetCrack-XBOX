#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCharacterInfo

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalCharacterInfo.WBP_PalCharacterInfo_C
// 0x0198 (0x0410 - 0x0278)
class UWBP_PalCharacterInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AttackIVText;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BossIcon;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrentHPText;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrentHungerText;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrentSanityText;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrentStaminaText;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DefenseIVText;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GenderIcon;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HealthIVText;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HPContainer;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HungerContainer;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_101;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_218;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_343;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           KeyGuideContainer;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelText;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MaxHPText;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MaxHungerText;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MaxSanityText;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MaxStaminaText;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PassiveSkillList;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PrimaryKeyGuideContainer;                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 PrimaryKeyGuideIcon;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PrimaryKeyGuideText;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RankContainer;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RankIcon1;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RankIcon2;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RankIcon3;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RankIcon4;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RareIcon;                                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SecondaryKeyGuideContainer;                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalKeyGuideIcon_C*                 SecondaryKeyGuideIcon;                             // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SecondaryKeyGuideText;                             // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TitleBar;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleText;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive;                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_1;                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_2;                  // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_Skill_Passive_C*      WBP_MainMenu_Pal_Skill_Passive_3;                  // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WorkSpeedIVText;                                   // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsVisible;                                        // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Show();
	void SetTitle(const class FText& Title);
	void SetPassive(class UWBP_MainMenu_Pal_Skill_Passive_C* Button, class FName ID);
	void SetData(const struct FPalIndividualCharacterSaveParameter& Param);
	void Hide();
	void ExecuteUbergraph_WBP_PalCharacterInfo(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCharacterInfo_C">();
	}
	static class UWBP_PalCharacterInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCharacterInfo_C>();
	}
};
static_assert(alignof(UWBP_PalCharacterInfo_C) == 0x000008, "Wrong alignment on UWBP_PalCharacterInfo_C");
static_assert(sizeof(UWBP_PalCharacterInfo_C) == 0x000410, "Wrong size on UWBP_PalCharacterInfo_C");
static_assert(offsetof(UWBP_PalCharacterInfo_C, UberGraphFrame) == 0x000278, "Member 'UWBP_PalCharacterInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, AttackIVText) == 0x000280, "Member 'UWBP_PalCharacterInfo_C::AttackIVText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, BossIcon) == 0x000288, "Member 'UWBP_PalCharacterInfo_C::BossIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, CurrentHPText) == 0x000290, "Member 'UWBP_PalCharacterInfo_C::CurrentHPText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, CurrentHungerText) == 0x000298, "Member 'UWBP_PalCharacterInfo_C::CurrentHungerText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, CurrentSanityText) == 0x0002A0, "Member 'UWBP_PalCharacterInfo_C::CurrentSanityText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, CurrentStaminaText) == 0x0002A8, "Member 'UWBP_PalCharacterInfo_C::CurrentStaminaText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, DefenseIVText) == 0x0002B0, "Member 'UWBP_PalCharacterInfo_C::DefenseIVText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, GenderIcon) == 0x0002B8, "Member 'UWBP_PalCharacterInfo_C::GenderIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, HealthIVText) == 0x0002C0, "Member 'UWBP_PalCharacterInfo_C::HealthIVText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, HPContainer) == 0x0002C8, "Member 'UWBP_PalCharacterInfo_C::HPContainer' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, HungerContainer) == 0x0002D0, "Member 'UWBP_PalCharacterInfo_C::HungerContainer' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image) == 0x0002D8, "Member 'UWBP_PalCharacterInfo_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image_1) == 0x0002E0, "Member 'UWBP_PalCharacterInfo_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image_2) == 0x0002E8, "Member 'UWBP_PalCharacterInfo_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image_3) == 0x0002F0, "Member 'UWBP_PalCharacterInfo_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image_4) == 0x0002F8, "Member 'UWBP_PalCharacterInfo_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image_5) == 0x000300, "Member 'UWBP_PalCharacterInfo_C::Image_5' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image_6) == 0x000308, "Member 'UWBP_PalCharacterInfo_C::Image_6' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image_7) == 0x000310, "Member 'UWBP_PalCharacterInfo_C::Image_7' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image_8) == 0x000318, "Member 'UWBP_PalCharacterInfo_C::Image_8' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image_101) == 0x000320, "Member 'UWBP_PalCharacterInfo_C::Image_101' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image_218) == 0x000328, "Member 'UWBP_PalCharacterInfo_C::Image_218' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, Image_343) == 0x000330, "Member 'UWBP_PalCharacterInfo_C::Image_343' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, KeyGuideContainer) == 0x000338, "Member 'UWBP_PalCharacterInfo_C::KeyGuideContainer' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, LevelText) == 0x000340, "Member 'UWBP_PalCharacterInfo_C::LevelText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, MaxHPText) == 0x000348, "Member 'UWBP_PalCharacterInfo_C::MaxHPText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, MaxHungerText) == 0x000350, "Member 'UWBP_PalCharacterInfo_C::MaxHungerText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, MaxSanityText) == 0x000358, "Member 'UWBP_PalCharacterInfo_C::MaxSanityText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, MaxStaminaText) == 0x000360, "Member 'UWBP_PalCharacterInfo_C::MaxStaminaText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, PassiveSkillList) == 0x000368, "Member 'UWBP_PalCharacterInfo_C::PassiveSkillList' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, PrimaryKeyGuideContainer) == 0x000370, "Member 'UWBP_PalCharacterInfo_C::PrimaryKeyGuideContainer' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, PrimaryKeyGuideIcon) == 0x000378, "Member 'UWBP_PalCharacterInfo_C::PrimaryKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, PrimaryKeyGuideText) == 0x000380, "Member 'UWBP_PalCharacterInfo_C::PrimaryKeyGuideText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, RankContainer) == 0x000388, "Member 'UWBP_PalCharacterInfo_C::RankContainer' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, RankIcon1) == 0x000390, "Member 'UWBP_PalCharacterInfo_C::RankIcon1' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, RankIcon2) == 0x000398, "Member 'UWBP_PalCharacterInfo_C::RankIcon2' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, RankIcon3) == 0x0003A0, "Member 'UWBP_PalCharacterInfo_C::RankIcon3' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, RankIcon4) == 0x0003A8, "Member 'UWBP_PalCharacterInfo_C::RankIcon4' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, RareIcon) == 0x0003B0, "Member 'UWBP_PalCharacterInfo_C::RareIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, SecondaryKeyGuideContainer) == 0x0003B8, "Member 'UWBP_PalCharacterInfo_C::SecondaryKeyGuideContainer' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, SecondaryKeyGuideIcon) == 0x0003C0, "Member 'UWBP_PalCharacterInfo_C::SecondaryKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, SecondaryKeyGuideText) == 0x0003C8, "Member 'UWBP_PalCharacterInfo_C::SecondaryKeyGuideText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, TitleBar) == 0x0003D0, "Member 'UWBP_PalCharacterInfo_C::TitleBar' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, TitleText) == 0x0003D8, "Member 'UWBP_PalCharacterInfo_C::TitleText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, WBP_MainMenu_Pal_Skill_Passive) == 0x0003E0, "Member 'UWBP_PalCharacterInfo_C::WBP_MainMenu_Pal_Skill_Passive' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, WBP_MainMenu_Pal_Skill_Passive_1) == 0x0003E8, "Member 'UWBP_PalCharacterInfo_C::WBP_MainMenu_Pal_Skill_Passive_1' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, WBP_MainMenu_Pal_Skill_Passive_2) == 0x0003F0, "Member 'UWBP_PalCharacterInfo_C::WBP_MainMenu_Pal_Skill_Passive_2' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, WBP_MainMenu_Pal_Skill_Passive_3) == 0x0003F8, "Member 'UWBP_PalCharacterInfo_C::WBP_MainMenu_Pal_Skill_Passive_3' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, WorkSpeedIVText) == 0x000400, "Member 'UWBP_PalCharacterInfo_C::WorkSpeedIVText' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterInfo_C, bIsVisible) == 0x000408, "Member 'UWBP_PalCharacterInfo_C::bIsVisible' has a wrong offset!");

}
