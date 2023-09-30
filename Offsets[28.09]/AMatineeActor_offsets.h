namespace offsets
{
	namespace AMatineeActor
	{
			constexpr auto MatineeData = 0x228; // Size: 8, Type: struct UInterpData*
			constexpr auto MatineeControllerName = 0x230; // Size: 8, Type: struct FName
			constexpr auto PlayRate = 0x238; // Size: 4, Type: float
			constexpr auto bPlayOnLevelLoad = 0x23c; // Size: 1, Type: char
			constexpr auto bForceStartPos = 0x23c; // Size: 1, Type: char
			constexpr auto ForceStartPosition = 0x240; // Size: 4, Type: float
			constexpr auto bLooping = 0x244; // Size: 1, Type: char
			constexpr auto bRewindOnPlay = 0x244; // Size: 1, Type: char
			constexpr auto bNoResetOnRewind = 0x244; // Size: 1, Type: char
			constexpr auto bRewindIfAlreadyPlaying = 0x244; // Size: 1, Type: char
			constexpr auto bDisableRadioFilter = 0x244; // Size: 1, Type: char
			constexpr auto bClientSideOnly = 0x244; // Size: 1, Type: char
			constexpr auto bSkipUpdateIfNotVisible = 0x244; // Size: 1, Type: char
			constexpr auto bIsSkippable = 0x244; // Size: 1, Type: char
			constexpr auto PreferredSplitScreenNum = 0x248; // Size: 4, Type: int32_t
			constexpr auto bDisableMovementInput = 0x24c; // Size: 1, Type: char
			constexpr auto bDisableLookAtInput = 0x24c; // Size: 1, Type: char
			constexpr auto bHidePlayer = 0x24c; // Size: 1, Type: char
			constexpr auto bHideHud = 0x24c; // Size: 1, Type: char
			constexpr auto GroupActorInfos = 0x250; // Size: 16, Type: struct TArray<struct FInterpGroupActorInfo>
			constexpr auto bShouldShowGore = 0x260; // Size: 1, Type: char
			constexpr auto GroupInst = 0x268; // Size: 16, Type: struct TArray<struct UInterpGroupInst*>
			constexpr auto CameraCuts = 0x278; // Size: 16, Type: struct TArray<struct FCameraCutInfo>
			constexpr auto bIsPlaying = 0x288; // Size: 1, Type: char
			constexpr auto bReversePlayback = 0x288; // Size: 1, Type: char
			constexpr auto bPaused = 0x288; // Size: 1, Type: char
			constexpr auto bPendingStop = 0x288; // Size: 1, Type: char
			constexpr auto InterpPosition = 0x28c; // Size: 4, Type: float
			constexpr auto ReplicationForceIsPlaying = 0x294; // Size: 1, Type: char
			constexpr auto OnPlay = 0x298; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStop = 0x2a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPause = 0x2b8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
