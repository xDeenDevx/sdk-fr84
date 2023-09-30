namespace offsets
{
	namespace USolarWeaponCrosshairPanelWidget
	{
			constexpr auto HUD_Reload = 0x348; // Size: 8, Type: struct UUserWidget*
			constexpr auto HUD_Forbid = 0x350; // Size: 8, Type: struct UImage*
			constexpr auto HUD_Overload = 0x358; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto HUD_ChargeProgress = 0x360; // Size: 8, Type: struct UUserWidget*
			constexpr auto HUD_Feedback = 0x368; // Size: 8, Type: struct UFeedbackWidget*
			constexpr auto Panel_CrosshairSlot = 0x370; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Panel_BulletContainerSlot = 0x378; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto HUD_NoAmmoAlert = 0x380; // Size: 8, Type: struct USolarWeaponNoAmmoAlertWidget*
			constexpr auto HUD_RechamberHint = 0x388; // Size: 8, Type: struct USolarWeaponNoAmmoAlertWidget*
			constexpr auto CrosshairWidgetPool = 0x390; // Size: 80, Type: struct TMap<UUserWidget*, struct UUserWidget*>
			constexpr auto CurrentWeaponCrosshairData = 0x3e0; // Size: 56, Type: struct FSolarWeaponCrosshairData
			constexpr auto ActiveCrosshair = 0x418; // Size: 8, Type: struct UCrossHairWidget*
			constexpr auto ActiveBulletContainer = 0x420; // Size: 8, Type: struct USolarWeaponBulletContainerWidget*
			constexpr auto ActiveRechamberWidget = 0x428; // Size: 8, Type: struct USolarWeaponRechamberWidget*
			constexpr auto CurrentCrosshairState = 0x430; // Size: 1, Type: enum class ECrossHairState
			constexpr auto LastCrosshairState = 0x431; // Size: 1, Type: enum class ECrossHairState
	}
} 
