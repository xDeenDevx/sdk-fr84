// BlueprintGeneratedClass Lobby_Script.Lobby_Script_C
// Size: 0x288 (Inherited: 0x230)
struct ALobby_Script_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct AActor* Loc_Hall; // 0x238(0x08)
	struct AActor* Loc_BattlePass; // 0x240(0x08)
	struct AActor* Loc_RankRace; // 0x248(0x08)
	struct AActor* Loc_RankList; // 0x250(0x08)
	struct AActor* Loc_Shop; // 0x258(0x08)
	struct AActor* Loc_Weapon; // 0x260(0x08)
	struct AActor* Loc_MVP; // 0x268(0x08)
	struct AActor* Loc_Character; // 0x270(0x08)
	struct TArray<struct AActor*> LocatorList; // 0x278(0x10)

	struct FString GetModuleName(); // Function Lobby_Script.Lobby_Script_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void ReceiveBeginPlay(); // Function Lobby_Script.Lobby_Script_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xb43660
	void ExecuteUbergraph_Lobby_Script(int32_t EntryPoint); // Function Lobby_Script.Lobby_Script_C.ExecuteUbergraph_Lobby_Script // (Final|UbergraphFunction) // @ game+0x2649560
};

