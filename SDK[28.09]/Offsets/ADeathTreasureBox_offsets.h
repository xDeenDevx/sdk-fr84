namespace offsets
{
	namespace ADeathTreasureBox
	{
			constexpr auto CharacterPickupRange = 0x5d0; // Size: 4, Type: float
			constexpr auto CurrEnergyValue = 0x5d4; // Size: 4, Type: float
			constexpr auto CurrExtraEnergyValue = 0x5d8; // Size: 4, Type: float
			constexpr auto PlayerId = 0x5e0; // Size: 16, Type: struct FString
			constexpr auto NickName = 0x5f0; // Size: 16, Type: struct FString
			constexpr auto IsPickuped = 0x600; // Size: 1, Type: bool
			constexpr auto WeaponList = 0x608; // Size: 16, Type: struct TArray<struct ASolarPlayerWeapon*>
			constexpr auto ChargingChars = 0x618; // Size: 16, Type: struct TArray<struct FBoxChargingInfo>
			constexpr auto PickupRadius = 0x628; // Size: 4, Type: float
			constexpr auto ResurrectDistance = 0x62c; // Size: 4, Type: float
			constexpr auto CurrResurrectionState = 0x630; // Size: 1, Type: enum class EBResurrectionState
			constexpr auto ReviveTotalTime = 0x634; // Size: 4, Type: float
			constexpr auto ReviveStartTime = 0x638; // Size: 4, Type: float
			constexpr auto PreViewMesh = 0x640; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto ReviveStartSound = 0x648; // Size: 8, Type: struct FName
			constexpr auto ReviveBeforeCompleteSound = 0x650; // Size: 8, Type: struct FName
			constexpr auto ReviveCompleteSound = 0x658; // Size: 8, Type: struct FName
			constexpr auto ReviveFailedSound = 0x660; // Size: 8, Type: struct FName
			constexpr auto ResurrectionBeforeSoundTime = 0x668; // Size: 4, Type: float
			constexpr auto ReviveCompletePS = 0x670; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ReviveCompletePSAttachedSocket = 0x678; // Size: 8, Type: struct FName
			constexpr auto PreviewMeshZOffset = 0x680; // Size: 4, Type: float
			constexpr auto PreviewMeshZRotation = 0x684; // Size: 4, Type: float
			constexpr auto FXPosComponent = 0x698; // Size: 8, Type: struct USceneComponent*
			constexpr auto QualityPS = 0x6a0; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UParticleSystem>>
			constexpr auto RevivePreviewEffectClass = 0x6c0; // Size: 8, Type: UActorEffect*
			constexpr auto PreviewAnim = 0x6d0; // Size: 80, Type: struct TMap<enum class ECharacterBodyScaleType, struct FSoftObjectPath>
			constexpr auto SphereRadius = 0x720; // Size: 4, Type: float
			constexpr auto UnpickableSphereRadius = 0x724; // Size: 4, Type: float
	}
} 
