namespace offsets
{
	namespace ASolarPlayerWeapon
	{
			constexpr auto SpawnOffset = 0xb50; // Size: 4, Type: float
			constexpr auto ItemData = 0xb58; // Size: 184, Type: struct FSolarItemData
			constexpr auto MarkedTeamIdList = 0xc10; // Size: 16, Type: struct TArray<char>
			constexpr auto bUseSceneActorOptimization = 0xc20; // Size: 1, Type: char
			constexpr auto SphereComponent = 0xc28; // Size: 8, Type: struct USphereComponent*
			constexpr auto DroppedLocation = 0xc30; // Size: 12, Type: struct FVector
			constexpr auto WeaponOwner = 0xc40; // Size: 8, Type: struct ASolarCharacterBase*
			constexpr auto WeaponAnimationComponent = 0xc48; // Size: 8, Type: struct UWeaponAnimationComponent*
			constexpr auto WeaponCurrentDiscardState = 0xc50; // Size: 1, Type: enum class EItemDiscardState
			constexpr auto WeaponCurrentState = 0xc51; // Size: 1, Type: enum class EItemState
			constexpr auto DiscardMatPath = 0xc58; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto HoldMeshMaterialPath = 0xc68; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto OutlineBaseMat = 0xc80; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto SkinExtraPSCArray = 0xc90; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto SkinSpecialEffect = 0xca0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto MeshSubpassMaterial = 0xcb8; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto MeshDiscardMaterialArray = 0xcc0; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto WeaponSkinData = 0xcd0; // Size: 8, Type: struct UWeaponSkinData*
			constexpr auto WeaponSkinID = 0xcd8; // Size: 4, Type: int32_t
			constexpr auto ScopePartID = 0xcdc; // Size: 4, Type: int32_t
			constexpr auto GripPartID = 0xce0; // Size: 4, Type: int32_t
			constexpr auto StockPartID = 0xce4; // Size: 4, Type: int32_t
			constexpr auto MuzzlePartID = 0xce8; // Size: 4, Type: int32_t
			constexpr auto ClipPartID = 0xcec; // Size: 4, Type: int32_t
			constexpr auto DefaultSkinID = 0xcf0; // Size: 4, Type: int32_t
			constexpr auto bIsAutoDrop = 0xcf9; // Size: 1, Type: bool
			constexpr auto LifespanAfterAutoDrop = 0xcfc; // Size: 4, Type: float
			constexpr auto bUsed = 0xd00; // Size: 1, Type: bool
			constexpr auto SkinDedicatedKillEffect = 0xd08; // Size: 8, Type: struct UParticleSystem*
			constexpr auto SkinDedicatedSpecialEffect = 0xd10; // Size: 8, Type: struct UParticleSystem*
	}
} 
