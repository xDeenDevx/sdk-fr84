namespace offsets
{
	namespace ULoadingUIBase
	{
			constexpr auto Img_Bg = 0x260; // Size: 8, Type: struct UImage*
			constexpr auto LoadProgress = 0x268; // Size: 8, Type: struct UProgressBar*
			constexpr auto Txt_Percent_Num = 0x270; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Tips = 0x278; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Tips_Title = 0x280; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Tips_Left = 0x288; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Tips_Mid = 0x290; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Tips_Right = 0x298; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto BGImgMap = 0x2a0; // Size: 80, Type: struct TMap<struct FString, struct UTexture2D*>
			constexpr auto Txt_Task_2 = 0x2f0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Task_3 = 0x2f8; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Task_4 = 0x300; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Task_5 = 0x308; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Task_6 = 0x310; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Task_7 = 0x318; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_Task_8 = 0x320; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto ShowBgLoadingArray = 0x480; // Size: 16, Type: struct TArray<struct FULoadingDataEntry>
			constexpr auto FakeProgress = 0x4a0; // Size: 4, Type: float
	}
} 
