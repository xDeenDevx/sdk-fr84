namespace offsets
{
	namespace UAbilityTask_ApplyRootMotionConstantForce
	{
			constexpr auto OnFinish = 0xb8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto WorldDirection = 0xc8; // Size: 12, Type: struct FVector
			constexpr auto Strength = 0xd4; // Size: 4, Type: float
			constexpr auto Duration = 0xd8; // Size: 4, Type: float
			constexpr auto bIsAdditive = 0xdc; // Size: 1, Type: bool
			constexpr auto StrengthOverTime = 0xe0; // Size: 8, Type: struct UCurveFloat*
	}
} 
