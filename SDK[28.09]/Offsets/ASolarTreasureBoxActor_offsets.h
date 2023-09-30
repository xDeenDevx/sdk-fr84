namespace offsets
{
	namespace ASolarTreasureBoxActor
	{
			constexpr auto CurrentState = 0x3e0; // Size: 1, Type: enum class ETreasureBoxState
			constexpr auto ItemDataList = 0x3e8; // Size: 280, Type: struct FSolarItemDataArray
			constexpr auto SortedGameItemDatas = 0x500; // Size: 16, Type: struct TArray<struct FSolarItemData>
			constexpr auto DataLeng = 0x530; // Size: 4, Type: int32_t
			constexpr auto CostType = 0x534; // Size: 1, Type: enum class ECostType
			constexpr auto CostNum = 0x538; // Size: 4, Type: int32_t
			constexpr auto HighestItemQuality = 0x590; // Size: 4, Type: int32_t
			constexpr auto BurstRadius = 0x594; // Size: 4, Type: float
			constexpr auto BurstRadiusRandScale = 0x598; // Size: 4, Type: float
			constexpr auto BurstLocalHeight = 0x59c; // Size: 4, Type: float
			constexpr auto BurstEulerAngle = 0x5a0; // Size: 4, Type: float
			constexpr auto bBurstSplitItem = 0x5a4; // Size: 1, Type: bool
			constexpr auto BurstMethod = 0x5a5; // Size: 1, Type: enum class EBurstMethod
			constexpr auto RadSafeSlopeToBurstOn = 0x5a8; // Size: 4, Type: float
			constexpr auto GoldenSpiralMinRadiusSquared = 0x5ac; // Size: 4, Type: float
			constexpr auto BurstItemActors = 0x5b0; // Size: 16, Type: struct TArray<struct ASolarBurstItemActor*>
			constexpr auto AkAudioComponent = 0x5c0; // Size: 8, Type: struct UAkComponent*
			constexpr auto SolarAkGameObject = 0x5c8; // Size: 8, Type: struct USolarAkGameObject*
	}
} 
