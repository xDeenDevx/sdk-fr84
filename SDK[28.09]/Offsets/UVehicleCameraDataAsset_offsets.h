namespace offsets
{
	namespace UVehicleCameraDataAsset
	{
			constexpr auto TargetArmLengthCurve = 0x30; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto TargetArmLengthInterpSpeed = 0xb8; // Size: 4, Type: float
			constexpr auto TargetOffset = 0xbc; // Size: 12, Type: struct FVector
			constexpr auto TargetOffsetSocket = 0xc8; // Size: 8, Type: struct FName
			constexpr auto bTargetOffsetIgnoreRoll = 0xd0; // Size: 1, Type: bool
			constexpr auto bTargetOffsetIgnorePitch = 0xd1; // Size: 1, Type: bool
			constexpr auto bCameraRollSameWithVehicleRoll = 0xd2; // Size: 1, Type: bool
			constexpr auto SocketOffset = 0xd4; // Size: 12, Type: struct FVector
			constexpr auto MinPitch = 0xe0; // Size: 4, Type: float
			constexpr auto MaxPitch = 0xe4; // Size: 4, Type: float
			constexpr auto MinYaw = 0xe8; // Size: 4, Type: float
			constexpr auto MaxYaw = 0xec; // Size: 4, Type: float
			constexpr auto CameraFovCurve = 0xf0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto CameraFovInterpSpeed = 0x178; // Size: 4, Type: float
			constexpr auto bCameraFollowVehicle = 0x17c; // Size: 1, Type: bool
			constexpr auto DefaultPitch = 0x180; // Size: 4, Type: float
			constexpr auto CameraFollowSpeedCurve = 0x188; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto CameraFollowTimeThreshold = 0x210; // Size: 4, Type: float
			constexpr auto CameraResetFollowSpeed = 0x214; // Size: 4, Type: float
			constexpr auto CameraFollowSpeedThreshold = 0x218; // Size: 4, Type: float
			constexpr auto bEnableCameraLag = 0x21c; // Size: 1, Type: bool
			constexpr auto CameraLagInterpSpeedCurve = 0x220; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto CameraLagCurve = 0x2a8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto AdditionalTargetOffsetOnZ = 0x330; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BlendTime = 0x3b8; // Size: 4, Type: float
	}
} 
