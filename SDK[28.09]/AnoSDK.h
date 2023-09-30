/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AnoSDK.

/// Class /Script/AnoSDK.AnoSDK
/// Size: 0x0060 (0x000028 - 0x000088)
class UAnoSDK : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnAnoRecvAntiData;                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnAnoSentDataToSvr;                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0050   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnAnoSentCoreData;                                          // 0x0058   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0068   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnAnoSentCoreTimeData;                                      // 0x0070   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0080   (0x0008)  MISSED


	/// Functions
	// Function /Script/AnoSDK.AnoSDK.OnAnoSentAntiData__DelegateSignature
	void OnAnoSentAntiData__DelegateSignature(FAnoSDKAntiData AntiData);                                                     // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/AnoSDK.AnoSDK.OnAnoRecvAntiData__DelegateSignature
	void OnAnoRecvAntiData__DelegateSignature(int32_t Type, FString AntiData);                                               // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/AnoSDK.AnoSDK.GetInstance
	UAnoSDK* GetInstance();                                                                                                  // [0x16d12a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.DestoryInstance
	void DestoryInstance();                                                                                                  // [0x16d1280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKSetUserInfo
	void AnoUESDKSetUserInfo(ETssSDKEntryId EntryId, FString OpenId);                                                        // [0x16d1160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKSetCSChannelDomain
	void AnoUESDKSetCSChannelDomain(FString DomainName);                                                                     // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKSetChannelIP
	void AnoUESDKSetChannelIP(FString IP);                                                                                   // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKSendSDKCoreData
	void AnoUESDKSendSDKCoreData();                                                                                          // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKSendDataToSvr
	void AnoUESDKSendDataToSvr();                                                                                            // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKSendCoreTimeData
	void AnoUESDKSendCoreTimeData();                                                                                         // [0x16d1140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKReportThreadShutDown
	void AnoUESDKReportThreadShutDown();                                                                                     // [0x9a1270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKReportThreadInit
	void AnoUESDKReportThreadInit();                                                                                         // [0x9a1270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKRegistInfoListener
	void AnoUESDKRegistInfoListener();                                                                                       // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKOnResume
	void AnoUESDKOnResume();                                                                                                 // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKOnRecvSignature
	void AnoUESDKOnRecvSignature(FString Name, FString Buf, int32_t Len, int32_t Crc);                                       // [0x16d0fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKOnRecvData
	void AnoUESDKOnRecvData(FString Data);                                                                                   // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKOnPause
	void AnoUESDKOnPause();                                                                                                  // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKIoctl
	void AnoUESDKIoctl(int32_t Request, FString Cmd);                                                                        // [0x16d0eb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnoSDK.AnoSDK.AnoUESDKInit
	void AnoUESDKInit(int32_t GameID, FString Appkey);                                                                       // [0x16d0de0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AnoSDK.AnoSDKSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnoSDKSettings : public UDeveloperSettings
{ 
public:
	bool                                               bEnableAnoSDK;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/AnoSDK.AnoSDKAntiData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAnoSDKAntiData
{ 
	int32_t                                            Length;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            AntiData;                                                   // 0x0008   (0x0010)  
};

/// Enum /Script/AnoSDK.ETssSDKEntryId
/// Size: 0x23
enum ETssSDKEntryId : uint8_t
{
	ETssSDKEntryId__QZONE                                                            = 0,
	ETssSDKEntryId__MM                                                               = 1,
	ETssSDKEntryId__FACEBOOK                                                         = 2,
	ETssSDKEntryId__TWITTER                                                          = 3,
	ETssSDKEntryId__LINE                                                             = 4,
	ETssSDKEntryId__WHATSAPP                                                         = 5,
	ETssSDKEntryId__GAMECENTER                                                       = 6,
	ETssSDKEntryId__GOOGLEPLAY                                                       = 7,
	ETssSDKEntryId__VK                                                               = 8,
	ETssSDKEntryId__KUAISHOU                                                         = 9,
	ETssSDKEntryId__APPLE                                                            = 10,
	ETssSDKEntryId__NEXON                                                            = 11,
	ETssSDKEntryId__NAVER                                                            = 12,
	ETssSDKEntryId__GARENA                                                           = 13,
	ETssSDKEntryId__HUAWEI                                                           = 14,
	ETssSDKEntryId__RIOT                                                             = 15,
	ETssSDKEntryId__NINTENDO                                                         = 16,
	ETssSDKEntryId__PSN                                                              = 17,
	ETssSDKEntryId__MICROSOFT                                                        = 18,
	ETssSDKEntryId__EA                                                               = 19,
	ETssSDKEntryId__FARLIGHT                                                         = 20,
	ETssSDKEntryId__OTHERS                                                           = 21,
	ETssSDKEntryId__ETssSDKEntryId_MAX                                               = 22
};

/// Enum /Script/AnoSDK.ETssSDKRequestCmdId
/// Size: 0x04
enum ETssSDKRequestCmdId : uint8_t
{
	ETssSDKRequestCmdId__IsEmulator                                                  = 0,
	ETssSDKRequestCmdId__CommQuery                                                   = 1,
	ETssSDKRequestCmdId__InitSwitchStr                                               = 2,
	ETssSDKRequestCmdId__ETssSDKRequestCmdId_MAX                                     = 3
};

