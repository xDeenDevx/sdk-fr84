namespace offsets
{
	namespace USolarCharacterSettings
	{
			constexpr auto CharacterGlobalConfig = 0x38; // Size: 40, Type: struct TSoftObjectPtr<UCharacterGlobalConfig>
			constexpr auto CharacterGameplayTagsConfig = 0x60; // Size: 40, Type: struct TSoftObjectPtr<UCharacterGameplayTagsConfig>
			constexpr auto MaterialChangePriorityTags = 0x88; // Size: 40, Type: struct TSoftObjectPtr<UMaterialChangePriorityTags>
			constexpr auto VisibilityFlagTags = 0xb0; // Size: 40, Type: struct TSoftObjectPtr<UVisibilityFlagTags>
			constexpr auto CharacterMontageTags = 0xd8; // Size: 40, Type: struct TSoftObjectPtr<UCharacterMontageTags>
			constexpr auto CharacterMontageMappingTable = 0x100; // Size: 40, Type: struct TSoftObjectPtr<UDataTable>
			constexpr auto EmotionMontageMappingTable = 0x128; // Size: 40, Type: struct TSoftObjectPtr<UDataTable>
			constexpr auto CharacterBodyScaleConfig = 0x150; // Size: 40, Type: struct TSoftObjectPtr<UCharacterBodyScaleConfigDataAsset>
	}
} 
