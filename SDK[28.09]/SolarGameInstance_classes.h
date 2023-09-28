// BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C
// Size: 0x9d0 (Inherited: 0x9b8)
struct USolarGameInstance_C : USolarGameInstanceBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9b8(0x08)
	struct FMulticastInlineDelegate OnBroadcastModeChanged; // 0x9c0(0x10)

	void LuaOnBroadcastModeChanged(); // Function SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void LuaGetBroadcastPlayerName(struct FString SolarPlayerID, struct FString& BroadcastPlayerName); // Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xb43660
	void LuaGetBroadcastHeroName(struct FString SolarPlayerID, struct FString& BroadcastPlayerName); // Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xb43660
	void SolarGM_TestCrashWithBP(); // Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP // (Exec|Event|Public|BlueprintEvent) // @ game+0x2649560
	void SolarGM_TestEnsureMsgWithBP(); // Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP // (Exec|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_SolarGameInstance(int32_t EntryPoint); // Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance // (Final|UbergraphFunction) // @ game+0x2649560
	void OnBroadcastModeChanged__DelegateSignature(); // Function SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
};

