namespace offsets
{
	namespace ABigWaterGun
	{
			constexpr auto CylinderRadius = 0x228; // Size: 4, Type: float
			constexpr auto CylinderLength = 0x22c; // Size: 4, Type: float
			constexpr auto TraceInterval = 0x230; // Size: 4, Type: float
			constexpr auto DamageChaPerInterval = 0x234; // Size: 4, Type: float
			constexpr auto DamageVehPerInterval = 0x238; // Size: 4, Type: float
			constexpr auto DamageDecayFirst = 0x23c; // Size: 4, Type: float
			constexpr auto DamageDecaySecond = 0x240; // Size: 4, Type: float
			constexpr auto MeshPath = 0x248; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto MeshSocket = 0x260; // Size: 8, Type: struct FName
			constexpr auto WaterColumnEffectRotator = 0x268; // Size: 12, Type: struct FRotator
			constexpr auto WaterColumnEffect = 0x278; // Size: 8, Type: struct UParticleSystem*
			constexpr auto InstigatorEffectID = 0x280; // Size: 8, Type: struct FName
			constexpr auto CameraShakeClass = 0x288; // Size: 8, Type: UCameraShake*
			constexpr auto InCrossHairClass = 0x290; // Size: 8, Type: UUserWidget*
			constexpr auto NearlyEndTime = 0x298; // Size: 4, Type: float
			constexpr auto bShowDebug = 0x29c; // Size: 1, Type: bool
			constexpr auto TraceStartRelativeLocation = 0x2a0; // Size: 12, Type: struct FVector
			constexpr auto TraceStartRelativeLocation_Crouch = 0x2ac; // Size: 12, Type: struct FVector
			constexpr auto MuzzleTraceOffset = 0x2b8; // Size: 4, Type: float
			constexpr auto ShotAnimNotifyName = 0x2bc; // Size: 8, Type: struct FName
			constexpr auto UnequipAnimNotifyName = 0x2c4; // Size: 8, Type: struct FName
			constexpr auto UnequipAnimNotifyName_Gatling = 0x2cc; // Size: 8, Type: struct FName
			constexpr auto DamageDecayCurve = 0x2d8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ChaSlowDownDecayDataTag = 0x2e0; // Size: 8, Type: struct FGameplayTag
			constexpr auto ChaSlowDownDecayCurve = 0x2e8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto VehSlowDownDecayDataTag = 0x2f0; // Size: 8, Type: struct FGameplayTag
			constexpr auto VehSlowDownDecayCurve = 0x2f8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto OcclusionCheckZOffset = 0x300; // Size: 4, Type: float
			constexpr auto BlockDamageItemClasses = 0x308; // Size: 16, Type: struct TArray<ASummonItemBase*>
			constexpr auto Mesh = 0x318; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto bInFire = 0x320; // Size: 1, Type: bool
			constexpr auto bHitOther = 0x321; // Size: 1, Type: bool
			constexpr auto ClientWaterColumnEffectHandle = 0x328; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto InstigatorEffectHandle = 0x330; // Size: 4, Type: int32_t
			constexpr auto CameraShakeInstance = 0x338; // Size: 8, Type: struct UCameraShake*
			constexpr auto CrossHairWidget = 0x348; // Size: 8, Type: struct UCrossHairWidget*
			constexpr auto SlowDownEffectHandle = 0x350; // Size: 16, Type: struct FGameplayEffectSpecHandle
			constexpr auto LeftHandIKGripSocketName = 0x380; // Size: 8, Type: struct FName
			constexpr auto BigWaterGunOrnamentTag = 0x388; // Size: 8, Type: struct FGameplayTag
	}
} 
