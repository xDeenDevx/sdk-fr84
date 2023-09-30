namespace offsets
{
	namespace USolarVibrateManager
	{
			constexpr auto GameplayVibrateDataAsset = 0x50; // Size: 8, Type: struct UGameplayVibrateDataAsset*
			constexpr auto CurrentVibrateCategoryIntensity = 0x58; // Size: 80, Type: struct TMap<enum class EGameplayVibrateCategory, enum class EGameplayVibrateIntensity>
			constexpr auto WeaponVibrateTable = 0xa8; // Size: 8, Type: struct UDataTable*
			constexpr auto VibrateConfig = 0xb0; // Size: 8, Type: struct UVibrateConfig*
			constexpr auto WeaponVibrateFactor = 0xb8; // Size: 1, Type: enum class EWeaponVibrateFactor
			constexpr auto CacheWeaponChargeTime = 0xbc; // Size: 4, Type: float
	}
} 
