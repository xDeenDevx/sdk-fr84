namespace offsets
{
	namespace ASolarPile
	{
			constexpr auto NormalMesh = 0x2b0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto CollisionComp = 0x2b8; // Size: 8, Type: struct USphereComponent*
			constexpr auto ExtraChargingVFXComps = 0x2c0; // Size: 16, Type: struct TArray<struct UActorComponent*>
			constexpr auto CachedActorHandle = 0x2d0; // Size: 4, Type: struct FSpawnedActorHandle
			constexpr auto Channel = 0x2ec; // Size: 1, Type: enum class EChargingChannel
			constexpr auto PileType = 0x2ed; // Size: 1, Type: enum class ESolarPileType
			constexpr auto Zone = 0x2f0; // Size: 4, Type: int32_t
			constexpr auto MaxEnergy = 0x2f4; // Size: 4, Type: float
			constexpr auto PowerRecoveryCD = 0x2f8; // Size: 4, Type: float
			constexpr auto PowerRecoveryFrequency = 0x2fc; // Size: 4, Type: float
			constexpr auto PowerRecoveryQuantity = 0x300; // Size: 4, Type: float
			constexpr auto bEnable = 0x304; // Size: 1, Type: bool
			constexpr auto bBroken = 0x305; // Size: 1, Type: bool
			constexpr auto bCanRecover = 0x306; // Size: 1, Type: bool
			constexpr auto bIsActivated = 0x307; // Size: 1, Type: bool
			constexpr auto Level = 0x308; // Size: 4, Type: int32_t
			constexpr auto bIsLosingEnergy = 0x30c; // Size: 1, Type: bool
			constexpr auto OwnerTeam = 0x310; // Size: 4, Type: int32_t
			constexpr auto OwnerCharacter = 0x314; // Size: 8, Type: struct TWeakObjectPtr<ASolarCharacter>
			constexpr auto defaultChargingInfo = 0x320; // Size: 48, Type: struct FChargingInfo
			constexpr auto ChargingInfoList = 0x350; // Size: 16, Type: struct TArray<struct FChargingInfo>
			constexpr auto CurrentEnergy = 0x360; // Size: 4, Type: float
			constexpr auto SphereRadius = 0x368; // Size: 4, Type: float
			constexpr auto RecoveryHandle = 0x370; // Size: 8, Type: struct FTimerHandle
			constexpr auto ServerChargingTimerHandle = 0x380; // Size: 8, Type: struct FTimerHandle
			constexpr auto ClientChargingTimerHandle = 0x388; // Size: 8, Type: struct FTimerHandle
			constexpr auto ChargeParticleEffects = 0x390; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto AkAudioComponent = 0x3a0; // Size: 8, Type: struct UAkComponent*
			constexpr auto SolarAkGameObject = 0x3a8; // Size: 8, Type: struct USolarAkGameObject*
			constexpr auto bEnableHealth = 0x3b2; // Size: 1, Type: bool
			constexpr auto MaxHealth = 0x3b4; // Size: 4, Type: float
			constexpr auto ReducedHealth = 0x3b8; // Size: 4, Type: float
			constexpr auto CurrentHealth = 0x3bc; // Size: 4, Type: float
			constexpr auto TweenTimeSpeed = 0x3c0; // Size: 4, Type: float
			constexpr auto RestTweenTime = 0x3c4; // Size: 4, Type: float
			constexpr auto TargetOpacity = 0x3c8; // Size: 4, Type: float
			constexpr auto CurrentOpacity = 0x3cc; // Size: 4, Type: float
			constexpr auto OpacityTweenTime = 0x3d0; // Size: 4, Type: float
			constexpr auto DynamicMatChargingCircle = 0x3d8; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto ChargingPilePreset = 0x3e0; // Size: 336, Type: struct FChargingPilePreset
			constexpr auto RangeRingMeshComp = 0x530; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ChargeCircleMeshComp = 0x538; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto bCharging = 0x540; // Size: 1, Type: bool
	}
} 
