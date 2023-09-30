namespace offsets
{
	namespace ASolarBackpackActor
	{
			constexpr auto BackpackRoot = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto BackpackMesh = 0x230; // Size: 8, Type: struct UBackpackVertAnimMeshComponent*
			constexpr auto BackPackActorOwner = 0x238; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto BackpackSFX = 0x240; // Size: 16, Type: struct TArray<struct ASolarBackpackSFX*>
			constexpr auto BackpackOffgasSFX = 0x250; // Size: 8, Type: struct ASolarBackpackSFX*
			constexpr auto OriginScale = 0x264; // Size: 4, Type: float
			constexpr auto bEnableMeshEffect = 0x26b; // Size: 1, Type: bool
			constexpr auto TrailClass = 0x270; // Size: 8, Type: ASolarBackpackSFX*
			constexpr auto OffgasClass = 0x278; // Size: 8, Type: ASolarBackpackSFX*
			constexpr auto ListenSet = 0x280; // Size: 80, Type: struct TSet<struct UParticleSystemComponent*>
			constexpr auto AssemblingId = 0x2d8; // Size: 16, Type: struct FString
			constexpr auto KnapsackFlySoundName = 0x2e8; // Size: 8, Type: struct FName
			constexpr auto StartKnapsackLandingSoundName = 0x2f0; // Size: 8, Type: struct FName
			constexpr auto StopKnapsackLandingSoundName = 0x2f8; // Size: 8, Type: struct FName
			constexpr auto StartWallRunSoundName = 0x300; // Size: 8, Type: struct FName
			constexpr auto StopWallRunSoundName = 0x308; // Size: 8, Type: struct FName
	}
} 
