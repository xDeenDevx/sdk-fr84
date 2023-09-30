namespace offsets
{
	namespace UWidgetActiveControl
	{
			constexpr auto ControlledWidget = 0x348; // Size: 8, Type: struct UNamedSlot*
			constexpr auto Progress_Grid = 0x350; // Size: 8, Type: struct UImage*
			constexpr auto BT_CD_Prompt = 0x358; // Size: 8, Type: struct UImage*
			constexpr auto BT_Mask_Grid_Forbidden = 0x360; // Size: 8, Type: struct UImage*
			constexpr auto BT_Icon_Grid_Forbidden = 0x368; // Size: 8, Type: struct UImage*
			constexpr auto BT_Txt_CD = 0x370; // Size: 8, Type: struct USolarTextBlock*
			constexpr auto Progress_CD_Mask = 0x378; // Size: 8, Type: struct UGaugeImage*
			constexpr auto LightAngel = 0x380; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto img_Quick = 0x388; // Size: 8, Type: struct UImage*
			constexpr auto Anim_BT_CD_Prompt = 0x390; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_Loop_Lightning = 0x398; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_Loop_Flicker = 0x3a0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto GridSource = 0x3a8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto CDMaskSource = 0x3b0; // Size: 8, Type: struct UObject*
			constexpr auto PromptSource = 0x3b8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto ForbiddenIconSource = 0x3c0; // Size: 8, Type: struct UObject*
			constexpr auto ForbiddenMaskSource = 0x3c8; // Size: 8, Type: struct UObject*
			constexpr auto bUseEnableForActive = 0x3d0; // Size: 1, Type: bool
			constexpr auto GridNumber = 0x3d4; // Size: 4, Type: int32_t
			constexpr auto CDTimerPrecision = 0x3d8; // Size: 4, Type: int32_t
			constexpr auto GridConsumedEffectSpeed = 0x3dc; // Size: 4, Type: float
			constexpr auto CDTxtColorSpeedup = 0x3e0; // Size: 16, Type: struct FLinearColor
			constexpr auto CDTxtColorNormal = 0x3f0; // Size: 16, Type: struct FLinearColor
			constexpr auto GridCountTextBlockCache = 0x400; // Size: 8, Type: struct UTextBlock*
			constexpr auto PanelDisableCache = 0x408; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto bWidgetActive = 0x420; // Size: 1, Type: bool
			constexpr auto GridMaterial = 0x428; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto bNeedUpdateGrid = 0x430; // Size: 1, Type: bool
			constexpr auto bNeedUpdateGridEffect = 0x431; // Size: 1, Type: bool
			constexpr auto GridPercent = 0x434; // Size: 4, Type: float
			constexpr auto GridEffectPercent = 0x438; // Size: 4, Type: float
			constexpr auto bGridVisualForbidden = 0x43c; // Size: 1, Type: bool
			constexpr auto bNeedUpdateCD = 0x43d; // Size: 1, Type: bool
			constexpr auto CDPercent = 0x440; // Size: 4, Type: float
			constexpr auto bCDVisualForbidden = 0x444; // Size: 1, Type: bool
			constexpr auto bPlayingCDAnim = 0x445; // Size: 1, Type: bool
	}
} 
