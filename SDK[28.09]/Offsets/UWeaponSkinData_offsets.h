namespace offsets
{
	namespace UWeaponSkinData
	{
			constexpr auto WeaponSkinType = 0x30; // Size: 1, Type: enum class EWeaponSkinType
			constexpr auto WeaponData = 0x38; // Size: 176, Type: struct FWeaponBodyData
			constexpr auto WeaponBarMap = 0xe8; // Size: 16, Type: struct TArray<struct FWeaponSkinPartData>
			constexpr auto WeaponBarLocked = 0xf8; // Size: 1, Type: bool
			constexpr auto WeaponClipMap = 0x100; // Size: 16, Type: struct TArray<struct FWeaponSkinPartData>
			constexpr auto WeaponClipLocked = 0x110; // Size: 1, Type: bool
			constexpr auto WeaponGripMap = 0x118; // Size: 16, Type: struct TArray<struct FWeaponSkinPartData>
			constexpr auto WeaponGripLocked = 0x128; // Size: 1, Type: bool
			constexpr auto bUseGripIkSocket = 0x129; // Size: 1, Type: bool
			constexpr auto WeaponScopeMap = 0x130; // Size: 16, Type: struct TArray<struct FWeaponSkinPartData>
			constexpr auto WeaponScopeLocked = 0x140; // Size: 1, Type: bool
			constexpr auto WeaponStockMap = 0x148; // Size: 16, Type: struct TArray<struct FWeaponSkinPartData>
			constexpr auto WeaponStockLocked = 0x158; // Size: 1, Type: bool
			constexpr auto DedicatedBulletEffect = 0x160; // Size: 8, Type: ASolarBullet*
			constexpr auto DedicatedSkillEffect = 0x168; // Size: 8, Type: ASolarBullet*
			constexpr auto DedicatedBulletEffectPath = 0x170; // Size: 24, Type: struct FSoftClassPath
			constexpr auto DedicatedSkillEffectPath = 0x188; // Size: 24, Type: struct FSoftClassPath
			constexpr auto DedicatedKillEffect = 0x1a0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto DedicatedKillEffectPath = 0x1a8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DedicatedSpecialEffectPath = 0x1c0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DedicatedDissolvedDeathActorEffect = 0x1d8; // Size: 8, Type: UActorEffect*
			constexpr auto DedicatedDissolvedDeathFXPath = 0x1e0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto PlayAudioEventName = 0x1f8; // Size: 16, Type: struct FString
			constexpr auto StopAudioEventName = 0x208; // Size: 16, Type: struct FString
			constexpr auto OutsideAnimation = 0x218; // Size: 8, Type: struct UAnimSequence*
	}
} 
