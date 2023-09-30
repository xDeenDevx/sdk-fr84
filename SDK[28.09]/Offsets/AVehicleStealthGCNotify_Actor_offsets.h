namespace offsets
{
	namespace AVehicleStealthGCNotify_Actor
	{
			constexpr auto StealthMaterial = 0x2a0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto NormalStealthCurve = 0x2a8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto VehicleVelocityCurve = 0x338; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto VehicleBeDamagedCurve = 0x3c0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto StealthMaterialParamPowerName = 0x448; // Size: 8, Type: struct FName
			constexpr auto StealthMaterialParamDistanceName = 0x450; // Size: 8, Type: struct FName
			constexpr auto StealthMaterialParamDistanceValue = 0x458; // Size: 4, Type: float
			constexpr auto VehicleStealthParamterSets = 0x460; // Size: 80, Type: struct TMap<enum class EStealthParamType, struct FStealthMaterialParams>
			constexpr auto EnterStealthEngine3p = 0x4e8; // Size: 16, Type: struct FString
			constexpr auto EnterStealthEngine3pEnemy = 0x4f8; // Size: 16, Type: struct FString
			constexpr auto CancelStealthEngine3p = 0x508; // Size: 16, Type: struct FString
			constexpr auto CancelStealthEngine3pEnemy = 0x518; // Size: 16, Type: struct FString
			constexpr auto WarningOtherRange = 0x528; // Size: 4, Type: float
			constexpr auto WarningOtherRangeOutThreshold = 0x52c; // Size: 4, Type: float
			constexpr auto CueContents = 0x540; // Size: 16, Type: struct TArray<struct FCueContent>
	}
} 
