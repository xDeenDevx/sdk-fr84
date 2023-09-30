namespace offsets
{
	namespace USolarReplayCameraControlComp
	{
			constexpr auto OnReplayCameraModeChanged = 0xb0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ReplayPCSpectateInfo = 0xd8; // Size: 8, Type: struct ASolarSpectateInfo*
			constexpr auto DefaultSpeed = 0xe0; // Size: 4, Type: float
			constexpr auto MoveSpeedChangeStep = 0xe4; // Size: 4, Type: float
			constexpr auto MoveSpeedMin = 0xe8; // Size: 4, Type: float
			constexpr auto MoveSpeedMax = 0xec; // Size: 4, Type: float
			constexpr auto SpeedUpScale = 0xf0; // Size: 4, Type: float
			constexpr auto DefaultTurnRate = 0xf4; // Size: 4, Type: float
			constexpr auto TurnRateChangeStep = 0xf8; // Size: 4, Type: float
			constexpr auto TurnSpeedMin = 0xfc; // Size: 4, Type: float
			constexpr auto TurnSpeedMax = 0x100; // Size: 4, Type: float
			constexpr auto DistanceChangeStep = 0x104; // Size: 4, Type: float
			constexpr auto ReplayCamera = 0x108; // Size: 8, Type: struct USolarReplayCameraBase*
			constexpr auto LastTarget = 0x118; // Size: 8, Type: struct ASolarPlayerState*
			constexpr auto CacheCameras = 0x130; // Size: 80, Type: struct TMap<enum class EReplayCameraMode, struct USolarReplayCameraBase*>
	}
} 
