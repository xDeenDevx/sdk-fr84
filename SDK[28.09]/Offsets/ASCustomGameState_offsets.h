namespace offsets
{
	namespace ASCustomGameState
	{
			constexpr auto InGameState = 0x470; // Size: 1, Type: enum class ESCMInGameState
			constexpr auto CustomRoomData = 0x490; // Size: 120, Type: struct FCustomRoomData
			constexpr auto bCustomRoomMode = 0x508; // Size: 1, Type: bool
			constexpr auto GameManagers = 0x510; // Size: 16, Type: struct TArray<struct AGameManagerBase*>
			constexpr auto GameDataManager = 0x520; // Size: 8, Type: struct AGameDataManager*
			constexpr auto GameJobManager = 0x528; // Size: 8, Type: struct AGameJobManager*
			constexpr auto ManagerConfigComponent = 0x540; // Size: 8, Type: struct UCGMManagerConfigComponent*
			constexpr auto InsFormula = 0x548; // Size: 8, Type: struct ACGFormula*
			constexpr auto PlayersWithTrackingAbility = 0x550; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto TrackInfos = 0x560; // Size: 16, Type: struct TArray<struct ASpatializeInfoTrack*>
	}
} 
