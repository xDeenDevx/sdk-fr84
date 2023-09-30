namespace offsets
{
	namespace USoundClass
	{
			constexpr auto Properties = 0x28; // Size: 88, Type: struct FSoundClassProperties
			constexpr auto ChildClasses = 0x80; // Size: 16, Type: struct TArray<struct USoundClass*>
			constexpr auto PassiveSoundMixModifiers = 0x90; // Size: 16, Type: struct TArray<struct FPassiveSoundMixModifier>
			constexpr auto Modulation = 0xa0; // Size: 16, Type: struct FSoundModulation
			constexpr auto ParentClass = 0xb0; // Size: 8, Type: struct USoundClass*
	}
} 
