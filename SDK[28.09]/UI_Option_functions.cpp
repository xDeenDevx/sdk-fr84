#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Option.UI_Option_C
// (None)

class UClass* UUI_Option_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Option_C");

	return Clss;
}


// UI_Option_C UI_Option.Default__UI_Option_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Option_C* UUI_Option_C::GetDefaultObj()
{
	static class UUI_Option_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Option_C*>(UUI_Option_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Option.UI_Option_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Option_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Option_C", "GetModuleName");

	Params::UUI_Option_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


