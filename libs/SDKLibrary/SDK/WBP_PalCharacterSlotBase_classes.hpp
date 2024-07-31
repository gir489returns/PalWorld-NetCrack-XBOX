#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalCharacterSlotBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C
// 0x0140 (0x0548 - 0x0408)
class UWBP_PalCharacterSlotBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PalCharacterIconBase_C*            MyIconWidget;                                      // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdateSlot;                                      // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetEmpty;                                        // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetValidSlot;                                    // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTargetCharacterUpdateHP;                         // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           CheckTargetConditionTimerHandle;                   // 0x0460(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          LastCombatState;                                   // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_469[0x7];                                      // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnNotifyWorkDetail;                                // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnNotifyBattleModeChanged;                         // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBeginTargetCharacterSleep;                       // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEndTargetCharacterSleep;                         // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBeginTargetCharacterEat;                         // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEndTargetCharacterEat;                           // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FPalInstanceID                         SyncId;                                            // 0x04D0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSetRarity;                                       // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateReviveTimer;                               // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUpdateWorkId;                                    // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFavoriteUpdated;                                 // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          WaitingSync;                                       // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindActorEvent(class UPalIndividualCharacterHandle* Handle);
	void BindEvents();
	void BindParameterEvent(class UPalIndividualCharacterHandle* Handle);
	void CheckTargetCondition();
	void ExecuteUbergraph_WBP_PalCharacterSlotBase(int32 EntryPoint);
	void GetIndividualHandle(class UPalIndividualCharacterHandle** Handle);
	void GetIndividualParameter(class UPalIndividualCharacterParameter** Parameter);
	void GetIndividualSlot(class UPalIndividualCharacterSlot** Param_Slot);
	void On_Update_HP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void OnBeginTargetCharacterEat__DelegateSignature();
	void OnBeginTargetCharacterSleep__DelegateSignature();
	void OnEndTargetCharacterEat__DelegateSignature();
	void OnEndTargetCharacterSleep__DelegateSignature();
	void OnFavoriteUpdated__DelegateSignature();
	void OnInitialized();
	void OnNotifyBattleModeChanged__DelegateSignature(bool IsBattleMode);
	void OnNotifyWorkDetail__DelegateSignature(bool IsWorking);
	void OnSetEmpty__DelegateSignature();
	void OnSetRarity__DelegateSignature(bool IsBoss, bool IsRare);
	void OnSetValidSlot__DelegateSignature();
	void OnSyncIndividualParameter(const struct FPalInstanceID& InstanceId);
	void OnTargetBattleModeChanged(bool bIsBattleMode);
	void OnTargetCharacterActionNotify(const class UPalActionBase* Action, class FName NotifyName);
	void OnTargetCharacterUpdateHP__DelegateSignature(int64 NowHP, int64 NowMaxHP);
	void OnUpdateFavorite_Internal();
	void OnUpdateReviveTimer__DelegateSignature(double NowTimer);
	void OnUpdateReviveTimer_Internal(float NowReviveTimer);
	void OnUpdateSlot__DelegateSignature(class UPalIndividualCharacterSlot* Param_TargetSlot);
	void OnUpdateSlot_Internal(class UPalIndividualCharacterSlot* Param_Slot, class UPalIndividualCharacterHandle* LastHandle);
	void OnUpdateWorkId__DelegateSignature(const struct FGuid& WorkId, bool IsFixedAssign);
	void OnUpdateWorkId_Internal(class UPalCharacterParameterComponent* Parameter);
	void RegisterCharacterIconWidget(class UWBP_PalCharacterIconBase_C** IconWidget);
	void Setup(class UPalIndividualCharacterSlot* NewTargetSlot);
	void UnbindActorEvent(class UPalIndividualCharacterHandle* Handle);
	void UnbindEvents();
	void UnbindParameterEvent(class UPalIndividualCharacterHandle* Handle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCharacterSlotBase_C">();
	}
	static class UWBP_PalCharacterSlotBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCharacterSlotBase_C>();
	}
};
static_assert(alignof(UWBP_PalCharacterSlotBase_C) == 0x000008, "Wrong alignment on UWBP_PalCharacterSlotBase_C");
static_assert(sizeof(UWBP_PalCharacterSlotBase_C) == 0x000548, "Wrong size on UWBP_PalCharacterSlotBase_C");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalCharacterSlotBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, MyIconWidget) == 0x000410, "Member 'UWBP_PalCharacterSlotBase_C::MyIconWidget' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, TargetSlot) == 0x000418, "Member 'UWBP_PalCharacterSlotBase_C::TargetSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnUpdateSlot) == 0x000420, "Member 'UWBP_PalCharacterSlotBase_C::OnUpdateSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnSetEmpty) == 0x000430, "Member 'UWBP_PalCharacterSlotBase_C::OnSetEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnSetValidSlot) == 0x000440, "Member 'UWBP_PalCharacterSlotBase_C::OnSetValidSlot' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnTargetCharacterUpdateHP) == 0x000450, "Member 'UWBP_PalCharacterSlotBase_C::OnTargetCharacterUpdateHP' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, CheckTargetConditionTimerHandle) == 0x000460, "Member 'UWBP_PalCharacterSlotBase_C::CheckTargetConditionTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, LastCombatState) == 0x000468, "Member 'UWBP_PalCharacterSlotBase_C::LastCombatState' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnNotifyWorkDetail) == 0x000470, "Member 'UWBP_PalCharacterSlotBase_C::OnNotifyWorkDetail' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnNotifyBattleModeChanged) == 0x000480, "Member 'UWBP_PalCharacterSlotBase_C::OnNotifyBattleModeChanged' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnBeginTargetCharacterSleep) == 0x000490, "Member 'UWBP_PalCharacterSlotBase_C::OnBeginTargetCharacterSleep' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnEndTargetCharacterSleep) == 0x0004A0, "Member 'UWBP_PalCharacterSlotBase_C::OnEndTargetCharacterSleep' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnBeginTargetCharacterEat) == 0x0004B0, "Member 'UWBP_PalCharacterSlotBase_C::OnBeginTargetCharacterEat' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnEndTargetCharacterEat) == 0x0004C0, "Member 'UWBP_PalCharacterSlotBase_C::OnEndTargetCharacterEat' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, SyncId) == 0x0004D0, "Member 'UWBP_PalCharacterSlotBase_C::SyncId' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnSetRarity) == 0x000500, "Member 'UWBP_PalCharacterSlotBase_C::OnSetRarity' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnUpdateReviveTimer) == 0x000510, "Member 'UWBP_PalCharacterSlotBase_C::OnUpdateReviveTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnUpdateWorkId) == 0x000520, "Member 'UWBP_PalCharacterSlotBase_C::OnUpdateWorkId' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, OnFavoriteUpdated) == 0x000530, "Member 'UWBP_PalCharacterSlotBase_C::OnFavoriteUpdated' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterSlotBase_C, WaitingSync) == 0x000540, "Member 'UWBP_PalCharacterSlotBase_C::WaitingSync' has a wrong offset!");

}

