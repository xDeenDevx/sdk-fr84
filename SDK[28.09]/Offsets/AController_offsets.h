namespace offsets
{
	namespace AController
	{
			constexpr auto PlayerState = 0x230; // Size: 8, Type: struct APlayerState*
			constexpr auto OnInstigatedAnyDamage = 0x240; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto StateName = 0x250; // Size: 8, Type: struct FName
			constexpr auto Pawn = 0x258; // Size: 8, Type: struct APawn*
			constexpr auto Character = 0x268; // Size: 8, Type: struct ACharacter*
			constexpr auto TransformComponent = 0x270; // Size: 8, Type: struct USceneComponent*
			constexpr auto ControlRotation = 0x2a8; // Size: 12, Type: struct FRotator
			constexpr auto bAttachToPawn = 0x2b4; // Size: 1, Type: char
	}
} 
