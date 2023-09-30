#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C
// (None)

class UClass* UUI_Activity_NewPlayer_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Activity_NewPlayer_Item_C");

	return Clss;
}


// UI_Activity_NewPlayer_Item_C UI_Activity_NewPlayer_Item.Default__UI_Activity_NewPlayer_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Activity_NewPlayer_Item_C* UUI_Activity_NewPlayer_Item_C::GetDefaultObj()
{
	static class UUI_Activity_NewPlayer_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Activity_NewPlayer_Item_C*>(UUI_Activity_NewPlayer_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Activity_NewPlayer_Item_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_NewPlayer_Item_C", "GetModuleName");

	Params::UUI_Activity_NewPlayer_Item_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.CanGetItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumLoopsToPlay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Activity_NewPlayer_Item_C::CanGetItem(int32 NumLoopsToPlay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_NewPlayer_Item_C", "CanGetItem");

	Params::UUI_Activity_NewPlayer_Item_C_CanGetItem_Params Parms{};

	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.SetSigninState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESigninItemState        State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Activity_NewPlayer_Item_C::SetSigninState(enum class ESigninItemState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_NewPlayer_Item_C", "SetSigninState");

	Params::UUI_Activity_NewPlayer_Item_C_SetSigninState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Activity_NewPlayer_Item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_NewPlayer_Item_C", "PreConstruct");

	Params::UUI_Activity_NewPlayer_Item_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Activity_NewPlayer_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_NewPlayer_Item_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.ExecuteUbergraph_UI_Activity_NewPlayer_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Activity_NewPlayer_Item_C::ExecuteUbergraph_UI_Activity_NewPlayer_Item(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_NewPlayer_Item_C", "ExecuteUbergraph_UI_Activity_NewPlayer_Item");

	Params::UUI_Activity_NewPlayer_Item_C_ExecuteUbergraph_UI_Activity_NewPlayer_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


