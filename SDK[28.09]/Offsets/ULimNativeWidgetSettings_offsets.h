namespace offsets
{
	namespace ULimNativeWidgetSettings
	{
			constexpr auto rDownloadPath = 0x38; // Size: 16, Type: struct FString
			constexpr auto FileIOThreadIntervalMs = 0x48; // Size: 4, Type: int32_t
			constexpr auto CachedDiskFileExpiredDuration = 0x4c; // Size: 4, Type: float
			constexpr auto CachedResponseExpiredDuration = 0x50; // Size: 4, Type: float
			constexpr auto CachedResponseMaxCount = 0x54; // Size: 4, Type: int32_t
			constexpr auto LocalizationTable = 0x58; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto EnvId = 0x70; // Size: 16, Type: struct FString
			constexpr auto GME_AppId = 0x80; // Size: 16, Type: struct FString
			constexpr auto GME_PrivateKey = 0x90; // Size: 16, Type: struct FString
			constexpr auto GME_Test_AppId = 0xa0; // Size: 16, Type: struct FString
			constexpr auto GME_Test_PrivateKey = 0xb0; // Size: 16, Type: struct FString
			constexpr auto bTestGmeEnv = 0xc0; // Size: 1, Type: bool
			constexpr auto GME_EventTick = 0xc4; // Size: 4, Type: float
			constexpr auto MaxRecordingTime = 0xc8; // Size: 4, Type: int32_t
			constexpr auto bShowLimSdkLog = 0xcc; // Size: 1, Type: bool
			constexpr auto Lim_SDKRegion = 0xd0; // Size: 16, Type: struct FString
			constexpr auto Lim_GameID = 0xe0; // Size: 4, Type: int32_t
			constexpr auto Lim_Slssvr = 0xe8; // Size: 16, Type: struct FString
			constexpr auto Use_Farlight_Domain = 0xf8; // Size: 4, Type: int32_t
			constexpr auto Nertc_AppKey = 0x100; // Size: 16, Type: struct FString
			constexpr auto Nertc_AppToken = 0x110; // Size: 16, Type: struct FString
			constexpr auto Nertc_Test_AppKey = 0x120; // Size: 16, Type: struct FString
			constexpr auto Nertc_Test_AppToken = 0x130; // Size: 16, Type: struct FString
			constexpr auto Agora_AppKey = 0x140; // Size: 16, Type: struct FString
			constexpr auto Agora_AppToken = 0x150; // Size: 16, Type: struct FString
			constexpr auto Agora_Test_AppKey = 0x160; // Size: 16, Type: struct FString
			constexpr auto Agora_Test_AppToken = 0x170; // Size: 16, Type: struct FString
			constexpr auto bEnvOversea = 0x180; // Size: 1, Type: bool
	}
} 
