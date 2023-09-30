namespace offsets
{
	namespace ASolarBackpackerVehicle
	{
			constexpr auto VehicleHitBox = 0x13c8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto BackpackMesh = 0x13d0; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto OriginalBackpackMesh = 0x13f8; // Size: 8, Type: struct UStaticMesh*
			constexpr auto BackpackerItemID = 0x1400; // Size: 4, Type: int32_t
			constexpr auto SheildRecoverEffect = 0x1408; // Size: 8, Type: UGameplayEffect*
			constexpr auto AttachedPlayer = 0x1410; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto bShieldOpened = 0x1418; // Size: 1, Type: bool
			constexpr auto bVehicleDroped = 0x1419; // Size: 1, Type: bool
	}
} 
