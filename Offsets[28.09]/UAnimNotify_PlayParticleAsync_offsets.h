namespace offsets
{
	namespace UAnimNotify_PlayParticleAsync
	{
			constexpr auto PSTemplate = 0x38; // Size: 8, Type: struct UParticleSystem*
			constexpr auto PSTemplateSoft = 0x40; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto LocationOffset = 0x68; // Size: 12, Type: struct FVector
			constexpr auto RotationOffset = 0x74; // Size: 12, Type: struct FRotator
			constexpr auto Scale = 0x80; // Size: 12, Type: struct FVector
			constexpr auto Attached = 0xa0; // Size: 1, Type: char
			constexpr auto SocketName = 0xa4; // Size: 8, Type: struct FName
	}
} 
