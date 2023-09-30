namespace offsets
{
	namespace AWeaponryWeapon
	{
			constexpr auto PreviewTransform = 0x230; // Size: 48, Type: struct FTransform
			constexpr auto ScoOffsetTransform = 0x260; // Size: 48, Type: struct FTransform
			constexpr auto StoOffsetTransform = 0x290; // Size: 48, Type: struct FTransform
			constexpr auto GriOffsetTransform = 0x2c0; // Size: 48, Type: struct FTransform
			constexpr auto BarOffsetTransform = 0x2f0; // Size: 48, Type: struct FTransform
			constexpr auto CliOffsetTransform = 0x320; // Size: 48, Type: struct FTransform
			constexpr auto ShopPreviewTransform = 0x350; // Size: 48, Type: struct FTransform
			constexpr auto BattlePassPreviewTransform = 0x380; // Size: 48, Type: struct FTransform
			constexpr auto GetRewardTransform = 0x3b0; // Size: 48, Type: struct FTransform
			constexpr auto GrowTaskTransform = 0x3e0; // Size: 48, Type: struct FTransform
			constexpr auto LuckDrawTransform = 0x410; // Size: 48, Type: struct FTransform
			constexpr auto CarouselDrawTransform = 0x440; // Size: 48, Type: struct FTransform
			constexpr auto SupplyBoxDetailTransform = 0x470; // Size: 48, Type: struct FTransform
			constexpr auto SupplyBoxRaffleTransform = 0x4a0; // Size: 48, Type: struct FTransform
			constexpr auto Config = 0x4d0; // Size: 8, Type: struct USingleWeaponConfig*
			constexpr auto Mesh = 0x4d8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto weaponid = 0x4fc; // Size: 4, Type: int32_t
			constexpr auto FightMeshPath = 0x500; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto SkinSpecialEffect = 0x518; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto WeaponPartComponent = 0x520; // Size: 8, Type: struct UWeaponryPartComponent*
			constexpr auto WeaponSkinComponent = 0x528; // Size: 8, Type: struct UWeaponrySkinComponent*
			constexpr auto DissolveCurvePath = 0x530; // Size: 40, Type: struct TSoftObjectPtr<UCurveVector>
			constexpr auto DissolveMatPath = 0x558; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto FresnelCurvePath = 0x580; // Size: 40, Type: struct TSoftObjectPtr<UCurveVector>
			constexpr auto FresnelMatPath = 0x5a8; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto SwitchParticleEffectPath = 0x5d0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto SwitchEffectInterval = 0x600; // Size: 4, Type: float
			constexpr auto SelfDelayShowSeconds = 0x604; // Size: 4, Type: float
			constexpr auto DissolveEffectInfo = 0x608; // Size: 24, Type: struct FSwitchEffectInfo
			constexpr auto FresnelEffectInfo = 0x620; // Size: 24, Type: struct FSwitchEffectInfo
	}
} 
