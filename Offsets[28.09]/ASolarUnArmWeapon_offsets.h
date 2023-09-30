namespace offsets
{
	namespace ASolarUnArmWeapon
	{
			constexpr auto Angle = 0x230; // Size: 4, Type: float
			constexpr auto HitDetectableTypes = 0x238; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto Interval = 0x248; // Size: 4, Type: float
			constexpr auto Crosshair = 0x250; // Size: 8, Type: UUserWidget*
			constexpr auto FireIconPath = 0x258; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto HitCueTag = 0x270; // Size: 8, Type: struct FGameplayCueTag
			constexpr auto FireBtnBrush = 0x278; // Size: 152, Type: struct FSlateBrush
			constexpr auto AbilitySystemComponent = 0x310; // Size: 8, Type: struct USolarAbilitySystemComponent*
			constexpr auto AttackTargetCharacter = 0x320; // Size: 8, Type: struct ASolarCharacterBase*
			constexpr auto DamageInfo = 0x378; // Size: 64, Type: struct FSolarDamageInfo
			constexpr auto MeleeAbilityClass = 0x3b8; // Size: 8, Type: ASolarAbility*
	}
} 
