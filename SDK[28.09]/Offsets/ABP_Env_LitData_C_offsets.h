namespace offsets
{
	namespace ABP_Env_LitData_C
	{
			constexpr auto UberGraphFrame = 0x228; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto DefaultSceneRoot = 0x230; // Size: 8, Type: struct USceneComponent*
			constexpr auto SkyLight = 0x238; // Size: 8, Type: struct ASkyLight*
			constexpr auto DirectionalLight = 0x240; // Size: 8, Type: struct ADirectionalLight*
			constexpr auto LocalLightData = 0x248; // Size: 112, Type: struct FStr_LightData
			constexpr auto LightDatas = 0x2b8; // Size: 80, Type: struct TMap<struct FString, struct FStr_LightData>
			constexpr auto CharacterEdgeLitControl = 0x308; // Size: 8, Type: struct ABP_C_EdgeLitControl_C*
			constexpr auto NewVar_1 = 0x310; // Size: 8, Type: struct ASkyLight*
			constexpr auto bUseDefaultLight = 0x318; // Size: 1, Type: bool
			constexpr auto CurrentLightDataKey = 0x320; // Size: 16, Type: struct FString
	}
} 
