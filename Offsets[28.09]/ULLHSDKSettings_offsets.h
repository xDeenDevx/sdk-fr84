namespace offsets
{
	namespace ULLHSDKSettings
	{
			constexpr auto bHasFacebook = 0x38; // Size: 1, Type: bool
			constexpr auto bHasTiktok = 0x39; // Size: 1, Type: bool
			constexpr auto bHasFirebaseMessaging = 0x3a; // Size: 1, Type: bool
			constexpr auto bIsSDKDebuggable = 0x3b; // Size: 1, Type: bool
			constexpr auto bIsGrayRelease = 0x3c; // Size: 1, Type: bool
			constexpr auto FacebookContentProviderForGrayRelease = 0x40; // Size: 16, Type: struct FString
			constexpr auto FacebookAppIDForGrayRelease = 0x50; // Size: 16, Type: struct FString
			constexpr auto SDKAppIdForGrayRelease = 0x60; // Size: 16, Type: struct FString
			constexpr auto SDKGameIdForGrayRelease = 0x70; // Size: 16, Type: struct FString
			constexpr auto PspAppIdForGrayRelease = 0x80; // Size: 16, Type: struct FString
			constexpr auto AndroidDebugParkwayEnvIdForGrayRelease = 0x90; // Size: 16, Type: struct FString
			constexpr auto AndroidReleaseParkwayEnvIdForGrayRelease = 0xa0; // Size: 16, Type: struct FString
			constexpr auto FacebookContentProvider = 0xb0; // Size: 16, Type: struct FString
			constexpr auto FacebookAppID = 0xc0; // Size: 16, Type: struct FString
			constexpr auto IOSFacebookContentProvider = 0xd0; // Size: 16, Type: struct FString
			constexpr auto IOSFacebookAppID = 0xe0; // Size: 16, Type: struct FString
			constexpr auto SDKAppId = 0xf0; // Size: 16, Type: struct FString
			constexpr auto SDKGameId = 0x100; // Size: 16, Type: struct FString
			constexpr auto PspAppId = 0x110; // Size: 16, Type: struct FString
			constexpr auto AndroidDebugParkwayEnvId = 0x120; // Size: 16, Type: struct FString
			constexpr auto AndroidReleaseParkwayEnvId = 0x130; // Size: 16, Type: struct FString
			constexpr auto IOSDebugParkwayEnvId = 0x140; // Size: 16, Type: struct FString
			constexpr auto IOSReleaseParkwayEnvId = 0x150; // Size: 16, Type: struct FString
			constexpr auto SteamDebugParkwayEnvId = 0x160; // Size: 16, Type: struct FString
			constexpr auto SteamReleaseParkwayEnvId = 0x170; // Size: 16, Type: struct FString
			constexpr auto OffcialWinDebugParkwayEnvId = 0x180; // Size: 16, Type: struct FString
			constexpr auto OffcialWinReleaseParkwayEnvId = 0x190; // Size: 16, Type: struct FString
			constexpr auto EpicDebugParkwayEnvId = 0x1a0; // Size: 16, Type: struct FString
			constexpr auto EpicReleaseParkwayEnvId = 0x1b0; // Size: 16, Type: struct FString
			constexpr auto SDKGroupName = 0x1c0; // Size: 16, Type: struct FString
			constexpr auto SDKFeatureName = 0x1d0; // Size: 16, Type: struct FString
			constexpr auto SDKVersion = 0x1e0; // Size: 16, Type: struct FString
			constexpr auto bAndroidXEnabled = 0x1f0; // Size: 1, Type: bool
			constexpr auto bMultiDexEnabled = 0x1f1; // Size: 1, Type: bool
			constexpr auto bShouldUseOverridedConfig = 0x1f2; // Size: 1, Type: bool
			constexpr auto FirebaseCoreVersion = 0x1f8; // Size: 16, Type: struct FString
			constexpr auto FirebaseMessagingVersion = 0x208; // Size: 16, Type: struct FString
			constexpr auto GoogleServicesVersion = 0x218; // Size: 16, Type: struct FString
			constexpr auto PlayServicesBasementVersion = 0x228; // Size: 16, Type: struct FString
			constexpr auto PlayPhoneGravity = 0x238; // Size: 1, Type: enum class ELLHSDKGravity
			constexpr auto bEnableAndroidScreenshotListener = 0x239; // Size: 1, Type: bool
			constexpr auto bEnableAndroidMultipleDetect = 0x23a; // Size: 1, Type: bool
			constexpr auto bShowLogo = 0x23b; // Size: 1, Type: bool
			constexpr auto LoginUIStyle = 0x23c; // Size: 1, Type: enum class ELLHSDKLoginUIStyle
			constexpr auto bIOSShouldUseOverridedConfig = 0x23d; // Size: 1, Type: bool
			constexpr auto bIOSShowTermsByServer = 0x23e; // Size: 1, Type: bool
			constexpr auto FacebookDisplayName = 0x240; // Size: 16, Type: struct FString
			constexpr auto QQAppID = 0x250; // Size: 16, Type: struct FString
			constexpr auto WechatAppID = 0x260; // Size: 16, Type: struct FString
			constexpr auto GoogleReversedClientID = 0x270; // Size: 16, Type: struct FString
			constexpr auto TwitterAPIKey = 0x280; // Size: 16, Type: struct FString
			constexpr auto DefaultNSUserTrackingUsageDescription = 0x290; // Size: 16, Type: struct FString
	}
} 
