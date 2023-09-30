namespace offsets
{
	namespace USolarInputSetting
	{
			constexpr auto TouchScaler = 0x38; // Size: 8, Type: struct FVector2D
			constexpr auto NoiseThresholdFactor = 0x40; // Size: 4, Type: float
			constexpr auto MinNoiseMultiplier = 0x44; // Size: 4, Type: float
			constexpr auto bEnableAccMode = 0x48; // Size: 1, Type: bool
			constexpr auto AccConfigThreshold = 0x4c; // Size: 4, Type: float
			constexpr auto ConstantThreshold = 0x50; // Size: 4, Type: float
			constexpr auto TouchDistHorizCurve = 0x58; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto TouchDistVertCurve = 0x70; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto TouchDistHorizCurveScale = 0x88; // Size: 8, Type: struct FVector2D
			constexpr auto TouchDistVertCurveScale = 0x90; // Size: 8, Type: struct FVector2D
			constexpr auto TouchDistHorizCurveOffset = 0x98; // Size: 8, Type: struct FVector2D
			constexpr auto TouchDistVertCurveOffset = 0xa0; // Size: 8, Type: struct FVector2D
			constexpr auto TouchHorizCurve = 0xa8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto TouchVertCurve = 0xc0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto TouchHorizCurveScale = 0xd8; // Size: 8, Type: struct FVector2D
			constexpr auto TouchVertCurveScale = 0xe0; // Size: 8, Type: struct FVector2D
			constexpr auto TouchHorizCurveOffset = 0xe8; // Size: 8, Type: struct FVector2D
			constexpr auto TouchVertCurveOffset = 0xf0; // Size: 8, Type: struct FVector2D
			constexpr auto MaxMagnitudeThreshold = 0xf8; // Size: 4, Type: float
			constexpr auto InputActionPaths = 0x100; // Size: 80, Type: struct TMap<struct FName, struct FSoftObjectPath>
			constexpr auto InputActionOneShotBlackList = 0x150; // Size: 80, Type: struct TSet<struct FName>
			constexpr auto DefaultInputActionPath = 0x1a0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultInputActionChordPath = 0x1b8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultInputActionModifyKeyPath = 0x1d0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultInputActionTapPath = 0x1e8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultInputActionDoubleTapPath = 0x200; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultInputActionHoldPath = 0x218; // Size: 24, Type: struct FSoftObjectPath
	}
} 
