namespace offsets
{
	namespace UHUDBattleHPPanel
	{
			constexpr auto HP_Bar = 0x370; // Size: 8, Type: struct USolarHPProgressBoard*
			constexpr auto Txt_HPNumber = 0x378; // Size: 8, Type: struct UTextBlock*
			constexpr auto AdvBar_Shield_A = 0x380; // Size: 8, Type: struct USolarShieldProgressBoard*
			constexpr auto Txt_ArmorNum = 0x390; // Size: 8, Type: struct UTextBlock*
			constexpr auto Panel_VX = 0x398; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_SP = 0x3a0; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto HP_Bar_ICON = 0x3a8; // Size: 8, Type: struct UImage*
			constexpr auto HP_Shield_ICON = 0x3b0; // Size: 8, Type: struct UImage*
			constexpr auto FX_Shield = 0x3b8; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Armor_Light_Anim = 0x3c0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto HPBarColorNormal = 0x3c8; // Size: 16, Type: struct FLinearColor
			constexpr auto HPBarColorDying = 0x3d8; // Size: 16, Type: struct FLinearColor
			constexpr auto ShieldNumColorByQuality = 0x3e8; // Size: 80, Type: struct TMap<int32_t, struct FLinearColor>
	}
} 
