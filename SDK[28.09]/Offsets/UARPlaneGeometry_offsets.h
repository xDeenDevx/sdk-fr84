namespace offsets
{
	namespace UARPlaneGeometry
	{
			constexpr auto Orientation = 0xe8; // Size: 1, Type: enum class EARPlaneOrientation
			constexpr auto Center = 0xec; // Size: 12, Type: struct FVector
			constexpr auto Extent = 0xf8; // Size: 12, Type: struct FVector
			constexpr auto SubsumedBy = 0x118; // Size: 8, Type: struct UARPlaneGeometry*
	}
} 
