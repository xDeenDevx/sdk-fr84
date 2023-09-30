/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package 01_Scenes.

/// Class /Game/01_Scenes/LoginMap/Environment_Lighting.Environment_Lighting_C
/// Size: 0x0018 (0x000230 - 0x000248)
class AEnvironment_Lighting_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0230   (0x0008)  
	ASkyLight*                                         SkyLight_0_ExecuteUbergraph_Environment_Lighting_RefProperty; // 0x0238   (0x0008)  
	ABP_Env_LitData_C*                                 BP_Env_LitData_2_ExecuteUbergraph_Environment_Lighting_RefProperty; // 0x0240   (0x0008)  


	/// Functions
	// Function /Game/01_Scenes/LoginMap/Environment_Lighting.Environment_Lighting_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/01_Scenes/LoginMap/Environment_Lighting.Environment_Lighting_C.SetLight
	void SetLight(FString SceneName);                                                                                        // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/01_Scenes/LoginMap/Environment_Lighting.Environment_Lighting_C.SetCardSkyLightData
	void SetCardSkyLightData(float Indensity);                                                                               // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/01_Scenes/LoginMap/Environment_Lighting.Environment_Lighting_C.ExecuteUbergraph_Environment_Lighting
	void ExecuteUbergraph_Environment_Lighting(int32_t EntryPoint);                                                          // [0x2649560] Final                
};

/// Class /Game/01_Scenes/LoginMap/Lobby.Lobby_C
/// Size: 0x0008 (0x000230 - 0x000238)
class ALobby_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0230   (0x0008)  


	/// Functions
	// Function /Game/01_Scenes/LoginMap/Lobby.Lobby_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/01_Scenes/LoginMap/Lobby.Lobby_C.ExecuteUbergraph_Lobby
	void ExecuteUbergraph_Lobby(int32_t EntryPoint);                                                                         // [0x2649560] Final|HasDefaults    
};

/// Class /Game/01_Scenes/LoginMap/Lobby_Script.Lobby_Script_C
/// Size: 0x0058 (0x000230 - 0x000288)
class ALobby_Script_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0230   (0x0008)  
	AActor*                                            Loc_Hall;                                                   // 0x0238   (0x0008)  
	AActor*                                            Loc_BattlePass;                                             // 0x0240   (0x0008)  
	AActor*                                            Loc_RankRace;                                               // 0x0248   (0x0008)  
	AActor*                                            Loc_RankList;                                               // 0x0250   (0x0008)  
	AActor*                                            Loc_Shop;                                                   // 0x0258   (0x0008)  
	AActor*                                            Loc_Weapon;                                                 // 0x0260   (0x0008)  
	AActor*                                            Loc_MVP;                                                    // 0x0268   (0x0008)  
	AActor*                                            Loc_Character;                                              // 0x0270   (0x0008)  
	TArray<AActor*>                                    LocatorList;                                                // 0x0278   (0x0010)  


	/// Functions
	// Function /Game/01_Scenes/LoginMap/Lobby_Script.Lobby_Script_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/01_Scenes/LoginMap/Lobby_Script.Lobby_Script_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0xb43660] Event|Protected|BlueprintEvent 
	// Function /Game/01_Scenes/LoginMap/Lobby_Script.Lobby_Script_C.ExecuteUbergraph_Lobby_Script
	void ExecuteUbergraph_Lobby_Script(int32_t EntryPoint);                                                                  // [0x2649560] Final                
};

