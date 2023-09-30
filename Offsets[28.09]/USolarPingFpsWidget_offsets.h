namespace offsets
{
	namespace USolarPingFpsWidget
	{
			constexpr auto Img_Ping = 0x348; // Size: 8, Type: struct UImage*
			constexpr auto Txt_Ping = 0x350; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_ms = 0x358; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Txt_fps_2 = 0x360; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto ImgLowDelayColor = 0x378; // Size: 16, Type: struct FLinearColor
			constexpr auto ImgMediumDelayColor = 0x388; // Size: 16, Type: struct FLinearColor
			constexpr auto ImgHighDelayColor = 0x398; // Size: 16, Type: struct FLinearColor
			constexpr auto TxtLowDelayColor = 0x3a8; // Size: 40, Type: struct FSlateColor
			constexpr auto TxtMediumDelayColor = 0x3d0; // Size: 40, Type: struct FSlateColor
			constexpr auto TxtHighDelayColor = 0x3f8; // Size: 40, Type: struct FSlateColor
			constexpr auto RefreshFpsInterval = 0x420; // Size: 4, Type: float
	}
} 
