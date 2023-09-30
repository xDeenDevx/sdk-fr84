namespace offsets
{
	namespace UHeroPickWidget
	{
			constexpr auto PickInfo = 0x350; // Size: 8, Type: struct AHeroPickInfo*
			constexpr auto CharacterList = 0x358; // Size: 8, Type: struct UTileView*
			constexpr auto PlayerSlots = 0x360; // Size: 16, Type: struct TArray<struct UHeroPickPlayerSlot*>
			constexpr auto SelectDataMap = 0x370; // Size: 80, Type: struct TMap<int32_t, struct UHeroPickCharacterData*>
			constexpr auto UI_HeroPick_Detail = 0x3d8; // Size: 8, Type: struct UHeroPickDetail*
			constexpr auto CurrentSelectCharacterID = 0x3e0; // Size: 4, Type: int32_t
			constexpr auto Enable3DLayout = 0x3e4; // Size: 1, Type: bool
	}
} 
