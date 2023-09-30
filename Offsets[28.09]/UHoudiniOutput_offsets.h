namespace offsets
{
	namespace UHoudiniOutput
	{
			constexpr auto Type = 0x28; // Size: 1, Type: enum class EHoudiniOutputType
			constexpr auto HoudiniGeoPartObjects = 0x30; // Size: 16, Type: struct TArray<struct FHoudiniGeoPartObject>
			constexpr auto OutputObjects = 0x40; // Size: 80, Type: struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject>
			constexpr auto InstancedOutputs = 0x90; // Size: 80, Type: struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput>
			constexpr auto AssignementMaterials = 0xe0; // Size: 80, Type: struct TMap<struct FString, struct UMaterialInterface*>
			constexpr auto ReplacementMaterials = 0x130; // Size: 80, Type: struct TMap<struct FString, struct UMaterialInterface*>
			constexpr auto bLandscapeWorldComposition = 0x184; // Size: 1, Type: bool
			constexpr auto HoudiniCreatedSocketActors = 0x188; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto HoudiniAttachedSocketActors = 0x198; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto bIsEditableNode = 0x1a8; // Size: 1, Type: bool
			constexpr auto bHasEditableNodeBuilt = 0x1a9; // Size: 1, Type: bool
			constexpr auto bIsUpdating = 0x1aa; // Size: 1, Type: bool
			constexpr auto bCanDeleteHoudiniNodes = 0x1ab; // Size: 1, Type: bool
	}
} 
