namespace offsets
{
	namespace UBP_Tab_ItemBase_C
	{
			constexpr auto UberGraphFrame = 0x260; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto Text = 0x268; // Size: 16, Type: struct FString
			constexpr auto Size = 0x278; // Size: 8, Type: struct FVector2D
			constexpr auto HintData = 0x280; // Size: 16, Type: struct FS_HintData
			constexpr auto Style = 0x290; // Size: 1, Type: enum class E_TabStyle
			constexpr auto HintWidget = 0x298; // Size: 8, Type: struct USolarRedHint_General_C*
			constexpr auto bSelected = 0x2a0; // Size: 1, Type: bool
			constexpr auto ItemSelected = 0x2a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto wText = 0x2b8; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Obj = 0x2c0; // Size: 8, Type: struct UBP_TabItemObj_C*
			constexpr auto Icon = 0x2c8; // Size: 8, Type: struct UImage*
			constexpr auto IconImage = 0x2d0; // Size: 8, Type: struct UObject*
	}
} 
