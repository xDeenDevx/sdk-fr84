namespace offsets
{
	namespace USceneCaptureComponent
	{
			constexpr auto PrimitiveRenderMode = 0x318; // Size: 1, Type: enum class ESceneCapturePrimitiveRenderMode
			constexpr auto CaptureSource = 0x319; // Size: 1, Type: enum class ESceneCaptureSource
			constexpr auto bCaptureEveryFrame = 0x31a; // Size: 1, Type: char
			constexpr auto bCaptureOnMovement = 0x31a; // Size: 1, Type: char
			constexpr auto bAlwaysPersistRenderingState = 0x31b; // Size: 1, Type: bool
			constexpr auto HiddenComponents = 0x320; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>>
			constexpr auto HiddenActors = 0x330; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto ShowOnlyComponents = 0x340; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>>
			constexpr auto ShowOnlyActors = 0x350; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto LODDistanceFactor = 0x360; // Size: 4, Type: float
			constexpr auto MaxViewDistanceOverride = 0x364; // Size: 4, Type: float
			constexpr auto CaptureSortPriority = 0x368; // Size: 4, Type: int32_t
			constexpr auto bUseRayTracingIfEnabled = 0x36c; // Size: 1, Type: bool
			constexpr auto ShowFlagSettings = 0x370; // Size: 16, Type: struct TArray<struct FEngineShowFlagsSetting>
			constexpr auto ProfilingEventName = 0x390; // Size: 16, Type: struct FString
	}
} 
