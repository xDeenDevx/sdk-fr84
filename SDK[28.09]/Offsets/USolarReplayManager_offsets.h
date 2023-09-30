namespace offsets
{
	namespace USolarReplayManager
	{
			constexpr auto WaitingOBMap = 0x40; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto WaitingReplayStartUIClass = 0x58; // Size: 24, Type: struct FSoftClassPath
			constexpr auto OBModeSpectatorPawnClass = 0x70; // Size: 24, Type: struct FSoftClassPath
			constexpr auto OBModeHUDClass = 0x88; // Size: 24, Type: struct FSoftClassPath
			constexpr auto OBHeadInfoWidgetClass = 0xa0; // Size: 24, Type: struct FSoftClassPath
			constexpr auto PerspectiveCueTag = 0xb8; // Size: 8, Type: struct FGameplayCueTag
			constexpr auto PerspectiveInSmokeCueTag = 0xc0; // Size: 8, Type: struct FGameplayCueTag
			constexpr auto PerspectiveMaterial = 0xc8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto PerspectiveMaterialParams = 0xe0; // Size: 64, Type: struct FAddMultiplePassMaterialChangeParams
			constexpr auto DirectorModeSpectatorPawnClass = 0x120; // Size: 24, Type: struct FSoftClassPath
			constexpr auto DirectorModeInputModeName = 0x138; // Size: 8, Type: struct FName
			constexpr auto UpdateDistanceInterval = 0x140; // Size: 4, Type: float
			constexpr auto OBTeamListNearbyDistance = 0x144; // Size: 4, Type: float
			constexpr auto OBHeadInfoNearDistance = 0x148; // Size: 4, Type: float
			constexpr auto OBHeadInfoFarDistance = 0x14c; // Size: 4, Type: float
			constexpr auto OBDamageTextHideDistance = 0x150; // Size: 4, Type: float
			constexpr auto OBDelayTimeForTournament = 0x154; // Size: 4, Type: float
			constexpr auto OBLivePreDownloadTime = 0x158; // Size: 4, Type: float
			constexpr auto OBSkipBeginningTime = 0x15c; // Size: 4, Type: float
			constexpr auto OBPlaybackSpeedList = 0x160; // Size: 16, Type: struct TArray<float>
			constexpr auto OBPlaybackSpeedDefaultIndex = 0x170; // Size: 1, Type: char
			constexpr auto OBLiveDelayChunkCount = 0x171; // Size: 1, Type: char
			constexpr auto OBLockCameraBindBoneName = 0x174; // Size: 8, Type: struct FName
			constexpr auto OBLockCameraBindBoneOffset = 0x17c; // Size: 12, Type: struct FVector
			constexpr auto OBInitLockDistance = 0x188; // Size: 4, Type: float
			constexpr auto OBMinLockDistance = 0x18c; // Size: 4, Type: float
			constexpr auto OBMaxLockDistance = 0x190; // Size: 4, Type: float
			constexpr auto OBMinLockPitch = 0x194; // Size: 4, Type: float
			constexpr auto OBMaxLockPitch = 0x198; // Size: 4, Type: float
			constexpr auto OBPitchAdjustTriggerFloor = 0x19c; // Size: 4, Type: float
			constexpr auto OBPitchAdjustValue = 0x1a0; // Size: 4, Type: float
			constexpr auto ReplayCacheFileRetentionTimeInSeconds = 0x1a4; // Size: 4, Type: int32_t
			constexpr auto HighlightFileRetentionTimeInSeconds = 0x1a8; // Size: 4, Type: int32_t
			constexpr auto HighlightFileMaxCount = 0x1ac; // Size: 4, Type: int32_t
			constexpr auto HighlightMinimalDiskSpaceInMB = 0x1b0; // Size: 4, Type: int32_t
			constexpr auto EnableHighlightModeGroups = 0x1b8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto AutoDirectorComponentClass = 0x1c8; // Size: 24, Type: struct FSoftClassPath
			constexpr auto OnPlayingStartedDelegate = 0x1e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingLoadLevelsStartedDelegate = 0x1f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingLevelLoadedDelegate = 0x208; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingStreamReadiedDelegate = 0x218; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingAtEndDelegate = 0x228; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingFinishedDelegate = 0x238; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRecordingStartedDelegate = 0x248; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRecordingStartFailedDelegate = 0x258; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnRecordingFinishedDelegate = 0x268; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingScrubStartDelegate = 0x278; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingPreScrubDelegate = 0x288; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingFirstScrubFinishedDelegate = 0x298; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingScrubFailedDelegate = 0x2a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingScrubCharactersCreatedDelegate = 0x2b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingPauseDelegate = 0x2c8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayingContinueDelegate = 0x2d8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlaybackSpeedChangedDelegate = 0x2e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnCheatersPlayerIDChanged = 0x2f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAutoPlaybackSpeedUpStart = 0x308; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAutoPlaybackSpeedUpStop = 0x318; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnHighlightListChanged = 0x368; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto WaitingReplayStartUI = 0x3f0; // Size: 8, Type: struct UUserWidget*
	}
} 
