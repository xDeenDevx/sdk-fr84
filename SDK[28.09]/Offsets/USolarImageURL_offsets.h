namespace offsets
{
	namespace USolarImageURL
	{
			constexpr auto URL = 0x138; // Size: 16, Type: struct FString
			constexpr auto bDownloadFailedResetToPlaceholder = 0x148; // Size: 1, Type: bool
			constexpr auto bDownloadFailedAutoRetry = 0x149; // Size: 1, Type: bool
			constexpr auto AutoRetryDelayTime = 0x14c; // Size: 4, Type: int32_t
			constexpr auto AutoRetryTimes = 0x150; // Size: 4, Type: int32_t
			constexpr auto Brush = 0x158; // Size: 152, Type: struct FSlateBrush
			constexpr auto PlaceholderBrush = 0x1f0; // Size: 152, Type: struct FSlateBrush
			constexpr auto BrushDelegate = 0x288; // Size: 16, Type: struct FDelegate
			constexpr auto ColorAndOpacity = 0x298; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorAndOpacityDelegate = 0x2a8; // Size: 16, Type: struct FDelegate
			constexpr auto bFlipForRightToLeftFlowDirection = 0x2b8; // Size: 1, Type: bool
			constexpr auto OnMouseButtonDownEvent = 0x2bc; // Size: 16, Type: struct FDelegate
			constexpr auto OnURLDownloadFinish = 0x2d0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
