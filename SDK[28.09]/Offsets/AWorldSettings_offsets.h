namespace offsets
{
	namespace AWorldSettings
	{
			constexpr auto VisibilityCellSize = 0x230; // Size: 4, Type: int32_t
			constexpr auto VisibilityAggressiveness = 0x234; // Size: 1, Type: enum class EVisibilityAggressiveness
			constexpr auto bPrecomputeVisibility = 0x235; // Size: 1, Type: char
			constexpr auto bPlaceCellsOnlyAlongCameraTracks = 0x235; // Size: 1, Type: char
			constexpr auto bEnableWorldBoundsChecks = 0x235; // Size: 1, Type: char
			constexpr auto bEnableNavigationSystem = 0x235; // Size: 1, Type: char
			constexpr auto bEnableAISystem = 0x235; // Size: 1, Type: char
			constexpr auto bEnableWorldComposition = 0x235; // Size: 1, Type: char
			constexpr auto DirectoriesToScan = 0x238; // Size: 16, Type: struct TArray<struct FDirectoryPath>
			constexpr auto MapsToScan = 0x248; // Size: 16, Type: struct TArray<struct FFilePath>
			constexpr auto DirectoriesToNeverScan = 0x258; // Size: 16, Type: struct TArray<struct FDirectoryPath>
			constexpr auto MapsToNeverScan = 0x268; // Size: 16, Type: struct TArray<struct FFilePath>
			constexpr auto WaitForShownLevels = 0x278; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto bUseClientSideLevelStreamingVolumes = 0x288; // Size: 1, Type: char
			constexpr auto bEnableWorldOriginRebasing = 0x288; // Size: 1, Type: char
			constexpr auto bWorldGravitySet = 0x288; // Size: 1, Type: char
			constexpr auto bGlobalGravitySet = 0x288; // Size: 1, Type: char
			constexpr auto bMinimizeBSPSections = 0x288; // Size: 1, Type: char
			constexpr auto bForceNoPrecomputedLighting = 0x288; // Size: 1, Type: char
			constexpr auto bHighPriorityLoading = 0x288; // Size: 1, Type: char
			constexpr auto bHighPriorityLoadingLocal = 0x288; // Size: 1, Type: char
			constexpr auto bOverrideDefaultBroadphaseSettings = 0x289; // Size: 1, Type: char
			constexpr auto NavigationSystemConfig = 0x290; // Size: 8, Type: struct UNavigationSystemConfig*
			constexpr auto NavigationSystemConfigOverride = 0x298; // Size: 8, Type: struct UNavigationSystemConfig*
			constexpr auto WorldToMeters = 0x2a0; // Size: 4, Type: float
			constexpr auto KillZ = 0x2a4; // Size: 4, Type: float
			constexpr auto KillZDamageType = 0x2a8; // Size: 8, Type: UDamageType*
			constexpr auto WorldGravityZ = 0x2b0; // Size: 4, Type: float
			constexpr auto GlobalGravityZ = 0x2b4; // Size: 4, Type: float
			constexpr auto DefaultPhysicsVolumeClass = 0x2b8; // Size: 8, Type: ADefaultPhysicsVolume*
			constexpr auto PhysicsCollisionHandlerClass = 0x2c0; // Size: 8, Type: UPhysicsCollisionHandler*
			constexpr auto DefaultGameMode = 0x2c8; // Size: 8, Type: AGameModeBase*
			constexpr auto GameNetworkManagerClass = 0x2d0; // Size: 8, Type: AGameNetworkManager*
			constexpr auto PackedLightAndShadowMapTextureSize = 0x2d8; // Size: 4, Type: int32_t
			constexpr auto DefaultColorScale = 0x2dc; // Size: 12, Type: struct FVector
			constexpr auto DefaultMaxDistanceFieldOcclusionDistance = 0x2e8; // Size: 4, Type: float
			constexpr auto GlobalDistanceFieldViewDistance = 0x2ec; // Size: 4, Type: float
			constexpr auto DynamicIndirectShadowsSelfShadowingIntensity = 0x2f0; // Size: 4, Type: float
			constexpr auto DefaultReverbSettings = 0x2f8; // Size: 32, Type: struct FReverbSettings
			constexpr auto DefaultAmbientZoneSettings = 0x318; // Size: 36, Type: struct FInteriorSettings
			constexpr auto MonoCullingDistance = 0x33c; // Size: 4, Type: float
			constexpr auto DefaultBaseSoundMix = 0x340; // Size: 8, Type: struct USoundMix*
			constexpr auto TimeDilation = 0x348; // Size: 4, Type: float
			constexpr auto MatineeTimeDilation = 0x34c; // Size: 4, Type: float
			constexpr auto DemoPlayTimeDilation = 0x350; // Size: 4, Type: float
			constexpr auto MinGlobalTimeDilation = 0x354; // Size: 4, Type: float
			constexpr auto MaxGlobalTimeDilation = 0x358; // Size: 4, Type: float
			constexpr auto MinUndilatedFrameTime = 0x35c; // Size: 4, Type: float
			constexpr auto MaxUndilatedFrameTime = 0x360; // Size: 4, Type: float
			constexpr auto BroadphaseSettings = 0x364; // Size: 64, Type: struct FBroadphaseSettings
			constexpr auto Pauser = 0x3a8; // Size: 8, Type: struct APlayerState*
			constexpr auto ReplicationViewers = 0x3b0; // Size: 16, Type: struct TArray<struct FNetViewer>
			constexpr auto AssetUserData = 0x3c0; // Size: 16, Type: struct TArray<struct UAssetUserData*>
			constexpr auto PauserPlayerState = 0x3d0; // Size: 8, Type: struct APlayerState*
			constexpr auto MaxNumberOfBookmarks = 0x3d8; // Size: 4, Type: int32_t
			constexpr auto DefaultBookmarkClass = 0x3e0; // Size: 8, Type: UBookmarkBase*
			constexpr auto BookmarkArray = 0x3e8; // Size: 16, Type: struct TArray<struct UBookmarkBase*>
			constexpr auto LastBookmarkClass = 0x3f8; // Size: 8, Type: UBookmarkBase*
	}
} 
