namespace offsets
{
	namespace USolarAirPlanVehicleAnimInstance
	{
			constexpr auto RollBackAnim = 0x360; // Size: 8, Type: struct UAnimSequence*
			constexpr auto RollBackDuration = 0x368; // Size: 4, Type: float
			constexpr auto RollLeftAnim = 0x370; // Size: 8, Type: struct UAnimMontage*
			constexpr auto RollRightAnim = 0x378; // Size: 8, Type: struct UAnimMontage*
			constexpr auto AnimState = 0x380; // Size: 1, Type: enum class EAirPlaneAnimState
			constexpr auto RootLocationXCurve = 0x388; // Size: 152, Type: struct FFloatCurve
			constexpr auto RootLocationYCurve = 0x420; // Size: 152, Type: struct FFloatCurve
			constexpr auto RootLocationZCurve = 0x4b8; // Size: 152, Type: struct FFloatCurve
			constexpr auto RootRotationXCurve = 0x550; // Size: 152, Type: struct FFloatCurve
			constexpr auto RootRotationYCurve = 0x5e8; // Size: 152, Type: struct FFloatCurve
			constexpr auto RootRotationZCurve = 0x680; // Size: 152, Type: struct FFloatCurve
			constexpr auto RootRotationWCurve = 0x718; // Size: 152, Type: struct FFloatCurve
	}
} 
