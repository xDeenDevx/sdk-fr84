namespace offsets
{
	namespace UArchVisCharMovementComponent
	{
			constexpr auto RotationalAcceleration = 0x618; // Size: 12, Type: struct FRotator
			constexpr auto RotationalDeceleration = 0x624; // Size: 12, Type: struct FRotator
			constexpr auto MaxRotationalVelocity = 0x630; // Size: 12, Type: struct FRotator
			constexpr auto MinPitch = 0x63c; // Size: 4, Type: float
			constexpr auto MaxPitch = 0x640; // Size: 4, Type: float
			constexpr auto WalkingFriction = 0x644; // Size: 4, Type: float
			constexpr auto WalkingSpeed = 0x648; // Size: 4, Type: float
			constexpr auto WalkingAcceleration = 0x64c; // Size: 4, Type: float
	}
} 
