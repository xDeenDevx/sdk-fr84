namespace offsets
{
	namespace USolarAbilityEffect
	{
			constexpr auto EffectIconPath = 0x28; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto AttributeModifiers = 0x40; // Size: 16, Type: struct TArray<struct FSolarAttributeModifier>
			constexpr auto bAllowMultiple = 0x50; // Size: 1, Type: bool
			constexpr auto AbilityEffectAffectingCharacter = 0x110; // Size: 8, Type: struct ASolarCharacterBase*
			constexpr auto AbilityEffectAffectingAbilityComponent = 0x118; // Size: 8, Type: struct USolarAbilityComponent*
			constexpr auto AffectingAbility = 0x120; // Size: 8, Type: struct ASolarAbility*
			constexpr auto ExtraInfo = 0x128; // Size: 16, Type: struct FString
			constexpr auto AttributeParamMap = 0x138; // Size: 80, Type: struct TMap<struct FString, float>
	}
} 
