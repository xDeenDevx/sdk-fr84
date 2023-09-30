namespace offsets
{
	namespace ASolarPlayerController
	{
			constexpr auto OnPawnReplicated = 0x5e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayerStateRepDelegate = 0x5f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnCatchInputActionDelegate = 0x608; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnEnterLandingDelegate = 0x618; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnNotifiedMarkedItemWasPickedUpDelegate = 0x628; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto InputManager = 0x638; // Size: 8, Type: struct USolarInputManager*
			constexpr auto AiPalComponent = 0x648; // Size: 8, Type: struct UAiPalComponent*
			constexpr auto AntiCheatComponent = 0x650; // Size: 8, Type: struct USolarEasyAntiCheatComponent*
			constexpr auto OnHUDSpawnedDelegate = 0x658; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto SolarInputModePolicyComponent = 0x758; // Size: 8, Type: struct USolarInputModePolicyComponent*
			constexpr auto InputActionContextArray = 0x760; // Size: 16, Type: struct TArray<struct USolarInputActionContext*>
			constexpr auto InputMovementVector = 0x778; // Size: 8, Type: struct FVector2D
			constexpr auto InputRotatePitch = 0x780; // Size: 4, Type: float
			constexpr auto ActionWheelHoldDownTime = 0x790; // Size: 4, Type: float
			constexpr auto WorldMarkMessageDelayTime = 0x7a4; // Size: 4, Type: float
			constexpr auto WarningMarkRadius = 0x7a8; // Size: 4, Type: float
			constexpr auto PingHoldDownTime = 0x7ac; // Size: 4, Type: float
			constexpr auto VoiceWheelMouseMoveRatio = 0x7b0; // Size: 4, Type: float
			constexpr auto WheelRadius = 0x7b4; // Size: 4, Type: float
			constexpr auto CancelRadius = 0x7b8; // Size: 4, Type: float
			constexpr auto OpenMarkWheelRadius = 0x7bc; // Size: 4, Type: float
			constexpr auto DeathBoxWorldMarks = 0x828; // Size: 16, Type: struct TArray<struct UActorMarkBase*>
			constexpr auto DeathBoxMarksRefreshInterval = 0x83c; // Size: 4, Type: float
			constexpr auto MaxDeathBoxWorldMarkNumber = 0x844; // Size: 4, Type: int32_t
			constexpr auto DeathBoxMarkClass = 0x848; // Size: 8, Type: UActorMarkBase*
			constexpr auto FollowArmClass = 0x878; // Size: 8, Type: USolarCharacterSpringArmComponent*
			constexpr auto FollowCameraClass = 0x880; // Size: 8, Type: USolarCharacterCameraComponent*
			constexpr auto FreeLookSmoothSpeed = 0x888; // Size: 4, Type: float
			constexpr auto FollowArm = 0x8a8; // Size: 8, Type: struct USolarCharacterSpringArmComponent*
			constexpr auto FollowCamera = 0x8b0; // Size: 8, Type: struct USolarCharacterCameraComponent*
			constexpr auto PlayerId = 0x960; // Size: 16, Type: struct FString
			constexpr auto VehicleInteractionDistance = 0x988; // Size: 4, Type: float
			constexpr auto InteractingVehicles = 0x990; // Size: 16, Type: struct TArray<struct ASolarVehiclePawn*>
			constexpr auto BestInteractingVehicle = 0x9a0; // Size: 8, Type: struct ASolarVehiclePawn*
			constexpr auto OnTeammateHUDDodgeSet = 0xa10; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto TeammateCandidates = 0xa20; // Size: 80, Type: struct TMap<struct ASolarCharacter*, int32_t>
			constexpr auto bIsAlreadyParachuted = 0xa70; // Size: 1, Type: bool
			constexpr auto WeaponMessageArray = 0xa78; // Size: 16, Type: struct TArray<struct FGameplayHitInfo>
			constexpr auto UniqueActorArray = 0xaa0; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<AActor>>
			constexpr auto HangUpTime = 0xab0; // Size: 4, Type: float
			constexpr auto DamageTextWidget = 0xad0; // Size: 8, Type: struct TWeakObjectPtr<UUserWidget>
			constexpr auto SameFrameDamageTextDataCache = 0xad8; // Size: 16, Type: struct TArray<struct FSolarDamageText>
			constexpr auto SameFrameDamageTextDataHandle = 0xae8; // Size: 8, Type: struct FTimerHandle
			constexpr auto OnSpectateInfoRep = 0xb98; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto SwitchTargetCameraControlCompClass = 0xc08; // Size: 24, Type: struct FSoftClassPath
			constexpr auto bShowCursorWhenSpectateOthers = 0xc20; // Size: 1, Type: bool
			constexpr auto SpectateNetCamUpdatePositionLimit = 0xc24; // Size: 4, Type: float
			constexpr auto ScoutPlayerController = 0xc30; // Size: 8, Type: struct APlayerController*
			constexpr auto ScoutViewTarget = 0xc38; // Size: 8, Type: struct AActor*
			constexpr auto SolarSwitchTargetCameraControlComp = 0xc40; // Size: 8, Type: struct USolarSwitchTargetCameraControlComp*
			constexpr auto UsableJetpacks = 0xc50; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto UsableTailFlames = 0xc60; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto AllCharacterSkins = 0xc70; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto PickUpExpItemSound = 0xc80; // Size: 8, Type: struct FName
			constexpr auto CachedRechamberSound = 0xc88; // Size: 16, Type: struct FString
			constexpr auto EMPScreenEffectName = 0xcd4; // Size: 8, Type: struct FName
			constexpr auto AntiCheatUploadInterval = 0xcdc; // Size: 4, Type: float
			constexpr auto FixedAntiCheatData = 0xce0; // Size: 28, Type: struct FFixedAntiCheatData
			constexpr auto CustomAntiCheatNames = 0xd80; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto CustomAntiCheatContents = 0xd90; // Size: 16, Type: struct TArray<struct FString>
	}
} 
