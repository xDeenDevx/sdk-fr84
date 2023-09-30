namespace offsets
{
	namespace UAbilityTask_MoveToLocation
	{
			constexpr auto OnTargetLocationReached = 0x80; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto StartLocation = 0x94; // Size: 12, Type: struct FVector
			constexpr auto TargetLocation = 0xa0; // Size: 12, Type: struct FVector
			constexpr auto DurationOfMovement = 0xac; // Size: 4, Type: float
			constexpr auto LerpCurve = 0xb8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto LerpCurveVector = 0xc0; // Size: 8, Type: struct UCurveVector*
	}
} 
