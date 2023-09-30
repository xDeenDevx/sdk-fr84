namespace offsets
{
	namespace ABrush
	{
			constexpr auto BrushType = 0x228; // Size: 1, Type: enum class EBrushType
			constexpr auto BrushColor = 0x22c; // Size: 4, Type: struct FColor
			constexpr auto PolyFlags = 0x230; // Size: 4, Type: int32_t
			constexpr auto bColored = 0x234; // Size: 1, Type: char
			constexpr auto bSolidWhenSelected = 0x234; // Size: 1, Type: char
			constexpr auto bPlaceableFromClassBrowser = 0x234; // Size: 1, Type: char
			constexpr auto bNotForClientOrServer = 0x234; // Size: 1, Type: char
			constexpr auto Brush = 0x238; // Size: 8, Type: struct UModel*
			constexpr auto BrushComponent = 0x240; // Size: 8, Type: struct UBrushComponent*
			constexpr auto bInManipulation = 0x248; // Size: 1, Type: char
			constexpr auto SavedSelections = 0x250; // Size: 16, Type: struct TArray<struct FGeomSelection>
	}
} 
