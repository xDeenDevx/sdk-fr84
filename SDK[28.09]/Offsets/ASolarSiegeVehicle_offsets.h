namespace offsets
{
	namespace ASolarSiegeVehicle
	{
			constexpr auto CheckOpenTraceBox = 0x13a8; // Size: 16, Type: struct TArray<struct FSiegeVehicleOpenTraceData>
			constexpr auto CheckOpenTraceCap = 0x13b8; // Size: 16, Type: struct TArray<struct FSiegeVehicleOpenCapsuleData>
			constexpr auto CheckOffsetZ = 0x13c8; // Size: 4, Type: float
			constexpr auto SolarVehicleAnimInstance = 0x13d0; // Size: 8, Type: struct USolarSiegeVehicleAnimInstance*
			constexpr auto HolerBoneNames = 0x13d8; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto SiegeWeaponFire = 0x13e8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto OpenCameraShake = 0x13f8; // Size: 8, Type: UCameraShake*
			constexpr auto OpenCameraShakeSpeed = 0x1400; // Size: 4, Type: float
			constexpr auto MuzzlePSC = 0x1408; // Size: 8, Type: struct UParticleSystemComponent*
	}
} 
