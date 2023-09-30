namespace offsets
{
	namespace UCameraShakeWithCurve
	{
			constexpr auto bSingleInstance = 0x28; // Size: 1, Type: bool
			constexpr auto bDisableObjectPool = 0x29; // Size: 1, Type: bool
			constexpr auto Modifier = 0x30; // Size: 8, Type: struct UCameraModifier_CameraShakeWithCurve*
			constexpr auto ShakeTime = 0x38; // Size: 4, Type: float
			constexpr auto ShakeCurve = 0x40; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto ShakeElements = 0xc8; // Size: 16, Type: struct TArray<struct UCameraShakeWithCurve_Element*>
	}
} 
