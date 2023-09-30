namespace offsets
{
	namespace UOBScoreboard
	{
			constexpr auto Anim_Enter = 0x350; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto ScrollBox_TeamList = 0x358; // Size: 8, Type: struct UScrollBox*
			constexpr auto Top3 = 0x360; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Bg_Settlement = 0x368; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Bg_InGame = 0x370; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto FirstTeam = 0x378; // Size: 8, Type: struct UOBScoreboardSingleTopTeam*
			constexpr auto SecondTeam = 0x380; // Size: 8, Type: struct UOBScoreboardSingleTopTeam*
			constexpr auto ThirdTeam = 0x388; // Size: 8, Type: struct UOBScoreboardSingleTopTeam*
			constexpr auto CloseBtn = 0x390; // Size: 8, Type: struct UButton*
			constexpr auto Btn = 0x398; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto Remain_Total = 0x3a0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto TileView_Others = 0x3a8; // Size: 8, Type: struct UTileView*
			constexpr auto Txt_PlayerRemain = 0x3b0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_PlayerTotal = 0x3b8; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_TeamRemain = 0x3c0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_TeamTotal = 0x3c8; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto WidgetTypeChoice = 0x3d0; // Size: 1, Type: enum class E_Type_OB_Scoreboard
			constexpr auto CupViewInfo = 0x3d8; // Size: 40, Type: struct FCupViewInfo
			constexpr auto TopThreeTeamWidget = 0x408; // Size: 16, Type: struct TArray<struct UOBScoreboardSingleTopTeam*>
	}
} 
