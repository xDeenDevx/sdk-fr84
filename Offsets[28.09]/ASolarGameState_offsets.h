namespace offsets
{
	namespace ASolarGameState
	{
			constexpr auto SolarPlayerStateArray = 0x2a0; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto RealPlayerStateArray = 0x2b0; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto bShowBattlePrompt = 0x2c0; // Size: 1, Type: char
			constexpr auto MapVehicleSpawnTypes = 0x2c8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto PrePooledBundles = 0x2e8; // Size: 16, Type: struct TArray<struct FPrePooledBundle>
			constexpr auto RemainingPlayersCount = 0x2f8; // Size: 4, Type: int32_t
			constexpr auto AlivePlayersCount = 0x2fc; // Size: 4, Type: int32_t
			constexpr auto RemainingTeamCount = 0x300; // Size: 4, Type: int32_t
			constexpr auto PlayersCount = 0x304; // Size: 4, Type: int32_t
			constexpr auto TeamCount = 0x308; // Size: 4, Type: int32_t
			constexpr auto TotalBoardingNum = 0x30c; // Size: 4, Type: int32_t
			constexpr auto CapsulePlayerNum = 0x310; // Size: 4, Type: int32_t
			constexpr auto SettlementStageConfigID = 0x314; // Size: 4, Type: int32_t
			constexpr auto LimitMaxReplicatedNumClasses = 0x318; // Size: 80, Type: struct TSet<UObject*>
			constexpr auto StartTime = 0x368; // Size: 4, Type: float
			constexpr auto NumPlayers = 0x36c; // Size: 4, Type: int32_t
			constexpr auto GameWarmID = 0x370; // Size: 4, Type: int32_t
			constexpr auto TeammateNumMode = 0x374; // Size: 4, Type: int32_t
			constexpr auto bLuaReportBattleEndServer = 0x378; // Size: 1, Type: bool
			constexpr auto GameStartConditions = 0x380; // Size: 88, Type: struct FGameStartConditionList
			constexpr auto GameplayConfigComponent = 0x3d8; // Size: 8, Type: struct USolarGameplayConfigComponent*
			constexpr auto Teams = 0x3e0; // Size: 16, Type: struct TArray<struct ASolarTeamInfo*>
			constexpr auto NumReplicatedTeams = 0x3f0; // Size: 1, Type: char
			constexpr auto SolarPlayerActivityHeatComponent = 0x440; // Size: 8, Type: struct USolarPlayerActivityHeatComponent*
	}
} 
