namespace offsets
{
	namespace UAkSurfaceReflectorSetComponent
	{
			constexpr auto bEnableSurfaceReflectors = 0x330; // Size: 1, Type: char
			constexpr auto AcousticPolys = 0x338; // Size: 16, Type: struct TArray<struct FAkPoly>
			constexpr auto bEnableDiffraction = 0x348; // Size: 1, Type: char
			constexpr auto bEnableDiffractionOnBoundaryEdges = 0x348; // Size: 1, Type: char
			constexpr auto AssociatedRoom = 0x350; // Size: 8, Type: struct AActor*
	}
} 
