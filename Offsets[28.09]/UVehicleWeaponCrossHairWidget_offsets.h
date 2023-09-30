namespace offsets
{
	namespace UVehicleWeaponCrossHairWidget
	{
			constexpr auto bUseSecondReticle = 0x300; // Size: 1, Type: bool
			constexpr auto DirectionRadius = 0x304; // Size: 4, Type: float
			constexpr auto SecondReticlePanel = 0x308; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto SecondReticleSlot = 0x310; // Size: 8, Type: struct UCanvasPanelSlot*
			constexpr auto ReticleDirectionImage = 0x318; // Size: 8, Type: struct UImage*
			constexpr auto ReticleDirectionSlot = 0x320; // Size: 8, Type: struct UCanvasPanelSlot*
			constexpr auto RangedImage = 0x328; // Size: 8, Type: struct UImage*
			constexpr auto AssistLockSizeBox = 0x350; // Size: 8, Type: struct USizeBox*
			constexpr auto ChangeNewAssistLockPawnPanel = 0x358; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto EnterLockPawnPanel = 0x360; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto AssistLockPawn = 0x37c; // Size: 8, Type: struct TWeakObjectPtr<APawn>
			constexpr auto GVehicleWeaponConfig = 0x388; // Size: 8, Type: struct UGlobalVehicleWeaponConfig*
			constexpr auto SolarPlayerController = 0x390; // Size: 8, Type: struct ASolarPlayerController*
			constexpr auto CurProgressOfPreEnterAssistLock = 0x434; // Size: 4, Type: float
			constexpr auto PreEnterAssistLockSpeed = 0x438; // Size: 4, Type: float
			constexpr auto TimeIntervalToCheckBlock = 0x44c; // Size: 4, Type: float
			constexpr auto DynamicAimCanvas = 0x458; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto DynamicAimCanvasSlot = 0x460; // Size: 8, Type: struct UCanvasPanelSlot*
			constexpr auto DynamicAimOccludeOpacity = 0x468; // Size: 4, Type: float
			constexpr auto DynamicAimSmoothSpeed = 0x46c; // Size: 8, Type: struct FVector2D
			constexpr auto bAlwaysShowOverload = 0x480; // Size: 1, Type: bool
	}
} 
