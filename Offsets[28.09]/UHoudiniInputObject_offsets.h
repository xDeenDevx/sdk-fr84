namespace offsets
{
	namespace UHoudiniInputObject
	{
			constexpr auto InputObject = 0x28; // Size: 40, Type: struct TSoftObjectPtr<UObject>
			constexpr auto Transform = 0x50; // Size: 48, Type: struct FTransform
			constexpr auto Type = 0x80; // Size: 1, Type: enum class EHoudiniInputObjectType
			constexpr auto InputNodeId = 0x84; // Size: 4, Type: int32_t
			constexpr auto InputObjectNodeId = 0x88; // Size: 4, Type: int32_t
			constexpr auto Guid = 0x8c; // Size: 16, Type: struct FGuid
			constexpr auto bHasChanged = 0xc8; // Size: 1, Type: bool
			constexpr auto bNeedsToTriggerUpdate = 0xc9; // Size: 1, Type: bool
			constexpr auto bTransformChanged = 0xca; // Size: 1, Type: bool
			constexpr auto bImportAsReference = 0xcb; // Size: 1, Type: bool
			constexpr auto bImportAsReferenceRotScaleEnabled = 0xcc; // Size: 1, Type: bool
			constexpr auto bImportAsReferenceBboxEnabled = 0xcd; // Size: 1, Type: bool
			constexpr auto bImportAsReferenceMaterialEnabled = 0xce; // Size: 1, Type: bool
			constexpr auto MaterialReferences = 0xd0; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto bCanDeleteHoudiniNodes = 0xe0; // Size: 1, Type: bool
	}
} 
