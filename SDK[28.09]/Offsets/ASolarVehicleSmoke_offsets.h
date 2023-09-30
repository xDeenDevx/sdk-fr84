namespace offsets
{
	namespace ASolarVehicleSmoke
	{
			constexpr auto Duration = 0x228; // Size: 4, Type: float
			constexpr auto AppearCurve = 0x230; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto DisappearCurve = 0x2b8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto SmokeEffect = 0x340; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto AkAudioComponent = 0x368; // Size: 8, Type: struct UAkComponent*
			constexpr auto SmokeFadeName = 0x370; // Size: 8, Type: struct FName
			constexpr auto SoundBegin = 0x378; // Size: 16, Type: struct FString
			constexpr auto SoundLoop = 0x388; // Size: 16, Type: struct FString
			constexpr auto SoundLoopEnd = 0x398; // Size: 16, Type: struct FString
			constexpr auto SmokeTranslucentSortPriority = 0x3a8; // Size: 4, Type: int32_t
			constexpr auto SmokeEffectComp = 0x3b0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto bSmokeWaitToDestory = 0x3c0; // Size: 1, Type: bool
	}
} 
