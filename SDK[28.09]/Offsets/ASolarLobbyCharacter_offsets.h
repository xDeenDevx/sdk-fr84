namespace offsets
{
	namespace ASolarLobbyCharacter
	{
			constexpr auto DissolveCurvePath = 0x290; // Size: 40, Type: struct TSoftObjectPtr<UCurveVector>
			constexpr auto DissolveMatPath = 0x2b8; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto FresnelCurvePath = 0x2e0; // Size: 40, Type: struct TSoftObjectPtr<UCurveVector>
			constexpr auto FresnelMatPath = 0x308; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto SwitchParticleEffectPath = 0x330; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto SwitchEffectInterval = 0x360; // Size: 4, Type: float
			constexpr auto SelfDelayShowSeconds = 0x364; // Size: 4, Type: float
			constexpr auto AkAudioComponent = 0x370; // Size: 8, Type: struct UAkComponent*
			constexpr auto SolarAkGameObject = 0x378; // Size: 8, Type: struct USolarAkGameObject*
			constexpr auto SkeletalMesh = 0x380; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MirrorSkeletalMesh = 0x388; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto LobbyAccessory = 0x390; // Size: 8, Type: struct AActor*
			constexpr auto MirrorLobbyAccessory = 0x398; // Size: 8, Type: struct AActor*
			constexpr auto DissovleSkeletalMesh = 0x3a0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto FresnelSkeletalMesh = 0x3a8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MirrorDissovleSkeletalMesh = 0x3b0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MirrorFresnelSkeletalMesh = 0x3b8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto DissovleMat = 0x3c0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto FresnelMat = 0x3c8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto DissovleCurve = 0x3d0; // Size: 8, Type: struct UCurveVector*
			constexpr auto FresnelCurve = 0x3d8; // Size: 8, Type: struct UCurveVector*
			constexpr auto DynamicDissovleMats = 0x3e8; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto DynamicFresnelMats = 0x3f8; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto bCanPlayVoiceInIdleShow = 0x41c; // Size: 1, Type: bool
			constexpr auto bOpenMirror = 0x41d; // Size: 1, Type: bool
			constexpr auto CharacterIsVisiblity = 0x41e; // Size: 1, Type: bool
			constexpr auto CurSkinId = 0x420; // Size: 4, Type: int32_t
			constexpr auto CurChunkId = 0x424; // Size: 4, Type: int32_t
			constexpr auto bIsPlayIdleShow = 0x428; // Size: 1, Type: bool
			constexpr auto AnimBPClass = 0x430; // Size: 8, Type: UObject*
	}
} 
