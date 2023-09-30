namespace offsets
{
	namespace UPaperTileMapComponent
	{
			constexpr auto MapWidth = 0x578; // Size: 4, Type: int32_t
			constexpr auto MapHeight = 0x57c; // Size: 4, Type: int32_t
			constexpr auto TileWidth = 0x580; // Size: 4, Type: int32_t
			constexpr auto TileHeight = 0x584; // Size: 4, Type: int32_t
			constexpr auto DefaultLayerTileSet = 0x588; // Size: 8, Type: struct UPaperTileSet*
			constexpr auto Material = 0x590; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TileLayers = 0x598; // Size: 16, Type: struct TArray<struct UPaperTileLayer*>
			constexpr auto TileMapColor = 0x5a8; // Size: 16, Type: struct FLinearColor
			constexpr auto UseSingleLayerIndex = 0x5b8; // Size: 4, Type: int32_t
			constexpr auto bUseSingleLayer = 0x5bc; // Size: 1, Type: bool
			constexpr auto TileMap = 0x5c0; // Size: 8, Type: struct UPaperTileMap*
	}
} 
