/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystemEOS.

/// Class /Script/OnlineSubsystemEOS.EOSArtifactSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UEOSArtifactSettings : public UDataAsset
{ 
public:
};

/// Class /Script/OnlineSubsystemEOS.EOSSettings
/// Size: 0x0058 (0x000028 - 0x000080)
class UEOSSettings : public UObject
{ 
public:
	FString                                            CacheDir;                                                   // 0x0028   (0x0010)  
	FString                                            DefaultArtifactName;                                        // 0x0038   (0x0010)  
	int32_t                                            TickBudgetInMilliseconds;                                   // 0x0048   (0x0004)  
	bool                                               bEnableOverlay;                                             // 0x004C   (0x0001)  
	bool                                               bEnableSocialOverlay;                                       // 0x004D   (0x0001)  
	bool                                               bShouldEnforceBeingLaunchedByEGS;                           // 0x004E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x004F   (0x0001)  MISSED
	TArray<FString>                                    TitleStorageTags;                                           // 0x0050   (0x0010)  
	int32_t                                            TitleStorageReadChunkLength;                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<FArtifactSettings>                          Artifacts;                                                  // 0x0068   (0x0010)  
	bool                                               bUseEAS;                                                    // 0x0078   (0x0001)  
	bool                                               bUseEOSConnect;                                             // 0x0079   (0x0001)  
	bool                                               bMirrorStatsToEOS;                                          // 0x007A   (0x0001)  
	bool                                               bMirrorAchievementsToEOS;                                   // 0x007B   (0x0001)  
	bool                                               bUseEOSSessions;                                            // 0x007C   (0x0001)  
	bool                                               bMirrorPresenceToEAS;                                       // 0x007D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x007E   (0x0002)  MISSED
};

/// Class /Script/OnlineSubsystemEOS.NetConnectionEOS
/// Size: 0x0008 (0x001BB0 - 0x001BB8)
class UNetConnectionEOS : public UIpConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x1BB0   (0x0008)  MISSED
};

/// Class /Script/OnlineSubsystemEOS.NetDriverEOS
/// Size: 0x0008 (0x0007C8 - 0x0007D0)
class UNetDriverEOS : public UIpNetDriver
{ 
public:
	bool                                               bIsPassthrough;                                             // 0x07C8   (0x0001)  
	bool                                               bIsUsingP2PSockets;                                         // 0x07C9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x07CA   (0x0006)  MISSED
};

/// Struct /Script/OnlineSubsystemEOS.ArtifactSettings
/// Size: 0x0070 (0x000000 - 0x000070)
struct FArtifactSettings
{ 
	FString                                            ArtifactName;                                               // 0x0000   (0x0010)  
	FString                                            ClientId;                                                   // 0x0010   (0x0010)  
	FString                                            ClientSecret;                                               // 0x0020   (0x0010)  
	FString                                            ProductID;                                                  // 0x0030   (0x0010)  
	FString                                            SandboxId;                                                  // 0x0040   (0x0010)  
	FString                                            DeploymentId;                                               // 0x0050   (0x0010)  
	FString                                            EncryptionKey;                                              // 0x0060   (0x0010)  
};

