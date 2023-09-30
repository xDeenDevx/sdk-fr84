namespace offsets
{
	namespace UGaugeImage
	{
			constexpr auto GaugeType = 0x260; // Size: 1, Type: enum class EGaugeType
			constexpr auto bInvert = 0x261; // Size: 1, Type: bool
			constexpr auto ImageSize = 0x264; // Size: 8, Type: struct FVector2D
			constexpr auto InitialDegree = 0x26c; // Size: 4, Type: float
			constexpr auto bSymmetric = 0x270; // Size: 1, Type: bool
			constexpr auto CenterOffset = 0x274; // Size: 8, Type: struct FVector2D
			constexpr auto ResourceObject = 0x280; // Size: 8, Type: struct UObject*
			constexpr auto Progress = 0x288; // Size: 4, Type: float
			constexpr auto MaterialDegree360 = 0x290; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaterialDegree180 = 0x298; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaterialDegree90 = 0x2a0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaterialDegreeLR = 0x2a8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MaterialDegreeUD = 0x2b0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TargetImage = 0x2b8; // Size: 8, Type: struct UImage*
			constexpr auto MaterialInstance = 0x2c0; // Size: 8, Type: struct UMaterialInstanceDynamic*
	}
} 
