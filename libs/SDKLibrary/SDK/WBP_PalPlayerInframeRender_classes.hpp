#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalPlayerInframeRender

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalPlayerInframeRender.WBP_PalPlayerInframeRender_C
// 0x0058 (0x0460 - 0x0408)
class UWBP_PalPlayerInframeRender_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber_11;                               // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Captured;                                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCaptureEveryFrame;                               // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBindPlayerEquipment;                             // 0x0429(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B7A[0x6];                                     // 0x042A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PalPlayerCaptureSet_C*              CaptureCamera;                                     // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DelayUpdateMeshTimerHandle;                        // 0x0438(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CaptureSetClass;                                   // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CaptureInterval;                                   // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CaptureSceneTimerHandle;                           // 0x0450(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               RenderTargetMaterial;                              // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddCameraRelativeLocation(const struct FVector& AddLocation);
	void AddRotation(const struct FRotator& AddRotator);
	void Construct();
	void DelayUpdatePlayerMesh(double DelayTime);
	void Destruct();
	void ExecuteUbergraph_WBP_PalPlayerInframeRender(int32 EntryPoint);
	void Initialize(int32 TextureSize);
	void On_Changed_Weapon(class APalWeaponBase* Weapon);
	void OnTimer_CaptureScene();
	void OnUpdateEquipmentSlot(class UPalItemSlot* ItemSlot, EPalPlayerEquipItemSlotType SlotType);
	void RegisterEvent();
	void Request_Capture_by_Make_Info(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void RequestCaptureMyPlayer();
	void Reset();
	void ResetCameraLocation();
	void ResetRotation();
	void UnregisterEvent();
	void UpdateMeshEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalPlayerInframeRender_C">();
	}
	static class UWBP_PalPlayerInframeRender_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalPlayerInframeRender_C>();
	}
};
static_assert(alignof(UWBP_PalPlayerInframeRender_C) == 0x000008, "Wrong alignment on UWBP_PalPlayerInframeRender_C");
static_assert(sizeof(UWBP_PalPlayerInframeRender_C) == 0x000460, "Wrong size on UWBP_PalPlayerInframeRender_C");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalPlayerInframeRender_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, CircularThrobber_11) == 0x000410, "Member 'UWBP_PalPlayerInframeRender_C::CircularThrobber_11' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, Image_Captured) == 0x000418, "Member 'UWBP_PalPlayerInframeRender_C::Image_Captured' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, RenderTarget) == 0x000420, "Member 'UWBP_PalPlayerInframeRender_C::RenderTarget' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, IsCaptureEveryFrame) == 0x000428, "Member 'UWBP_PalPlayerInframeRender_C::IsCaptureEveryFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, IsBindPlayerEquipment) == 0x000429, "Member 'UWBP_PalPlayerInframeRender_C::IsBindPlayerEquipment' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, CaptureCamera) == 0x000430, "Member 'UWBP_PalPlayerInframeRender_C::CaptureCamera' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, DelayUpdateMeshTimerHandle) == 0x000438, "Member 'UWBP_PalPlayerInframeRender_C::DelayUpdateMeshTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, CaptureSetClass) == 0x000440, "Member 'UWBP_PalPlayerInframeRender_C::CaptureSetClass' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, CaptureInterval) == 0x000448, "Member 'UWBP_PalPlayerInframeRender_C::CaptureInterval' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, CaptureSceneTimerHandle) == 0x000450, "Member 'UWBP_PalPlayerInframeRender_C::CaptureSceneTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalPlayerInframeRender_C, RenderTargetMaterial) == 0x000458, "Member 'UWBP_PalPlayerInframeRender_C::RenderTargetMaterial' has a wrong offset!");

}

