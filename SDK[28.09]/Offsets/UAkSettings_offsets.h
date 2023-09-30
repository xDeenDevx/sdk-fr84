namespace offsets
{
	namespace UAkSettings
	{
			constexpr auto MaxSimultaneousReverbVolumes = 0x28; // Size: 1, Type: char
			constexpr auto WwiseProjectPath = 0x30; // Size: 16, Type: struct FFilePath
			constexpr auto WwiseSoundDataFolder = 0x40; // Size: 16, Type: struct FDirectoryPath
			constexpr auto bAutoConnectToWAAPI = 0x50; // Size: 1, Type: bool
			constexpr auto DefaultOcclusionCollisionChannel = 0x51; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto DefaultFitToGeometryCollisionChannel = 0x52; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto AkGeometryMap = 0x58; // Size: 80, Type: struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap>
			constexpr auto GlobalDecayAbsorption = 0xa8; // Size: 4, Type: float
			constexpr auto DefaultReverbAuxBus = 0xb0; // Size: 40, Type: struct TSoftObjectPtr<UAkAuxBus>
			constexpr auto EnvironmentDecayAuxBusMap = 0xd8; // Size: 80, Type: struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>>
			constexpr auto HFDampingName = 0x128; // Size: 16, Type: struct FString
			constexpr auto DecayEstimateName = 0x138; // Size: 16, Type: struct FString
			constexpr auto TimeToFirstReflectionName = 0x148; // Size: 16, Type: struct FString
			constexpr auto HFDampingRTPC = 0x158; // Size: 40, Type: struct TSoftObjectPtr<UAkRtpc>
			constexpr auto DecayEstimateRTPC = 0x180; // Size: 40, Type: struct TSoftObjectPtr<UAkRtpc>
			constexpr auto TimeToFirstReflectionRTPC = 0x1a8; // Size: 40, Type: struct TSoftObjectPtr<UAkRtpc>
			constexpr auto AcousticTextureParamsMap = 0x1d0; // Size: 80, Type: struct TMap<struct FGuid, struct FAkAcousticTextureParams>
			constexpr auto SplitSwitchContainerMedia = 0x220; // Size: 1, Type: bool
			constexpr auto SplitMediaPerFolder = 0x221; // Size: 1, Type: bool
			constexpr auto UseEventBasedPackaging = 0x222; // Size: 1, Type: bool
			constexpr auto EnableAutomaticAssetSynchronization = 0x223; // Size: 1, Type: bool
			constexpr auto CommandletCommitMessage = 0x228; // Size: 16, Type: struct FString
			constexpr auto UnrealCultureToWwiseCulture = 0x238; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto AskedToUseNewAssetManagement = 0x288; // Size: 1, Type: bool
			constexpr auto bEnableMultiCoreRendering = 0x289; // Size: 1, Type: bool
			constexpr auto MigratedEnableMultiCoreRendering = 0x28a; // Size: 1, Type: bool
			constexpr auto FixupRedirectorsDuringMigration = 0x28b; // Size: 1, Type: bool
			constexpr auto WwiseWindowsInstallationPath = 0x290; // Size: 16, Type: struct FDirectoryPath
			constexpr auto WwiseMacInstallationPath = 0x2a0; // Size: 16, Type: struct FFilePath
	}
} 
