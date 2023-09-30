namespace offsets
{
	namespace UAnimNotifyState_SolarTimedParticleEffect
	{
			constexpr auto bAsyncLoad = 0x30; // Size: 1, Type: bool
			constexpr auto PSTemplate = 0x38; // Size: 8, Type: struct UParticleSystem*
			constexpr auto PSTemplateSoft = 0x40; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto Attached = 0x68; // Size: 1, Type: bool
			constexpr auto SocketName = 0x6c; // Size: 8, Type: struct FName
			constexpr auto LocationOffset = 0x74; // Size: 12, Type: struct FVector
			constexpr auto RotationOffset = 0x80; // Size: 12, Type: struct FRotator
			constexpr auto Scale = 0x8c; // Size: 12, Type: struct FVector
			constexpr auto bDestroyAtEnd = 0x98; // Size: 1, Type: bool
			constexpr auto bLockRelativeRotation = 0x99; // Size: 1, Type: bool
	}
} 
