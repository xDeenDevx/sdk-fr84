namespace offsets
{
	namespace USolarSwitchTargetCameraControlComp
	{
			constexpr auto SpectateLevelSequenceActorClass = 0xb0; // Size: 8, Type: ASolarSpectateLevelSequenceActor*
			constexpr auto CameraBlendCurveHeightScale = 0xb8; // Size: 4, Type: float
			constexpr auto CameraBlendSpeed = 0xbc; // Size: 4, Type: float
			constexpr auto MinCameraBlendDistanceBetweenTargets = 0xc0; // Size: 4, Type: float
			constexpr auto SpectateLevelSequenceActor = 0x100; // Size: 8, Type: struct ASolarSpectateLevelSequenceActor*
			constexpr auto IntermediatePointCameraActor = 0x118; // Size: 8, Type: struct ACameraActor*
			constexpr auto IntermediateEndTarget = 0x130; // Size: 8, Type: struct TWeakObjectPtr<AActor>
			constexpr auto EndTargetCameraCache = 0x138; // Size: 8, Type: struct TWeakObjectPtr<UCameraComponent>
	}
} 
