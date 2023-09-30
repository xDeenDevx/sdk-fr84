namespace offsets
{
	namespace UAbilityTask_ApplyRootMotionMoveToActorForce
	{
			constexpr auto OnFinished = 0xb8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto StartLocation = 0xd0; // Size: 12, Type: struct FVector
			constexpr auto TargetLocation = 0xdc; // Size: 12, Type: struct FVector
			constexpr auto TargetActor = 0xe8; // Size: 8, Type: struct AActor*
			constexpr auto TargetLocationOffset = 0xf0; // Size: 12, Type: struct FVector
			constexpr auto OffsetAlignment = 0xfc; // Size: 1, Type: enum class ERootMotionMoveToActorTargetOffsetType
			constexpr auto Duration = 0x100; // Size: 4, Type: float
			constexpr auto bDisableDestinationReachedInterrupt = 0x104; // Size: 1, Type: bool
			constexpr auto bSetNewMovementMode = 0x105; // Size: 1, Type: bool
			constexpr auto NewMovementMode = 0x106; // Size: 1, Type: enum class EMovementMode
			constexpr auto bRestrictSpeedToExpected = 0x107; // Size: 1, Type: bool
			constexpr auto PathOffsetCurve = 0x108; // Size: 8, Type: struct UCurveVector*
			constexpr auto TimeMappingCurve = 0x110; // Size: 8, Type: struct UCurveFloat*
			constexpr auto TargetLerpSpeedHorizontalCurve = 0x118; // Size: 8, Type: struct UCurveFloat*
			constexpr auto TargetLerpSpeedVerticalCurve = 0x120; // Size: 8, Type: struct UCurveFloat*
	}
} 
