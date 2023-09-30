namespace offsets
{
	namespace UCrosshairCanvasPanel
	{
			constexpr auto CrosshairStateConfigList = 0x168; // Size: 80, Type: struct TMap<enum class ECrossHairState, struct FStateMapItemStruct>
			constexpr auto IgonreWidgetToStateMap = 0x1b8; // Size: 16, Type: struct TArray<struct UWidget*>
			constexpr auto SpreadItemList = 0x1c8; // Size: 16, Type: struct TArray<struct FUICrossHairSpreadStruct>
			constexpr auto AimColorItemList = 0x1d8; // Size: 16, Type: struct TArray<struct FUICrossHairAimColorStruct>
			constexpr auto ReloadingTween = 0x1e8; // Size: 8, Type: struct UTweenImage*
			constexpr auto BulletGauge = 0x1f0; // Size: 8, Type: struct UGaugeImage*
			constexpr auto OverloadingTween = 0x1f8; // Size: 8, Type: struct UTweenImage*
			constexpr auto OverloadBar_Normal = 0x200; // Size: 8, Type: struct UProgressBar*
			constexpr auto OverloadBar_Warn = 0x208; // Size: 8, Type: struct UProgressBar*
			constexpr auto OverloadNormalPanelTween = 0x210; // Size: 8, Type: struct UTweenWidget*
			constexpr auto CoolDownBars = 0x218; // Size: 16, Type: struct TArray<struct UProgressBar*>
	}
} 
