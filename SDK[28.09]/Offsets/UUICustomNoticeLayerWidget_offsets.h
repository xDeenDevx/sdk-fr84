namespace offsets
{
	namespace UUICustomNoticeLayerWidget
	{
			constexpr auto NoticePanel = 0x348; // Size: 80, Type: struct TMap<enum class ECustomNoticeType, struct UCanvasPanel*>
			constexpr auto NoticeColor = 0x438; // Size: 80, Type: struct TMap<enum class ECustomNoticeColor, struct FNoticeColorData>
			constexpr auto NoticeConfig = 0x488; // Size: 8, Type: struct UCustomNoticeTable*
			constexpr auto NoticeImageConfig = 0x490; // Size: 8, Type: struct UCustomNoticeImageTable*
			constexpr auto GlobalKillNoticeWidgetPath = 0x498; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto GlobalKillMaxShowNum = 0x4b0; // Size: 4, Type: int32_t
			constexpr auto GlobalKillNoticeBeginPosX = 0x4b4; // Size: 4, Type: int32_t
			constexpr auto GlobalKillNoticeBeginPosY = 0x4b8; // Size: 4, Type: int32_t
			constexpr auto GlobalKillNoticeInterval = 0x4bc; // Size: 4, Type: int32_t
			constexpr auto PickUpNoticeNormalPtr = 0x4e8; // Size: 8, Type: struct TWeakObjectPtr<UBattleNoticePickup>
			constexpr auto PickUpNoticeHomePtr = 0x4f0; // Size: 8, Type: struct TWeakObjectPtr<UBattleNoticePickup>
			constexpr auto EquipReplaceNoticePtr = 0x4f8; // Size: 8, Type: struct TWeakObjectPtr<UBattleNoticeEquipReplace>
			constexpr auto SkydivingCaptainNoticeId = 0x504; // Size: 4, Type: int32_t
	}
} 
