namespace offsets
{
	namespace AAkReverbVolume
	{
			constexpr auto bEnabled = 0x260; // Size: 1, Type: char
			constexpr auto AuxBus = 0x268; // Size: 8, Type: struct UAkAuxBus*
			constexpr auto AuxBusName = 0x270; // Size: 16, Type: struct FString
			constexpr auto SendLevel = 0x280; // Size: 4, Type: float
			constexpr auto FadeRate = 0x284; // Size: 4, Type: float
			constexpr auto Priority = 0x288; // Size: 4, Type: float
			constexpr auto LateReverbComponent = 0x290; // Size: 8, Type: struct UAkLateReverbComponent*
	}
} 
