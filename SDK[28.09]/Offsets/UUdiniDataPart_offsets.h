namespace offsets
{
	namespace UUdiniDataPart
	{
			constexpr auto PartType = 0x28; // Size: 1, Type: enum class EUdiniDataPartType
			constexpr auto VertexPosition = 0x30; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto VertexColors = 0x40; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto VertexColorsCatche = 0x50; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto VertexNormal = 0x60; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto VertexUV = 0x70; // Size: 16, Type: struct TArray<struct FVector2D>
			constexpr auto PointEnableDraw = 0x80; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto PointDrawSize = 0x90; // Size: 16, Type: struct TArray<float>
			constexpr auto PrimDrawLineThinkness = 0xa0; // Size: 16, Type: struct TArray<float>
			constexpr auto UdiniAttributesMap = 0xb0; // Size: 80, Type: struct TMap<struct FString, struct UUdiniAttribute*>
	}
} 
