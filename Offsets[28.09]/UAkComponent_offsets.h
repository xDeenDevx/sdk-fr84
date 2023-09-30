namespace offsets
{
	namespace UAkComponent
	{
			constexpr auto bUseSpatialAudio = 0x338; // Size: 1, Type: bool
			constexpr auto bIsInDoor = 0x340; // Size: 1, Type: bool
			constexpr auto OcclusionCollisionChannel = 0x341; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto EnableSpotReflectors = 0x344; // Size: 1, Type: char
			constexpr auto OuterRadius = 0x348; // Size: 4, Type: float
			constexpr auto InnerRadius = 0x34c; // Size: 4, Type: float
			constexpr auto EarlyReflectionAuxBus = 0x350; // Size: 8, Type: struct UAkAuxBus*
			constexpr auto EarlyReflectionAuxBusName = 0x358; // Size: 16, Type: struct FString
			constexpr auto EarlyReflectionOrder = 0x368; // Size: 4, Type: int32_t
			constexpr auto EarlyReflectionBusSendGain = 0x36c; // Size: 4, Type: float
			constexpr auto EarlyReflectionMaxPathLength = 0x370; // Size: 4, Type: float
			constexpr auto roomReverbAuxBusGain = 0x374; // Size: 4, Type: float
			constexpr auto diffractionMaxEdges = 0x378; // Size: 4, Type: int32_t
			constexpr auto diffractionMaxPaths = 0x37c; // Size: 4, Type: int32_t
			constexpr auto diffractionMaxPathLength = 0x380; // Size: 4, Type: float
			constexpr auto DrawFirstOrderReflections = 0x384; // Size: 1, Type: char
			constexpr auto DrawSecondOrderReflections = 0x384; // Size: 1, Type: char
			constexpr auto DrawHigherOrderReflections = 0x384; // Size: 1, Type: char
			constexpr auto DrawDiffraction = 0x384; // Size: 1, Type: char
			constexpr auto StopWhenOwnerDestroyed = 0x388; // Size: 1, Type: bool
			constexpr auto AttenuationScalingFactor = 0x38c; // Size: 4, Type: float
			constexpr auto OcclusionRefreshInterval = 0x390; // Size: 4, Type: float
			constexpr auto bUseReverbVolumes = 0x394; // Size: 1, Type: bool
	}
} 
