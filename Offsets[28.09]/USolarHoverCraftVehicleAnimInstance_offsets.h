namespace offsets
{
	namespace USolarHoverCraftVehicleAnimInstance
	{
			constexpr auto MyHoverCraftVehicle = 0x360; // Size: 8, Type: struct ASolarHoverVehicle*
			constexpr auto MyHoverCraftVehicleMoveComp = 0x368; // Size: 8, Type: struct USolarHoverVehicleMovement*
			constexpr auto bStartUp = 0x370; // Size: 1, Type: bool
			constexpr auto MaxStartUpSpeed = 0x378; // Size: 4, Type: float
			constexpr auto bDrop = 0x37c; // Size: 1, Type: bool
			constexpr auto bInAir = 0x37d; // Size: 1, Type: bool
			constexpr auto CompressMinValue[4] = 0x380; // Size: 16, Type: float
			constexpr auto CompressFullRateValue[4] = 0x390; // Size: 16, Type: float
			constexpr auto CompressXValue = 0x3a0; // Size: 4, Type: float
			constexpr auto CompressYValue = 0x3a4; // Size: 4, Type: float
			constexpr auto bCompress = 0x3a8; // Size: 1, Type: bool
	}
} 
