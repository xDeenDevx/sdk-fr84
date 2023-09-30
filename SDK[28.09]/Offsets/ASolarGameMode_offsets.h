namespace offsets
{
	namespace ASolarGameMode
	{
			constexpr auto PreStartPlay = 0x310; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CalledStartPlay = 0x320; // Size: 16, Type: struct FDelegate
			constexpr auto PostStartPlay = 0x330; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto PreHandleMatchHasStarted = 0x340; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CalledHandleMatchHasStarted = 0x350; // Size: 16, Type: struct FDelegate
			constexpr auto PostHandleMatchHasStarted = 0x360; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto PreRestartPlayer = 0x370; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CalledRestartPlayer = 0x380; // Size: 16, Type: struct FDelegate
			constexpr auto PostRestartPlayer = 0x390; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto PreEndPlay = 0x3a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CalledEndPlay = 0x3b0; // Size: 16, Type: struct FDelegate
			constexpr auto PostEndPlay = 0x3c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto GameModeComponents = 0x3d0; // Size: 16, Type: struct TArray<struct UGameModeCompBase*>
			constexpr auto GamePlayMode = 0x3e4; // Size: 4, Type: int32_t
			constexpr auto ManagerClasses = 0x3e8; // Size: 16, Type: struct TArray<AActor*>
			constexpr auto CharacterClassPath = 0x3f8; // Size: 16, Type: struct FString
			constexpr auto CharacterIdInTrainningCourse = 0x408; // Size: 4, Type: int32_t
			constexpr auto SkinIdInTrainningCourse = 0x40c; // Size: 4, Type: int32_t
			constexpr auto BagIdInTrainingCourse = 0x410; // Size: 4, Type: int32_t
			constexpr auto bManuallyModifyCharacter = 0x414; // Size: 1, Type: bool
			constexpr auto SpecifiedCharacterSkinID = 0x418; // Size: 4, Type: int32_t
			constexpr auto bManuallyModifyCharacterBagId = 0x41c; // Size: 1, Type: bool
			constexpr auto SpecifiedCharacterBagID = 0x420; // Size: 4, Type: int32_t
			constexpr auto bManuallyModifyCharacterBagTrailId = 0x424; // Size: 1, Type: bool
			constexpr auto SpecifiedCharacterBagTrailID = 0x428; // Size: 4, Type: int32_t
			constexpr auto OnPostSpawnDefaultSolarCharacterAtTransform = 0x430; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AIMgrComponent = 0x440; // Size: 8, Type: struct USolarGameModeAIComponent*
			constexpr auto StatComponent = 0x448; // Size: 8, Type: struct USolarGameModeStatisticsComponent*
			constexpr auto Teams = 0x450; // Size: 16, Type: struct TArray<struct ASolarTeamInfo*>
			constexpr auto AliveTeams = 0x460; // Size: 16, Type: struct TArray<struct ASolarTeamInfo*>
			constexpr auto AlivePlayers = 0x470; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto TeamClass = 0x480; // Size: 8, Type: ASolarTeamInfo*
			constexpr auto TeamDataTable = 0x488; // Size: 8, Type: struct UDataTable*
			constexpr auto FlyTrailActor = 0x540; // Size: 8, Type: struct ASolarFlyTrail*
			constexpr auto BannedPlayerIDList = 0x548; // Size: 16, Type: struct TArray<struct FString>
	}
} 
