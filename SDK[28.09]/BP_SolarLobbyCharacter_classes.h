// BlueprintGeneratedClass BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C
// Size: 0x448 (Inherited: 0x438)
struct ABP_SolarLobbyCharacter_C : ASolarLobbyCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UMediaSoundComponent* MediaSound; // 0x440(0x08)

	struct FString GetModuleName(); // Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void ReceiveBeginPlay(); // Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_BP_SolarLobbyCharacter(int32_t EntryPoint); // Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ExecuteUbergraph_BP_SolarLobbyCharacter // (Final|UbergraphFunction) // @ game+0x2649560
};

