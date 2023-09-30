namespace offsets
{
	namespace APreviewActor
	{
			constexpr auto DefaultSpawnTransform = 0x230; // Size: 48, Type: struct FTransform
			constexpr auto ShowTransformRight = 0x260; // Size: 48, Type: struct FTransform
			constexpr auto ShowTransformBattlePassRight = 0x290; // Size: 48, Type: struct FTransform
			constexpr auto ShowTransformLuckDraw = 0x2c0; // Size: 48, Type: struct FTransform
			constexpr auto ShowTransformCarouselDraw = 0x2f0; // Size: 48, Type: struct FTransform
			constexpr auto ShowTransformGetReward = 0x320; // Size: 48, Type: struct FTransform
			constexpr auto ShowTransformGrowTask = 0x350; // Size: 48, Type: struct FTransform
			constexpr auto ShowTransformSupplyBoxRaffle = 0x380; // Size: 48, Type: struct FTransform
			constexpr auto ShowTransformSupplyBoxLobby = 0x3b0; // Size: 48, Type: struct FTransform
			constexpr auto ShowTransformCharacterWarehouse = 0x3e0; // Size: 48, Type: struct FTransform
			constexpr auto DissolveCurvePath = 0x410; // Size: 40, Type: struct TSoftObjectPtr<UCurveVector>
			constexpr auto DissolveMatPath = 0x438; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto FresnelCurvePath = 0x460; // Size: 40, Type: struct TSoftObjectPtr<UCurveVector>
			constexpr auto FresnelMatPath = 0x488; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto SwitchParticleEffectPath = 0x4b0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto bPlaySwitchEffect = 0x4e0; // Size: 1, Type: bool
			constexpr auto SwitchEffectInterval = 0x4e4; // Size: 4, Type: float
			constexpr auto SelfDelayShowSeconds = 0x4e8; // Size: 4, Type: float
			constexpr auto BackpackAnimInfo = 0x4f0; // Size: 12, Type: struct FBackpackAnimInfo
	}
} 
