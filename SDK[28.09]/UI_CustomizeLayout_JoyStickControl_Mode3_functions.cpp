#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C
// (None)

class UClass* UUI_CustomizeLayout_JoyStickControl_Mode3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomizeLayout_JoyStickControl_Mode3_C");

	return Clss;
}


// UI_CustomizeLayout_JoyStickControl_Mode3_C UI_CustomizeLayout_JoyStickControl_Mode3.Default__UI_CustomizeLayout_JoyStickControl_Mode3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomizeLayout_JoyStickControl_Mode3_C* UUI_CustomizeLayout_JoyStickControl_Mode3_C::GetDefaultObj()
{
	static class UUI_CustomizeLayout_JoyStickControl_Mode3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomizeLayout_JoyStickControl_Mode3_C*>(UUI_CustomizeLayout_JoyStickControl_Mode3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_CustomizeLayout_JoyStickControl_Mode3_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeLayout_JoyStickControl_Mode3_C", "GetModuleName");

	Params::UUI_CustomizeLayout_JoyStickControl_Mode3_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.Get_Hero01_CheckedState_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ECheckBoxState UUI_CustomizeLayout_JoyStickControl_Mode3_C::Get_Hero01_CheckedState_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeLayout_JoyStickControl_Mode3_C", "Get_Hero01_CheckedState_0");

	Params::UUI_CustomizeLayout_JoyStickControl_Mode3_C_Get_Hero01_CheckedState_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CustomizeLayout_JoyStickControl_Mode3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeLayout_JoyStickControl_Mode3_C", "PreConstruct");

	Params::UUI_CustomizeLayout_JoyStickControl_Mode3_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.ExecuteUbergraph_UI_CustomizeLayout_JoyStickControl_Mode3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CustomizeLayout_JoyStickControl_Mode3_C::ExecuteUbergraph_UI_CustomizeLayout_JoyStickControl_Mode3(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeLayout_JoyStickControl_Mode3_C", "ExecuteUbergraph_UI_CustomizeLayout_JoyStickControl_Mode3");

	Params::UUI_CustomizeLayout_JoyStickControl_Mode3_C_ExecuteUbergraph_UI_CustomizeLayout_JoyStickControl_Mode3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


