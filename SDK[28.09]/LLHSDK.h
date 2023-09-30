/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LLHSDK.

/// Class /Script/LLHSDK.LLHSDKAppUtils
/// Size: 0x0010 (0x000028 - 0x000038)
class ULLHSDKAppUtils : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnSteamUserStatesUpdate;                                    // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/LLHSDK.LLHSDKAppUtils.SDKConfigIsMultiDetect
	bool SDKConfigIsMultiDetect();                                                                                           // [0x9d9100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.SDKConfigIsDebug
	bool SDKConfigIsDebug();                                                                                                 // [0x9d90d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.OnSteamUserStatesUpdate__DelegateSignature
	void OnSteamUserStatesUpdate__DelegateSignature(FString SteamId, bool IsFriend, bool Online, FString FriendName);        // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKAppUtils.IsSteamFriendOnline
	bool IsSteamFriendOnline(FString SteamId);                                                                               // [0x9d9030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.IsSimulator
	bool IsSimulator();                                                                                                      // [0x947a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.IsPackageInstalled
	bool IsPackageInstalled(FString InPackageName);                                                                          // [0x9d8f40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.IsGrayRelease
	bool IsGrayRelease();                                                                                                    // [0x9d8f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.InviteSteamUserToGame
	bool InviteSteamUserToGame(FString SteamId);                                                                             // [0x9d8e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetVersionName
	FString GetVersionName();                                                                                                // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetVersionCode
	FString GetVersionCode();                                                                                                // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetSteamFriendsOnlineList
	TArray<bool> GetSteamFriendsOnlineList();                                                                                // [0x9d8cb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetSteamFriendsNameList
	TArray<FString> GetSteamFriendsNameList();                                                                               // [0x9d8c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetSteamFriendName
	FString GetSteamFriendName(FString SteamId);                                                                             // [0x9d8b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetSteamFriendIDList
	TArray<FString> GetSteamFriendIDList();                                                                                  // [0x9d8ad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetSteamFriendCount
	int32_t GetSteamFriendCount();                                                                                           // [0x9d8aa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetSDKVersionName
	FString GetSDKVersionName();                                                                                             // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetSDKVersionCode
	FString GetSDKVersionCode();                                                                                             // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetRunningProcessName
	FString GetRunningProcessName();                                                                                         // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetOperatingSystemId
	FString GetOperatingSystemId();                                                                                          // [0x9d8a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetInstance
	ULLHSDKAppUtils* GetInstance();                                                                                          // [0x9d8990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetGameTime
	int64_t GetGameTime();                                                                                                   // [0x9d8960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetGameID
	FString GetGameID();                                                                                                     // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetEnvId
	FString GetEnvId();                                                                                                      // [0x9d88e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetDeviceUUID
	FString GetDeviceUUID();                                                                                                 // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetChannelID
	FString GetChannelID();                                                                                                  // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetBiosUUID
	FString GetBiosUUID();                                                                                                   // [0x9d86a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetAppName
	FString GetAppName();                                                                                                    // [0x9d8620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetAppIDRaw
	FString GetAppIDRaw();                                                                                                   // [0x9d85a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.GetAppID
	FString GetAppID();                                                                                                      // [0x9d8520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.DestoryInstance
	void DestoryInstance();                                                                                                  // [0x9d8290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKAppUtils.BindOnlineSubsystemSteamPresence
	void BindOnlineSubsystemSteamPresence();                                                                                 // [0x9d8130] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LLHSDK.LLHSDKCommunity
/// Size: 0x0050 (0x000028 - 0x000078)
class ULLHSDKCommunity : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnInitCommunity;                                            // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnExitCommunity;                                            // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnGetCommunityRedhint;                                      // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnClearCommunityRedhint;                                    // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnImageDownload;                                            // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/LLHSDK.LLHSDKCommunity.OnInitCommunity__DelegateSignature
	void OnInitCommunity__DelegateSignature(FString ResultStr);                                                              // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKCommunity.OnImageDownload__DelegateSignature
	void OnImageDownload__DelegateSignature(bool bSuccess);                                                                  // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKCommunity.OnGetCommunityRedhint__DelegateSignature
	void OnGetCommunityRedhint__DelegateSignature(FString ResultStr);                                                        // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKCommunity.OnExitCommunity__DelegateSignature
	void OnExitCommunity__DelegateSignature(FString ResultStr);                                                              // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKCommunity.OnClearCommunityRedhint__DelegateSignature
	void OnClearCommunityRedhint__DelegateSignature(FString ResultStr);                                                      // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKCommunity.InitCommunityConfig
	void InitCommunityConfig(FString UrlInfo, FString ReqMethod, FString ExtraHttpParams);                                   // [0x9d8d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKCommunity.GetInstance
	ULLHSDKCommunity* GetInstance();                                                                                         // [0x9d89c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKCommunity.GetCommunityRedHint
	void GetCommunityRedHint(FString URL, FString ReqMethod, FString ExtraHttpParams);                                       // [0x9d87a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKCommunity.ExitCommunity
	void ExitCommunity(FString URL, FString ReqMethod, FString ExtraHttpParams);                                             // [0x9d83e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKCommunity.DownloadImage
	void DownloadImage(FString URL, FString FilePath);                                                                       // [0x9d82f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKCommunity.DestoryInstance
	void DestoryInstance();                                                                                                  // [0x9d82b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKCommunity.ClearCommunityRedHint
	void ClearCommunityRedHint(FString URL, FString ReqMethod, FString ExtraHttpParams);                                     // [0x9d8150] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LLHSDK.LLHSDKCustomerService
/// Size: 0x0018 (0x000028 - 0x000040)
class ULLHSDKCustomerService : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnReceiveNotification;                                      // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/LLHSDK.LLHSDKCustomerService.ShowCustomerServicePage
	void ShowCustomerServicePage(FString ExtInfoStr);                                                                        // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKCustomerService.SetCustomerServiceDebug
	void SetCustomerServiceDebug(bool& bIsPspDebug, FString PlayerId, int64_t ServerId);                                     // [0x9d9130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKCustomerService.OnReceiveNotification__DelegateSignature
	void OnReceiveNotification__DelegateSignature(int32_t NotificationType);                                                 // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKCustomerService.GetInstance
	ULLHSDKCustomerService* GetInstance();                                                                                   // [0x9d89f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKCustomerService.DestoryInstance
	void DestoryInstance();                                                                                                  // [0x9d82d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LLHSDK.LLHSDKDeviceUtils
/// Size: 0x0020 (0x000028 - 0x000048)
class ULLHSDKDeviceUtils : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnGoogleAdID;                                               // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnDeviceScore;                                              // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.OnGoogleAdID__DelegateSignature
	void OnGoogleAdID__DelegateSignature(FString GoogleAdID);                                                                // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.OnDeviceScore__DelegateSignature
	void OnDeviceScore__DelegateSignature(int32_t DeviceScore);                                                              // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.IsEmulator
	bool IsEmulator();                                                                                                       // [0x9dbee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetTotalRAM
	FString GetTotalRAM();                                                                                                   // [0x9dce50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetTotalMemorySize
	FString GetTotalMemorySize();                                                                                            // [0x9dcdd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetTimezoneName
	FString GetTimezoneName();                                                                                               // [0x9dcd50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetOSVersion
	FString GetOSVersion();                                                                                                  // [0x9dcbb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetNetworkTypeEnum
	ELLHSDKNetworkType GetNetworkTypeEnum();                                                                                 // [0x9dcb80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetNetworkType
	FString GetNetworkType();                                                                                                // [0x9dcb00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetMacAddress
	FString GetMacAddress();                                                                                                 // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetInstance
	ULLHSDKDeviceUtils* GetInstance();                                                                                       // [0x9dc830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetIMSI
	FString GetIMSI();                                                                                                       // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetIDFA
	FString GetIDFA();                                                                                                       // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetGoogleAdID
	void GetGoogleAdID();                                                                                                    // [0x9dc810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetDisplayMetrics
	TArray<float> GetDisplayMetrics();                                                                                       // [0x9dc790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetDisplayCutout
	TArray<float> GetDisplayCutout();                                                                                        // [0x9dc710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetDeviceType
	FString GetDeviceType();                                                                                                 // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetDeviceScore
	void GetDeviceScore();                                                                                                   // [0x9dc6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetDeviceModel
	FString GetDeviceModel();                                                                                                // [0x9dc670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetDeviceID
	FString GetDeviceID();                                                                                                   // [0x9dc5f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetDeviceCarrier
	FString GetDeviceCarrier();                                                                                              // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetDeviceBrand
	FString GetDeviceBrand();                                                                                                // [0x9dc570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetDeviceAbi
	FString GetDeviceAbi();                                                                                                  // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetCPUModel
	FString GetCPUModel();                                                                                                   // [0x9dc4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetCPUHardWareName
	FString GetCPUHardWareName();                                                                                            // [0x9dc4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetAvailableRAM
	FString GetAvailableRAM();                                                                                               // [0x9dc470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.GetAndroidID
	FString GetAndroidID();                                                                                                  // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKDeviceUtils.DestoryInstance
	void DestoryInstance();                                                                                                  // [0x9dc090] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LLHSDK.LLHSDKLocalization
/// Size: 0x0000 (0x000028 - 0x000028)
class ULLHSDKLocalization : public UObject
{ 
public:
};

/// Class /Script/LLHSDK.LLHSDKLogin
/// Size: 0x01A0 (0x000028 - 0x0001C8)
class ULLHSDKLogin : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnInitFinish;                                               // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnLoginFinish;                                              // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnLoginFailed;                                              // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnBindFinish;                                               // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnSwitchAccountFinish;                                      // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           OnSwitchAccountFailed;                                      // 0x0078   (0x0010)  
	FMulticastInlineDelegate                           OnProtocolClick;                                            // 0x0088   (0x0010)  
	FMulticastInlineDelegate                           OnLimSteamSDKInited;                                        // 0x0098   (0x0010)  
	FMulticastInlineDelegate                           OnSteamAutoLogin;                                           // 0x00A8   (0x0010)  
	FMulticastInlineDelegate                           OnSteamRegister;                                            // 0x00B8   (0x0010)  
	FMulticastInlineDelegate                           OnGetSteamRegisterUrl;                                      // 0x00C8   (0x0010)  
	FMulticastInlineDelegate                           OnGetThirdPartyLoginResult;                                 // 0x00D8   (0x0010)  
	FMulticastInlineDelegate                           OnSteamBindUrlGet;                                          // 0x00E8   (0x0010)  
	FMulticastInlineDelegate                           OnSteamLoginResultSet;                                      // 0x00F8   (0x0010)  
	FMulticastInlineDelegate                           OnSteamGetAccountInfo;                                      // 0x0108   (0x0010)  
	FMulticastInlineDelegate                           OnSteamBindFinish;                                          // 0x0118   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCSDKInited;                                           // 0x0128   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCSDKEventCallback;                                    // 0x0138   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCSDKLogin;                                            // 0x0148   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCSDKLogout;                                           // 0x0158   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCSDKOpenAccountPage;                                  // 0x0168   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCSDKOpenSwitchAccountPage;                            // 0x0178   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCSDKLanguageChange;                                   // 0x0188   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCSDKGetUserInfo;                                      // 0x0198   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCSDKCommonReportPoint;                                // 0x01A8   (0x0010)  
	FString                                            LimPCAlilogFields;                                          // 0x01B8   (0x0010)  


	/// Functions
	// Function /Script/LLHSDK.LLHSDKLogin.UpdateSteamCallBack
	void UpdateSteamCallBack();                                                                                              // [0x9de6b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.SwitchOrLinkAccount
	void SwitchOrLinkAccount();                                                                                              // [0x9de480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.SteamRegister
	bool SteamRegister(FString Params);                                                                                      // [0x9de3e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.SteamLoginResultSet
	bool SteamLoginResultSet(FString Params);                                                                                // [0x9de340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.SteamGetAccountInfo
	bool SteamGetAccountInfo(FString Params);                                                                                // [0x9de2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.SteamFree
	void SteamFree();                                                                                                        // [0x9de280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.SteamBindUrlGet
	bool SteamBindUrlGet(FString Params);                                                                                    // [0x9de1e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.SteamAutoLogin
	bool SteamAutoLogin(FString Params);                                                                                     // [0x9de140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.ShowProtocolViewV2Ok
	void ShowProtocolViewV2Ok();                                                                                             // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.ShowProtocolViewV2Confirm
	void ShowProtocolViewV2Confirm();                                                                                        // [0x9ddd50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.SetLimPCSDKLogHandler
	int32_t SetLimPCSDKLogHandler();                                                                                         // [0x9ddb50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.SetLimPCSDKEventHandler
	int32_t SetLimPCSDKEventHandler();                                                                                       // [0x9ddb20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.SetLimPCAlilogFieldsData
	void SetLimPCAlilogFieldsData(FString LimPCAlilogFieldsStr);                                                             // [0x9dda90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.QueryCurrentUserInfo
	FLLHSDKLoginUserInfo QueryCurrentUserInfo();                                                                             // [0x9dda20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.QueryCurrentUser
	FLLHSDKLoginUser QueryCurrentUser();                                                                                     // [0x9dd8d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.OpenSteamBindPage
	bool OpenSteamBindPage(FString URL);                                                                                     // [0x9dd780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.OpenLIMPCSwitchAccPage
	int32_t OpenLIMPCSwitchAccPage();                                                                                        // [0x9dd6c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.OpenLIMPCAccountPage
	int32_t OpenLIMPCAccountPage(FString Params);                                                                            // [0x9dd620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.OnProtocolClick__DelegateSignature
	void OnProtocolClick__DelegateSignature(bool bConfirmed);                                                                // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKLogin.OnLoginFinish__DelegateSignature
	void OnLoginFinish__DelegateSignature(FString AppUid, FString AppToken, ELLHSDKLoginType LoginType);                     // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKLogin.OnLoginFailed__DelegateSignature
	void OnLoginFailed__DelegateSignature(ELLHSDKLoginType LoginType, int32_t ErrorCode);                                    // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKLogin.OnInitFinish__DelegateSignature
	void OnInitFinish__DelegateSignature();                                                                                  // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKLogin.OnBindFinish__DelegateSignature
	void OnBindFinish__DelegateSignature(bool bSuccess, FString AppUid, FString AppToken, ELLHSDKLoginType LoginType);       // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKLogin.LogoutLimPCSDK
	int32_t LogoutLimPCSDK();                                                                                                // [0x9dd5f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.Logout
	void Logout();                                                                                                           // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.LoginUserInfo_ToString
	FString LoginUserInfo_ToString(FLLHSDKLoginUserInfo& InUserInfo);                                                        // [0x9dd370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.LoginUser_ToString
	FString LoginUser_ToString(FLLHSDKLoginUser& InUser);                                                                    // [0x9dd480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.LoginLimPCSDK
	int32_t LoginLimPCSDK(FString Params);                                                                                   // [0x9dd2d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.Login
	void Login();                                                                                                            // [0x9dd2b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.LimSteamSDKCallBack__DelegateSignature
	void LimSteamSDKCallBack__DelegateSignature(FString Datas);                                                              // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKLogin.LimPCSDKCallBack__DelegateSignature
	void LimPCSDKCallBack__DelegateSignature(FString Datas);                                                                 // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKLogin.LimOnSteamLoginResultSet__DelegateSignature
	void LimOnSteamLoginResultSet__DelegateSignature(FString AppUid, FString AppToken, FString AppId);                       // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKLogin.IsInitFinish
	bool IsInitFinish();                                                                                                     // [0x9d9100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.IsCurrentUserNewReg
	bool IsCurrentUserNewReg();                                                                                              // [0x9dbf10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.InitLimSteamSDK
	bool InitLimSteamSDK(FString Params);                                                                                    // [0x9dcf70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.InitLimPCSDK
	int32_t InitLimPCSDK(FString Params);                                                                                    // [0x9dced0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.GetSteamToken
	FString GetSteamToken();                                                                                                 // [0x9dccd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.GetSteamRegisterUrl
	bool GetSteamRegisterUrl(FString Params);                                                                                // [0x9dcc30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.GetLimPCUserInfo
	int32_t GetLimPCUserInfo(FString Params);                                                                                // [0x9dc9a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.GetLimPCAlilogFieldsData
	FString GetLimPCAlilogFieldsData();                                                                                      // [0x9dc920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.GetLimPCAlilogFields
	int32_t GetLimPCAlilogFields();                                                                                          // [0x9dc8f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.GetInstance
	ULLHSDKLogin* GetInstance();                                                                                             // [0x9dc890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.FreeLimPCSDK
	void FreeLimPCSDK();                                                                                                     // [0x9dc450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.DoSteamBind
	bool DoSteamBind(FString URL);                                                                                           // [0x9dc200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.DestoryInstance
	void DestoryInstance();                                                                                                  // [0x9dc0d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.DAPLogAdd
	void DAPLogAdd(FString Params);                                                                                          // [0x9dc000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.CommonReportLimPCPoint
	int32_t CommonReportLimPCPoint(FString Params);                                                                          // [0x9dbf60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.ClearAutoLogin
	bool ClearAutoLogin();                                                                                                   // [0x9dbf10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.ChangeLIMPCLanguage
	int32_t ChangeLIMPCLanguage(FString Params);                                                                             // [0x9dbe40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.CanContinueLogin
	bool CanContinueLogin();                                                                                                 // [0x9dbdf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKLogin.CancelSteamCallBack
	void CancelSteamCallBack();                                                                                              // [0x9dbe20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LLHSDK.LLHSDKMisc
/// Size: 0x0120 (0x000028 - 0x000148)
class ULLHSDKMisc : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnBrowserClosed;                                            // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnScreenshotCaptured;                                       // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnFacebookPhotoShared;                                      // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0060   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnSystemShared;                                             // 0x0068   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnGetFacebookToken;                                         // 0x0080   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0090   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnQueryThirdPartyUserInfo;                                  // 0x0098   (0x0010)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnRefreshFirebaseToken;                                     // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x00C0   (0x0008)  MISSED
	FMulticastInlineDelegate                           OnHttpDiagnosisCallBack;                                    // 0x00C8   (0x0010)  
	FMulticastInlineDelegate                           OnPingDiagnosisCallBack;                                    // 0x00D8   (0x0010)  
	FMulticastInlineDelegate                           OnTcpPingDiagnosisCallBack;                                 // 0x00E8   (0x0010)  
	FMulticastInlineDelegate                           OnMtrDiagnosisCallBack;                                     // 0x00F8   (0x0010)  
	FMulticastInlineDelegate                           OnDnsDiagnosisCallBack;                                     // 0x0108   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCOpenWebview;                                         // 0x0118   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCCloseWebview;                                        // 0x0128   (0x0010)  
	FMulticastInlineDelegate                           OnPickFileFromAlbumCallBack;                                // 0x0138   (0x0010)  


	/// Functions
	// Function /Script/LLHSDK.LLHSDKMisc.UpdateNetworkExtensions
	void UpdateNetworkExtensions(FString InUserId, FString InDeviceID);                                                      // [0x9dc110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.TwitterShareText
	void TwitterShareText(FString InText);                                                                                   // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.TwitterSharePhoto
	void TwitterSharePhoto(FString InText, FString InFilePath);                                                              // [0x9dc110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.TryToEnableAndroidNotification
	void TryToEnableAndroidNotification();                                                                                   // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.TcpPingDetect
	void TcpPingDetect(FString InDomain, int32_t Port);                                                                      // [0x9de5e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.SystemShare
	void SystemShare(int32_t& ShareType, FString Description, FString FilePath);                                             // [0x9de4a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.StartIOSFarlightBrowserWithOrientation
	void StartIOSFarlightBrowserWithOrientation(FString URL, FString Title, ELLHSDKScreenOrientation Orientation);           // [0x9de010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.StartBrowserWithOrientation
	void StartBrowserWithOrientation(FString URL, FString Title, ELLHSDKScreenOrientation Orientation);                      // [0x9ddee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.StartBrowser
	void StartBrowser(FString URL, FString Title);                                                                           // [0x9ddd70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.SetNetworkPolicyDomain
	void SetNetworkPolicyDomain(FString InDomain);                                                                           // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.SetNetworkMultipleDetect
	void SetNetworkMultipleDetect(bool InEnable);                                                                            // [0x9ddcd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.SetNetworkDiagnosisDeviceID
	void SetNetworkDiagnosisDeviceID(FString InDeviceID);                                                                    // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.RestartApplication
	void RestartApplication(FString IntentString);                                                                           // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.RefreshFirebaseMessagingToken
	void RefreshFirebaseMessagingToken();                                                                                    // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.RefreshAndroidMediaScanner
	void RefreshAndroidMediaScanner(FString InFullFilePath);                                                                 // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.QueryThirdPartUserInfo
	void QueryThirdPartUserInfo();                                                                                           // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.PingDetect
	void PingDetect(FString InDomain);                                                                                       // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.PickFileFromAlbum
	void PickFileFromAlbum();                                                                                                // [0x9dd8b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.OpenSteamPayWebPage
	void OpenSteamPayWebPage(FString URL);                                                                                   // [0x9dd820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.OpenLimPCWebPage
	void OpenLimPCWebPage(FString Params);                                                                                   // [0x9dd6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.OnSystemShared__DelegateSignature
	void OnSystemShared__DelegateSignature(bool bSuccess);                                                                   // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKMisc.OnScreenshotCapturedEvent__DelegateSignature
	void OnScreenshotCapturedEvent__DelegateSignature(FString FullPath);                                                     // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKMisc.OnRefreshFirebaseToken__DelegateSignature
	void OnRefreshFirebaseToken__DelegateSignature(FString FirebaseToken);                                                   // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKMisc.OnQueryThirdPartUserInfo__DelegateSignature
	void OnQueryThirdPartUserInfo__DelegateSignature(bool Success, int32_t ErrorCode, TArray<FSDKSocialUserInfo> SocialUserInfoList); // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKMisc.OnPickFileFromAlbumFinishEvent__DelegateSignature
	void OnPickFileFromAlbumFinishEvent__DelegateSignature(FString PickFilePath, int32_t ErrorCode);                         // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKMisc.OnLimPCOpenWebview__DelegateSignature
	void OnLimPCOpenWebview__DelegateSignature(FString Params);                                                              // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKMisc.OnLimPCCloseWebview__DelegateSignature
	void OnLimPCCloseWebview__DelegateSignature(FString Params);                                                             // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKMisc.OnGetFacebookToken__DelegateSignature
	void OnGetFacebookToken__DelegateSignature(bool Result, FString Token, FString ApplicationId, FString UserId, FString GraphDomain); // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKMisc.OnFacebookPhotoShared__DelegateSignature
	void OnFacebookPhotoShared__DelegateSignature(FString FilePath, bool bSuccess);                                          // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKMisc.OnBrowserClosed__DelegateSignature
	void OnBrowserClosed__DelegateSignature();                                                                               // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKMisc.NetworkDiagnosisCallback__DelegateSignature
	void NetworkDiagnosisCallback__DelegateSignature(FString Type, FString Ret);                                             // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKMisc.MtrDetect
	void MtrDetect(FString InDomain);                                                                                        // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.JumpToMarket
	void JumpToMarket(FString InAppPkg, FString InMarketPkg);                                                                // [0x9dc110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.JumpToAppStore
	void JumpToAppStore(FString AppStoreUrl);                                                                                // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.IsFacebookShareable
	bool IsFacebookShareable();                                                                                              // [0x9dbee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.IsAppRooted
	bool IsAppRooted();                                                                                                      // [0x9dbee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.IsAndroidNotificationEnabled
	bool IsAndroidNotificationEnabled();                                                                                     // [0x9dbf10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.InitNetworkDiagnosis
	void InitNetworkDiagnosis(FString InProject, FString InSecretKey, FString InEndPoint, FString InAccessKeyId, FString InAccessKeySecret, FString InUid, FString InChannel); // [0x9dd010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.HttpDetect
	void HttpDetect(FString InUrl);                                                                                          // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.GetNetworkDiagnosisDeviceID
	FString GetNetworkDiagnosisDeviceID();                                                                                   // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.GetInstance
	ULLHSDKMisc* GetInstance();                                                                                              // [0x9dc8c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.GetFirebaseMessagingToken
	FString GetFirebaseMessagingToken();                                                                                     // [0x9d8720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.GetFacebookToken
	void GetFacebookToken();                                                                                                 // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.FacebookSharePhotoWithFileAndDescription
	void FacebookSharePhotoWithFileAndDescription(FString Description, FString FilePath);                                    // [0x9dc110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.FacebookSharePhotoByPath
	void FacebookSharePhotoByPath(FString InFilePath);                                                                       // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.FacebookSharePhoto
	void FacebookSharePhoto();                                                                                               // [0x9dc430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.FacebookShareLink
	void FacebookShareLink(FString InLinkURL, FString InPreviewURL, FString InTitle, FString InDesc);                        // [0x9dc2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.DnsDetect
	void DnsDetect(FString InServer, FString InDomain);                                                                      // [0x9dc110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.DestoryInstance
	void DestoryInstance();                                                                                                  // [0x9dc0f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.CloseLimPCWebPageAll
	void CloseLimPCWebPageAll();                                                                                             // [0x9dbf40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKMisc.CheckGyroSensorSupport
	bool CheckGyroSensorSupport();                                                                                           // [0x9dbee0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LLHSDK.LLHSDKPay
/// Size: 0x00E8 (0x000028 - 0x000110)
class ULLHSDKPay : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnLSteamQuerySkus;                                          // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnLSteamSDKPayApplied;                                      // 0x0038   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCQueryPriceLadder;                                    // 0x0048   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCQueryPriceLadderWithRegion;                          // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnLimPCPayApplied;                                          // 0x0068   (0x0010)  
	FMulticastInlineDelegate                           OnGooglePayFinished;                                        // 0x0078   (0x0010)  
	FMulticastInlineDelegate                           OnGoogleQuerySkuItemDetails;                                // 0x0088   (0x0010)  
	FMulticastInlineDelegate                           OnGoogleQuerySkuItemDetailsSubscription;                    // 0x0098   (0x0010)  
	FMulticastInlineDelegate                           OnGetGoogleConsumeGoods;                                    // 0x00A8   (0x0010)  
	FMulticastInlineDelegate                           OnGetGoogleConsumePointsGoods;                              // 0x00B8   (0x0010)  
	FMulticastInlineDelegate                           OnIOSQuerySkus;                                             // 0x00C8   (0x0010)  
	FMulticastInlineDelegate                           OnIOSLLHPayFinished;                                        // 0x00D8   (0x0010)  
	FMulticastInlineDelegate                           OnGetIOSPurchaseExtNull;                                    // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/LLHSDK.LLHSDKPay.Test_Google_SkuItemDetailsToString
	FString Test_Google_SkuItemDetailsToString(FLLHSDKGenericSkuItemsDetailList InDetails);                                  // [0x9e18a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.SteamQuerySkus
	void SteamQuerySkus(FString Params);                                                                                     // [0x9e1780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.Steam_StartPay
	void Steam_StartPay(FString SteamPayInfo);                                                                               // [0x9e1810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.SetPayNotifyUrl
	void SetPayNotifyUrl(FString InNotifyUrl);                                                                               // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.OnLLHQuerySkus__DelegateSignature
	void OnLLHQuerySkus__DelegateSignature(FLLHSDKGenericSkuItemsDetailList ItemsDetailList, TArray<FString>& InvalidProductIDs); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LLHSDK.LLHSDKPay.OnLLHPayFinished__DelegateSignature
	void OnLLHPayFinished__DelegateSignature(bool bSuccess, int32_t ErrorCode, FString ErrorMsg, int32_t PayValue, FString ProductID, ELLHSDKPayType PayType); // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKPay.OnGoogleQuerySkuSubItemDetails__DelegateSignature
	void OnGoogleQuerySkuSubItemDetails__DelegateSignature(bool bSuccess, int32_t ErrorCode, FString ItemsDetailListJsonString); // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKPay.OnGoogleQuerySkuItemDetails__DelegateSignature
	void OnGoogleQuerySkuItemDetails__DelegateSignature(bool bSuccess, int32_t ErrorCode, FString ItemsDetailListJsonString); // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKPay.OnGooglePayFinished__DelegateSignature
	void OnGooglePayFinished__DelegateSignature(bool bSuccess, int32_t ErrorCode, int32_t Price, FString ItemID, ELLHSDKPayType PayType); // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKPay.OnGetIOSPurchaseExtNull__DelegateSignature
	void OnGetIOSPurchaseExtNull__DelegateSignature(FString AppUid, FString ProductID);                                      // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKPay.OnGetGoogleConsumeGoods__DelegateSignature
	void OnGetGoogleConsumeGoods__DelegateSignature(TArray<FString>& Skus);                                                  // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LLHSDK.LLHSDKPay.LSteamSDKQuerySkus__DelegateSignature
	void LSteamSDKQuerySkus__DelegateSignature(FString Datas);                                                               // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKPay.LSteamSDKPayApplied__DelegateSignature
	void LSteamSDKPayApplied__DelegateSignature(FString Datas);                                                              // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKPay.LimPCStartPay
	void LimPCStartPay(FString Params);                                                                                      // [0x9e01a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.LimPCSDKQueryPriceLadder__DelegateSignature
	void LimPCSDKQueryPriceLadder__DelegateSignature(FString Datas);                                                         // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKPay.LimPCSDKPayApplied__DelegateSignature
	void LimPCSDKPayApplied__DelegateSignature(FString Datas);                                                               // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/LLHSDK.LLHSDKPay.LimPCQueryPriceLadderWithRegion
	void LimPCQueryPriceLadderWithRegion(FString Params);                                                                    // [0x9e0110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.LimPCQueryPriceLadder
	void LimPCQueryPriceLadder();                                                                                            // [0x9e00f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.IOS_SetUserPayExtInCallback
	void IOS_SetUserPayExtInCallback(FString ProductID, FString PayExt);                                                     // [0x9dc110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.IOS_SetUserPayExt
	void IOS_SetUserPayExt(FString PayExt);                                                                                  // [0x9d9260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.IOS_SetAutoPayExt
	void IOS_SetAutoPayExt(bool bEnabled);                                                                                   // [0x9e0070] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.IOS_QuerySkus
	void IOS_QuerySkus(TArray<FString>& ProductIDs);                                                                         // [0x9dffb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.IOS_LLHPay
	void IOS_LLHPay(FString ProductID, FString PayExt);                                                                      // [0x9dfec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.IOS_GetAutoPayExt
	bool IOS_GetAutoPayExt();                                                                                                // [0x9dfe90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.Google_StartPaySubscription
	void Google_StartPaySubscription(FString PayItemID, FString PayContext);                                                 // [0x9dfd20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.Google_StartPay
	void Google_StartPay(FString PayItemID, FString PayContext);                                                             // [0x9dfd20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.Google_QuerySkuItemDetailsSubscription
	void Google_QuerySkuItemDetailsSubscription(TArray<FString> Items);                                                      // [0x9dfbc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.Google_QuerySkuItemDetails
	void Google_QuerySkuItemDetails(TArray<FString> Items);                                                                  // [0x9dfa60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.Google_HasConsumePointsGoods
	bool Google_HasConsumePointsGoods();                                                                                     // [0x9dbee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.Google_HasConsumeGoods
	bool Google_HasConsumeGoods();                                                                                           // [0x9dbee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.Google_GetConsumePointsGoods
	TArray<FString> Google_GetConsumePointsGoods();                                                                          // [0x9df9e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.Google_GetConsumeGoods
	TArray<FString> Google_GetConsumeGoods();                                                                                // [0x9df9e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.Google_ConsumeGoods
	void Google_ConsumeGoods(TArray<FString> Skus, TArray<FString> Contexts);                                                // [0x9df790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.GetInstance
	ULLHSDKPay* GetInstance();                                                                                               // [0x9df730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LLHSDK.LLHSDKPay.DestoryInstance
	void DestoryInstance();                                                                                                  // [0x9df6f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LLHSDK.LLHSDKReport
/// Size: 0x0000 (0x000028 - 0x000028)
class ULLHSDKReport : public UObject
{ 
public:
};

/// Class /Script/LLHSDK.LLHSDKSettings
/// Size: 0x0268 (0x000038 - 0x0002A0)
class ULLHSDKSettings : public UDeveloperSettings
{ 
public:
	bool                                               bHasFacebook;                                               // 0x0038   (0x0001)  
	bool                                               bHasTiktok;                                                 // 0x0039   (0x0001)  
	bool                                               bHasFirebaseMessaging;                                      // 0x003A   (0x0001)  
	bool                                               bIsSDKDebuggable;                                           // 0x003B   (0x0001)  
	bool                                               bIsGrayRelease;                                             // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	FString                                            FacebookContentProviderForGrayRelease;                      // 0x0040   (0x0010)  
	FString                                            FacebookAppIDForGrayRelease;                                // 0x0050   (0x0010)  
	FString                                            SDKAppIdForGrayRelease;                                     // 0x0060   (0x0010)  
	FString                                            SDKGameIdForGrayRelease;                                    // 0x0070   (0x0010)  
	FString                                            PspAppIdForGrayRelease;                                     // 0x0080   (0x0010)  
	FString                                            AndroidDebugParkwayEnvIdForGrayRelease;                     // 0x0090   (0x0010)  
	FString                                            AndroidReleaseParkwayEnvIdForGrayRelease;                   // 0x00A0   (0x0010)  
	FString                                            FacebookContentProvider;                                    // 0x00B0   (0x0010)  
	FString                                            FacebookAppID;                                              // 0x00C0   (0x0010)  
	FString                                            IOSFacebookContentProvider;                                 // 0x00D0   (0x0010)  
	FString                                            IOSFacebookAppID;                                           // 0x00E0   (0x0010)  
	FString                                            SDKAppId;                                                   // 0x00F0   (0x0010)  
	FString                                            SDKGameId;                                                  // 0x0100   (0x0010)  
	FString                                            PspAppId;                                                   // 0x0110   (0x0010)  
	FString                                            AndroidDebugParkwayEnvId;                                   // 0x0120   (0x0010)  
	FString                                            AndroidReleaseParkwayEnvId;                                 // 0x0130   (0x0010)  
	FString                                            IOSDebugParkwayEnvId;                                       // 0x0140   (0x0010)  
	FString                                            IOSReleaseParkwayEnvId;                                     // 0x0150   (0x0010)  
	FString                                            SteamDebugParkwayEnvId;                                     // 0x0160   (0x0010)  
	FString                                            SteamReleaseParkwayEnvId;                                   // 0x0170   (0x0010)  
	FString                                            OffcialWinDebugParkwayEnvId;                                // 0x0180   (0x0010)  
	FString                                            OffcialWinReleaseParkwayEnvId;                              // 0x0190   (0x0010)  
	FString                                            EpicDebugParkwayEnvId;                                      // 0x01A0   (0x0010)  
	FString                                            EpicReleaseParkwayEnvId;                                    // 0x01B0   (0x0010)  
	FString                                            SDKGroupName;                                               // 0x01C0   (0x0010)  
	FString                                            SDKFeatureName;                                             // 0x01D0   (0x0010)  
	FString                                            SDKVersion;                                                 // 0x01E0   (0x0010)  
	bool                                               bAndroidXEnabled;                                           // 0x01F0   (0x0001)  
	bool                                               bMultiDexEnabled;                                           // 0x01F1   (0x0001)  
	bool                                               bShouldUseOverridedConfig;                                  // 0x01F2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x01F3   (0x0005)  MISSED
	FString                                            FirebaseCoreVersion;                                        // 0x01F8   (0x0010)  
	FString                                            FirebaseMessagingVersion;                                   // 0x0208   (0x0010)  
	FString                                            GoogleServicesVersion;                                      // 0x0218   (0x0010)  
	FString                                            PlayServicesBasementVersion;                                // 0x0228   (0x0010)  
	ELLHSDKGravity                                     PlayPhoneGravity;                                           // 0x0238   (0x0001)  
	bool                                               bEnableAndroidScreenshotListener;                           // 0x0239   (0x0001)  
	bool                                               bEnableAndroidMultipleDetect;                               // 0x023A   (0x0001)  
	bool                                               bShowLogo;                                                  // 0x023B   (0x0001)  
	ELLHSDKLoginUIStyle                                LoginUIStyle;                                               // 0x023C   (0x0001)  
	bool                                               bIOSShouldUseOverridedConfig;                               // 0x023D   (0x0001)  
	bool                                               bIOSShowTermsByServer;                                      // 0x023E   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x023F   (0x0001)  MISSED
	FString                                            FacebookDisplayName;                                        // 0x0240   (0x0010)  
	FString                                            QQAppID;                                                    // 0x0250   (0x0010)  
	FString                                            WechatAppID;                                                // 0x0260   (0x0010)  
	FString                                            GoogleReversedClientID;                                     // 0x0270   (0x0010)  
	FString                                            TwitterAPIKey;                                              // 0x0280   (0x0010)  
	FString                                            DefaultNSUserTrackingUsageDescription;                      // 0x0290   (0x0010)  
};

/// Struct /Script/LLHSDK.LLHSDKLoginUser
/// Size: 0x0048 (0x000000 - 0x000048)
struct FLLHSDKLoginUser
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            AppUid;                                                     // 0x0008   (0x0010)  
	FString                                            AppToken;                                                   // 0x0018   (0x0010)  
	ELLHSDKLoginType                                   LoginType;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            Name;                                                       // 0x0030   (0x0010)  
	bool                                               bIsGuest;                                                   // 0x0040   (0x0001)  
	bool                                               bIsSafe;                                                    // 0x0041   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	int32_t                                            LimitDeviceCount;                                           // 0x0044   (0x0004)  
};

/// Struct /Script/LLHSDK.LLHSDKLoginUserInfo
/// Size: 0x0140 (0x000000 - 0x000140)
struct FLLHSDKLoginUserInfo
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Phone;                                                      // 0x0008   (0x0010)  
	FString                                            Email;                                                      // 0x0018   (0x0010)  
	FString                                            UserRegion;                                                 // 0x0028   (0x0010)  
	FString                                            IP;                                                         // 0x0038   (0x0010)  
	int32_t                                            RestPoint;                                                  // 0x0048   (0x0004)  
	bool                                               bDomesticHasBindAnyOne;                                     // 0x004C   (0x0001)  
	bool                                               bIsNewReg;                                                  // 0x004D   (0x0001)  
	bool                                               bIsIdentified;                                              // 0x004E   (0x0001)  
	bool                                               bIsAbusePrevented;                                          // 0x004F   (0x0001)  
	TSet<ELLHSDKLoginType>                             BoundLoginTypes;                                            // 0x0050   (0x0050)  
	TMap<ELLHSDKLoginType, FLLHSDKLoginUserInfoMap>    BoundInfoMap;                                               // 0x00A0   (0x0050)  
	FLLHSDKLoginUserInfoMap                            UserExtra;                                                  // 0x00F0   (0x0050)  
};

/// Struct /Script/LLHSDK.LLHSDKLoginUserInfoMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLLHSDKLoginUserInfoMap
{ 
	TMap<FString, FString>                             Info;                                                       // 0x0000   (0x0050)  
};

/// Struct /Script/LLHSDK.SDKSocialUserInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSDKSocialUserInfo
{ 
	FString                                            Avatar;                                                     // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            Email;                                                      // 0x0020   (0x0010)  
	int32_t                                            BindType;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/LLHSDK.LLHSDKGenericSkuItemsDetailList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLLHSDKGenericSkuItemsDetailList
{ 
	TArray<FLLHSDKGoogleSkuItemDetail>                 Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/LLHSDK.LLHSDKGoogleSkuItemDetail
/// Size: 0x0070 (0x000000 - 0x000070)
struct FLLHSDKGoogleSkuItemDetail
{ 
	ELLHSDKPayGenericSkuItemType                       ItemType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Title;                                                      // 0x0008   (0x0010)  
	FString                                            Desc;                                                       // 0x0018   (0x0010)  
	FString                                            Price;                                                      // 0x0028   (0x0010)  
	FString                                            Sku;                                                        // 0x0038   (0x0010)  
	FString                                            Currency;                                                   // 0x0048   (0x0010)  
	int32_t                                            PriceAmountMicros;                                          // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            SdkConvertSymbol;                                           // 0x0060   (0x0010)  
};

/// Struct /Script/LLHSDK.LLHSDKCustomerServiceExtra
/// Size: 0x0060 (0x000000 - 0x000060)
struct FLLHSDKCustomerServiceExtra
{ 
	TArray<FString>                                    Tags;                                                       // 0x0000   (0x0010)  
	TMap<FString, FString>                             CustomParams;                                               // 0x0010   (0x0050)  
};

/// Struct /Script/LLHSDK.LLHSDKLocaleInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLLHSDKLocaleInfo
{ 
	FString                                            Language;                                                   // 0x0000   (0x0010)  
	FString                                            Region;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/LLHSDK.LLHSDKGenericSkuSubItemsDetailList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLLHSDKGenericSkuSubItemsDetailList
{ 
	TArray<FLLHSDKGoogleSkuSubItemDetail>              Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/LLHSDK.LLHSDKGoogleSkuSubItemDetail
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLLHSDKGoogleSkuSubItemDetail
{ 
	ELLHSDKPayGenericSkuItemType                       ItemType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Title;                                                      // 0x0008   (0x0010)  
	FString                                            Desc;                                                       // 0x0018   (0x0010)  
	FString                                            Sku;                                                        // 0x0028   (0x0010)  
	int32_t                                            SubGoodsSize;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FLLHSDKGoogleSkuSubGood>                    SubGoods;                                                   // 0x0040   (0x0010)  
};

/// Struct /Script/LLHSDK.LLHSDKGoogleSkuSubGood
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLLHSDKGoogleSkuSubGood
{ 
	FString                                            OfferToken;                                                 // 0x0000   (0x0010)  
	int32_t                                            CombineSize;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FLLHSDKGoogleSubCombineItem>                CombineItems;                                               // 0x0018   (0x0010)  
	TArray<FString>                                    OfferTags;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/LLHSDK.LLHSDKGoogleSubCombineItem
/// Size: 0x0070 (0x000000 - 0x000070)
struct FLLHSDKGoogleSubCombineItem
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            ProductID;                                                  // 0x0008   (0x0010)  
	FString                                            CombineItemName1;                                           // 0x0018   (0x0010)  
	FString                                            CombineItemName2;                                           // 0x0028   (0x0010)  
	FString                                            Price;                                                      // 0x0038   (0x0010)  
	FString                                            Currency;                                                   // 0x0048   (0x0010)  
	int32_t                                            PriceAmountMicros;                                          // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            SdkConvertSymbol;                                           // 0x0060   (0x0010)  
};

/// Enum /Script/LLHSDK.ELLHSDKNetworkType
/// Size: 0x09
enum ELLHSDKNetworkType : uint8_t
{
	ELLHSDKNetworkType__Unknown                                                      = 0,
	ELLHSDKNetworkType__NotConnected                                                 = 1,
	ELLHSDKNetworkType__Type_WiFi                                                    = 2,
	ELLHSDKNetworkType__Type_Unknown_Cell                                            = 3,
	ELLHSDKNetworkType__Type_2G                                                      = 4,
	ELLHSDKNetworkType__Type_3G                                                      = 5,
	ELLHSDKNetworkType__Type_4G                                                      = 6,
	ELLHSDKNetworkType__Type_5G                                                      = 7,
	ELLHSDKNetworkType__ELLHSDKNetworkType_MAX                                       = 8
};

/// Enum /Script/LLHSDK.ELLHSDKLoginType
/// Size: 0x20
enum ELLHSDKLoginType : uint8_t
{
	ELLHSDKLoginType__TYPE_NONE                                                      = 0,
	ELLHSDKLoginType__TYPE_QUICK_LOGIN                                               = 1,
	ELLHSDKLoginType__TYPE_LILITH_LOGIN                                              = 2,
	ELLHSDKLoginType__TYPE_MOBILE_LOGIN                                              = 2,
	ELLHSDKLoginType__TYPE_FACEBOOK_LOGIN                                            = 3,
	ELLHSDKLoginType__TYPE_GAME_CENTER_LOGIN                                         = 4,
	ELLHSDKLoginType__TYPE_GOOGLE_PLUS_OR_GAMES_LOGIN                                = 5,
	ELLHSDKLoginType__TYPE_WECHAT_LOGIN                                              = 6,
	ELLHSDKLoginType__TYPE_QQ_LOGIN                                                  = 7,
	ELLHSDKLoginType__TYPE_AUTO_LOGIN                                                = 8,
	ELLHSDKLoginType__TYPE_VK_LOGIN                                                  = 9,
	ELLHSDKLoginType__TYPE_GOOGLE_LOGIN                                              = 10,
	ELLHSDKLoginType__TYPE_LINE_LOGIN                                                = 11,
	ELLHSDKLoginType__TYPE_TWITTER_LOGIN                                             = 12,
	ELLHSDKLoginType__TYPE_APPLE_LOGIN                                               = 13,
	ELLHSDKLoginType__TYPE_WEIBO_LOGIN                                               = 14,
	ELLHSDKLoginType__TYPE_PGS_LOGIN                                                 = 15,
	ELLHSDKLoginType__TYPE_TIKTOK_LOGIN                                              = 16,
	ELLHSDKLoginType__TYPE_STEAM_LOGIN                                               = 17,
	ELLHSDKLoginType__TYPE_MAX                                                       = 18
};

/// Enum /Script/LLHSDK.ELLHSDKScreenOrientation
/// Size: 0x09
enum ELLHSDKScreenOrientation : uint8_t
{
	ELLHSDKScreenOrientation__Portrait                                               = 0,
	ELLHSDKScreenOrientation__ReversePortrait                                        = 1,
	ELLHSDKScreenOrientation__SensorPortrait                                         = 2,
	ELLHSDKScreenOrientation__Landscape                                              = 3,
	ELLHSDKScreenOrientation__ReverseLandscape                                       = 4,
	ELLHSDKScreenOrientation__SensorLandscape                                        = 5,
	ELLHSDKScreenOrientation__Sensor                                                 = 6,
	ELLHSDKScreenOrientation__FullSensor                                             = 7,
	ELLHSDKScreenOrientation__ELLHSDKScreenOrientation_MAX                           = 8
};

/// Enum /Script/LLHSDK.ELLHSDKPayType
/// Size: 0x14
enum ELLHSDKPayType : uint8_t
{
	ELLHSDKPayType__None                                                             = 0,
	ELLHSDKPayType__Apple                                                            = 1,
	ELLHSDKPayType__Google                                                           = 2,
	ELLHSDKPayType__Ali                                                              = 3,
	ELLHSDKPayType__Wechat                                                           = 4,
	ELLHSDKPayType__Union                                                            = 5,
	ELLHSDKPayType__PlayPhone                                                        = 6,
	ELLHSDKPayType__MyCard                                                           = 7,
	ELLHSDKPayType__Payssion                                                         = 8,
	ELLHSDKPayType__HuaweiAbroad                                                     = 9,
	ELLHSDKPayType__Paypal                                                           = 10,
	ELLHSDKPayType__Voucher                                                          = 11,
	ELLHSDKPayType__Samsung                                                          = 12,
	ELLHSDKPayType__ELLHSDKPayType_MAX                                               = 13
};

/// Enum /Script/LLHSDK.ELLHSDKPayGenericSkuItemType
/// Size: 0x03
enum ELLHSDKPayGenericSkuItemType : uint8_t
{
	ELLHSDKPayGenericSkuItemType__Normal                                             = 0,
	ELLHSDKPayGenericSkuItemType__Subscription                                       = 1,
	ELLHSDKPayGenericSkuItemType__ELLHSDKPayGenericSkuItemType_MAX                   = 2
};

/// Enum /Script/LLHSDK.ELLHSDKCustomerServiceRateAction
/// Size: 0x05
enum ELLHSDKCustomerServiceRateAction : uint8_t
{
	ELLHSDKCustomerServiceRateAction__Success                                        = 0,
	ELLHSDKCustomerServiceRateAction__FeedBack                                       = 1,
	ELLHSDKCustomerServiceRateAction__Close                                          = 2,
	ELLHSDKCustomerServiceRateAction__Fail                                           = 3,
	ELLHSDKCustomerServiceRateAction__ELLHSDKCustomerServiceRateAction_MAX           = 4
};

/// Enum /Script/LLHSDK.ELLHSDKSupportedLanguage
/// Size: 0x21
enum ELLHSDKSupportedLanguage : uint8_t
{
	ELLHSDKSupportedLanguage__DefaultLanguage                                        = 0,
	ELLHSDKSupportedLanguage__Arabic                                                 = 1,
	ELLHSDKSupportedLanguage__English                                                = 2,
	ELLHSDKSupportedLanguage__French                                                 = 3,
	ELLHSDKSupportedLanguage__German                                                 = 4,
	ELLHSDKSupportedLanguage__Indonesian                                             = 5,
	ELLHSDKSupportedLanguage__Italian                                                = 6,
	ELLHSDKSupportedLanguage__Japanese                                               = 7,
	ELLHSDKSupportedLanguage__Korean                                                 = 8,
	ELLHSDKSupportedLanguage__Malay                                                  = 9,
	ELLHSDKSupportedLanguage__Polish                                                 = 10,
	ELLHSDKSupportedLanguage__Portuguese                                             = 11,
	ELLHSDKSupportedLanguage__Russian                                                = 12,
	ELLHSDKSupportedLanguage__Spanish                                                = 13,
	ELLHSDKSupportedLanguage__Thai                                                   = 14,
	ELLHSDKSupportedLanguage__Turkish                                                = 15,
	ELLHSDKSupportedLanguage__Vietnamese                                             = 16,
	ELLHSDKSupportedLanguage__Hindi                                                  = 17,
	ELLHSDKSupportedLanguage__SimplifiedChinese                                      = 18,
	ELLHSDKSupportedLanguage__TraditionalChinese                                     = 19,
	ELLHSDKSupportedLanguage__ELLHSDKSupportedLanguage_MAX                           = 20
};

/// Enum /Script/LLHSDK.ELLHSDKReportCurrencyType
/// Size: 0x04
enum ELLHSDKReportCurrencyType : uint8_t
{
	ELLHSDKReportCurrencyType__USA_Dollar                                            = 0,
	ELLHSDKReportCurrencyType__China_Yuan                                            = 1,
	ELLHSDKReportCurrencyType__Taiwan_Dollar                                         = 2,
	ELLHSDKReportCurrencyType__ELLHSDKReportCurrencyType_MAX                         = 3
};

/// Enum /Script/LLHSDK.ELLHSDKOpenAlbumErrorCode
/// Size: 0x04
enum ELLHSDKOpenAlbumErrorCode : uint8_t
{
	ELLHSDKOpenAlbumErrorCode__None                                                  = 0,
	ELLHSDKOpenAlbumErrorCode__Cancel                                                = 1,
	ELLHSDKOpenAlbumErrorCode__NoPermission                                          = 2,
	ELLHSDKOpenAlbumErrorCode__ELLHSDKOpenAlbumErrorCode_MAX                         = 3
};

/// Enum /Script/LLHSDK.ELLHSDKLoginUIStyle
/// Size: 0x06
enum ELLHSDKLoginUIStyle : uint8_t
{
	ELLHSDKLoginUIStyle__NormalStyle                                                 = 0,
	ELLHSDKLoginUIStyle__SoulHunterStyle                                             = 1,
	ELLHSDKLoginUIStyle__GameCenterStyle                                             = 2,
	ELLHSDKLoginUIStyle__DomesticStyle                                               = 3,
	ELLHSDKLoginUIStyle__GameCenterDomesticStyle                                     = 4,
	ELLHSDKLoginUIStyle__ELLHSDKLoginUIStyle_MAX                                     = 5
};

/// Enum /Script/LLHSDK.ELLHSDKGravity
/// Size: 0x10
enum ELLHSDKGravity : uint8_t
{
	ELLHSDKGravity__NO_GRAVITY                                                       = 0,
	ELLHSDKGravity__LeftTop                                                          = 1,
	ELLHSDKGravity__LeftCenter                                                       = 2,
	ELLHSDKGravity__LeftBottom                                                       = 3,
	ELLHSDKGravity__MidTop                                                           = 4,
	ELLHSDKGravity__MidBottom                                                        = 5,
	ELLHSDKGravity__RightTop                                                         = 6,
	ELLHSDKGravity__RightCenter                                                      = 7,
	ELLHSDKGravity__RightBottom                                                      = 8,
	ELLHSDKGravity__ELLHSDKGravity_MAX                                               = 9
};

