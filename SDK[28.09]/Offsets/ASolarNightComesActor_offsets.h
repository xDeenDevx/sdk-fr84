namespace offsets
{
	namespace ASolarNightComesActor
	{
			constexpr auto BeginEffectDuration = 0x3e0; // Size: 4, Type: float
			constexpr auto OngoingEffectDuration = 0x3e4; // Size: 4, Type: float
			constexpr auto OngoingEffectClearDelay = 0x3e8; // Size: 4, Type: float
			constexpr auto EndEffectDuration = 0x3ec; // Size: 4, Type: float
			constexpr auto VisualEffectBeginDelay_AfterBeginEffect = 0x3f0; // Size: 4, Type: float
			constexpr auto VisualEffectEndDelay_AfterEndEffect = 0x3f4; // Size: 4, Type: float
			constexpr auto BeginEffect = 0x3f8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto OngoingEffect = 0x400; // Size: 8, Type: struct UParticleSystem*
			constexpr auto EndEffect = 0x408; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ItemEffect = 0x410; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ItemExplodeEffect = 0x418; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ItemDisappearEffect = 0x420; // Size: 8, Type: struct UParticleSystem*
			constexpr auto EffectRadius = 0x428; // Size: 4, Type: float
			constexpr auto NightfellRadius = 0x42c; // Size: 4, Type: float
			constexpr auto NightFellRadius_WithBuff = 0x430; // Size: 4, Type: float
			constexpr auto NightFellCapacity = 0x434; // Size: 4, Type: float
			constexpr auto NightfellFadeness = 0x438; // Size: 4, Type: float
			constexpr auto ItemFellRadiusCurve = 0x440; // Size: 8, Type: struct UCurveFloat*
			constexpr auto bShowDebug = 0x448; // Size: 1, Type: bool
			constexpr auto bOpenVisualFell = 0x449; // Size: 1, Type: bool
			constexpr auto UpdateEffectingCharacterInterval = 0x44c; // Size: 4, Type: float
			constexpr auto StaticMeshCollision = 0x450; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ItemSkeletalMesh = 0x458; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto EffectScale = 0x460; // Size: 12, Type: struct FVector
			constexpr auto StartAnim = 0x470; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto StartLoopSound = 0x478; // Size: 16, Type: struct FString
			constexpr auto EndLoopSound = 0x488; // Size: 16, Type: struct FString
			constexpr auto EnterSound = 0x498; // Size: 16, Type: struct FString
			constexpr auto ExitSound = 0x4a8; // Size: 16, Type: struct FString
			constexpr auto ExplodeSound = 0x4b8; // Size: 16, Type: struct FString
			constexpr auto HitBy1pSound = 0x4c8; // Size: 16, Type: struct FString
			constexpr auto MeshVisibleDelay = 0x4d8; // Size: 4, Type: float
			constexpr auto PerspectiveMeshSortPriority = 0x4dc; // Size: 4, Type: int32_t
			constexpr auto StencilMaterial = 0x4e0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto NightComesContinousEffect = 0x4e8; // Size: 8, Type: UGameplayEffect*
			constexpr auto CurrentState = 0x4f0; // Size: 1, Type: enum class ENightComesState
			constexpr auto BeginEffectHandle = 0x528; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto OngingEffectHandle = 0x530; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto EndEffectHandle = 0x538; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto ItemEffectHandle = 0x540; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto InstigatorCharacter = 0x548; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto EffectingActors = 0x560; // Size: 16, Type: struct TArray<struct AActor*>
	}
} 
