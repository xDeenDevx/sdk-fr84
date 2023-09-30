namespace offsets
{
	namespace USolarTeamRescueComponent
	{
			constexpr auto OwnerChara = 0xb8; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto TempReqTime = 0xd4; // Size: 4, Type: float
			constexpr auto RequestTimeout = 0xd8; // Size: 4, Type: float
			constexpr auto bSendRequest = 0xdc; // Size: 1, Type: bool
			constexpr auto bLastRescueBtnVisibility = 0xdd; // Size: 1, Type: bool
			constexpr auto ClosestTarget = 0xe0; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto NearByDeathVergeTeamMates = 0xe8; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<ASolarCharacter>>
	}
} 
