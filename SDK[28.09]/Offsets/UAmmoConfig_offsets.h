namespace offsets
{
	namespace UAmmoConfig
	{
			constexpr auto HoldAction = 0x30; // Size: 1, Type: enum class EHoldActionType
			constexpr auto FireChargeDatas = 0x38; // Size: 16, Type: struct TArray<struct FFireChargeData>
			constexpr auto FireChargeStopSoundName = 0x48; // Size: 16, Type: struct FString
			constexpr auto ChargingToleranceEndTime = 0x58; // Size: 4, Type: float
			constexpr auto ChargingWorkingEndTime = 0x5c; // Size: 4, Type: float
			constexpr auto ChargingHoldingEndTime = 0x60; // Size: 4, Type: float
			constexpr auto ChargingTrajectoryTime = 0x64; // Size: 4, Type: float
			constexpr auto bScaleHitEffectByChargingTime = 0x68; // Size: 1, Type: bool
			constexpr auto bCostToChargeScale = 0x69; // Size: 1, Type: bool
			constexpr auto FireCostFullShot = 0x6c; // Size: 4, Type: int32_t
			constexpr auto bForceFullShot = 0x70; // Size: 1, Type: bool
			constexpr auto MaxChargingDamageScale = 0x74; // Size: 4, Type: float
			constexpr auto DeltaAngle = 0x78; // Size: 4, Type: float
			constexpr auto Name = 0x80; // Size: 16, Type: struct FString
			constexpr auto Des = 0x90; // Size: 16, Type: struct FString
			constexpr auto PropID = 0xa0; // Size: 4, Type: int32_t
			constexpr auto LifeTime = 0xa4; // Size: 4, Type: float
			constexpr auto FireMethodType = 0xa8; // Size: 1, Type: enum class EFireMethodType
			constexpr auto TrajectoryType = 0xa9; // Size: 1, Type: enum class ETrajectoryType
			constexpr auto CustomValue = 0xac; // Size: 4, Type: float
			constexpr auto BulletClass = 0xb0; // Size: 8, Type: ASolarBullet*
			constexpr auto BulletBounce = 0xb8; // Size: 1, Type: enum class EBounceType
			constexpr auto BounceTimes = 0xbc; // Size: 4, Type: int32_t
			constexpr auto TriggerType = 0xc0; // Size: 1, Type: enum class ETriggerType
			constexpr auto MaxRange = 0xc4; // Size: 4, Type: float
			constexpr auto EffRange = 0xc8; // Size: 4, Type: float
			constexpr auto Radius = 0xcc; // Size: 4, Type: float
			constexpr auto InitSpeed = 0xd0; // Size: 4, Type: float
			constexpr auto FireCostType = 0xd4; // Size: 1, Type: enum class ECostFireType
			constexpr auto FireCostPerAttack = 0xd8; // Size: 4, Type: int32_t
			constexpr auto FireSpeedChangeTime = 0xdc; // Size: 4, Type: int32_t
			constexpr auto FireSpeedChangeCOP = 0xe0; // Size: 4, Type: float
			constexpr auto FastestFireInterval = 0xe4; // Size: 4, Type: float
			constexpr auto SlowestFireInterval = 0xe8; // Size: 4, Type: float
			constexpr auto BaseFireInterval = 0xec; // Size: 4, Type: float
			constexpr auto FireIntervalRevertPreTime = 0xf0; // Size: 4, Type: float
			constexpr auto FireIntervalReavertSpeed = 0xf4; // Size: 4, Type: float
			constexpr auto BoltActionTime = 0xf8; // Size: 4, Type: float
			constexpr auto StartBoltDuration = 0xfc; // Size: 4, Type: float
			constexpr auto AutoFireBreakTime = 0x100; // Size: 4, Type: float
			constexpr auto FirePrepareTime = 0x104; // Size: 4, Type: float
			constexpr auto FireStateBreakTime = 0x108; // Size: 4, Type: float
			constexpr auto FireStreakBreakTime = 0x10c; // Size: 4, Type: float
			constexpr auto FireIdx = 0x110; // Size: 4, Type: int32_t
			constexpr auto bTimedExplode = 0x114; // Size: 1, Type: bool
			constexpr auto BaseReloadTime = 0x118; // Size: 4, Type: float
			constexpr auto ReloadBoltTime = 0x11c; // Size: 4, Type: float
			constexpr auto PostFireOverload = 0x120; // Size: 4, Type: float
			constexpr auto bPlayHitSound = 0x124; // Size: 1, Type: bool
			constexpr auto bPlayExplodeSound = 0x125; // Size: 1, Type: bool
			constexpr auto FlySoundReceiveRadius = 0x128; // Size: 4, Type: float
			constexpr auto FlySoundIgnoreDistance = 0x12c; // Size: 4, Type: float
			constexpr auto SingleSoundCount = 0x130; // Size: 4, Type: int32_t
			constexpr auto Play_Land_Common_Hit_1P = 0x138; // Size: 16, Type: struct FString
			constexpr auto Play_Land_Common_Hit_3P = 0x148; // Size: 16, Type: struct FString
			constexpr auto Play_Land_Common_Hit_3P_Enemy = 0x158; // Size: 16, Type: struct FString
			constexpr auto Play_Land_Fly_Once_3P = 0x168; // Size: 16, Type: struct FString
			constexpr auto Play_Land_Fly_Once_3P_Enemy = 0x178; // Size: 16, Type: struct FString
			constexpr auto Play_Land_Fly_Loop_1P = 0x188; // Size: 16, Type: struct FString
			constexpr auto Play_Land_Fly_Loop_3P = 0x198; // Size: 16, Type: struct FString
			constexpr auto Play_Land_Fly_Loop_3P_Enemy = 0x1a8; // Size: 16, Type: struct FString
			constexpr auto Stop_Land_Fly_Loop_1P = 0x1b8; // Size: 16, Type: struct FString
			constexpr auto Stop_Land_Fly_Loop_3P = 0x1c8; // Size: 16, Type: struct FString
			constexpr auto Stop_Land_Fly_Loop_3P_Enemy = 0x1d8; // Size: 16, Type: struct FString
			constexpr auto Play_Fire_Empty_1p = 0x1e8; // Size: 16, Type: struct FString
			constexpr auto Play_Fire_Empty_3p = 0x1f8; // Size: 16, Type: struct FString
			constexpr auto Play_Fire_Empty_3p_Enemy = 0x208; // Size: 16, Type: struct FString
			constexpr auto PostFireSpreadCurveStruct = 0x218; // Size: 8, Type: struct UCurveFloat*
			constexpr auto VhADSSpreadCOP = 0x220; // Size: 4, Type: float
			constexpr auto ADSSpreadCOP = 0x224; // Size: 4, Type: float
			constexpr auto SpreadFirePreTime = 0x228; // Size: 4, Type: float
			constexpr auto SpreadPostFireSpeed = 0x22c; // Size: 4, Type: float
			constexpr auto SpreadRestorePreTime = 0x230; // Size: 4, Type: float
			constexpr auto SpreadRestoreSpeed = 0x234; // Size: 4, Type: float
			constexpr auto TPPRecoilConfig = 0x238; // Size: 40, Type: struct FWeaponFireTPPAnimConfig
			constexpr auto FPPRecoilConfigNoScope = 0x260; // Size: 112, Type: struct FWeaponFireFPPAnimConfig
			constexpr auto FPPRecoilConfigWithScope = 0x2d0; // Size: 112, Type: struct FWeaponFireFPPAnimConfig
			constexpr auto PitchRecoilStruct = 0x340; // Size: 48, Type: struct FAmmonVerticalRecoilStruct
			constexpr auto YawRecoilStruct = 0x370; // Size: 48, Type: struct FAmmonHorizontalRecoilStruct
			constexpr auto RollRecoilStruct = 0x3a0; // Size: 64, Type: struct FAmmonRecoilRollStruct
			constexpr auto ScopeRecoil = 0x3e0; // Size: 184, Type: struct FAmmonRecoilScope
			constexpr auto ADSRecoilCOP = 0x498; // Size: 4, Type: float
			constexpr auto RecoilCOPMap = 0x4a0; // Size: 80, Type: struct TMap<struct FString, float>
			constexpr auto IgnoreEPhysicalSurface = 0x4f0; // Size: 16, Type: struct TArray<enum class EPhysicalSurface>
			constexpr auto bAutoBurstFire = 0x500; // Size: 1, Type: bool
			constexpr auto BurstFireInterval = 0x504; // Size: 4, Type: float
			constexpr auto BurstFireInternalInterval = 0x508; // Size: 4, Type: float
			constexpr auto FireAnimationPlayRate = 0x50c; // Size: 4, Type: float
			constexpr auto AmmoSoundType = 0x510; // Size: 4, Type: int32_t
			constexpr auto ProjectileMaxGravity = 0x514; // Size: 4, Type: float
			constexpr auto ParticleStartDistance = 0x518; // Size: 4, Type: float
			constexpr auto TrajectoryStartDistance = 0x51c; // Size: 4, Type: float
			constexpr auto bPenetrable = 0x520; // Size: 1, Type: bool
			constexpr auto bTakeDamageAfterDeathVerge = 0x521; // Size: 1, Type: bool
			constexpr auto PenetrationDamageMultiplierCurve = 0x528; // Size: 8, Type: struct UCurveFloat*
			constexpr auto CylinderDamageMultiplierCurve = 0x530; // Size: 8, Type: struct UCurveFloat*
			constexpr auto TriggerIcon = 0x538; // Size: 152, Type: struct FSlateBrush
			constexpr auto VirtualBulletType = 0x5d0; // Size: 1, Type: enum class EVirtualBulletType
			constexpr auto bStepOnServer = 0x5d1; // Size: 1, Type: bool
			constexpr auto TraceOverrideAmmo = 0x5d8; // Size: 8, Type: struct UAmmoConfig*
			constexpr auto TraceTargetFlag = 0x5e0; // Size: 1, Type: char
			constexpr auto TracerData = 0x5e8; // Size: 64, Type: struct FTracerBulletData
			constexpr auto BulletOffsetCurve = 0x628; // Size: 8, Type: struct UCurveFloat*
			constexpr auto BulletOffsetAngles = 0x630; // Size: 16, Type: struct TArray<struct FVector2D>
			constexpr auto BulletDamageCurve = 0x640; // Size: 8, Type: struct UCurveFloat*
			constexpr auto BulletScaleCurve = 0x648; // Size: 8, Type: struct UCurveFloat*
			constexpr auto BulletMovementCurve = 0x650; // Size: 8, Type: struct UCurveFloat*
			constexpr auto bThirdPesonViewXScaledByDistance = 0x658; // Size: 1, Type: bool
			constexpr auto bForceApplyAbility = 0x659; // Size: 1, Type: bool
			constexpr auto AmmoAbilityClasses = 0x660; // Size: 16, Type: struct TArray<ASolarAbility*>
			constexpr auto AmmoAbilityClassesOnDestroyed = 0x670; // Size: 16, Type: struct TArray<ASolarAbility*>
			constexpr auto AmmoAbilityClassesOnSelf = 0x680; // Size: 8, Type: ASolarAbility*
			constexpr auto SkillType = 0x688; // Size: 4, Type: int32_t
			constexpr auto NameLocalTextIDNumber = 0x68c; // Size: 4, Type: int32_t
			constexpr auto DescriptionLocalTextIDNumber = 0x690; // Size: 4, Type: int32_t
			constexpr auto RangeLocalTextID = 0x694; // Size: 4, Type: int32_t
			constexpr auto DifficultyLocalTextID = 0x698; // Size: 4, Type: int32_t
			constexpr auto DamageInfo = 0x6a0; // Size: 64, Type: struct FSolarDamageInfo
	}
} 
