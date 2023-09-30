namespace offsets
{
	namespace APlayerState
	{
			constexpr auto Score = 0x228; // Size: 4, Type: float
			constexpr auto PlayerId = 0x22c; // Size: 4, Type: int32_t
			constexpr auto Ping = 0x230; // Size: 1, Type: char
			constexpr auto bShouldUpdateReplicatedPing = 0x232; // Size: 1, Type: char
			constexpr auto bIsSpectator = 0x232; // Size: 1, Type: char
			constexpr auto bOnlySpectator = 0x232; // Size: 1, Type: char
			constexpr auto bIsABot = 0x232; // Size: 1, Type: char
			constexpr auto bIsInactive = 0x232; // Size: 1, Type: char
			constexpr auto bFromPreviousLevel = 0x232; // Size: 1, Type: char
			constexpr auto StartTime = 0x234; // Size: 4, Type: int32_t
			constexpr auto EngineMessageClass = 0x238; // Size: 8, Type: ULocalMessage*
			constexpr auto SavedNetworkAddress = 0x250; // Size: 16, Type: struct FString
			constexpr auto UniqueId = 0x260; // Size: 40, Type: struct FUniqueNetIdRepl
			constexpr auto PawnPrivate = 0x290; // Size: 8, Type: struct APawn*
			constexpr auto PlayerNamePrivate = 0x310; // Size: 16, Type: struct FString
	}
} 
