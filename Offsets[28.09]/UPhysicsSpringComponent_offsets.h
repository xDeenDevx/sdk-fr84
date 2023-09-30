namespace offsets
{
	namespace UPhysicsSpringComponent
	{
			constexpr auto SpringStiffness = 0x318; // Size: 4, Type: float
			constexpr auto SpringDamping = 0x31c; // Size: 4, Type: float
			constexpr auto SpringLengthAtRest = 0x320; // Size: 4, Type: float
			constexpr auto SpringRadius = 0x324; // Size: 4, Type: float
			constexpr auto SpringChannel = 0x328; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto bIgnoreSelf = 0x329; // Size: 1, Type: bool
			constexpr auto SpringCompression = 0x32c; // Size: 4, Type: float
	}
} 
