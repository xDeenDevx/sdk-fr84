namespace offsets
{
	namespace UParticleSystemComponent
	{
			constexpr auto Template = 0x540; // Size: 8, Type: struct UParticleSystem*
			constexpr auto EmitterMaterials = 0x548; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto SkelMeshComponents = 0x558; // Size: 16, Type: struct TArray<struct USkeletalMeshComponent*>
			constexpr auto bResetOnDetach = 0x569; // Size: 1, Type: char
			constexpr auto bUpdateOnDedicatedServer = 0x569; // Size: 1, Type: char
			constexpr auto bAllowRecycling = 0x569; // Size: 1, Type: char
			constexpr auto bAutoManageAttachment = 0x569; // Size: 1, Type: char
			constexpr auto bAutoAttachWeldSimulatedBodies = 0x569; // Size: 1, Type: char
			constexpr auto bWarmingUp = 0x56a; // Size: 1, Type: char
			constexpr auto bOverrideLODMethod = 0x56a; // Size: 1, Type: char
			constexpr auto bSkipUpdateDynamicDataDuringTick = 0x56a; // Size: 1, Type: char
			constexpr auto LODMethod = 0x575; // Size: 1, Type: enum class ParticleSystemLODMethod
			constexpr auto RequiredSignificance = 0x576; // Size: 1, Type: enum class EParticleSignificanceLevel
			constexpr auto InstanceParameters = 0x578; // Size: 16, Type: struct TArray<struct FParticleSysParam>
			constexpr auto OnParticleSpawn = 0x588; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleBurst = 0x598; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleDeath = 0x5a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleCollide = 0x5b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bOldPositionValid = 0x5c8; // Size: 1, Type: bool
			constexpr auto OldPosition = 0x5cc; // Size: 12, Type: struct FVector
			constexpr auto PartSysVelocity = 0x5d8; // Size: 12, Type: struct FVector
			constexpr auto WarmupTime = 0x5e4; // Size: 4, Type: float
			constexpr auto WarmupTickRate = 0x5e8; // Size: 4, Type: float
			constexpr auto SecondsBeforeInactive = 0x5f0; // Size: 4, Type: float
			constexpr auto MaxTimeBeforeForceUpdateTransform = 0x5f8; // Size: 4, Type: float
			constexpr auto ReplayClips = 0x618; // Size: 16, Type: struct TArray<struct UParticleSystemReplay*>
			constexpr auto CustomTimeDilation = 0x630; // Size: 4, Type: float
			constexpr auto AutoAttachParent = 0x688; // Size: 8, Type: struct TWeakObjectPtr<USceneComponent>
			constexpr auto AutoAttachSocketName = 0x690; // Size: 8, Type: struct FName
			constexpr auto AutoAttachLocationRule = 0x698; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachRotationRule = 0x699; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachScaleRule = 0x69a; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto OnSystemFinished = 0x6c8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPreSystemActivated = 0x6d8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
