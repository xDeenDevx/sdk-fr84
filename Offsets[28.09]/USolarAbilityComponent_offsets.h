namespace offsets
{
	namespace USolarAbilityComponent
	{
			constexpr auto AppliedEffectMap = 0xb8; // Size: 80, Type: struct TMap<USolarAbilityEffect*, struct USolarAbilityEffect*>
			constexpr auto AppliedEffectsThisTick = 0x108; // Size: 80, Type: struct TMap<USolarAbilityEffect*, struct USolarAbilityEffect*>
			constexpr auto ReplicateEffectDatas = 0x158; // Size: 16, Type: struct TArray<struct FReplicateEffectData>
			constexpr auto CharacterWeaponDisable = 0x170; // Size: 1, Type: bool
			constexpr auto CharacterMarked = 0x171; // Size: 1, Type: bool
			constexpr auto MoveSpeedCoeffient = 0x174; // Size: 4, Type: float
			constexpr auto OriginalMaterial = 0x178; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto ShieldRechargeCostCoefficient = 0x180; // Size: 4, Type: float
	}
} 
