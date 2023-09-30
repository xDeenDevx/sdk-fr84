namespace offsets
{
	namespace UOBProgressBar
	{
			constexpr auto TotalTime = 0x350; // Size: 4, Type: float
			constexpr auto CurrentTime = 0x354; // Size: 4, Type: float
			constexpr auto bIsPause = 0x358; // Size: 1, Type: bool
			constexpr auto bNeedShowActivityHeatData = 0x359; // Size: 1, Type: bool
			constexpr auto OnSetReplayTime = 0x360; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Btn_Rewind = 0x370; // Size: 8, Type: struct UButton*
			constexpr auto Btn_PausePlay = 0x378; // Size: 8, Type: struct UButton*
			constexpr auto Btn_FastForward = 0x380; // Size: 8, Type: struct UButton*
			constexpr auto Btn_Speed_Left = 0x388; // Size: 8, Type: struct USolarButton*
			constexpr auto Btn_Speed_Right = 0x390; // Size: 8, Type: struct USolarButton*
			constexpr auto Txt_CurrentTime = 0x398; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_TotalTime = 0x3a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto Txt_PlaybackSpeed = 0x3a8; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto WidgetSwitcher_PausePlay = 0x3b0; // Size: 8, Type: struct UWidgetSwitcher*
	}
} 
