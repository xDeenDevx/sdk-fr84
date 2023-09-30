namespace offsets
{
	namespace UMeshComponent
	{
			constexpr auto OverrideMaterials = 0x540; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto bNeedMultiplePass = 0x550; // Size: 1, Type: bool
			constexpr auto bForceFrontFaceCull = 0x551; // Size: 1, Type: bool
			constexpr auto bIgnoreTranslucentSection = 0x552; // Size: 1, Type: bool
			constexpr auto bIgnoreMaskedSection = 0x553; // Size: 1, Type: bool
			constexpr auto MultiplePassMaterial = 0x558; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto bEnableMaterialParameterCaching = 0x570; // Size: 1, Type: char
	}
} 
