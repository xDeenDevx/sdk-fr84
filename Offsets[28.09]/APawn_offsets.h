namespace offsets
{
	namespace APawn
	{
			constexpr auto bUseControllerRotationPitch = 0x230; // Size: 1, Type: char
			constexpr auto bUseControllerRotationYaw = 0x230; // Size: 1, Type: char
			constexpr auto bUseControllerRotationRoll = 0x230; // Size: 1, Type: char
			constexpr auto bCanAffectNavigationGeneration = 0x230; // Size: 1, Type: char
			constexpr auto BaseEyeHeight = 0x234; // Size: 4, Type: float
			constexpr auto AutoPossessPlayer = 0x238; // Size: 1, Type: enum class EAutoReceiveInput
			constexpr auto AutoPossessAI = 0x239; // Size: 1, Type: enum class EAutoPossessAI
			constexpr auto RemoteViewPitch = 0x23a; // Size: 1, Type: char
			constexpr auto AIControllerClass = 0x240; // Size: 8, Type: AController*
			constexpr auto PlayerState = 0x248; // Size: 8, Type: struct APlayerState*
			constexpr auto LastHitBy = 0x258; // Size: 8, Type: struct AController*
			constexpr auto Controller = 0x260; // Size: 8, Type: struct AController*
			constexpr auto ControlInputVector = 0x26c; // Size: 12, Type: struct FVector
			constexpr auto LastControlInputVector = 0x278; // Size: 12, Type: struct FVector
	}
} 
