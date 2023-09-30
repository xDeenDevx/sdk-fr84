namespace offsets
{
	namespace ASolarSafeArea
	{
			constexpr auto CurrentIndex = 0x284; // Size: 4, Type: int32_t
			constexpr auto TargetTime = 0x288; // Size: 4, Type: float
			constexpr auto BeginShrinkTime = 0x28c; // Size: 4, Type: float
			constexpr auto DamageValue = 0x290; // Size: 4, Type: float
			constexpr auto BeginLocation = 0x294; // Size: 12, Type: struct FVector
			constexpr auto BeginScale = 0x2a0; // Size: 4, Type: float
			constexpr auto AreaStatus = 0x2a4; // Size: 1, Type: enum class ESafeAreaStatus
			constexpr auto LocalPlayerCameraInSafeAreaState = 0x2b5; // Size: 1, Type: enum class EActorInSafeAreaStatus
			constexpr auto LocalViewFocusedCharacterInSafeAreaState = 0x2b6; // Size: 1, Type: enum class EActorInSafeAreaStatus
			constexpr auto bCanCausingDamage = 0x308; // Size: 1, Type: bool
			constexpr auto FirstDamageDelay = 0x30c; // Size: 4, Type: float
			constexpr auto DamageInterval = 0x310; // Size: 4, Type: float
			constexpr auto LeaveSafeAreaSoundName = 0x318; // Size: 16, Type: struct FString
			constexpr auto EnterSafeAreaSoundName = 0x328; // Size: 16, Type: struct FString
			constexpr auto InPoisonPerSecSoundName = 0x338; // Size: 16, Type: struct FString
			constexpr auto InPoisonSoundSecond = 0x348; // Size: 4, Type: float
			constexpr auto WarningNotificationIndex = 0x34c; // Size: 4, Type: int32_t
			constexpr auto NoticeDataMap = 0x350; // Size: 80, Type: struct TMap<int32_t, int32_t>
			constexpr auto SoundEventNameDataMap = 0x3a0; // Size: 80, Type: struct TMap<int32_t, struct FString>
			constexpr auto QuickVoiceDataMap = 0x3f0; // Size: 80, Type: struct TMap<int32_t, int32_t>
			constexpr auto ShrinkEndNotificationIndex = 0x440; // Size: 4, Type: int32_t
			constexpr auto ShrinkEndNoticeId = 0x444; // Size: 4, Type: int32_t
			constexpr auto ShrinkEndSoundEventName = 0x448; // Size: 16, Type: struct FString
			constexpr auto LocalController = 0x458; // Size: 8, Type: struct ASolarPlayerController*
	}
} 
