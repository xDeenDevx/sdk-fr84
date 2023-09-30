namespace offsets
{
	namespace ASolarTransformerVehicle
	{
			constexpr auto WheeledMovement = 0x1388; // Size: 8, Type: struct USolarWheeledVehicleMovement*
			constexpr auto LeggedMovement = 0x1390; // Size: 8, Type: struct USolarLeggedVehicleMovement*
			constexpr auto AdditionalVelocityOnZToLeg = 0x1398; // Size: 4, Type: float
			constexpr auto MaxVelocityOnXYToWheel = 0x139c; // Size: 4, Type: float
			constexpr auto TransformerSettings[2] = 0x13a0; // Size: 304, Type: struct FTransformerSetting
			constexpr auto CurrentTransformerType = 0x14d0; // Size: 1, Type: enum class ETransformerType
			constexpr auto VehicleCapsule = 0x14d8; // Size: 8, Type: struct UCapsuleComponent*
			constexpr auto bReplicatedDrift = 0x14e0; // Size: 1, Type: bool
			constexpr auto bReplicatedRequestJump = 0x14e1; // Size: 1, Type: bool
			constexpr auto LeggedHealthUIID = 0x14f8; // Size: 4, Type: int32_t
	}
} 
