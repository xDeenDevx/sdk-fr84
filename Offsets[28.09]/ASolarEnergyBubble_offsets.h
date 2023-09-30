namespace offsets
{
	namespace ASolarEnergyBubble
	{
			constexpr auto HandMesh = 0x6c0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto HandMeshStartEffect = 0x6c8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto HandMeshStartEffectEnemy = 0x6d0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto HandMeshStartEffectDelay = 0x6d8; // Size: 4, Type: float
			constexpr auto TraceUpOffset = 0x6dc; // Size: 4, Type: float
			constexpr auto MeshHeight = 0x6e0; // Size: 4, Type: float
			constexpr auto RotateSpeed = 0x6e4; // Size: 4, Type: float
			constexpr auto ProjectileMovementComponent = 0x6e8; // Size: 8, Type: struct UProjectileMovementComponent*
			constexpr auto ReleaseEnergyBubbleNotify = 0x6f0; // Size: 8, Type: struct FName
			constexpr auto VFXTagName = 0x6f8; // Size: 8, Type: struct FName
			constexpr auto InitVelocity = 0x700; // Size: 12, Type: struct FVector
			constexpr auto HandMeshRelativeTransform = 0x710; // Size: 48, Type: struct FTransform
			constexpr auto VFXComponent = 0x748; // Size: 8, Type: struct USceneComponent*
	}
} 
