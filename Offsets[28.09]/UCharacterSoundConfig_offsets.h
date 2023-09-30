namespace offsets
{
	namespace UCharacterSoundConfig
	{
			constexpr auto SoundEventTable = 0x30; // Size: 80, Type: struct TMap<enum class ECharacterSoundOpt, struct FString>
			constexpr auto SoundGroupTable = 0x80; // Size: 80, Type: struct TMap<struct FName, struct USoundGroupBase*>
			constexpr auto SurfaceTypeToHitByBulletSoundGroup = 0xd0; // Size: 80, Type: struct TMap<enum class EPhysicalSurface, struct FName>
			constexpr auto DefaultTransform = 0x120; // Size: 48, Type: struct FTransform
	}
} 
