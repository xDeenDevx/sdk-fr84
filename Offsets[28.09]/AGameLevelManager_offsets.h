namespace offsets
{
	namespace AGameLevelManager
	{
			constexpr auto DesiredLoadLevel = 0x248; // Size: 16, Type: struct FString
			constexpr auto DesiredLoadElementLevels = 0x268; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto DesiredUnLoadElementLevels = 0x278; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto LevelKeyToObject = 0x330; // Size: 80, Type: struct TMap<struct FString, struct ULevelStreamingDynamic*>
			constexpr auto MovementDisabledCharacters = 0x380; // Size: 80, Type: struct TSet<struct ASolarCharacter*>
			constexpr auto LoadingElementLevelNames = 0x430; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto UnLoadingElementLevelNames = 0x440; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto MapElementManager = 0x468; // Size: 8, Type: struct AGameMapElementManager*
	}
} 
