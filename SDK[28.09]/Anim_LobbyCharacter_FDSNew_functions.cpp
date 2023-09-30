#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// DynamicClass Anim_LobbyCharacter_FDSNew.Anim_LobbyCharacter_FDSNew_C
// (None)

class UClass* UAnim_LobbyCharacter_FDSNew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Anim_LobbyCharacter_FDSNew_C");

	return Clss;
}


// Anim_LobbyCharacter_FDSNew_C Anim_LobbyCharacter_FDSNew.Default__Anim_LobbyCharacter_FDSNew_C
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnim_LobbyCharacter_FDSNew_C* UAnim_LobbyCharacter_FDSNew_C::GetDefaultObj()
{
	static class UAnim_LobbyCharacter_FDSNew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnim_LobbyCharacter_FDSNew_C*>(UAnim_LobbyCharacter_FDSNew_C::StaticClass()->DefaultObject);

	return Default;
}

}


