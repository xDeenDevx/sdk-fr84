namespace offsets
{
	namespace USolarDragDropOperation
	{
			constexpr auto dropId = 0x88; // Size: 4, Type: int32_t
			constexpr auto DropNum = 0x8c; // Size: 4, Type: int32_t
			constexpr auto DropWeaponSlot = 0x90; // Size: 4, Type: int32_t
			constexpr auto DropItemType = 0x94; // Size: 4, Type: int32_t
			constexpr auto DropName = 0x98; // Size: 16, Type: struct FString
			constexpr auto DropFromGridType = 0xa8; // Size: 4, Type: int32_t
			constexpr auto DropFromIndex = 0xac; // Size: 4, Type: int32_t
			constexpr auto DropActor = 0xb0; // Size: 8, Type: struct AActor*
			constexpr auto DropGrade = 0xb8; // Size: 4, Type: int32_t
			constexpr auto DropFromPickupType = 0xbc; // Size: 4, Type: int32_t
			constexpr auto DropFromThisID = 0xc0; // Size: 4, Type: int32_t
			constexpr auto DropWeaponPartType = 0xc4; // Size: 4, Type: int32_t
			constexpr auto DropLevel = 0xc8; // Size: 4, Type: int32_t
	}
} 
