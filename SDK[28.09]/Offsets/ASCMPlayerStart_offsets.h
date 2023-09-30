namespace offsets
{
	namespace ASCMPlayerStart
	{
			constexpr auto Distance = 0x258; // Size: 4, Type: float
			constexpr auto Side = 0x260; // Size: 16, Type: struct FString
			constexpr auto Job = 0x270; // Size: 16, Type: struct FString
			constexpr auto ElementID = 0x280; // Size: 16, Type: struct FString
			constexpr auto Type = 0x290; // Size: 1, Type: enum class ESCMMapElementType
			constexpr auto State = 0x291; // Size: 1, Type: enum class ESCMMapElementStateType
			constexpr auto Visibility = 0x292; // Size: 1, Type: enum class ESCMMapElementVisibilityType
			constexpr auto ElementName = 0x294; // Size: 8, Type: struct FName
			constexpr auto PlayerLocations = 0x2a0; // Size: 16, Type: struct TArray<struct FVector>
	}
} 
