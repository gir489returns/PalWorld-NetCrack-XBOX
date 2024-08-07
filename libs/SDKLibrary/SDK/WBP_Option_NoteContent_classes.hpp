#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Option_NoteContent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Option_NoteContent.WBP_Option_NoteContent_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_Option_NoteContent_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalRichTextBlock_C*                 BP_PalRichTextBlock_Content;                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelImage;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Content;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        New_Offset;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetNoteContent(class UPalNoteData* NoteData, const class FText& Desc);
	void ExecuteUbergraph_WBP_Option_NoteContent(int32 EntryPoint);
	void ChangeOffset(double NewOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Option_NoteContent_C">();
	}
	static class UWBP_Option_NoteContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Option_NoteContent_C>();
	}
};
static_assert(alignof(UWBP_Option_NoteContent_C) == 0x000008, "Wrong alignment on UWBP_Option_NoteContent_C");
static_assert(sizeof(UWBP_Option_NoteContent_C) == 0x0002A8, "Wrong size on UWBP_Option_NoteContent_C");
static_assert(offsetof(UWBP_Option_NoteContent_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Option_NoteContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Option_NoteContent_C, BP_PalRichTextBlock_Content) == 0x000280, "Member 'UWBP_Option_NoteContent_C::BP_PalRichTextBlock_Content' has a wrong offset!");
static_assert(offsetof(UWBP_Option_NoteContent_C, CanvasPanelImage) == 0x000288, "Member 'UWBP_Option_NoteContent_C::CanvasPanelImage' has a wrong offset!");
static_assert(offsetof(UWBP_Option_NoteContent_C, Image) == 0x000290, "Member 'UWBP_Option_NoteContent_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_Option_NoteContent_C, ScrollBox_Content) == 0x000298, "Member 'UWBP_Option_NoteContent_C::ScrollBox_Content' has a wrong offset!");
static_assert(offsetof(UWBP_Option_NoteContent_C, New_Offset) == 0x0002A0, "Member 'UWBP_Option_NoteContent_C::New_Offset' has a wrong offset!");

}

