namespace offsets
{
	namespace AGameSession
	{
			constexpr auto MaxSpectators = 0x228; // Size: 4, Type: int32_t
			constexpr auto MaxPlayers = 0x22c; // Size: 4, Type: int32_t
			constexpr auto MaxPartySize = 0x230; // Size: 4, Type: int32_t
			constexpr auto MaxSplitscreensPerConnection = 0x234; // Size: 1, Type: char
			constexpr auto bRequiresPushToTalk = 0x235; // Size: 1, Type: bool
			constexpr auto SessionName = 0x238; // Size: 8, Type: struct FName
	}
} 
