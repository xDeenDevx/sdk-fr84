namespace offsets
{
	namespace USolarVehicleGA_NOS
	{
			constexpr auto VerticalAxisName = 0x4d8; // Size: 8, Type: struct FName
			constexpr auto HorizontalAxisName = 0x4e0; // Size: 8, Type: struct FName
			constexpr auto VerticalAxisValueForCancel = 0x4e8; // Size: 4, Type: float
			constexpr auto JoyStickCancelDegree = 0x4ec; // Size: 4, Type: float
			constexpr auto CancelTimeForInput = 0x4f0; // Size: 4, Type: float
			constexpr auto CancelTimeForHit = 0x4f4; // Size: 4, Type: float
			constexpr auto CancelSpeedForHit = 0x4f8; // Size: 4, Type: float
			constexpr auto NosTask = 0x500; // Size: 8, Type: struct USolarVehicleAT_NOS*
	}
} 
