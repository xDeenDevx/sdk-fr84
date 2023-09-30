namespace offsets
{
	namespace ASolarItemActor
	{
			constexpr auto ItemData = 0x268; // Size: 184, Type: struct FSolarItemData
			constexpr auto SpawnOffset = 0x320; // Size: 4, Type: float
			constexpr auto DiscardMatPath = 0x328; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto OutlineMatPath = 0x338; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto FXPath = 0x350; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto NoneMeshFxOffset = 0x368; // Size: 4, Type: float
			constexpr auto FXBPPath = 0x370; // Size: 16, Type: struct FString
			constexpr auto SphereComponent = 0x380; // Size: 8, Type: struct USphereComponent*
			constexpr auto FXActor = 0x38c; // Size: 8, Type: struct TWeakObjectPtr<AActor>
			constexpr auto ItemCurrentState = 0x394; // Size: 1, Type: enum class EItemState
			constexpr auto MarkedTeamIdList = 0x3a0; // Size: 16, Type: struct TArray<char>
			constexpr auto StaticMeshComp = 0x3b8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto NormalMats = 0x3c0; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto OutlineMats = 0x3d0; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
	}
} 
