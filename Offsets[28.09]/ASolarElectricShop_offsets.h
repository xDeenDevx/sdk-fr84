namespace offsets
{
	namespace ASolarElectricShop
	{
			constexpr auto MaxWeaponLevel = 0x238; // Size: 4, Type: int32_t
			constexpr auto MaxShieldLevel = 0x23c; // Size: 4, Type: int32_t
			constexpr auto UpgradeEnergyCosts = 0x240; // Size: 16, Type: struct TArray<float>
			constexpr auto ShopMesh = 0x250; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto CollisionComp = 0x258; // Size: 8, Type: struct USphereComponent*
			constexpr auto SpawnID = 0x260; // Size: 4, Type: int32_t
			constexpr auto bSpecificShopID = 0x264; // Size: 1, Type: bool
			constexpr auto ShopMeshPathTable = 0x268; // Size: 40, Type: struct TSoftObjectPtr<UDataTable>
			constexpr auto bIfShowInMap = 0x290; // Size: 1, Type: bool
			constexpr auto MapIcon = 0x298; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto MapIconID = 0x2c0; // Size: 4, Type: int32_t
			constexpr auto MaxTirggerAngle = 0x2c4; // Size: 4, Type: float
			constexpr auto ShopID = 0x2c8; // Size: 4, Type: int32_t
			constexpr auto bIsBroken = 0x2cc; // Size: 1, Type: bool
			constexpr auto TirggerDistance = 0x2d0; // Size: 4, Type: float
			constexpr auto CurrentModeAnimType = 0x2d4; // Size: 1, Type: enum class EShopModelAnimType
			constexpr auto WantedModeAnimType = 0x2d5; // Size: 1, Type: enum class EShopModelAnimType
			constexpr auto InstigateCharacters = 0x2d8; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<ASolarCharacter>>
			constexpr auto ShopMeshDataTable = 0x2e8; // Size: 8, Type: struct UDataTable*
			constexpr auto ItemSections = 0x2f0; // Size: 16, Type: struct TArray<struct FElectricShopSection>
			constexpr auto ItemCDRecords = 0x300; // Size: 16, Type: struct TArray<struct FElectricShopCDRecord>
			constexpr auto PoolRefreshTimeList = 0x310; // Size: 16, Type: struct TArray<float>
			constexpr auto PoolRefreshInfoList = 0x320; // Size: 16, Type: struct TArray<struct FPoolRefreshInfo>
			constexpr auto CurPoolGroupID = 0x330; // Size: 4, Type: int32_t
			constexpr auto MapMarkArray = 0x348; // Size: 16, Type: struct TArray<struct UMapMarkBase*>
			constexpr auto CachedHandles = 0x358; // Size: 16, Type: struct TArray<struct FTimerHandle>
			constexpr auto DemoRotationSpeed = 0x368; // Size: 4, Type: float
			constexpr auto DemoSwtichTime = 0x36c; // Size: 4, Type: float
			constexpr auto DemoOffsetFromZ = 0x370; // Size: 4, Type: float
			constexpr auto ItemDemoBPTable = 0x378; // Size: 40, Type: struct TSoftObjectPtr<UDataTable>
			constexpr auto ItemDemoBPDataTable = 0x3a0; // Size: 8, Type: struct UDataTable*
			constexpr auto DemoActorMap = 0x3a8; // Size: 80, Type: struct TMap<struct FSoftObjectPath, struct AElectricShopItemDemo*>
			constexpr auto CurDemo = 0x3f8; // Size: 8, Type: struct AElectricShopItemDemo*
			constexpr auto DemoLoopPlaybackHandle = 0x400; // Size: 8, Type: struct FTimerHandle
			constexpr auto SpawnedDemoActorList = 0x408; // Size: 16, Type: struct TArray<struct AElectricShopItemDemo*>
			constexpr auto CachedDemoItemsClass = 0x440; // Size: 16, Type: struct TArray<struct UObject*>
	}
} 
