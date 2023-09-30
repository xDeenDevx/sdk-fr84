namespace offsets
{
	namespace UAirlineCruiseComponent
	{
			constexpr auto UsedAirlineID = 0xd0; // Size: 4, Type: int32_t
			constexpr auto CapsuleRootClass = 0xd8; // Size: 8, Type: ASolarCapsuleRoot*
			constexpr auto CapsuleRoot = 0xe0; // Size: 8, Type: struct ASolarCapsuleRoot*
			constexpr auto AirlineDataList = 0xe8; // Size: 80, Type: struct TMap<int32_t, struct FAirlineData>
			constexpr auto CruiseTemplate = 0x138; // Size: 8, Type: struct ASolarCharacter*
	}
} 
