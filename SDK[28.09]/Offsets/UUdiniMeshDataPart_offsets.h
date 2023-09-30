namespace offsets
{
	namespace UUdiniMeshDataPart
	{
			constexpr auto PolyArray = 0x110; // Size: 16, Type: struct TArray<struct FOnePoly>
			constexpr auto PrimIndex = 0x120; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto PrimID = 0x130; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto PrimEnableDraw = 0x140; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto bIsPrimHide = 0x150; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto bIsPointHide = 0x160; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto PrimDrawSize = 0x170; // Size: 16, Type: struct TArray<float>
			constexpr auto GeneraProcaduralMesh = 0x190; // Size: 1, Type: bool
			constexpr auto bIsMask = 0x191; // Size: 1, Type: bool
	}
} 
