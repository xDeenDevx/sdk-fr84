namespace offsets
{
	namespace UAkLateReverbComponent
	{
			constexpr auto bEnable = 0x318; // Size: 1, Type: char
			constexpr auto SendLevel = 0x31c; // Size: 4, Type: float
			constexpr auto FadeRate = 0x320; // Size: 4, Type: float
			constexpr auto Priority = 0x324; // Size: 4, Type: float
			constexpr auto AutoAssignAuxBus = 0x328; // Size: 1, Type: bool
			constexpr auto AuxBus = 0x330; // Size: 8, Type: struct UAkAuxBus*
			constexpr auto AuxBusName = 0x338; // Size: 16, Type: struct FString
			constexpr auto AuxBusManual = 0x350; // Size: 8, Type: struct UAkAuxBus*
	}
} 
