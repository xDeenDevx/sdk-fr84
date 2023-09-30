namespace offsets
{
	namespace UUIWeaponPartWidget
	{
			constexpr auto Img_Icon = 0x348; // Size: 8, Type: struct UImage*
			constexpr auto Img_LevelBg = 0x350; // Size: 8, Type: struct UImage*
			constexpr auto Img_PartsBg = 0x358; // Size: 8, Type: struct UImage*
			constexpr auto WidgetSize = 0x360; // Size: 8, Type: struct USizeBox*
			constexpr auto DragDropWidgetClass = 0x368; // Size: 8, Type: UUserWidget*
			constexpr auto ColorNotEquip = 0x370; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorDisable = 0x380; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorNormal = 0x390; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorQuality = 0x3a0; // Size: 16, Type: struct FLinearColor
			constexpr auto ItemID = 0x3b0; // Size: 4, Type: int32_t
			constexpr auto ItemNum = 0x3b4; // Size: 4, Type: int32_t
			constexpr auto ItemType = 0x3b8; // Size: 4, Type: enum class EItemType
			constexpr auto ItemName = 0x3c0; // Size: 16, Type: struct FString
			constexpr auto WeaponSlot = 0x3d0; // Size: 4, Type: int32_t
			constexpr auto WeaponPartType = 0x3d4; // Size: 1, Type: enum class EWeaponPartType
			constexpr auto WeaponPartLevel = 0x3d8; // Size: 4, Type: int32_t
			constexpr auto EquippedPartType = 0x3dc; // Size: 1, Type: enum class EWeaponPartType
			constexpr auto CurrentState = 0x3dd; // Size: 1, Type: enum class EUIWeaponPartState
			constexpr auto bIsable = 0x3de; // Size: 1, Type: bool
			constexpr auto bUseHUDIcon = 0x3df; // Size: 1, Type: bool
			constexpr auto OffsetVec = 0x3e0; // Size: 8, Type: struct FVector2D
			constexpr auto DefaultWeaponPartIconMaps = 0x3e8; // Size: 80, Type: struct TMap<int32_t, struct FString>
			constexpr auto WeaponPartPrePath = 0x438; // Size: 16, Type: struct FString
			constexpr auto bApplyToWeaponSlot = 0x448; // Size: 1, Type: bool
			constexpr auto PartBGDefaultColor = 0x44c; // Size: 16, Type: struct FLinearColor
	}
} 
