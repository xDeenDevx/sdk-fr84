namespace offsets
{
	namespace UAdvProgressBase
	{
			constexpr auto Progress = 0x260; // Size: 8, Type: struct UImage*
			constexpr auto ProgressShader = 0x268; // Size: 8, Type: struct UMaterialInstance*
			constexpr auto Speed = 0x270; // Size: 4, Type: float
			constexpr auto CurrentHP = 0x274; // Size: 4, Type: float
			constexpr auto MaxHP = 0x278; // Size: 4, Type: float
			constexpr auto ActionMap = 0x280; // Size: 80, Type: struct TMap<int32_t, float>
			constexpr auto AnimCurrentHP = 0x2d0; // Size: 4, Type: float
			constexpr auto ProgressAdd = 0x2d4; // Size: 4, Type: float
			constexpr auto ProgressMinus = 0x2d8; // Size: 4, Type: float
	}
} 
