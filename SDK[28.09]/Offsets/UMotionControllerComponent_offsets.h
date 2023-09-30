namespace offsets
{
	namespace UMotionControllerComponent
	{
			constexpr auto PlayerIndex = 0x540; // Size: 4, Type: int32_t
			constexpr auto Hand = 0x544; // Size: 1, Type: enum class EControllerHand
			constexpr auto MotionSource = 0x548; // Size: 8, Type: struct FName
			constexpr auto bDisableLowLatencyUpdate = 0x550; // Size: 1, Type: char
			constexpr auto CurrentTrackingStatus = 0x554; // Size: 1, Type: enum class ETrackingStatus
			constexpr auto bDisplayDeviceModel = 0x555; // Size: 1, Type: bool
			constexpr auto DisplayModelSource = 0x558; // Size: 8, Type: struct FName
			constexpr auto CustomDisplayMesh = 0x560; // Size: 8, Type: struct UStaticMesh*
			constexpr auto DisplayMeshMaterialOverrides = 0x568; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto DisplayComponent = 0x5e0; // Size: 8, Type: struct UPrimitiveComponent*
	}
} 
