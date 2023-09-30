namespace offsets
{
	namespace UARSessionConfig
	{
			constexpr auto bGenerateMeshDataFromTrackedGeometry = 0x30; // Size: 1, Type: bool
			constexpr auto bGenerateCollisionForMeshData = 0x31; // Size: 1, Type: bool
			constexpr auto bGenerateNavMeshForMeshData = 0x32; // Size: 1, Type: bool
			constexpr auto bUseMeshDataForOcclusion = 0x33; // Size: 1, Type: bool
			constexpr auto bRenderMeshDataInWireframe = 0x34; // Size: 1, Type: bool
			constexpr auto bTrackSceneObjects = 0x35; // Size: 1, Type: bool
			constexpr auto bUsePersonSegmentationForOcclusion = 0x36; // Size: 1, Type: bool
			constexpr auto WorldAlignment = 0x37; // Size: 1, Type: enum class EARWorldAlignment
			constexpr auto SessionType = 0x38; // Size: 1, Type: enum class EARSessionType
			constexpr auto PlaneDetectionMode = 0x39; // Size: 1, Type: enum class EARPlaneDetectionMode
			constexpr auto bHorizontalPlaneDetection = 0x3a; // Size: 1, Type: bool
			constexpr auto bVerticalPlaneDetection = 0x3b; // Size: 1, Type: bool
			constexpr auto bEnableAutoFocus = 0x3c; // Size: 1, Type: bool
			constexpr auto LightEstimationMode = 0x3d; // Size: 1, Type: enum class EARLightEstimationMode
			constexpr auto FrameSyncMode = 0x3e; // Size: 1, Type: enum class EARFrameSyncMode
			constexpr auto bEnableAutomaticCameraOverlay = 0x3f; // Size: 1, Type: bool
			constexpr auto bEnableAutomaticCameraTracking = 0x40; // Size: 1, Type: bool
			constexpr auto bResetCameraTracking = 0x41; // Size: 1, Type: bool
			constexpr auto bResetTrackedObjects = 0x42; // Size: 1, Type: bool
			constexpr auto CandidateImages = 0x48; // Size: 16, Type: struct TArray<struct UARCandidateImage*>
			constexpr auto MaxNumSimultaneousImagesTracked = 0x58; // Size: 4, Type: int32_t
			constexpr auto EnvironmentCaptureProbeType = 0x5c; // Size: 1, Type: enum class EAREnvironmentCaptureProbeType
			constexpr auto WorldMapData = 0x60; // Size: 16, Type: struct TArray<char>
			constexpr auto CandidateObjects = 0x70; // Size: 16, Type: struct TArray<struct UARCandidateObject*>
			constexpr auto DesiredVideoFormat = 0x80; // Size: 12, Type: struct FARVideoFormat
			constexpr auto FaceTrackingDirection = 0x8c; // Size: 1, Type: enum class EARFaceTrackingDirection
			constexpr auto FaceTrackingUpdate = 0x8d; // Size: 1, Type: enum class EARFaceTrackingUpdate
			constexpr auto SerializedARCandidateImageDatabase = 0x90; // Size: 16, Type: struct TArray<char>
			constexpr auto EnabledSessionTrackingFeature = 0xa0; // Size: 1, Type: enum class EARSessionTrackingFeature
	}
} 
