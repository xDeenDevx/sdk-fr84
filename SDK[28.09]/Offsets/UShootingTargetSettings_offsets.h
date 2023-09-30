namespace offsets
{
	namespace UShootingTargetSettings
	{
			constexpr auto ShootingTargetCleanupTime = 0x38; // Size: 4, Type: float
			constexpr auto RingSegments = 0x3c; // Size: 4, Type: int32_t
			constexpr auto RingSize = 0x40; // Size: 4, Type: float
			constexpr auto HitPointSize = 0x44; // Size: 4, Type: float
			constexpr auto bIgnoreDPIScale = 0x48; // Size: 1, Type: bool
			constexpr auto HUDRingRadius = 0x4c; // Size: 4, Type: float
			constexpr auto HUDRingOffset = 0x50; // Size: 8, Type: struct FVector2D
			constexpr auto HUDTextOffsetOnRing = 0x58; // Size: 8, Type: struct FVector2D
	}
} 
