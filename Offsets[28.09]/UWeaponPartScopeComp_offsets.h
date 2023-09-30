namespace offsets
{
	namespace UWeaponPartScopeComp
	{
			constexpr auto bOpen = 0x6c0; // Size: 1, Type: bool
			constexpr auto FovValue = 0x6c4; // Size: 4, Type: float
			constexpr auto HipToAdsTime = 0x6c8; // Size: 4, Type: float
			constexpr auto FovChangeCurve = 0x6d0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto HitEffectScale = 0x6d8; // Size: 4, Type: float
			constexpr auto ScopeCrossHairMaterial = 0x7e0; // Size: 8, Type: struct UMaterialInstance*
			constexpr auto ScopeCrossHairMesh = 0x7e8; // Size: 8, Type: struct UStaticMesh*
			constexpr auto ScopeEnemyMakerMaterial = 0x7f0; // Size: 8, Type: struct UMaterialInstance*
			constexpr auto ScopeEnemyMakerMesh = 0x7f8; // Size: 8, Type: struct UStaticMesh*
			constexpr auto ScopeMeshForFPP = 0x800; // Size: 8, Type: struct UStaticMesh*
			constexpr auto ScopeMeshForTPP = 0x808; // Size: 8, Type: struct UStaticMesh*
	}
} 
