namespace offsets
{
	namespace USolarLobbyCharacterData
	{
			constexpr auto SkinShareImage = 0x30; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto SkinBackgroundShare = 0x48; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto Mesh = 0x60; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto Material = 0x78; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto CharacterTransformData = 0x90; // Size: 80, Type: struct TMap<uint16_t, struct FCharacterTransformData>
			constexpr auto MaterialArray = 0xe0; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto CharacterChangeMat = 0xf0; // Size: 80, Type: struct TMap<struct FString, struct TSoftObjectPtr<UMaterialInterface>>
			constexpr auto AnimBlueprint = 0x140; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto WinAnimation = 0x158; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto IdleShowList = 0x170; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto LobbyIdleAnimation = 0x180; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto AccessoryBlueprint = 0x198; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto EnterAnim = 0x1b0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ExitAnim = 0x1c8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto RefuseAnim = 0x1e0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto EncounterIdleAnim = 0x1f8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto EncounterIdleShowList = 0x210; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto RecommendAnimBlueprint = 0x220; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto bParameterChanged = 0x238; // Size: 1, Type: bool
			constexpr auto PSAttachArray = 0x240; // Size: 16, Type: struct TArray<struct FPSAttachElem>
			constexpr auto IdleShowSequence = 0x250; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto LeftHandProp = 0x268; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto RightHandProp = 0x280; // Size: 24, Type: struct FSoftObjectPath
	}
} 
