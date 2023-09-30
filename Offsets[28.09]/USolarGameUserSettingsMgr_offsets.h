namespace offsets
{
	namespace USolarGameUserSettingsMgr
	{
			constexpr auto CurGameUserSettings = 0x28; // Size: 8, Type: struct USolarGameUserSettings*
			constexpr auto DefaultGameSettingsRange = 0x30; // Size: 8, Type: struct USolarGameSettingsRange*
			constexpr auto bIsDefalutSettings = 0x38; // Size: 1, Type: bool
			constexpr auto SolarGameInstance = 0x40; // Size: 8, Type: struct USolarGameInstanceBase*
	}
} 
