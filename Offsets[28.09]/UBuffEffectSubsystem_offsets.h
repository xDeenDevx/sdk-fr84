namespace offsets
{
	namespace UBuffEffectSubsystem
	{
			constexpr auto BuffEffectActorGroupMap = 0x40; // Size: 80, Type: struct TMap<uint32_t, struct UBuffEffectActorGroupVO*>
			constexpr auto BuffEffectActorElemMap = 0x90; // Size: 80, Type: struct TMap<uint32_t, struct UBuffEffectActorElem*>
			constexpr auto BuffEffectActorHandleMap = 0xe0; // Size: 80, Type: struct TMap<int32_t, struct UBuffEffectActorVO*>
			constexpr auto ScreenEffectGroups = 0x130; // Size: 80, Type: struct TMap<enum class EBuffEffectTagType, struct FScreenEffectGroup>
	}
} 
