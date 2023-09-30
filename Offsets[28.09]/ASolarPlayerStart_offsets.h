namespace offsets
{
	namespace ASolarPlayerStart
	{
			constexpr auto Distance = 0x260; // Size: 4, Type: float
			constexpr auto Side = 0x268; // Size: 16, Type: struct FString
			constexpr auto Job = 0x278; // Size: 16, Type: struct FString
			constexpr auto ElementID = 0x288; // Size: 16, Type: struct FString
			constexpr auto Type = 0x298; // Size: 1, Type: enum class ESGameMode_ElementType
			constexpr auto State = 0x299; // Size: 1, Type: enum class EElementStateType
			constexpr auto Visibility = 0x29a; // Size: 1, Type: enum class EElementVisibilityType
			constexpr auto ElementTypeName = 0x29c; // Size: 8, Type: struct FName
			constexpr auto GroupKey = 0x2a8; // Size: 16, Type: struct FString
			constexpr auto PlayerLocations = 0x2b8; // Size: 16, Type: struct TArray<struct FVector>
	}
} 
