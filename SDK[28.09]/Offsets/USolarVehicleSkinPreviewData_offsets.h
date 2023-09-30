namespace offsets
{
	namespace USolarVehicleSkinPreviewData
	{
			constexpr auto VehicleMeshInfo = 0x30; // Size: 192, Type: struct FSolarVehicleSkinPreviewMeshInfo
			constexpr auto WeaponMeshInfos = 0xf0; // Size: 16, Type: struct TArray<struct FSolarVehicleSkinPreviewMeshInfo>
			constexpr auto MirrorMeshInfo = 0x100; // Size: 192, Type: struct FSolarVehicleSkinPreviewMeshInfo
			constexpr auto MirrorWeaponMeshInfos = 0x1c0; // Size: 16, Type: struct TArray<struct FSolarVehicleSkinPreviewMeshInfo>
			constexpr auto VehicleVFXs = 0x1d0; // Size: 16, Type: struct TArray<struct FVehicleVFX>
			constexpr auto SwitchParticleEffectPath = 0x1e0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto VehicleMaterialDataArray = 0x208; // Size: 16, Type: struct TArray<struct FSolarVehicleMaterialData>
			constexpr auto PageTransforms[a] = 0x220; // Size: 480, Type: struct FTransform
			constexpr auto PageInfos[a] = 0x400; // Size: 20, Type: struct FSolarVehicleSkinPreviewPageInfo
	}
} 
