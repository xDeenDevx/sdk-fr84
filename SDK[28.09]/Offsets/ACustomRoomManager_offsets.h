namespace offsets
{
	namespace ACustomRoomManager
	{
			constexpr auto RoomTeamMemberLimit = 0x228; // Size: 4, Type: int32_t
			constexpr auto RoomLeftTime = 0x22c; // Size: 4, Type: int32_t
			constexpr auto bIsGameStarted = 0x230; // Size: 1, Type: bool
			constexpr auto JobName = 0x238; // Size: 16, Type: struct FString
			constexpr auto bIsWeaponSettingOpen = 0x248; // Size: 1, Type: bool
			constexpr auto bIsVehicleSettingOpen = 0x249; // Size: 1, Type: bool
			constexpr auto CustomParamConfigMap = 0x250; // Size: 80, Type: struct TMap<struct FString, struct FCustomParamConfig>
			constexpr auto UserSettingList = 0x2a0; // Size: 16, Type: struct TArray<struct FUserSetting>
			constexpr auto WeaponTypeAvailableList = 0x2b0; // Size: 16, Type: struct TArray<char>
			constexpr auto VehicleClassAvailableList = 0x2c0; // Size: 16, Type: struct TArray<char>
			constexpr auto WeaponSettingBlacklist = 0x2d0; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto VehicleTypeSettingBlacklist = 0x2e0; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto WeaponTypeAvailableChangedEvent = 0x2f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto WeaponSettingBlacklistChangedEvent = 0x300; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto VehicleClassAvailableChangedEvent = 0x310; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto VehicleTypeSettingBlacklistChangedEvent = 0x320; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
