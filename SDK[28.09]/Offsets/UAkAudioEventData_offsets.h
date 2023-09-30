namespace offsets
{
	namespace UAkAudioEventData
	{
			constexpr auto MaxAttenuationRadius = 0x88; // Size: 4, Type: float
			constexpr auto IsInfinite = 0x8c; // Size: 1, Type: bool
			constexpr auto MinimumDuration = 0x90; // Size: 4, Type: float
			constexpr auto MaximumDuration = 0x94; // Size: 4, Type: float
			constexpr auto LocalizedMedia = 0x98; // Size: 80, Type: struct TMap<struct FString, struct UAkAssetDataSwitchContainer*>
			constexpr auto PostedEvents = 0xe8; // Size: 80, Type: struct TSet<struct UAkAudioEvent*>
			constexpr auto UserDefinedSends = 0x138; // Size: 80, Type: struct TSet<struct UAkAuxBus*>
			constexpr auto PostedTriggers = 0x188; // Size: 80, Type: struct TSet<struct UAkTrigger*>
			constexpr auto GroupValues = 0x1d8; // Size: 80, Type: struct TSet<struct UAkGroupValue*>
	}
} 
