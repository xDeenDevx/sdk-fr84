namespace offsets
{
	namespace UWorldMarkComponent
	{
			constexpr auto Owner = 0xc8; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto WorldMarkPoolOriginSize = 0xd0; // Size: 4, Type: uint32_t
			constexpr auto MinCheckDistance = 0xd4; // Size: 4, Type: float
			constexpr auto MaxCheckDistance = 0xd8; // Size: 4, Type: float
			constexpr auto AutoMarkIsCoolingDown = 0xdc; // Size: 1, Type: bool
			constexpr auto AttachedToCharacterNumLimit = 0x138; // Size: 4, Type: int32_t
			constexpr auto ChosenMarksTable = 0x190; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<UHUD_WorldMark>>
			constexpr auto CurrentChosenMark = 0x1a0; // Size: 8, Type: struct TWeakObjectPtr<UHUD_WorldMark>
			constexpr auto WorldMarkPool = 0x1e8; // Size: 16, Type: struct TArray<struct UHUD_WorldMark*>
	}
} 
