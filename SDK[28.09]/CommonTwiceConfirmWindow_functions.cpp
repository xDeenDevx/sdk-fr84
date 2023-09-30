#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C
// (None)

class UClass* UCommonTwiceConfirmWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonTwiceConfirmWindow_C");

	return Clss;
}


// CommonTwiceConfirmWindow_C CommonTwiceConfirmWindow.Default__CommonTwiceConfirmWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonTwiceConfirmWindow_C* UCommonTwiceConfirmWindow_C::GetDefaultObj()
{
	static class UCommonTwiceConfirmWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonTwiceConfirmWindow_C*>(UCommonTwiceConfirmWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UCommonTwiceConfirmWindow_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTwiceConfirmWindow_C", "GetModuleName");

	Params::UCommonTwiceConfirmWindow_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonTwiceConfirmWindow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTwiceConfirmWindow_C", "PreConstruct");

	Params::UCommonTwiceConfirmWindow_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCommonTwiceConfirmWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTwiceConfirmWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonTwiceConfirmWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTwiceConfirmWindow_C", "Tick");

	Params::UCommonTwiceConfirmWindow_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCommonTwiceConfirmWindow_C::BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTwiceConfirmWindow_C", "BndEvt__ConfirmBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.BndEvt__CancleBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCommonTwiceConfirmWindow_C::BndEvt__CancleBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTwiceConfirmWindow_C", "BndEvt__CancleBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCommonTwiceConfirmWindow_C::BndEvt__CloseBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTwiceConfirmWindow_C", "BndEvt__CloseBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.ExecuteUbergraph_CommonTwiceConfirmWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonTwiceConfirmWindow_C::ExecuteUbergraph_CommonTwiceConfirmWindow(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTwiceConfirmWindow_C", "ExecuteUbergraph_CommonTwiceConfirmWindow");

	Params::UCommonTwiceConfirmWindow_C_ExecuteUbergraph_CommonTwiceConfirmWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.CancelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonTwiceConfirmWindow_C::CancelClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTwiceConfirmWindow_C", "CancelClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonTwiceConfirmWindow.CommonTwiceConfirmWindow_C.ConfirmClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonTwiceConfirmWindow_C::ConfirmClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTwiceConfirmWindow_C", "ConfirmClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


