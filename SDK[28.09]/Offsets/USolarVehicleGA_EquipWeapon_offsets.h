namespace offsets
{
	namespace USolarVehicleGA_EquipWeapon
	{
			constexpr auto CameraDataAsset = 0x4d8; // Size: 8, Type: struct UVehicleCameraDataAsset*
			constexpr auto EquipDelayTimer = 0x4e0; // Size: 4, Type: float
			constexpr auto MaxDegreeBetweenMeshUpAndGloblaUp = 0x4e4; // Size: 4, Type: float
			constexpr auto EquipWeaponOverlapBoxes = 0x4e8; // Size: 16, Type: struct TArray<struct FVehicleEquipWeaponOverlapBox>
			constexpr auto EquipWeaponOverlapCapsules = 0x4f8; // Size: 16, Type: struct TArray<struct FVehicleEquipWeaponOverlapCapsule>
			constexpr auto FailToEquipWeaponNotice = 0x508; // Size: 4, Type: int32_t
			constexpr auto bSendMeshRelativeTransform = 0x50c; // Size: 1, Type: bool
			constexpr auto WeaponSeatIndex = 0x510; // Size: 4, Type: int32_t
	}
} 
