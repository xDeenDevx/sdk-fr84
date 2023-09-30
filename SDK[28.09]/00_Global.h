/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package 00_Global.

/// Class /Game/00_Global/Blueprints/BP_SolarRuntimeAssetsCollection.BP_SolarRuntimeAssetsCollection_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UBP_SolarRuntimeAssetsCollection_C : public USolarRuntimeAssetsCollection
{ 
public:
};

/// Class /Game/00_Global/SolarGameInstance.SolarGameInstance_C
/// Size: 0x0018 (0x0009B8 - 0x0009D0)
class USolarGameInstance_C : public USolarGameInstanceBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x09B8   (0x0008)  
	FMulticastInlineDelegate                           OnBroadcastModeChanged;                                     // 0x09C0   (0x0010)  


	/// Functions
	// Function /Game/00_Global/SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged
	void LuaOnBroadcastModeChanged();                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName
	void LuaGetBroadcastPlayerName(FString SolarPlayerID, FString& BroadcastPlayerName);                                     // [0xb43660] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName
	void LuaGetBroadcastHeroName(FString SolarPlayerID, FString& BroadcastPlayerName);                                       // [0xb43660] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP
	void SolarGM_TestCrashWithBP();                                                                                          // [0x2649560] Exec|Event|Public|BlueprintEvent 
	// Function /Game/00_Global/SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP
	void SolarGM_TestEnsureMsgWithBP();                                                                                      // [0x2649560] Exec|Event|Public|BlueprintEvent 
	// Function /Game/00_Global/SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance
	void ExecuteUbergraph_SolarGameInstance(int32_t EntryPoint);                                                             // [0x2649560] Final                
	// Function /Game/00_Global/SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature
	void OnBroadcastModeChanged__DelegateSignature();                                                                        // [0x2649560] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/00_Global/Configs/SolarSettings/BP_SolarGameSettingsRange_PC.BP_SolarGameSettingsRange_PC_C
/// Size: 0x0000 (0x000170 - 0x000170)
class UBP_SolarGameSettingsRange_PC_C : public USolarGameSettingsRange
{ 
public:
};

/// Class /Game/00_Global/Lighting/BP_C_EdgeLitControl.BP_C_EdgeLitControl_C
/// Size: 0x0038 (0x000228 - 0x000260)
class ABP_C_EdgeLitControl_C : public AActor
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0228   (0x0008)  
	FLinearColor                                       LightColor1;                                                // 0x0230   (0x0010)  
	FLinearColor                                       LightColor2;                                                // 0x0240   (0x0010)  
	FLinearColor                                       LightColor3;                                                // 0x0250   (0x0010)  


	/// Functions
	// Function /Game/00_Global/Lighting/BP_C_EdgeLitControl.BP_C_EdgeLitControl_C.UserConstructionScript
	void UserConstructionScript();                                                                                           // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C
/// Size: 0x0108 (0x000228 - 0x000330)
class ABP_Env_LitData_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0230   (0x0008)  
	ASkyLight*                                         SkyLight;                                                   // 0x0238   (0x0008)  
	ADirectionalLight*                                 DirectionalLight;                                           // 0x0240   (0x0008)  
	FStr_LightData                                     LocalLightData;                                             // 0x0248   (0x0070)  
	TMap<FString, FStr_LightData>                      LightDatas;                                                 // 0x02B8   (0x0050)  
	ABP_C_EdgeLitControl_C*                            CharacterEdgeLitControl;                                    // 0x0308   (0x0008)  
	ASkyLight*                                         NewVar;                                                     // 0x0310   (0x0008)  
	bool                                               bUseDefaultLight;                                           // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0319   (0x0007)  MISSED
	FString                                            CurrentLightDataKey;                                        // 0x0320   (0x0010)  


	/// Functions
	// Function /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C.Toggle Env Lighting
	void Toggle Env Lighting(bool bUseDefaultLight);                                                                         // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C.SetEdgeLightSetting
	void SetEdgeLightSetting(FStr_EdgeLightSetting EdgeLightSetting);                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C.Add or Set Light Data Element
	void Add or Set Light Data Element(FString& Key);                                                                        // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C.LoadSceneLightData
	void LoadSceneLightData(FString& Key);                                                                                   // [0x2649560] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C.MakeLightData
	void MakeLightData();                                                                                                    // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C.SaveLightData
	void SaveLightData();                                                                                                    // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C.LoadLightData
	void LoadLightData();                                                                                                    // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C.SetDirectionalLightSetting
	void SetDirectionalLightSetting(ADirectionalLight* DirectionalLight, FStr_DirectionalLightSetting& Str_DirectionalLightSetting); // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C.SetSkyLightSetting
	void SetSkyLightSetting(ASkyLight* SkyLight, FStr_SkyLightSetting& Str_SkyLightSetting);                                 // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/00_Global/Lighting/BP_Env_LitData.BP_Env_LitData_C.ExecuteUbergraph_BP_Env_LitData
	void ExecuteUbergraph_BP_Env_LitData(int32_t EntryPoint);                                                                // [0x2649560] Final|HasDefaults    
};

/// Class /Game/00_Global/Blueprints/GameModes/BP_LobbyMode.BP_LobbyMode_C
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class ABP_LobbyMode_C : public AGameModeBase
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02C8   (0x0008)  
};

/// Class /Game/00_Global/Configs/SolarSettings/DefaultSolarLockSettings.DefaultSolarLockSettings_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UDefaultSolarLockSettings_C : public USolarLockSettings
{ 
public:
};

/// Class /Game/00_Global/Configs/SolarSettings/BP_SolarGraphicSettings.BP_SolarGraphicSettings_C
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UBP_SolarGraphicSettings_C : public USolarGraphicSettings
{ 
public:
};

/// Class /Game/00_Global/Configs/SolarSettings/DefaultSolarGameModeLockSettings.DefaultSolarGameModeLockSettings_C
/// Size: 0x0000 (0x000098 - 0x000098)
class UDefaultSolarGameModeLockSettings_C : public USolarGameModeLockSettings
{ 
public:
};

/// Class /Game/00_Global/Blueprints/Manager/BP_SolarReplayManager.BP_SolarReplayManager_C
/// Size: 0x0000 (0x000538 - 0x000538)
class UBP_SolarReplayManager_C : public USolarReplayManager
{ 
public:
};

/// Class /Game/00_Global/Blueprints/GameStates/BP_LobbyGameState.BP_LobbyGameState_C
/// Size: 0x0008 (0x0002E0 - 0x0002E8)
class ABP_LobbyGameState_C : public ASolarGameStateBase
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x02E0   (0x0008)  
};

/// Struct /Game/00_Global/Lighting/Str_Env/Str_DirectionalLightSetting.Str_DirectionalLightSetting
/// Size: 0x0038 (0x000000 - 0x000038)
struct FStr_DirectionalLightSetting
{ 
	FRotator                                           LightRotation_2_679B44D14D81D1F251E3DBBC76FA0E60;           // 0x0000   (0x000C)  
	float                                              Intensity_5_6E664CA840353E672B56C7BAEC146E40;               // 0x000C   (0x0004)  
	FColor                                             LightColor_27_10C0A6C94689142FA397DEA5676FBAF0;             // 0x0010   (0x0004)  
	float                                              Temperature_11_824C212841FD90FBABA446940CDBE13B;            // 0x0014   (0x0004)  
	float                                              ShadowBias_13_FED2F29A4B8FBCD270993591477B57A9;             // 0x0018   (0x0004)  
	float                                              ShadowSlopeBias_15_7C56CCCB4CEEFA17E67D2195A7AF271E;        // 0x001C   (0x0004)  
	bool                                               LightChannel0_24_E3D186BA4C82C6B3BD72FB80ACF787E2;          // 0x0020   (0x0001)  
	bool                                               LightChannel1_25_019A668A4DD58574DE0AFDA2E4E3E9F0;          // 0x0021   (0x0001)  
	bool                                               LightChannel2_26_08AE8857406688F44FCD3EACD64C0879;          // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	float                                              DynamicShadowDistanceMovableLight_35_3BB5B38E40806965B2BE7FAE9A5E217E; // 0x0024   (0x0004)  
	int32_t                                            NumDynamicShadowCascades_37_AC7F56B040BC6DBB939D1395BFD997C2; // 0x0028   (0x0004)  
	float                                              DistributionExponent_41_6B5C490B4EE217C84292669D374C18B3;   // 0x002C   (0x0004)  
	float                                              TransitionFraction_42_57ACB1E4497EF7C0F6FC6EB9FF168B67;     // 0x0030   (0x0004)  
	float                                              DistanceFadeoutFraction_43_5D6DF3C34F38F6F7AA00B6AEC2D9DE92; // 0x0034   (0x0004)  
};

/// Struct /Game/00_Global/Lighting/Str_Env/Str_SkyLightSetting.Str_SkyLightSetting
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStr_SkyLightSetting
{ 
	float                                              Intensity_2_BF70603C48E1FB710393B6A01DE85371;               // 0x0000   (0x0004)  
	FColor                                             LightColor_17_3C5C22CB456CE00B5DFC4297338C4B22;             // 0x0004   (0x0004)  
};

/// Struct /Game/00_Global/Lighting/Str_Env/Str_EdgeLightSetting.Str_EdgeLightSetting
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStr_EdgeLightSetting
{ 
	FLinearColor                                       LightColor1_29_3C5C22CB456CE00B5DFC4297338C4B22;            // 0x0000   (0x0010)  
	FLinearColor                                       LightColor2_30_6F35837E4F5631579541F9852C58CA07;            // 0x0010   (0x0010)  
	FLinearColor                                       LightColor3_31_73DBAAED433340095BA5828B42358B7F;            // 0x0020   (0x0010)  
};

/// Struct /Game/00_Global/Lighting/Str_LightData.Str_LightData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FStr_LightData
{ 
	FStr_DirectionalLightSetting                       DirectionalLightSetting_8_652AA6EC4864A03310E86FB1505F4BFA; // 0x0000   (0x0038)  
	FStr_SkyLightSetting                               SkyLightSetting_2_D57A042E4F37A86B5F7C70BDC7D2CF8C;         // 0x0038   (0x0008)  
	FStr_EdgeLightSetting                              EdgeLightSetting_12_36AD4D4A4FA15CCD9E68109626546B69;       // 0x0040   (0x0030)  
};

