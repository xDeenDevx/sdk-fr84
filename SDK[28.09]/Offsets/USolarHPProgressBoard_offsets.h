namespace offsets
{
	namespace USolarHPProgressBoard
	{
			constexpr auto ProgressBoard = 0x260; // Size: 8, Type: struct UImage*
			constexpr auto ProgressShader = 0x268; // Size: 8, Type: struct UMaterialInstance*
			constexpr auto Speed = 0x270; // Size: 4, Type: float
			constexpr auto RechargeSpeed = 0x274; // Size: 4, Type: float
			constexpr auto RechargeTime = 0x278; // Size: 4, Type: float
			constexpr auto RechargeIndex = 0x27c; // Size: 4, Type: int32_t
			constexpr auto bDebugMode = 0x280; // Size: 1, Type: bool
			constexpr auto Percent1 = 0x284; // Size: 4, Type: float
			constexpr auto Percent2 = 0x288; // Size: 4, Type: float
			constexpr auto Percent3 = 0x28c; // Size: 4, Type: float
			constexpr auto Percent4 = 0x290; // Size: 4, Type: float
			constexpr auto bNeedAlternateColor = 0x294; // Size: 1, Type: bool
			constexpr auto IncreaseColor = 0x298; // Size: 16, Type: struct FLinearColor
			constexpr auto DecreaseColor = 0x2a8; // Size: 16, Type: struct FLinearColor
	}
} 
