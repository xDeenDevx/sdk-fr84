namespace offsets
{
	namespace ULM_AreaData
	{
			constexpr auto bDataTableDirty = 0x40; // Size: 1, Type: bool
			constexpr auto LandscapeInfo = 0x48; // Size: 8, Type: struct ULandscapeInfo*
			constexpr auto IsProcessArea = 0x50; // Size: 1, Type: bool
			constexpr auto LayerTextures = 0x58; // Size: 80, Type: struct TMap<struct FName, struct FAreaLayerData>
			constexpr auto GroupSettings = 0xa8; // Size: 80, Type: struct TMap<struct FName, struct FAreaGroupSet>
			constexpr auto DecalDisplayColorSettings = 0xf8; // Size: 80, Type: struct TMap<struct FName, struct FLinearColor>
			constexpr auto AreaAttributeStruct = 0x148; // Size: 8, Type: struct UScriptStruct*
			constexpr auto FinalAreaAttributeDataTable = 0x150; // Size: 8, Type: struct UDataTable*
	}
} 
