namespace offsets
{
	namespace ASolarZiplineObj
	{
			constexpr auto ZipTriggerTag = 0x228; // Size: 8, Type: struct FGameplayTag
			constexpr auto ZippingStatusTag = 0x230; // Size: 8, Type: struct FGameplayTag
			constexpr auto ZipActionName = 0x238; // Size: 8, Type: struct FName
			constexpr auto ZiplineObjData = 0x240; // Size: 116, Type: struct FZiplineObjData
			constexpr auto ASideCollisionComp = 0x2b8; // Size: 8, Type: struct UBoxComponent*
			constexpr auto BSideCollisionComp = 0x2c0; // Size: 8, Type: struct UBoxComponent*
			constexpr auto CableCollisionComp = 0x2c8; // Size: 8, Type: struct UBoxComponent*
			constexpr auto InstigateCharacter = 0x2d0; // Size: 8, Type: struct TWeakObjectPtr<ASolarCharacter>
			constexpr auto SlidingCharacters = 0x2d8; // Size: 16, Type: struct TArray<struct ASolarCharacter*>
			constexpr auto BeginningSide = 0x2ec; // Size: 1, Type: enum class EZiplineSide
	}
} 
