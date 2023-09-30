namespace offsets
{
	namespace ASolarSpectateInfo
	{
			constexpr auto OnBeginUpdateSpectateInfo = 0x228; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStopUpdateSpectateInfo = 0x238; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnOtherPlayerBeginSpectateMe = 0x248; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnOtherPlayerStopSpectateMe = 0x258; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnBeforeSpectateTargetChange = 0x268; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSpectateTargetChanged = 0x278; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSpectatePhaseChanged = 0x288; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSwitchSpectateTargetFailed = 0x298; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSpectatorOfMyTargetChanged = 0x2a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSpectateCharacterOfMyTargetReadied = 0x2b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto SpectatePhase = 0x2c8; // Size: 1, Type: enum class ESpectatePhase
			constexpr auto SpectateTargetPlayerState = 0x2d0; // Size: 8, Type: struct ASolarPlayerState*
			constexpr auto PlayersSpectatingMyTarget = 0x2e8; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto PlayersSpectatingMe = 0x2f8; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto bIsServerRecording = 0x318; // Size: 1, Type: bool
			constexpr auto ReplayManager = 0x320; // Size: 8, Type: struct USolarReplayManager*
			constexpr auto SpectateConditions = 0x328; // Size: 32, Type: struct FSpectateConditions
			constexpr auto SendGiftPlayerInfo = 0x3c8; // Size: 16, Type: struct TArray<struct FGiftSenderInfo>
			constexpr auto TaskStatus = 0x3d8; // Size: 120, Type: struct FInteractiveTaskStatus
			constexpr auto InteractiveTaskTable = 0x450; // Size: 8, Type: struct UDataTable*
			constexpr auto TaskTablePath = 0x458; // Size: 16, Type: struct FString
			constexpr auto LatestAttacker = 0x468; // Size: 8, Type: struct ASolarPlayerState*
			constexpr auto LatestVictim = 0x470; // Size: 8, Type: struct ASolarPlayerState*
			constexpr auto TotalCausedDamage = 0x488; // Size: 4, Type: float
			constexpr auto PlayerCameraRotation = 0x48c; // Size: 12, Type: struct FRotator
			constexpr auto CharacterBackpackItems = 0x498; // Size: 16, Type: struct TArray<struct FReplicateItemData>
			constexpr auto CharacterBackpackItemMaxPiles = 0x4a8; // Size: 16, Type: struct TArray<struct FReplicateMaxPileData>
			constexpr auto CharacterVJetChargeTime = 0x4b8; // Size: 4, Type: float
			constexpr auto CharacterVJetTotalTimes = 0x4bc; // Size: 4, Type: int32_t
			constexpr auto CharacterVJetRestTimes = 0x4c0; // Size: 4, Type: int32_t
			constexpr auto CharacterVJetModuleLevel = 0x4c4; // Size: 4, Type: int32_t
			constexpr auto CharacterVJetStartChargeTime = 0x4c8; // Size: 4, Type: float
			constexpr auto CharacterHJetChargeTime = 0x4cc; // Size: 4, Type: float
			constexpr auto CharacterHJetTotalTimes = 0x4d0; // Size: 4, Type: int32_t
			constexpr auto CharacterHJetRestTimes = 0x4d4; // Size: 4, Type: int32_t
			constexpr auto CharacterHJetModuleLevel = 0x4d8; // Size: 4, Type: int32_t
			constexpr auto CharacterHJetStartChargeTime = 0x4dc; // Size: 4, Type: float
			constexpr auto CharacterRoleAbilitiesInfo = 0x4e0; // Size: 16, Type: struct TArray<struct FCharacterRoleAbilityInfo>
			constexpr auto SpectateCountdownData = 0x4f0; // Size: 44, Type: struct FRepCountdownData
			constexpr auto BattleUpgradeEffectData = 0x520; // Size: 16, Type: struct TArray<struct FBattleUpgradeEffectParamData>
			constexpr auto ExtraARMag = 0x530; // Size: 4, Type: int32_t
			constexpr auto ExtraSGMag = 0x534; // Size: 4, Type: int32_t
			constexpr auto bExposedByRadar = 0x538; // Size: 1, Type: bool
			constexpr auto VehicleSpectateInfo = 0x540; // Size: 48, Type: struct FVehicleSpectateInfo
			constexpr auto bShowBattlePrompt = 0x570; // Size: 1, Type: char
	}
} 
