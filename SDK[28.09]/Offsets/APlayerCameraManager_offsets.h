namespace offsets
{
	namespace APlayerCameraManager
	{
			constexpr auto PCOwner = 0x228; // Size: 8, Type: struct APlayerController*
			constexpr auto TransformComponent = 0x230; // Size: 8, Type: struct USceneComponent*
			constexpr auto DefaultFOV = 0x240; // Size: 4, Type: float
			constexpr auto DefaultOrthoWidth = 0x248; // Size: 4, Type: float
			constexpr auto DefaultAspectRatio = 0x250; // Size: 4, Type: float
			constexpr auto CameraCache = 0x2a0; // Size: 1600, Type: struct FCameraCacheEntry
			constexpr auto LastFrameCameraCache = 0x8e0; // Size: 1600, Type: struct FCameraCacheEntry
			constexpr auto ViewTarget = 0xf20; // Size: 1616, Type: struct FTViewTarget
			constexpr auto PendingViewTarget = 0x1570; // Size: 1616, Type: struct FTViewTarget
			constexpr auto CameraCachePrivate = 0x1bf0; // Size: 1600, Type: struct FCameraCacheEntry
			constexpr auto LastFrameCameraCachePrivate = 0x2230; // Size: 1600, Type: struct FCameraCacheEntry
			constexpr auto ModifierList = 0x2870; // Size: 16, Type: struct TArray<struct UCameraModifier*>
			constexpr auto DefaultModifiers = 0x2880; // Size: 16, Type: struct TArray<UCameraModifier*>
			constexpr auto FreeCamDistance = 0x2890; // Size: 4, Type: float
			constexpr auto FreeCamOffset = 0x2894; // Size: 12, Type: struct FVector
			constexpr auto ViewTargetOffset = 0x28a0; // Size: 12, Type: struct FVector
			constexpr auto CameraLensEffects = 0x28c0; // Size: 16, Type: struct TArray<struct AEmitterCameraLensEffectBase*>
			constexpr auto CachedCameraShakeMod = 0x28d0; // Size: 8, Type: struct UCameraModifier_CameraShake*
			constexpr auto AnimInstPool[8] = 0x28d8; // Size: 64, Type: struct UCameraAnimInst*
			constexpr auto PostProcessBlendCache = 0x2918; // Size: 16, Type: struct TArray<struct FPostProcessSettings>
			constexpr auto ActiveAnims = 0x2938; // Size: 16, Type: struct TArray<struct UCameraAnimInst*>
			constexpr auto FreeAnims = 0x2948; // Size: 16, Type: struct TArray<struct UCameraAnimInst*>
			constexpr auto AnimCameraActor = 0x2958; // Size: 8, Type: struct ACameraActor*
			constexpr auto bIsOrthographic = 0x2960; // Size: 1, Type: char
			constexpr auto bDefaultConstrainAspectRatio = 0x2960; // Size: 1, Type: char
			constexpr auto bClientSimulatingViewTarget = 0x2960; // Size: 1, Type: char
			constexpr auto bUseClientSideCameraUpdates = 0x2960; // Size: 1, Type: char
			constexpr auto bGameCameraCutThisFrame = 0x2961; // Size: 1, Type: char
			constexpr auto ViewPitchMin = 0x2964; // Size: 4, Type: float
			constexpr auto ViewPitchMax = 0x2968; // Size: 4, Type: float
			constexpr auto ViewYawMin = 0x296c; // Size: 4, Type: float
			constexpr auto ViewYawMax = 0x2970; // Size: 4, Type: float
			constexpr auto ViewRollMin = 0x2974; // Size: 4, Type: float
			constexpr auto ViewRollMax = 0x2978; // Size: 4, Type: float
			constexpr auto ServerUpdateCameraTimeout = 0x2980; // Size: 4, Type: float
	}
} 
