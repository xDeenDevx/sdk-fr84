namespace offsets
{
	namespace USolarInteractableManager
	{
			constexpr auto ZoneNum = 0x40; // Size: 4, Type: int32_t
			constexpr auto TotalNum = 0x44; // Size: 4, Type: int32_t
			constexpr auto CurrRadarStations = 0x48; // Size: 16, Type: struct TArray<struct FRadarStationCollection>
			constexpr auto CurrElectricShops = 0x58; // Size: 16, Type: struct TArray<struct ASolarElectricShop*>
			constexpr auto ActiveShieldUpgradeItemShopList = 0x68; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<ASolarShieldUpgradeItemShop>>
			constexpr auto SceneObjectLevelName = 0x78; // Size: 16, Type: struct FString
			constexpr auto GlobalMapRepInfo = 0x88; // Size: 8, Type: struct TWeakObjectPtr<ASolarGlobalRepInfo>
	}
} 
