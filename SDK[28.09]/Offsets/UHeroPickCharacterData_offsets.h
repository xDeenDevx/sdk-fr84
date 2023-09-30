namespace offsets
{
	namespace UHeroPickCharacterData
	{
			constexpr auto CharacterId = 0x28; // Size: 4, Type: int32_t
			constexpr auto SkinId = 0x2c; // Size: 4, Type: int32_t
			constexpr auto CharacterProficiencyLevel = 0x30; // Size: 4, Type: int32_t
			constexpr auto OwnType = 0x3c; // Size: 1, Type: enum class EHeroOwnedType
			constexpr auto ConfigSortNum = 0x40; // Size: 4, Type: int32_t
			constexpr auto HeroName = 0x48; // Size: 16, Type: struct FString
			constexpr auto SelectedPlayerPos = 0x58; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto ConfirmPos = 0x68; // Size: 4, Type: int32_t
	}
} 
