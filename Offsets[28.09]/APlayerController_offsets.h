namespace offsets
{
	namespace APlayerController
	{
			constexpr auto Player = 0x2b8; // Size: 8, Type: struct UPlayer*
			constexpr auto AcknowledgedPawn = 0x2c0; // Size: 8, Type: struct APawn*
			constexpr auto ControllingDirTrackInst = 0x2c8; // Size: 8, Type: struct UInterpTrackInstDirector*
			constexpr auto MyHUD = 0x2d0; // Size: 8, Type: struct AHUD*
			constexpr auto PlayerCameraManager = 0x2d8; // Size: 8, Type: struct APlayerCameraManager*
			constexpr auto PlayerCameraManagerClass = 0x2e0; // Size: 8, Type: APlayerCameraManager*
			constexpr auto bAutoManageActiveCameraTarget = 0x2e8; // Size: 1, Type: bool
			constexpr auto TargetViewRotation = 0x2ec; // Size: 12, Type: struct FRotator
			constexpr auto SmoothTargetViewRotationSpeed = 0x304; // Size: 4, Type: float
			constexpr auto HiddenActors = 0x310; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto HiddenPrimitiveComponents = 0x320; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>>
			constexpr auto LastSpectatorStateSynchTime = 0x334; // Size: 4, Type: float
			constexpr auto LastSpectatorSyncLocation = 0x338; // Size: 12, Type: struct FVector
			constexpr auto LastSpectatorSyncRotation = 0x344; // Size: 12, Type: struct FRotator
			constexpr auto ClientCap = 0x350; // Size: 4, Type: int32_t
			constexpr auto CheatManager = 0x358; // Size: 8, Type: struct UCheatManager*
			constexpr auto CheatClass = 0x360; // Size: 8, Type: UCheatManager*
			constexpr auto PlayerInput = 0x368; // Size: 8, Type: struct UPlayerInput*
			constexpr auto ActiveForceFeedbackEffects = 0x370; // Size: 16, Type: struct TArray<struct FActiveForceFeedbackEffect>
			constexpr auto bPlayerIsWaiting = 0x3f0; // Size: 1, Type: char
			constexpr auto NetPlayerIndex = 0x3f4; // Size: 1, Type: char
			constexpr auto PendingSwapConnection = 0x430; // Size: 8, Type: struct UNetConnection*
			constexpr auto NetConnection = 0x438; // Size: 8, Type: struct UNetConnection*
			constexpr auto InputYawScale = 0x44c; // Size: 4, Type: float
			constexpr auto InputPitchScale = 0x450; // Size: 4, Type: float
			constexpr auto InputRollScale = 0x454; // Size: 4, Type: float
			constexpr auto bShowMouseCursor = 0x458; // Size: 1, Type: char
			constexpr auto bEnableClickEvents = 0x458; // Size: 1, Type: char
			constexpr auto bEnableTouchEvents = 0x458; // Size: 1, Type: char
			constexpr auto bEnableMouseOverEvents = 0x458; // Size: 1, Type: char
			constexpr auto bEnableTouchOverEvents = 0x458; // Size: 1, Type: char
			constexpr auto bForceFeedbackEnabled = 0x458; // Size: 1, Type: char
			constexpr auto ForceFeedbackScale = 0x45c; // Size: 4, Type: float
			constexpr auto ClickEventKeys = 0x460; // Size: 16, Type: struct TArray<struct FKey>
			constexpr auto DefaultMouseCursor = 0x470; // Size: 1, Type: enum class EMouseCursor
			constexpr auto CurrentMouseCursor = 0x471; // Size: 1, Type: enum class EMouseCursor
			constexpr auto DefaultClickTraceChannel = 0x472; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto CurrentClickTraceChannel = 0x473; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto HitResultTraceDistance = 0x474; // Size: 4, Type: float
			constexpr auto SeamlessTravelCount = 0x478; // Size: 2, Type: uint16_t
			constexpr auto LastCompletedSeamlessTravelCount = 0x47a; // Size: 2, Type: uint16_t
			constexpr auto InactiveStateInputComponent = 0x508; // Size: 8, Type: struct UInputComponent*
			constexpr auto bShouldPerformFullTickWhenPaused = 0x510; // Size: 1, Type: char
			constexpr auto CurrentTouchInterface = 0x528; // Size: 8, Type: struct UTouchInterface*
			constexpr auto SpectatorPawn = 0x580; // Size: 8, Type: struct ASpectatorPawn*
			constexpr auto bIsLocalPlayerController = 0x58c; // Size: 1, Type: bool
			constexpr auto SpawnLocation = 0x590; // Size: 12, Type: struct FVector
	}
} 
