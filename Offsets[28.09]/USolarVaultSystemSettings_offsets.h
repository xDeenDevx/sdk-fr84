namespace offsets
{
	namespace USolarVaultSystemSettings
	{
			constexpr auto MaxFacingAngle2D = 0x38; // Size: 4, Type: float
			constexpr auto MinFallingVeloZ = 0x3c; // Size: 4, Type: float
			constexpr auto MaxFallingVeloZ = 0x40; // Size: 4, Type: float
			constexpr auto VaultFallingVeloAngleTolerance = 0x44; // Size: 4, Type: float
			constexpr auto bEnableAutoVaultWhileFalling = 0x48; // Size: 1, Type: bool
			constexpr auto bPreventAutoVaultToFalling = 0x49; // Size: 1, Type: bool
			constexpr auto AutoMaxFacingAngle2D = 0x4c; // Size: 4, Type: float
			constexpr auto AutoVaultDistThreshold = 0x50; // Size: 4, Type: float
			constexpr auto JoystickForwardRange = 0x54; // Size: 4, Type: float
			constexpr auto JoystickBackwardRange = 0x58; // Size: 4, Type: float
			constexpr auto bEnableWallRun = 0x5c; // Size: 1, Type: bool
			constexpr auto WallRunForce = 0x60; // Size: 12, Type: struct FVector
			constexpr auto WallRunDuration = 0x6c; // Size: 4, Type: float
			constexpr auto MinWallRunTriggerHeight = 0x70; // Size: 4, Type: float
			constexpr auto WallRunDistThreshold = 0x74; // Size: 4, Type: float
			constexpr auto WallRunFallingVeloAngleTolerance = 0x78; // Size: 4, Type: float
			constexpr auto bEnableAutoWallRun = 0x7c; // Size: 1, Type: bool
			constexpr auto AutoWallRunDistThreshold = 0x80; // Size: 4, Type: float
			constexpr auto DetectorShapeParams = 0x88; // Size: 80, Type: struct TMap<enum class EObstacleDetectorType, struct FDetectorShapeParams>
			constexpr auto PlatformNorAngleTolerance = 0xd8; // Size: 4, Type: float
			constexpr auto VaultWallNorAngleTolerance = 0xdc; // Size: 4, Type: float
			constexpr auto MinPlatformWidth = 0xe0; // Size: 4, Type: float
			constexpr auto EdgeOffset = 0xe4; // Size: 4, Type: float
			constexpr auto TraceTolerance = 0xe8; // Size: 4, Type: float
			constexpr auto MaxIllegalCornerHeight = 0xec; // Size: 4, Type: float
			constexpr auto MaxIllegalCornerWidth = 0xf0; // Size: 4, Type: float
			constexpr auto CancelDistFromWall = 0xf4; // Size: 4, Type: float
			constexpr auto CapsuleHalfHeightScaler = 0xf8; // Size: 4, Type: float
			constexpr auto WallRunWallNorAngleTolerance = 0xfc; // Size: 4, Type: float
			constexpr auto WallRunWallNorNegAngleTolerance = 0x100; // Size: 4, Type: float
			constexpr auto WallRunBumpMaxHeight = 0x104; // Size: 4, Type: float
			constexpr auto WallRunBumpAngle2D = 0x108; // Size: 4, Type: float
			constexpr auto VeloThreshold = 0x10c; // Size: 4, Type: float
			constexpr auto WarpTargetOffsets = 0x110; // Size: 80, Type: struct TMap<enum class EVaultType, struct FVector>
			constexpr auto LandWarpTargetName = 0x1b0; // Size: 8, Type: struct FName
			constexpr auto HandWarpTargetName = 0x1b8; // Size: 8, Type: struct FName
			constexpr auto FootWarpTargetName = 0x1c0; // Size: 8, Type: struct FName
			constexpr auto ServerDistThreshold = 0x1c8; // Size: 4, Type: float
			constexpr auto TargetSelectRange = 0x1cc; // Size: 4, Type: float
			constexpr auto TargetSelectAngle = 0x1d0; // Size: 4, Type: float
			constexpr auto ChaseLowerLimit = 0x1d4; // Size: 4, Type: float
			constexpr auto DistanceWeight = 0x1d8; // Size: 4, Type: float
			constexpr auto AngleWeight = 0x1dc; // Size: 4, Type: float
			constexpr auto EnemyWarpTargetName = 0x1e0; // Size: 8, Type: struct FName
			constexpr auto TrackWidgetClass = 0x1e8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto CapsuleShrinkScale = 0x210; // Size: 4, Type: float
			constexpr auto bAdjustMeshZForAdaptingCapsuleShrink = 0x214; // Size: 1, Type: bool
			constexpr auto DurationToResetMeshZAdjustment = 0x218; // Size: 4, Type: float
			constexpr auto FollowDanceRange = 0x21c; // Size: 4, Type: float
			constexpr auto FollowDanceCheckInterval = 0x220; // Size: 4, Type: float
	}
} 
