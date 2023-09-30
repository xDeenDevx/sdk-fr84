namespace offsets
{
	namespace ASolarAirship
	{
			constexpr auto bShowDebug = 0x228; // Size: 1, Type: bool
			constexpr auto AkAudioComponent = 0x230; // Size: 8, Type: struct UAkComponent*
			constexpr auto SKMesh = 0x238; // Size: 8, Type: struct USkeletalMeshComponentBudgeted*
			constexpr auto AirdropParas = 0x240; // Size: 32, Type: struct FAirdropParas
			constexpr auto SpawnAirdropDelay = 0x260; // Size: 4, Type: float
			constexpr auto DestroyDelay = 0x264; // Size: 4, Type: float
			constexpr auto AppearNoticeID = 0x268; // Size: 4, Type: int32_t
			constexpr auto AppearMatCurve = 0x270; // Size: 8, Type: struct UCurveFloat*
			constexpr auto DisappearMatCurve = 0x278; // Size: 8, Type: struct UCurveFloat*
			constexpr auto FlyEffect = 0x280; // Size: 8, Type: struct UParticleSystem*
			constexpr auto FlyEffectTransform = 0x290; // Size: 48, Type: struct FTransform
			constexpr auto AirScreenEffectBeforeAirdrop = 0x2c0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto AirScreenEffectAfterAirdrop = 0x2c8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto AirScreenEffectTransform_2 = 0x2d0; // Size: 48, Type: struct FTransform
			constexpr auto AirScreenEffectTransform_3 = 0x300; // Size: 48, Type: struct FTransform
			constexpr auto PlaygroundEffects = 0x330; // Size: 16, Type: struct TArray<struct FPlaygroundEffect>
			constexpr auto FogComponentTag = 0x340; // Size: 8, Type: struct FName
			constexpr auto FogDensityParam = 0x348; // Size: 8, Type: struct FName
			constexpr auto AppearVoice = 0x350; // Size: 16, Type: struct FString
			constexpr auto FlyLPSoundStartBeforeAirdrop = 0x360; // Size: 16, Type: struct FString
			constexpr auto FlyLPSoundStopBeforeAirdrop = 0x370; // Size: 16, Type: struct FString
			constexpr auto FlyLPSoundStartAfterAirdrop = 0x380; // Size: 16, Type: struct FString
			constexpr auto FlyLPSoundStopAfterAirdrop = 0x390; // Size: 16, Type: struct FString
			constexpr auto VoicePlayInterval = 0x3a0; // Size: 4, Type: float
			constexpr auto VoiceListBeforeAirdrop = 0x3a8; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto VoiceListAfterAirdrop = 0x3b8; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto HatchOpenSound = 0x3c8; // Size: 16, Type: struct FString
			constexpr auto bAirdropDelivered = 0x3d8; // Size: 1, Type: bool
			constexpr auto bDisappear = 0x3d9; // Size: 1, Type: bool
			constexpr auto FlyEffectHandle = 0x3f0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto AirScreenEffectBeforeAirdropHandle_2 = 0x3f8; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto AirScreenEffectBeforeAirdropHandle_3 = 0x400; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto AirScreenEffectAfterAirdropHandle_2 = 0x408; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto AirScreenEffectAfterAirdropHandle_3 = 0x410; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto FogComponent = 0x428; // Size: 8, Type: struct USceneComponent*
			constexpr auto AirshipConfigMap = 0x430; // Size: 80, Type: struct TMap<int32_t, struct FAirshipConfig>
			constexpr auto RotationOffset = 0x480; // Size: 12, Type: struct FRotator
			constexpr auto HatchOffset = 0x48c; // Size: 4, Type: float
			constexpr auto AirdropStartZOffset = 0x490; // Size: 4, Type: float
			constexpr auto PointInSegmentTolerance = 0x494; // Size: 4, Type: float
			constexpr auto HatchOpenAnim = 0x498; // Size: 8, Type: struct UAnimMontage*
			constexpr auto RouteInfo = 0x4a8; // Size: 52, Type: struct FRouteInfo
			constexpr auto AirlineData = 0x4e8; // Size: 48, Type: struct FMiniMapAirlineData
	}
} 
