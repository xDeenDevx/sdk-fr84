namespace offsets
{
	namespace UWeaponAnimInstance
	{
			constexpr auto bInterrupt = 0x268; // Size: 1, Type: bool
			constexpr auto bReload = 0x269; // Size: 1, Type: bool
			constexpr auto bOverload = 0x26a; // Size: 1, Type: bool
			constexpr auto bBolt = 0x26b; // Size: 1, Type: bool
			constexpr auto MsgArray = 0x270; // Size: 16, Type: struct TArray<struct FAnimMsgData>
			constexpr auto CurrentMsg = 0x280; // Size: 8, Type: struct FAnimMsgData
			constexpr auto bCurrentMsgUsed = 0x288; // Size: 1, Type: bool
			constexpr auto IdleAnim = 0x290; // Size: 8, Type: struct UAnimSequence*
			constexpr auto FireAnim = 0x298; // Size: 8, Type: struct UAnimSequence*
			constexpr auto AltFireAnim = 0x2a0; // Size: 8, Type: struct UAnimSequence*
			constexpr auto ReloadAnim = 0x2a8; // Size: 8, Type: struct UAnimSequence*
			constexpr auto OverloadAnim = 0x2b0; // Size: 8, Type: struct UAnimSequence*
			constexpr auto OpenScopeAnim = 0x2b8; // Size: 8, Type: struct UAnimSequence*
			constexpr auto CloseScopeAnim = 0x2c0; // Size: 8, Type: struct UAnimSequence*
			constexpr auto BoltAnim = 0x2c8; // Size: 8, Type: struct UAnimSequence*
	}
} 
