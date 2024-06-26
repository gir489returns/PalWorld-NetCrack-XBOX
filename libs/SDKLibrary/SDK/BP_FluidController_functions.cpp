#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluidController

#include "Basic.hpp"

#include "BP_FluidController_classes.hpp"
#include "BP_FluidController_parameters.hpp"


namespace SDK
{

// Function BP_FluidController.BP_FluidController_C.ClearRenderTargets
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluidController_C::ClearRenderTargets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidController_C", "ClearRenderTargets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluidController.BP_FluidController_C.CreateMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluidController_C::CreateMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidController_C", "CreateMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluidController.BP_FluidController_C.ExecuteUbergraph_BP_FluidController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluidController_C::ExecuteUbergraph_BP_FluidController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidController_C", "ExecuteUbergraph_BP_FluidController");

	Params::BP_FluidController_C_ExecuteUbergraph_BP_FluidController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluidController.BP_FluidController_C.GetPreviousRT
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentRTIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FramesOld                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           RenderTarget_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           RenderTarget_1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           RenderTarget_2                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           RenderTargetOut                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluidController_C::GetPreviousRT(int32 CurrentRTIndex, int32 FramesOld, class UTextureRenderTarget2D* RenderTarget_0, class UTextureRenderTarget2D* RenderTarget_1, class UTextureRenderTarget2D* RenderTarget_2, class UTextureRenderTarget2D** RenderTargetOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidController_C", "GetPreviousRT");

	Params::BP_FluidController_C_GetPreviousRT Parms{};

	Parms.CurrentRTIndex = CurrentRTIndex;
	Parms.FramesOld = FramesOld;
	Parms.RenderTarget_0 = RenderTarget_0;
	Parms.RenderTarget_1 = RenderTarget_1;
	Parms.RenderTarget_2 = RenderTarget_2;

	UObject::ProcessEvent(Func, &Parms);

	if (RenderTargetOut != nullptr)
		*RenderTargetOut = Parms.RenderTargetOut;
}


// Function BP_FluidController.BP_FluidController_C.GetRT
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           RenderTarget_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           RenderTarget_1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           RenderTarget_2                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           RenderTarget                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluidController_C::GetRT(int32 Param_Index, class UTextureRenderTarget2D* RenderTarget_0, class UTextureRenderTarget2D* RenderTarget_1, class UTextureRenderTarget2D* RenderTarget_2, class UTextureRenderTarget2D** RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidController_C", "GetRT");

	Params::BP_FluidController_C_GetRT Parms{};

	Parms.Param_Index = Param_Index;
	Parms.RenderTarget_0 = RenderTarget_0;
	Parms.RenderTarget_1 = RenderTarget_1;
	Parms.RenderTarget_2 = RenderTarget_2;

	UObject::ProcessEvent(Func, &Parms);

	if (RenderTarget != nullptr)
		*RenderTarget = Parms.RenderTarget;
}


// Function BP_FluidController.BP_FluidController_C.GetRT_Height
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           RenderTarget                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_FluidController_C::GetRT_Height(int32 Param_Index, class UTextureRenderTarget2D** RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidController_C", "GetRT_Height");

	Params::BP_FluidController_C_GetRT_Height Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (RenderTarget != nullptr)
		*RenderTarget = Parms.RenderTarget;
}


// Function BP_FluidController.BP_FluidController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FluidController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluidController.BP_FluidController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluidController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidController_C", "ReceiveEndPlay");

	Params::BP_FluidController_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluidController.BP_FluidController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FluidController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidController_C", "ReceiveTick");

	Params::BP_FluidController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluidController.BP_FluidController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FluidController_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidController_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

