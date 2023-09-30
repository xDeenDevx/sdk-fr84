namespace offsets
{
	namespace ASolarRadarBase
	{
			constexpr auto RadarType = 0x228; // Size: 1, Type: enum class ERadarType
			constexpr auto bSuperRadar = 0x229; // Size: 1, Type: bool
			constexpr auto SuperRadarMaxCount = 0x22a; // Size: 1, Type: char
			constexpr auto EffectRadius = 0x22c; // Size: 4, Type: float
			constexpr auto EffectSize = 0x230; // Size: 8, Type: struct FVector2D
			constexpr auto bTeamShare = 0x238; // Size: 1, Type: bool
			constexpr auto bNotifyEnemy = 0x239; // Size: 1, Type: bool
			constexpr auto RadarImmunityTag = 0x23c; // Size: 8, Type: struct FGameplayTag
			constexpr auto bUniqueExist = 0x244; // Size: 1, Type: bool
			constexpr auto bDisplayOnMap = 0x245; // Size: 1, Type: bool
			constexpr auto ScanTargetTypes = 0x248; // Size: 16, Type: struct TArray<enum class EActorRegisterType>
			constexpr auto bShowTowards = 0x258; // Size: 1, Type: bool
			constexpr auto bMarkPlayer = 0x259; // Size: 1, Type: bool
			constexpr auto DisplayTime = 0x25c; // Size: 4, Type: float
			constexpr auto ScanFrequency = 0x260; // Size: 4, Type: float
			constexpr auto ProcessingActorsImmunityTagsHandleMap = 0x268; // Size: 80, Type: struct TMap<struct AActor*, struct FRadarDelegateHandle>
			constexpr auto RadarHandle = 0x300; // Size: 4, Type: struct FGameplayAbilitySpecHandle
			constexpr auto bPerspectiveInScene = 0x308; // Size: 1, Type: bool
			constexpr auto bAddWorldMark = 0x309; // Size: 1, Type: bool
			constexpr auto CharacterPerspectiveCueTag = 0x30c; // Size: 8, Type: struct FGameplayCueTag
			constexpr auto CharacterPerspectiveInSmokeCueTag = 0x314; // Size: 8, Type: struct FGameplayCueTag
			constexpr auto PerspectiveedActors = 0x320; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto ProcessingActors = 0x330; // Size: 80, Type: struct TMap<struct AActor*, struct FPerspectiveActorInfo>
			constexpr auto OneTimeScannedPlayerIDs = 0x380; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ScanNotifiedPlayers = 0x390; // Size: 16, Type: struct TArray<struct ASolarCharacter*>
	}
} 
