namespace offsets
{
	namespace USolarHomeBuildComponent
	{
			constexpr auto HomeActorMgr = 0xc0; // Size: 8, Type: struct USolarHomeActorManager*
			constexpr auto MinCheckDistance = 0xc8; // Size: 4, Type: float
			constexpr auto MaxCheckDistance = 0xcc; // Size: 4, Type: float
			constexpr auto IsBuilding = 0xd0; // Size: 1, Type: bool
			constexpr auto HoldingItemID = 0xd4; // Size: 4, Type: int32_t
			constexpr auto HittingActor = 0xd8; // Size: 8, Type: struct ASolarHomeBaseSpace*
	}
} 
