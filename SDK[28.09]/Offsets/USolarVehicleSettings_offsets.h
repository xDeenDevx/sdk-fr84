namespace offsets
{
	namespace USolarVehicleSettings
	{
			constexpr auto HpLowerLimitInNormalStatus = 0x38; // Size: 4, Type: float
			constexpr auto HpLowerLimitInDamagedStatus = 0x3c; // Size: 4, Type: float
			constexpr auto VehicleHitTimer = 0x40; // Size: 4, Type: float
			constexpr auto ReplicatedDelayTimer = 0x44; // Size: 4, Type: float
			constexpr auto WaterToDestoryTime = 0x48; // Size: 4, Type: float
			constexpr auto MaxWarningTweenRate = 0x4c; // Size: 4, Type: float
			constexpr auto MinWarningTweenRate = 0x50; // Size: 4, Type: float
			constexpr auto MinDangerWarningOpacity = 0x54; // Size: 4, Type: float
			constexpr auto MinProgressBarWarningOpacity = 0x58; // Size: 4, Type: float
			constexpr auto VehicleBurningSpendTimer = 0x5c; // Size: 4, Type: float
			constexpr auto VehicleBurningDeltaTime = 0x60; // Size: 4, Type: float
			constexpr auto DisableOverlapTimer = 0x64; // Size: 4, Type: float
			constexpr auto ResetOwnerTimer = 0x68; // Size: 4, Type: float
			constexpr auto MeshLodLevelForDefaultDeviceLocalPlayer = 0x6c; // Size: 4, Type: int32_t
			constexpr auto MeshLodLevelForLowDeviceLocalPlayer = 0x70; // Size: 4, Type: int32_t
			constexpr auto AutoBrakeTimerWithoutDriver = 0x74; // Size: 4, Type: float
			constexpr auto WeakPointVFXParamterName = 0x78; // Size: 8, Type: struct FName
			constexpr auto WeakPointVFXDefaultValue = 0x80; // Size: 4, Type: float
			constexpr auto WeakPointVFXStartValue = 0x84; // Size: 4, Type: float
			constexpr auto WeakPointVFXTargetValue = 0x88; // Size: 4, Type: float
			constexpr auto WeakPointVFXDuration = 0x8c; // Size: 4, Type: float
			constexpr auto LeftFootLocationXCurve = 0x90; // Size: 8, Type: struct FName
			constexpr auto RightFootLocationXCurve = 0x98; // Size: 8, Type: struct FName
			constexpr auto LeftFootLocationZCurve = 0xa0; // Size: 8, Type: struct FName
			constexpr auto RightFootLocationZCurve = 0xa8; // Size: 8, Type: struct FName
			constexpr auto WeaponMagnifiers[4] = 0xb0; // Size: 16, Type: float
			constexpr auto FireAbilityClass = 0xc0; // Size: 8, Type: USolarVehicleGameplayAbility*
			constexpr auto VehicleScopeFovBlendTime = 0xc8; // Size: 4, Type: float
			constexpr auto VehicleOutShootFovCoefficients[8] = 0xcc; // Size: 32, Type: float
			constexpr auto VehiclePreviewDissolveMat = 0xf0; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto VehiclePreviewFresnelMat = 0x118; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto VehiclePreviewDissolveCurve = 0x140; // Size: 40, Type: struct TSoftObjectPtr<UCurveVector>
			constexpr auto VehiclePreviewFresnelCurve = 0x168; // Size: 40, Type: struct TSoftObjectPtr<UCurveVector>
			constexpr auto VehiclePreviewDelayShowSeconds = 0x190; // Size: 4, Type: float
			constexpr auto VehiclePreviewMeshSortPriority = 0x194; // Size: 4, Type: int32_t
			constexpr auto VehiclePreviewMirrorMeshSortPriority = 0x198; // Size: 4, Type: int32_t
			constexpr auto VehiclePreviewVFXSortPriority = 0x19c; // Size: 4, Type: int32_t
			constexpr auto VehiclePreviewMirrorVFXSortPriority = 0x1a0; // Size: 4, Type: int32_t
			constexpr auto VehiclePreviewPlayAnimSound[a] = 0x1a4; // Size: 10, Type: char
			constexpr auto VehicleHitTimerForAntiCheating = 0x1b0; // Size: 4, Type: float
			constexpr auto VehicleVibrationMultiplier = 0x1b8; // Size: 80, Type: struct TMap<enum class ESolarShakeMainType, float>
			constexpr auto ForceUpdateProceduralAnimationToTargetTimeThreshold = 0x208; // Size: 4, Type: float
			constexpr auto ServerBufferCheckFrameInterval = 0x20c; // Size: 4, Type: int32_t
			constexpr auto ServerBufferCheckTimeInterval = 0x210; // Size: 4, Type: float
			constexpr auto ServerBufferCheckCount = 0x214; // Size: 4, Type: int32_t
	}
} 
