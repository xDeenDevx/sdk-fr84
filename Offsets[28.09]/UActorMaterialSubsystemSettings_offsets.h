namespace offsets
{
	namespace UActorMaterialSubsystemSettings
	{
			constexpr auto DefaultMaterialChangePriorityTag = 0x38; // Size: 8, Type: struct FGameplayTag
			constexpr auto OrderedMaterialChangePriorityGroups = 0x40; // Size: 16, Type: struct TArray<struct FMaterialChangePriorityGroup>
			constexpr auto GlobalNoChangeMaterials = 0x50; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto GlobalForceChangeMaterials = 0x60; // Size: 16, Type: struct TArray<struct FForceChangeMaterialInfos>
	}
} 
