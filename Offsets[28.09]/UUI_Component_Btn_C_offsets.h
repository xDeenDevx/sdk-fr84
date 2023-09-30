namespace offsets
{
	namespace UUI_Component_Btn_C
	{
			constexpr auto UberGraphFrame = 0x350; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto Anim_Remind = 0x358; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_Hold = 0x360; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_Hover = 0x368; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Img_Btn = 0x370; // Size: 8, Type: struct USolarImage*
			constexpr auto Img_Icon = 0x378; // Size: 8, Type: struct USolarImage*
			constexpr auto img_Mask = 0x380; // Size: 8, Type: struct USolarImage*
			constexpr auto Img_Shadow = 0x388; // Size: 8, Type: struct USolarImage*
			constexpr auto Panel_Press = 0x390; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto ScaleBox = 0x398; // Size: 8, Type: struct UScaleBox*
			constexpr auto Size_Btn = 0x3a0; // Size: 8, Type: struct USizeBox*
			constexpr auto Size_Icon = 0x3a8; // Size: 8, Type: struct USizeBox*
			constexpr auto Text_Btn = 0x3b0; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto WidgetSlot = 0x3b8; // Size: 8, Type: struct UNamedSlot*
			constexpr auto BtnType = 0x3c0; // Size: 1, Type: enum class E_Type_Btn
			constexpr auto BtnState = 0x3c1; // Size: 1, Type: enum class E_State_Btn
			constexpr auto BtnSize = 0x3c4; // Size: 8, Type: struct FVector2D
			constexpr auto IsUseBtnImag = 0x3cc; // Size: 1, Type: bool
			constexpr auto IsUseText = 0x3cd; // Size: 1, Type: bool
			constexpr auto Text = 0x3d0; // Size: 16, Type: struct FString
			constexpr auto IsUseLocID = 0x3e0; // Size: 1, Type: bool
			constexpr auto LocID = 0x3e4; // Size: 4, Type: int32_t
			constexpr auto PreviewLang = 0x3e8; // Size: 1, Type: enum class ESolarSupportLanguages
			constexpr auto OnClicked = 0x3f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPressed = 0x400; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnReleased = 0x410; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto IsIcon = 0x420; // Size: 1, Type: bool
			constexpr auto Icon = 0x428; // Size: 8, Type: struct UObject*
			constexpr auto Icon_Size = 0x430; // Size: 8, Type: struct FVector2D
	}
} 
