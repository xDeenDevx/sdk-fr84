namespace offsets
{
	namespace UAbilityTask_ApplyRootMotionMoveToForce
	{
			constexpr auto OnTimedOut = 0xb8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTimedOutAndDestinationReached = 0xc8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto StartLocation = 0xd8; // Size: 12, Type: struct FVector
			constexpr auto TargetLocation = 0xe4; // Size: 12, Type: struct FVector
			constexpr auto Duration = 0xf0; // Size: 4, Type: float
			constexpr auto bSetNewMovementMode = 0xf4; // Size: 1, Type: bool
			constexpr auto NewMovementMode = 0xf5; // Size: 1, Type: enum class EMovementMode
			constexpr auto bRestrictSpeedToExpected = 0xf6; // Size: 1, Type: bool
			constexpr auto PathOffsetCurve = 0xf8; // Size: 8, Type: struct UCurveVector*
	}
} 
