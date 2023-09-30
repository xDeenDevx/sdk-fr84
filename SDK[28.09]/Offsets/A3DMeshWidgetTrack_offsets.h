namespace offsets
{
	namespace A3DMeshWidgetTrack
	{
			constexpr auto BoxHalfExtent = 0x240; // Size: 12, Type: struct FVector
			constexpr auto PlayerNearbyAlpha = 0x24c; // Size: 4, Type: float
			constexpr auto bDebugCollision = 0x250; // Size: 1, Type: bool
			constexpr auto MaterialAlphaParamName = 0x254; // Size: 8, Type: struct FName
			constexpr auto MaterialCountDownName = 0x25c; // Size: 8, Type: struct FName
			constexpr auto MaxTraceDist = 0x264; // Size: 4, Type: float
			constexpr auto DistFromGround = 0x268; // Size: 4, Type: float
			constexpr auto StaticMeshCountDown = 0x270; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DistTextComp = 0x278; // Size: 8, Type: struct UTextRenderComponent*
			constexpr auto DynamicMaterialIcon = 0x280; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto DynamicMaterialCountDown = 0x288; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto DynamicMaterialDistText = 0x290; // Size: 8, Type: struct UMaterialInstanceDynamic*
	}
} 
