// BlueprintGeneratedClass BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C
// Size: 0x448 (Inherited: 0x438)
struct ABP_SolarLobbyCharacter_C : ASolarLobbyCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UMediaSoundComponent* MediaSound; // 0x440(0x08)

	bool IsCanOpenChangeAnim(); // Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.IsCanOpenChangeAnim // (Native|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ClearCharacterByLua(); // Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ClearCharacterByLua // (Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void InitCharacterByLua(); // Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.InitCharacterByLua // (Event|Protected|BlueprintEvent) // @ game+0xb6d460
	bool IsCanOpenMirror(); // Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.IsCanOpenMirror // (Native|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void ReceiveBeginPlay(); // Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_BP_SolarLobbyCharacter(int32_t EntryPoint); // Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ExecuteUbergraph_BP_SolarLobbyCharacter // (Final|UbergraphFunction) // @ game+0x2d63a00
};

