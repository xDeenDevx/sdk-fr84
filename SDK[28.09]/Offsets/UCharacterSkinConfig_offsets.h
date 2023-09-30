namespace offsets
{
	namespace UCharacterSkinConfig
	{
			constexpr auto SkinIcon = 0x30; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultIcon = 0x48; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto SkinRes = 0x60; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto CharaSkinRes = 0x78; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ShieldRes = 0x90; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto InvincibleMAT = 0xa8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto AnimBPRes = 0xc0; // Size: 24, Type: struct FSoftClassPath
			constexpr auto StaticMeshOrnamentsConfig = 0xd8; // Size: 80, Type: struct TMap<struct FGameplayTag, struct FStaticMeshOrnamentConfig>
			constexpr auto SkeletalMeshOrnamentsConfig = 0x128; // Size: 80, Type: struct TMap<struct FGameplayTag, struct FSkeletalMeshOrnamentConfig>
			constexpr auto ChildActorOrnamentsConfig = 0x178; // Size: 80, Type: struct TMap<struct FGameplayTag, struct FChildActorOrnamentConfig>
	}
} 
