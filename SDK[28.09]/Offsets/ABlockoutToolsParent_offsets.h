namespace offsets
{
	namespace ABlockoutToolsParent
	{
			constexpr auto Root = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto Billboard = 0x230; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto BlockoutGridParent = 0x238; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto BlockoutGridMID = 0x240; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto BlockoutCurrentMaterial = 0x248; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto BlockoutMeshComponents = 0x250; // Size: 16, Type: struct TArray<struct UStaticMeshComponent*>
			constexpr auto BlockoutMaterialType = 0x260; // Size: 1, Type: enum class EBlockoutMaterialType
			constexpr auto BlockoutMaterialColor = 0x264; // Size: 16, Type: struct FLinearColor
			constexpr auto bBlockoutMaterialUseGrid = 0x274; // Size: 1, Type: bool
			constexpr auto BlockoutMaterialGridSize = 0x278; // Size: 4, Type: float
			constexpr auto BlockoutMaterialCheckerLuminance = 0x27c; // Size: 4, Type: float
			constexpr auto bBlockoutMaterialUseTopColor = 0x280; // Size: 1, Type: bool
			constexpr auto BlockoutMaterialTopColor = 0x284; // Size: 16, Type: struct FLinearColor
			constexpr auto bUseCustomMaterial = 0x294; // Size: 1, Type: bool
			constexpr auto CustomMaterial = 0x298; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto BlockoutCustomMaterial = 0x2a0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto bBlockoutEnableCollisions = 0x2a8; // Size: 1, Type: bool
			constexpr auto bBlockoutCastShadows = 0x2a9; // Size: 1, Type: bool
	}
} 
