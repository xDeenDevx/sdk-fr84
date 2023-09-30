namespace offsets
{
	namespace UAbilitySystemGlobals
	{
			constexpr auto AbilitySystemGlobalsClassName = 0x28; // Size: 24, Type: struct FSoftClassPath
			constexpr auto ActivateFailIsDeadTag = 0x68; // Size: 8, Type: struct FGameplayTag
			constexpr auto ActivateFailIsDeadName = 0x70; // Size: 8, Type: struct FName
			constexpr auto ActivateFailCooldownTag = 0x78; // Size: 8, Type: struct FGameplayTag
			constexpr auto ActivateFailCooldownName = 0x80; // Size: 8, Type: struct FName
			constexpr auto ActivateFailCostTag = 0x88; // Size: 8, Type: struct FGameplayTag
			constexpr auto ActivateFailCostName = 0x90; // Size: 8, Type: struct FName
			constexpr auto ActivateFailTagsBlockedTag = 0x98; // Size: 8, Type: struct FGameplayTag
			constexpr auto ActivateFailTagsBlockedName = 0xa0; // Size: 8, Type: struct FName
			constexpr auto ActivateFailTagsMissingTag = 0xa8; // Size: 8, Type: struct FGameplayTag
			constexpr auto ActivateFailTagsMissingName = 0xb0; // Size: 8, Type: struct FName
			constexpr auto ActivateFailNetworkingTag = 0xb8; // Size: 8, Type: struct FGameplayTag
			constexpr auto ActivateFailNetworkingName = 0xc0; // Size: 8, Type: struct FName
			constexpr auto MinimalReplicationTagCountBits = 0xc8; // Size: 4, Type: int32_t
			constexpr auto TargetDataStructCache = 0xd0; // Size: 16, Type: struct FNetSerializeScriptStructCache
			constexpr auto bAllowGameplayModEvaluationChannels = 0xe0; // Size: 1, Type: bool
			constexpr auto DefaultGameplayModEvaluationChannel = 0xe1; // Size: 1, Type: enum class EGameplayModEvaluationChannel
			constexpr auto GameplayModEvaluationChannelAliases[a] = 0xe4; // Size: 80, Type: struct FName
			constexpr auto GlobalCurveTableName = 0x138; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto GlobalCurveTable = 0x150; // Size: 8, Type: struct UCurveTable*
			constexpr auto GlobalAttributeMetaDataTableName = 0x158; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto GlobalAttributeMetaDataTable = 0x170; // Size: 8, Type: struct UDataTable*
			constexpr auto GlobalAttributeSetDefaultsTableName = 0x178; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto GlobalAttributeSetDefaultsTableNames = 0x190; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto GlobalAttributeDefaultsTables = 0x1a0; // Size: 16, Type: struct TArray<struct UCurveTable*>
			constexpr auto GlobalGameplayCueManagerClass = 0x1b0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto GlobalGameplayCueManagerName = 0x1c8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto GameplayCueNotifyPaths = 0x1e0; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto GameplayTagResponseTableName = 0x1f0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto GameplayTagResponseTable = 0x208; // Size: 8, Type: struct UGameplayTagReponseTable*
			constexpr auto PredictTargetGameplayEffects = 0x210; // Size: 1, Type: bool
			constexpr auto GlobalGameplayCueManager = 0x218; // Size: 8, Type: struct UGameplayCueManager*
	}
} 
