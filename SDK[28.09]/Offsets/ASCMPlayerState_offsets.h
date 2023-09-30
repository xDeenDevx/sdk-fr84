namespace offsets
{
	namespace ASCMPlayerState
	{
			constexpr auto BattleState = 0xad8; // Size: 1, Type: enum class ESCMPlayerState
			constexpr auto PlayerOutType = 0xad9; // Size: 1, Type: enum class ESCMPlayerOutType
			constexpr auto PlayerType = 0xada; // Size: 1, Type: enum class ESCMPlayerType
			constexpr auto PlayerGameRole = 0xadb; // Size: 1, Type: enum class ESCMPlayerGameRole
			constexpr auto OnSideChange = 0xaf0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ReplicateData = 0xb00; // Size: 16, Type: struct TArray<struct FSCMReplicateHostData>
			constexpr auto ReviveStartTime = 0xb20; // Size: 4, Type: float
			constexpr auto RevivingTeammatePS = 0xb28; // Size: 8, Type: struct ASolarPlayerState*
			constexpr auto TaskSystem = 0xb40; // Size: 8, Type: struct USolarTaskComponent*
	}
} 
