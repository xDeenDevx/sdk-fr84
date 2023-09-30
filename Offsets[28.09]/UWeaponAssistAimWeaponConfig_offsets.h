namespace offsets
{
	namespace UWeaponAssistAimWeaponConfig
	{
			constexpr auto MaxTargetDetectionDistance = 0x30; // Size: 4, Type: float
			constexpr auto BaseFollowSpeedByTags = 0x38; // Size: 16, Type: struct TArray<struct FBaseFollowSpeedByTag>
			constexpr auto TargetVelocityFollowTagRequirements = 0x48; // Size: 80, Type: struct FGameplayTagRequirements
			constexpr auto TargetVelocityFollowDeactivationDelay = 0x98; // Size: 4, Type: float
			constexpr auto TargetVelocityFollowHorizontalRatioCurve = 0xa0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto TargetVelocityFollowVerticalRatioCurve = 0x128; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto TargetVelocityFollowHorizontalRatioCurveScale = 0x1b0; // Size: 4, Type: float
			constexpr auto TargetVelocityFollowVerticalRatioCurveScale = 0x1b4; // Size: 4, Type: float
			constexpr auto TargetVelocityFollowMaxHorizontalSpeed = 0x1b8; // Size: 4, Type: float
			constexpr auto TargetVelocityFollowMaxVerticalSpeed = 0x1bc; // Size: 4, Type: float
			constexpr auto TargetVelocityFollowRatioScaleByDistanceCurve = 0x1c0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto GlobalSensitivityScaleCurve = 0x248; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto GlobalSensitivityScaleCurveScale = 0x2d0; // Size: 4, Type: float
	}
} 
