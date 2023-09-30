namespace offsets
{
	namespace UChaGA_WallRun
	{
			constexpr auto WallRunCameraAngleTolerance = 0x460; // Size: 4, Type: float
			constexpr auto WallRunJumpReactionDelay = 0x464; // Size: 4, Type: float
			constexpr auto FootOffset = 0x468; // Size: 4, Type: float
			constexpr auto WallRunBlendOut = 0x46c; // Size: 4, Type: float
			constexpr auto SurfaceAngleLerpSpeed = 0x470; // Size: 4, Type: float
			constexpr auto MaxStandAngle = 0x474; // Size: 4, Type: float
			constexpr auto LandingForceMagnitude = 0x478; // Size: 8, Type: struct FVector2D
			constexpr auto MaxTriggerNumPerAirMove = 0x480; // Size: 4, Type: int32_t
			constexpr auto WallRunJumpHeight = 0x484; // Size: 4, Type: float
			constexpr auto WallRunJumpDist = 0x488; // Size: 4, Type: float
			constexpr auto WallRunFailedHeight = 0x48c; // Size: 4, Type: float
			constexpr auto WallRunFailedDist = 0x490; // Size: 4, Type: float
			constexpr auto WithWeaponFailedMontageTag = 0x494; // Size: 8, Type: struct FGameplayTag
			constexpr auto EmptyHandFailedMontageTag = 0x49c; // Size: 8, Type: struct FGameplayTag
			constexpr auto CancelActionName = 0x4a4; // Size: 8, Type: struct FName
			constexpr auto JumpActionName = 0x4ac; // Size: 8, Type: struct FName
			constexpr auto LandingTask = 0x4b8; // Size: 8, Type: struct UChaAT_WaitLandingSpot*
	}
} 
