namespace offsets
{
	namespace URootMotionModifier
	{
			constexpr auto Animation = 0x28; // Size: 8, Type: struct TWeakObjectPtr<UAnimSequenceBase>
			constexpr auto StartTime = 0x30; // Size: 4, Type: float
			constexpr auto EndTime = 0x34; // Size: 4, Type: float
			constexpr auto PreviousPosition = 0x38; // Size: 4, Type: float
			constexpr auto CurrentPosition = 0x3c; // Size: 4, Type: float
			constexpr auto Weight = 0x40; // Size: 4, Type: float
			constexpr auto bInLocalSpace = 0x44; // Size: 1, Type: bool
			constexpr auto StartTransform = 0x50; // Size: 48, Type: struct FTransform
			constexpr auto ActualStartTime = 0x80; // Size: 4, Type: float
			constexpr auto OnActivateDelegate = 0x84; // Size: 16, Type: struct FDelegate
			constexpr auto OnUpdateDelegate = 0x94; // Size: 16, Type: struct FDelegate
			constexpr auto OnDeactivateDelegate = 0xa4; // Size: 16, Type: struct FDelegate
			constexpr auto State = 0xb4; // Size: 1, Type: enum class ERootMotionModifierState
	}
} 
