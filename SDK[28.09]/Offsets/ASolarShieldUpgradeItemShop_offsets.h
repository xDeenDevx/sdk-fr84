namespace offsets
{
	namespace ASolarShieldUpgradeItemShop
	{
			constexpr auto groupid = 0x238; // Size: 4, Type: int32_t
			constexpr auto ServerActiveGroupID = 0x23c; // Size: 4, Type: int32_t
			constexpr auto BodyMesh = 0x240; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto CollisionComp = 0x248; // Size: 8, Type: struct USphereComponent*
			constexpr auto HeadUpIconMesh = 0x250; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto BodyScreenMesh = 0x258; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto UpgradeItemNum = 0x278; // Size: 4, Type: int32_t
			constexpr auto InteractionTriggeredEffect = 0x280; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto InteractedPlayerIDList = 0x2a8; // Size: 304, Type: struct FSolarIntArray
			constexpr auto Uid = 0x3d8; // Size: 4, Type: int32_t
			constexpr auto AudioTriggerComp = 0x3f8; // Size: 8, Type: struct USphereComponent*
			constexpr auto AkAudioComponent = 0x400; // Size: 8, Type: struct UAkComponent*
			constexpr auto SolarAkGameObject = 0x408; // Size: 8, Type: struct USolarAkGameObject*
			constexpr auto SNameHint = 0x410; // Size: 16, Type: struct FString
			constexpr auto SNameStopHint = 0x420; // Size: 16, Type: struct FString
	}
} 
