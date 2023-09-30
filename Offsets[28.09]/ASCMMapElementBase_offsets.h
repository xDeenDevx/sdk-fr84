namespace offsets
{
	namespace ASCMMapElementBase
	{
			constexpr auto bPersistent = 0x228; // Size: 1, Type: bool
			constexpr auto Side = 0x230; // Size: 16, Type: struct FString
			constexpr auto Job = 0x240; // Size: 16, Type: struct FString
			constexpr auto ElementID = 0x250; // Size: 16, Type: struct FString
			constexpr auto Type = 0x260; // Size: 1, Type: enum class ESCMMapElementType
			constexpr auto State = 0x261; // Size: 1, Type: enum class ESCMMapElementStateType
			constexpr auto Visibility = 0x262; // Size: 1, Type: enum class ESCMMapElementVisibilityType
			constexpr auto MapElementRPCComponentClass = 0x268; // Size: 8, Type: USCMMapElementRPCComponent*
			constexpr auto ElementName = 0x270; // Size: 8, Type: struct FName
			constexpr auto bUseSceneActorOptimization = 0x278; // Size: 1, Type: char
	}
} 
