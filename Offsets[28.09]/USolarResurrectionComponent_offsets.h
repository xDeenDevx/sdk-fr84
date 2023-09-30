namespace offsets
{
	namespace USolarResurrectionComponent
	{
			constexpr auto bEnableResurrection = 0xb0; // Size: 1, Type: char
			constexpr auto DeathBox = 0xb8; // Size: 8, Type: struct ADeathTreasureBox*
			constexpr auto DeathBoxLoc = 0xc0; // Size: 12, Type: struct FVector
			constexpr auto ResurrectionState = 0xcc; // Size: 1, Type: enum class EResurrectionState
			constexpr auto OnResurrectionStateChanged = 0xd0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CurrentCountDownStartTime = 0xe0; // Size: 4, Type: float
			constexpr auto CountDownAccTime = 0xe4; // Size: 4, Type: float
			constexpr auto ConfigCountDownTime = 0xf0; // Size: 4, Type: float
			constexpr auto ResurrectionClutchTime = 0xf4; // Size: 4, Type: float
			constexpr auto bIsTimeoutCountDownPaused = 0x100; // Size: 1, Type: char
			constexpr auto OnTimeoutCountDownStateChanged = 0x108; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto DeathBoxMark = 0x118; // Size: 8, Type: struct TWeakObjectPtr<UWorldMark_ReviveTeammates>
			constexpr auto DeathBoxMarkClass = 0x120; // Size: 8, Type: UWorldMark_ReviveTeammates*
			constexpr auto RebornLine = 0x128; // Size: 8, Type: struct TWeakObjectPtr<AActor>
			constexpr auto RebornLineClass = 0x130; // Size: 8, Type: AActor*
	}
} 
