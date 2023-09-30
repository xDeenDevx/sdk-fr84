namespace offsets
{
	namespace USolarVehicleGA_WheelTransform
	{
			constexpr auto WheeledEffects = 0x4d8; // Size: 16, Type: struct TArray<UGameplayEffect*>
			constexpr auto LeggedEffects = 0x4e8; // Size: 16, Type: struct TArray<UGameplayEffect*>
			constexpr auto InhibitTransformNoticeIDByBrokenWeakPointNums = 0x508; // Size: 4, Type: int32_t
			constexpr auto bCheckBrokenWeakPointNumConfig = 0x50c; // Size: 1, Type: bool
			constexpr auto InhibitTransformIfSurpassBrokenWeakPointNumConfig = 0x510; // Size: 4, Type: int32_t
			constexpr auto InhibitTransformNoticeIDByBlock = 0x514; // Size: 4, Type: int32_t
			constexpr auto TransformToWheelBoxExtent = 0x518; // Size: 12, Type: struct FVector
			constexpr auto TransformToWheelOverlapOffset = 0x524; // Size: 4, Type: float
			constexpr auto MaxFallingSpeedForTransformingWheel = 0x528; // Size: 4, Type: float
			constexpr auto InhibitTransformNoticeIDByFallingSpeed = 0x52c; // Size: 4, Type: int32_t
	}
} 
