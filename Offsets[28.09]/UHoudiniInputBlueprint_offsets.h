namespace offsets
{
	namespace UHoudiniInputBlueprint
	{
			constexpr auto BPComponents = 0xe8; // Size: 16, Type: struct TArray<struct UHoudiniInputSceneComponent*>
			constexpr auto BPSceneComponents = 0xf8; // Size: 80, Type: struct TSet<struct TSoftObjectPtr<UObject>>
			constexpr auto LastUpdateNumComponentsAdded = 0x148; // Size: 4, Type: int32_t
			constexpr auto LastUpdateNumComponentsRemoved = 0x14c; // Size: 4, Type: int32_t
	}
} 
