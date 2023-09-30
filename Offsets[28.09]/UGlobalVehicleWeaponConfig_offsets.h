namespace offsets
{
	namespace UGlobalVehicleWeaponConfig
	{
			constexpr auto AssistLockBoneWeight = 0x38; // Size: 16, Type: struct TArray<struct FAssitLockBoneWeight>
			constexpr auto SortAssistLockBoneWeight = 0x48; // Size: 16, Type: struct TArray<struct FAssitLockBoneWeight>
			constexpr auto CoefficientHUD = 0x58; // Size: 4, Type: float
			constexpr auto CoefficientWorld = 0x5c; // Size: 4, Type: float
			constexpr auto CoefficientHUDUnlock = 0x60; // Size: 4, Type: float
			constexpr auto CoefficientWorldUnlock = 0x64; // Size: 4, Type: float
			constexpr auto HudDistFromAssistLockPawnToSecondReticle = 0x68; // Size: 4, Type: float
			constexpr auto AssistLockUIScaleCurve = 0x70; // Size: 136, Type: struct FRuntimeFloatCurve
	}
} 
