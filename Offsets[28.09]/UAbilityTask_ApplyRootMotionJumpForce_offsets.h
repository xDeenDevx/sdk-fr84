namespace offsets
{
	namespace UAbilityTask_ApplyRootMotionJumpForce
	{
			constexpr auto OnFinish = 0xb8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnLanded = 0xc8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Rotation = 0xd8; // Size: 12, Type: struct FRotator
			constexpr auto Distance = 0xe4; // Size: 4, Type: float
			constexpr auto Height = 0xe8; // Size: 4, Type: float
			constexpr auto Duration = 0xec; // Size: 4, Type: float
			constexpr auto MinimumLandedTriggerTime = 0xf0; // Size: 4, Type: float
			constexpr auto bFinishOnLanded = 0xf4; // Size: 1, Type: bool
			constexpr auto PathOffsetCurve = 0xf8; // Size: 8, Type: struct UCurveVector*
			constexpr auto TimeMappingCurve = 0x100; // Size: 8, Type: struct UCurveFloat*
	}
} 
