namespace offsets
{
	namespace ASolarCapsuleActor
	{
			constexpr auto StartCruisingPath = 0x228; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto StopCruisingPath = 0x240; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto CruiseCharacterBindingName = 0x258; // Size: 8, Type: struct FName
			constexpr auto CruiseCapsuleBindingName = 0x260; // Size: 8, Type: struct FName
			constexpr auto CruiseCameraBindingName = 0x268; // Size: 8, Type: struct FName
			constexpr auto SequenceCameraBlendDuration = 0x270; // Size: 4, Type: float
			constexpr auto CapsuleCruisingLoopAnim = 0x278; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto CharacterCruiseLoopAnim = 0x280; // Size: 8, Type: struct UAnimSequence*
			constexpr auto CapsuleCruisingStopAnimPath = 0x288; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto CharacterCruiseEndAnim = 0x2a0; // Size: 8, Type: struct UAnimSequence*
			constexpr auto CapsuleSkeletalMesh = 0x2a8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto AirflowMeshEffects = 0x2b0; // Size: 16, Type: struct TArray<struct UStaticMeshComponent*>
			constexpr auto AirflowParticleEffects = 0x2c0; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto SequenceActor = 0x2d0; // Size: 8, Type: struct ALevelSequenceActor*
			constexpr auto SequenceCamera = 0x2d8; // Size: 8, Type: struct ACineCameraActor*
			constexpr auto StartCruisingSequence = 0x2e0; // Size: 8, Type: struct ULevelSequence*
			constexpr auto StopCruisingSequence = 0x2e8; // Size: 8, Type: struct ULevelSequence*
			constexpr auto CapsuleCruisingEndAnim = 0x2f0; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto BoardedCharacterPrivate = 0x2f8; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto CloudParticleComponent = 0x300; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto CloudParticlePath = 0x308; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto CloudParticleAsset = 0x340; // Size: 8, Type: struct UParticleSystem*
	}
} 
