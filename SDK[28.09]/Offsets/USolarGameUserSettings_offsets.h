namespace offsets
{
	namespace USolarGameUserSettings
	{
			constexpr auto PickupSettings = 0x38; // Size: 24, Type: struct FPickupUserSettings
			constexpr auto GraphicsSettings = 0x50; // Size: 64, Type: struct FGraphicsUserSettings
			constexpr auto WeaponSettings = 0x90; // Size: 32, Type: struct FWeaponUserSettings
			constexpr auto LanguageSettings = 0xb0; // Size: 3, Type: struct FLanguageUserSettings
			constexpr auto CharacterVoiceSettings = 0xb3; // Size: 1, Type: struct FCharacterVoiceUserSettings
			constexpr auto SoundSettings = 0xb8; // Size: 96, Type: struct FSoundUserSettings
			constexpr auto BasicSettings = 0x118; // Size: 11, Type: struct FBasicUserSettings
			constexpr auto SensitivitySettings = 0x124; // Size: 148, Type: struct FSensitivityUserSettings
			constexpr auto ShakeSettings = 0x1b8; // Size: 1, Type: struct FShakeUserSettings
			constexpr auto DriverSettings = 0x1b9; // Size: 5, Type: struct FVehicleControlUserSettings
			constexpr auto ChatOperatorSettings = 0x1be; // Size: 2, Type: struct FChatOperatorUserSettings
			constexpr auto DefaultSettingsRangePath = 0x1c0; // Size: 24, Type: struct FSoftClassPath
			constexpr auto bIsSynchronized = 0x1d8; // Size: 1, Type: bool
			constexpr auto ConfigVersion = 0x1d9; // Size: 1, Type: enum class EConfigVersion
			constexpr auto bFirstTimeLanunchGame = 0x1da; // Size: 1, Type: bool
	}
} 
