namespace offsets
{
	namespace UMassInvisibilityEffectController
	{
			constexpr auto Transition_EnterPrepare = 0x28; // Size: 144, Type: struct FMassInvStateTransitionData
			constexpr auto Transition_PrepareToNormal = 0xb8; // Size: 144, Type: struct FMassInvStateTransitionData
			constexpr auto Transition_NormalToSprint = 0x148; // Size: 144, Type: struct FMassInvStateTransitionData
			constexpr auto Transition_SprintToNormal = 0x1d8; // Size: 144, Type: struct FMassInvStateTransitionData
			constexpr auto Transition_AnyToEnd = 0x268; // Size: 144, Type: struct FMassInvStateTransitionData
			constexpr auto OriginalParams = 0x2f8; // Size: 40, Type: struct FMassInvMaterialParams
			constexpr auto TeammateParams = 0x320; // Size: 120, Type: struct FMassInvStateMaterialParams
			constexpr auto OpponentParams = 0x398; // Size: 120, Type: struct FMassInvStateMaterialParams
			constexpr auto SprintTillingCurve = 0x410; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto OrnamentMatAnimParamName = 0x498; // Size: 8, Type: struct FName
			constexpr auto OrnamentMatAnimCurve = 0x4a0; // Size: 136, Type: struct FRuntimeFloatCurve
	}
} 
