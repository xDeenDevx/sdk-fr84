namespace offsets
{
	namespace UAbilityTask_ApplyRootMotionRadialForce
	{
			constexpr auto OnFinish = 0xb8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Location = 0xc8; // Size: 12, Type: struct FVector
			constexpr auto LocationActor = 0xd8; // Size: 8, Type: struct AActor*
			constexpr auto Strength = 0xe0; // Size: 4, Type: float
			constexpr auto Duration = 0xe4; // Size: 4, Type: float
			constexpr auto Radius = 0xe8; // Size: 4, Type: float
			constexpr auto bIsPush = 0xec; // Size: 1, Type: bool
			constexpr auto bIsAdditive = 0xed; // Size: 1, Type: bool
			constexpr auto bNoZForce = 0xee; // Size: 1, Type: bool
			constexpr auto StrengthDistanceFalloff = 0xf0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto StrengthOverTime = 0xf8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto bUseFixedWorldDirection = 0x100; // Size: 1, Type: bool
			constexpr auto FixedWorldDirection = 0x104; // Size: 12, Type: struct FRotator
	}
} 
