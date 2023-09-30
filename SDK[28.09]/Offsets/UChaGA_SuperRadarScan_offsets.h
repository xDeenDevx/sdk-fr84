namespace offsets
{
	namespace UChaGA_SuperRadarScan
	{
			constexpr auto CacheCharacter = 0x460; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto bSpawnRadarSuccess = 0x468; // Size: 1, Type: bool
			constexpr auto bSpawnedRadar = 0x469; // Size: 1, Type: bool
			constexpr auto bBackswingPlayed = 0x46a; // Size: 1, Type: bool
			constexpr auto HitLocation = 0x46c; // Size: 12, Type: struct FVector
			constexpr auto RadarOrnamentTag = 0x478; // Size: 8, Type: struct FGameplayTag
			constexpr auto LifeTime = 0x480; // Size: 4, Type: float
			constexpr auto PrecastTime = 0x484; // Size: 4, Type: float
			constexpr auto BackswingTime = 0x488; // Size: 4, Type: float
			constexpr auto RadarScanningAbilityClass = 0x490; // Size: 8, Type: UGameplayAbility*
			constexpr auto ScanAnimMontage = 0x498; // Size: 8, Type: struct UAnimMontage*
			constexpr auto CueTag = 0x4a0; // Size: 8, Type: struct FGameplayTag
			constexpr auto MoveRadius = 0x4a8; // Size: 4, Type: float
			constexpr auto OverlookCameraHeight = 0x4ac; // Size: 4, Type: float
			constexpr auto OverlookCameraPitch = 0x4b0; // Size: 4, Type: float
			constexpr auto CameraMoveScale = 0x4b4; // Size: 4, Type: float
			constexpr auto PreviewEffect = 0x4b8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto bUseForceLOD = 0x4c0; // Size: 1, Type: bool
			constexpr auto DefaultLOD = 0x4c4; // Size: 4, Type: int32_t
			constexpr auto OverLookLOD = 0x4c8; // Size: 4, Type: int32_t
			constexpr auto CancelCD = 0x4cc; // Size: 4, Type: float
			constexpr auto CacheOverlookCamera = 0x508; // Size: 8, Type: struct ACameraActor*
			constexpr auto CacheViewTarget = 0x510; // Size: 8, Type: struct AActor*
			constexpr auto CacheEmitter = 0x518; // Size: 8, Type: struct UParticleSystemComponent*
	}
} 
