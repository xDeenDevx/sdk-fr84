/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SolarlandResUpdate.

/// Class /Script/SolarlandResUpdate.DownloadFileTask
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UDownloadFileTask : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnDownloadComplete;                                         // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnDownloadProgress;                                         // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnDownloadFailed;                                           // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x80];                                      // 0x0058   (0x0080)  MISSED


	/// Functions
	// Function /Script/SolarlandResUpdate.DownloadFileTask.StartDownload
	void StartDownload();                                                                                                    // [0x2341a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SolarlandResUpdate.DownloadFileTask.SetSaveToFile
	void SetSaveToFile(bool InSet);                                                                                          // [0x2341970] Final|Native|Public|BlueprintCallable 
	// Function /Script/SolarlandResUpdate.DownloadFileTask.SetNeedDecode
	void SetNeedDecode(bool InNeedDecode);                                                                                   // [0x23418e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SolarlandResUpdate.DownloadFileTask.SetForceRedownload
	void SetForceRedownload(bool inForceRedownload);                                                                         // [0x2341850] Final|Native|Public|BlueprintCallable 
	// Function /Script/SolarlandResUpdate.DownloadFileTask.GetUrl
	FString GetUrl();                                                                                                        // [0x23417d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SolarlandResUpdate.DownloadFileTask.CreateNoFile
	UDownloadFileTask* CreateNoFile(FString URL, bool bByChunk);                                                             // [0x23416f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SolarlandResUpdate.DownloadFileTask.Create
	UDownloadFileTask* Create(FString URL, FString FileDirectory, FString Filename, bool bByChunk, bool bForceWrite);        // [0x2341520] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SolarlandResUpdate.SolarlandResUpdater
/// Size: 0x00D8 (0x000028 - 0x000100)
class USolarlandResUpdater : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<FPakFileEntry>                              ToDownloadPakList;                                          // 0x0030   (0x0010)  
	FDelegateProperty                                  OnPatchPrompt;                                              // 0x0040   (0x0010)  
	FDelegateProperty                                  OnPatchComplete;                                            // 0x0050   (0x0010)  
	FDelegateProperty                                  OnPatchFailed;                                              // 0x0060   (0x0010)  
	FDelegateProperty                                  OnCDNDownloadFailed;                                        // 0x0070   (0x0010)  
	FDelegateProperty                                  OnPatchProgress;                                            // 0x0080   (0x0010)  
	FDelegateProperty                                  OnDownloadServerList;                                       // 0x0090   (0x0010)  
	FDelegateProperty                                  OnServerClose;                                              // 0x00A0   (0x0010)  
	FDelegateProperty                                  OnBackdoorComplete;                                         // 0x00B0   (0x0010)  
	FDelegateProperty                                  OnBackdoorFaild;                                            // 0x00C0   (0x0010)  
	FDelegateProperty                                  OnBackdoorProgress;                                         // 0x00D0   (0x0010)  
	FDelegateProperty                                  OnAnnouncementGet;                                          // 0x00E0   (0x0010)  
	FDelegateProperty                                  OnAnnouncementGetFail;                                      // 0x00F0   (0x0010)  
};

/// Struct /Script/SolarlandResUpdate.ServerInfo_Dep
/// Size: 0x0050 (0x000000 - 0x000050)
struct FServerInfo_Dep
{ 
	TArray<FGateAddress_Dep>                           GateList;                                                   // 0x0000   (0x0010)  
	TArray<FString>                                    CDNList;                                                    // 0x0010   (0x0010)  
	FString                                            LatestBuildVersion;                                         // 0x0020   (0x0010)  
	FString                                            SourceBuildVersion;                                         // 0x0030   (0x0010)  
	FString                                            Name;                                                       // 0x0040   (0x0010)  
};

/// Struct /Script/SolarlandResUpdate.GateAddress_Dep
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGateAddress_Dep
{ 
	FString                                            GateTCPAddr;                                                // 0x0000   (0x0010)  
	FString                                            GateUDPAddr;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/SolarlandResUpdate.PakFileEntry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPakFileEntry
{ 
	FString                                            Filename;                                                   // 0x0000   (0x0010)  
	FString                                            Hash;                                                       // 0x0010   (0x0010)  
	int32_t                                            Order;                                                      // 0x0020   (0x0004)  
	int32_t                                            FileSize;                                                   // 0x0024   (0x0004)  
	FString                                            Version;                                                    // 0x0028   (0x0010)  
};

/// Enum /Script/SolarlandResUpdate.EDownloadTaskError
/// Size: 0x11
enum EDownloadTaskError : uint8_t
{
	EDownloadTaskError__ConnectFailed                                                = 0,
	EDownloadTaskError__RequestHeadFailed                                            = 1,
	EDownloadTaskError__CreateFileFailed                                             = 2,
	EDownloadTaskError__DownloadFailed                                               = 3,
	EDownloadTaskError__WriteFailed                                                  = 4,
	EDownloadTaskError__DeleteOldFailed                                              = 5,
	EDownloadTaskError__MoveFailed                                                   = 6,
	EDownloadTaskError__CreateDownloadTaskFail                                       = 7,
	EDownloadTaskError__GetPlatformFileFail                                          = 8,
	EDownloadTaskError__GetWrongJsonFormat                                           = 9,
	EDownloadTaskError__EDownloadTaskError_MAX                                       = 10
};

/// Enum /Script/SolarlandResUpdate.ELoginAnnouncement
/// Size: 0x04
enum ELoginAnnouncement : uint8_t
{
	ELoginAnnouncement__ServerCloseAnnounce                                          = 0,
	ELoginAnnouncement__UpdateAnnounce                                               = 1,
	ELoginAnnouncement__Unknown                                                      = 2,
	ELoginAnnouncement__ELoginAnnouncement_MAX                                       = 3
};

