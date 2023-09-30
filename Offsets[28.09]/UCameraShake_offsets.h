namespace offsets
{
	namespace UCameraShake
	{
			constexpr auto bSingleInstance = 0x28; // Size: 1, Type: char
			constexpr auto OscillationDuration = 0x2c; // Size: 4, Type: float
			constexpr auto OscillationBlendInTime = 0x30; // Size: 4, Type: float
			constexpr auto OscillationBlendOutTime = 0x34; // Size: 4, Type: float
			constexpr auto RotOscillation = 0x38; // Size: 36, Type: struct FROscillator
			constexpr auto LocOscillation = 0x5c; // Size: 36, Type: struct FVOscillator
			constexpr auto FOVOscillation = 0x80; // Size: 12, Type: struct FFOscillator
			constexpr auto AnimPlayRate = 0x8c; // Size: 4, Type: float
			constexpr auto AnimScale = 0x90; // Size: 4, Type: float
			constexpr auto AnimBlendInTime = 0x94; // Size: 4, Type: float
			constexpr auto AnimBlendOutTime = 0x98; // Size: 4, Type: float
			constexpr auto RandomAnimSegmentDuration = 0x9c; // Size: 4, Type: float
			constexpr auto Anim = 0xa0; // Size: 8, Type: struct UCameraAnim*
			constexpr auto bRandomAnimSegment = 0xa8; // Size: 1, Type: char
			constexpr auto CameraOwner = 0xc0; // Size: 8, Type: struct APlayerCameraManager*
			constexpr auto ShakeScale = 0x148; // Size: 4, Type: float
			constexpr auto OscillatorTimeRemaining = 0x14c; // Size: 4, Type: float
			constexpr auto AnimInst = 0x150; // Size: 8, Type: struct UCameraAnimInst*
	}
} 
