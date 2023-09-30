namespace offsets
{
	namespace UOBPlayerWeaponWidget
	{
			constexpr auto Switcher_Status = 0x348; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto Img_WP = 0x350; // Size: 8, Type: struct UImage*
			constexpr auto Img_WPSelected = 0x358; // Size: 8, Type: struct UImage*
			constexpr auto OwnerWeapon = 0x360; // Size: 8, Type: struct TWeakObjectPtr<ASolarPlayerWeapon>
			constexpr auto LoadWeaponIconHandle = 0x370; // Size: 8, Type: struct FTimerHandle
	}
} 
