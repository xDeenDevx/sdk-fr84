namespace offsets
{
	namespace ASolarTeamInfo
	{
			constexpr auto TeamID = 0x240; // Size: 1, Type: char
			constexpr auto TeamRank = 0x241; // Size: 1, Type: char
			constexpr auto KillCount = 0x242; // Size: 1, Type: char
			constexpr auto MemberLimit = 0x243; // Size: 1, Type: char
			constexpr auto TeamName = 0x248; // Size: 24, Type: struct FText
			constexpr auto MatchCount = 0x260; // Size: 1, Type: char
			constexpr auto bHasSettled = 0x261; // Size: 1, Type: char
			constexpr auto OnJoinTeam = 0x262; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto OnLeaveTeam = 0x263; // Size: 1, Type: struct FMulticastSparseDelegate
			constexpr auto BotMembers = 0x268; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto PlayerMembers = 0x278; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto TeamMembers = 0x288; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto TeamInfoDetails = 0x2e8; // Size: 8, Type: struct USolarTeamInfoComponent*
	}
} 
