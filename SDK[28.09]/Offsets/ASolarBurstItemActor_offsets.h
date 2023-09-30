namespace offsets
{
	namespace ASolarBurstItemActor
	{
			constexpr auto StartLoc = 0x3e0; // Size: 12, Type: struct FVector_NetQuantize
			constexpr auto MediumLoc = 0x3ec; // Size: 12, Type: struct FVector_NetQuantize
			constexpr auto EndLoc = 0x3f8; // Size: 12, Type: struct FVector_NetQuantize
			constexpr auto bLandedOnServer = 0x404; // Size: 1, Type: bool
			constexpr auto OwnerBox = 0x430; // Size: 8, Type: struct ASolarTreasureBoxActor*
			constexpr auto BurstLocalHeight = 0x480; // Size: 4, Type: float
			constexpr auto BurstTimeTotal = 0x484; // Size: 4, Type: float
	}
} 
