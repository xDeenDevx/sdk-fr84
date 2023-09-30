/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Synthesis.

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0010 (0x000028 - 0x000038)
class UModularSynthPresetBank : public UObject
{ 
public:
	TArray<FModularSynthPresetBankEntry>               Presets;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x06A0 (0x0007F0 - 0x000E90)
class UModularSynthComponent : public USynthComponent
{ 
public:
	int32_t                                            VoiceCount;                                                 // 0x07F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x69C];                                     // 0x07F4   (0x069C)  MISSED


	/// Functions
	// Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset
	void SetSynthPreset(FModularSynthPreset& SynthPreset);                                                                   // [0x17fb860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSustainGain
	void SetSustainGain(float SustainGain);                                                                                  // [0x17fb7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	void SetStereoDelayWetlevel(float DelayWetlevel);                                                                        // [0x17fb760] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime
	void SetStereoDelayTime(float DelayTimeMsec);                                                                            // [0x17fb6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio
	void SetStereoDelayRatio(float DelayRatio);                                                                              // [0x17fb660] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode
	void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);                                                          // [0x17fb5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);                                                                   // [0x17fb550] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	void SetStereoDelayFeedback(float DelayFeedback);                                                                        // [0x17fb4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSpread
	void SetSpread(float Spread);                                                                                            // [0x17fb450] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime
	void SetReleaseTime(float ReleaseTimeMsec);                                                                              // [0x17fb3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPortamento
	void SetPortamento(float Portamento);                                                                                    // [0x17fb350] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPitchBend
	void SetPitchBend(float PitchBend);                                                                                      // [0x17fb2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPan
	void SetPan(float Pan);                                                                                                  // [0x17fb250] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscType
	void SetOscType(int32_t OscIndex, ESynth1OscType OscType);                                                               // [0x17fb180] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSync
	void SetOscSync(bool bIsSynced);                                                                                         // [0x17fb0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones
	void SetOscSemitones(int32_t OscIndex, float Semitones);                                                                 // [0x17fb020] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);                                                               // [0x17faf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscOctave
	void SetOscOctave(int32_t OscIndex, float Octave);                                                                       // [0x17fae80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod
	void SetOscGainMod(int32_t OscIndex, float OscGainMod);                                                                  // [0x17fadb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGain
	void SetOscGain(int32_t OscIndex, float OscGain);                                                                        // [0x17face0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);                                                             // [0x17fac10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscCents
	void SetOscCents(int32_t OscIndex, float Cents);                                                                         // [0x17fab40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain
	void SetModEnvSustainGain(float SustainGain);                                                                            // [0x17faac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	void SetModEnvReleaseTime(float Release);                                                                                // [0x17faa40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch
	void SetModEnvPatch(ESynthModEnvPatch InPatchType);                                                                      // [0x17fa9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert
	void SetModEnvInvert(bool bInvert);                                                                                      // [0x17fa930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth
	void SetModEnvDepth(float Depth);                                                                                        // [0x17fa8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime
	void SetModEnvDecayTime(float DecayTimeMsec);                                                                            // [0x17fa830] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);                                                              // [0x17fa7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	void SetModEnvBiasInvert(bool bInvert);                                                                                  // [0x17fa720] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime
	void SetModEnvAttackTime(float AttackTimeMsec);                                                                          // [0x17fa6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOType
	void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);                                                                // [0x17fa5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch
	void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);                                                     // [0x17fa500] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOMode
	void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);                                                                // [0x17fa430] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod
	void SetLFOGainMod(int32_t LFOIndex, float GainMod);                                                                     // [0x17fa360] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGain
	void SetLFOGain(int32_t LFOIndex, float Gain);                                                                           // [0x17fa290] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);                                                         // [0x17fa1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);                                                               // [0x17fa0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetGainDb
	void SetGainDb(float GainDb);                                                                                            // [0x17fa070] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterType
	void SetFilterType(ESynthFilterType FilterType);                                                                         // [0x17f9ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod
	void SetFilterQMod(float FilterQ);                                                                                       // [0x17f9f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQ
	void SetFilterQ(float FilterQ);                                                                                          // [0x17f9ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	void SetFilterFrequencyMod(float FilterFrequencyHz);                                                                     // [0x17f9e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency
	void SetFilterFrequency(float FilterFrequencyHz);                                                                        // [0x17f9df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm
	void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);                                                          // [0x17f9d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison
	void SetEnableUnison(bool EnableUnison);                                                                                 // [0x17f9ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger
	void SetEnableRetrigger(bool RetriggerEnabled);                                                                          // [0x17f9c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony
	void SetEnablePolyphony(bool bEnablePolyphony);                                                                          // [0x17f9bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch
	bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);                                                                  // [0x17f9af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato
	void SetEnableLegato(bool LegatoEnabled);                                                                                // [0x17f9a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetDecayTime
	void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x17f99e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency
	void SetChorusFrequency(float Frequency);                                                                                // [0x17f9960] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback
	void SetChorusFeedback(float Feedback);                                                                                  // [0x17f98e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled
	void SetChorusEnabled(bool EnableChorus);                                                                                // [0x17f9850] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth
	void SetChorusDepth(float Depth);                                                                                        // [0x17f97d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetAttackTime
	void SetAttackTime(float AttackTimeMsec);                                                                                // [0x17f9750] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOn
	void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x17f9630] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOff
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);                                                         // [0x17f9510] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.CreatePatch
	FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);     // [0x17f93c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x0038 (0x000040 - 0x000078)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0040   (0x0030)  MISSED
	FSourceEffectBitCrusherSettings                    Settings;                                                   // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings
	void SetSettings(FSourceEffectBitCrusherSettings& InSettings);                                                           // [0x18003c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x0058 (0x000040 - 0x000098)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0040   (0x0040)  MISSED
	FSourceEffectChorusSettings                        Settings;                                                   // 0x0080   (0x0018)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings
	void SetSettings(FSourceEffectChorusSettings& InSettings);                                                               // [0x1800470] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x0078 (0x000040 - 0x0000B8)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0040   (0x0050)  MISSED
	FSourceEffectDynamicsProcessorSettings             Settings;                                                   // 0x0090   (0x0028)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings);                                                    // [0x1800520] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UEnvelopeFollowerListener : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnEnvelopeFollowerUpdate;                                   // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00C0   (0x0010)  MISSED
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x0040 (0x000040 - 0x000080)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSourceEffectEnvelopeFollowerSettings              Settings;                                                   // 0x0074   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);                            // [0x1800d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings);                                                     // [0x1800680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);                              // [0x18002a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x0048 (0x000040 - 0x000088)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0040   (0x0038)  MISSED
	FSourceEffectEQSettings                            Settings;                                                   // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEQPreset.SetSettings
	void SetSettings(FSourceEffectEQSettings& InSettings);                                                                   // [0x18005d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x0040 (0x000040 - 0x000080)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSourceEffectFilterSettings                        Settings;                                                   // 0x0074   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings
	void SetSettings(FSourceEffectFilterSettings& InSettings);                                                               // [0x1800730] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x0040 (0x000040 - 0x000080)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSourceEffectFoldbackDistortionSettings            Settings;                                                   // 0x0074   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings);                                                   // [0x18007e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x0040 (0x000040 - 0x000080)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSourceEffectMidSideSpreaderSettings               Settings;                                                   // 0x0074   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings);                                                      // [0x1800890] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x0038 (0x000040 - 0x000078)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0040   (0x0030)  MISSED
	FSourceEffectPannerSettings                        Settings;                                                   // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings
	void SetSettings(FSourceEffectPannerSettings& InSettings);                                                               // [0x1800940] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x0048 (0x000040 - 0x000088)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0040   (0x0038)  MISSED
	FSourceEffectPhaserSettings                        Settings;                                                   // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings
	void SetSettings(FSourceEffectPhaserSettings& InSettings);                                                               // [0x18009f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x0050 (0x000040 - 0x000090)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x3C];                                      // 0x0040   (0x003C)  MISSED
	FSourceEffectRingModulationSettings                Settings;                                                   // 0x007C   (0x0014)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings
	void SetSettings(FSourceEffectRingModulationSettings& InSettings);                                                       // [0x1800ab0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x0058 (0x000040 - 0x000098)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0040   (0x0040)  MISSED
	FSourceEffectSimpleDelaySettings                   Settings;                                                   // 0x0080   (0x0018)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	void SetSettings(FSourceEffectSimpleDelaySettings& InSettings);                                                          // [0x1800b50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x0050 (0x000040 - 0x000090)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x3C];                                      // 0x0040   (0x003C)  MISSED
	FSourceEffectStereoDelaySettings                   Settings;                                                   // 0x007C   (0x0014)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings
	void SetSettings(FSourceEffectStereoDelaySettings& InSettings);                                                          // [0x1800c00] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x0038 (0x000040 - 0x000078)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0040   (0x0030)  MISSED
	FSourceEffectWaveShaperSettings                    Settings;                                                   // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings
	void SetSettings(FSourceEffectWaveShaperSettings& InSettings);                                                           // [0x1800940] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0030 (0x000028 - 0x000058)
class UAudioImpulseResponse : public UObject
{ 
public:
	TArray<float>                                      ImpulseResponse;                                            // 0x0028   (0x0010)  
	int32_t                                            NumChannels;                                                // 0x0038   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x003C   (0x0004)  
	float                                              NormalizationVolumeDb;                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<float>                                      IRData;                                                     // 0x0048   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x0078 (0x000040 - 0x0000B8)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	FSubmixEffectConvolutionReverbSettings             Settings;                                                   // 0x0040   (0x0020)  
	UAudioImpulseResponse*                             ImpulseResponse;                                            // 0x0060   (0x0008)  
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x0068   (0x0001)  
	bool                                               bEnableHardwareAcceleration;                                // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4E];                                      // 0x006A   (0x004E)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings);                                                    // [0x1800ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);                                                       // [0x1800330] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x0050 (0x000040 - 0x000090)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSubmixEffectDelaySettings                         Settings;                                                   // 0x0074   (0x000C)  
	FSubmixEffectDelaySettings                         DynamicSettings;                                            // 0x0080   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings
	void SetSettings(FSubmixEffectDelaySettings& InSettings);                                                                // [0x18064f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	void SetInterpolationTime(float Time);                                                                                   // [0x1805a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay
	void SetDelay(float Length);                                                                                             // [0x1804bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	float GetMaxDelayInMilliseconds();                                                                                       // [0x1803d30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x0040 (0x000040 - 0x000080)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0040   (0x0034)  MISSED
	FSubmixEffectFilterSettings                        Settings;                                                   // 0x0074   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings
	void SetSettings(FSubmixEffectFilterSettings& InSettings);                                                               // [0x18065b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType
	void SetFilterType(ESubmixFilterType InType);                                                                            // [0x1805310] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	void SetFilterQMod(float InQ);                                                                                           // [0x1805290] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ
	void SetFilterQ(float InQ);                                                                                              // [0x1805210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	void SetFilterCutoffFrequencyMod(float InFrequency);                                                                     // [0x1804d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	void SetFilterCutoffFrequency(float InFrequency);                                                                        // [0x1804cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);                                                             // [0x1804c70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x0048 (0x000040 - 0x000088)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0040   (0x0038)  MISSED
	FSubmixEffectFlexiverbSettings                     Settings;                                                   // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	void SetSettings(FSubmixEffectFlexiverbSettings& InSettings);                                                            // [0x1806660] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x0070 (0x000040 - 0x0000B0)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0040   (0x0040)  MISSED
	FSubmixEffectTapDelaySettings                      Settings;                                                   // 0x0080   (0x0018)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0098   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap
	void SetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x1806a90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings
	void SetSettings(FSubmixEffectTapDelaySettings& InSettings);                                                             // [0x1806720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	void SetInterpolationTime(float Time);                                                                                   // [0x1805aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	void RemoveTap(int32_t TapId);                                                                                           // [0x1804410] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	void GetTapIds(TArray<int32_t>& TapIds);                                                                                 // [0x1803ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap
	void GetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x1803e10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	float GetMaxDelayInMilliseconds();                                                                                       // [0x1803d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap
	void AddTap(int32_t& TapId);                                                                                             // [0x1803af0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x03C0 (0x000138 - 0x0004F8)
class USynth2DSlider : public UWidget
{ 
public:
	float                                              ValueX;                                                     // 0x0138   (0x0004)  
	float                                              ValueY;                                                     // 0x013C   (0x0004)  
	FDelegateProperty                                  ValueXDelegate;                                             // 0x0140   (0x0010)  
	FDelegateProperty                                  ValueYDelegate;                                             // 0x0150   (0x0010)  
	FSynth2DSliderStyle                                WidgetStyle;                                                // 0x0160   (0x0308)  
	FLinearColor                                       SliderHandleColor;                                          // 0x0468   (0x0010)  
	bool                                               IndentHandle;                                               // 0x0478   (0x0001)  
	bool                                               Locked;                                                     // 0x0479   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x047A   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x047C   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0480   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0481   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x0488   (0x0010)  
	FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x0498   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x04A8   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x04B8   (0x0010)  
	FMulticastInlineDelegate                           OnValueChangedX;                                            // 0x04C8   (0x0010)  
	FMulticastInlineDelegate                           OnValueChangedY;                                            // 0x04D8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x04E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.Synth2DSlider.SetValue
	void SetValue(FVector2D InValue);                                                                                        // [0x1806b70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetStepSize
	void SetStepSize(float InValue);                                                                                         // [0x1806900] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor
	void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x18067e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetLocked
	void SetLocked(bool InValue);                                                                                            // [0x1805b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetIndentHandle
	void SetIndentHandle(bool InValue);                                                                                      // [0x1805990] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.GetValue
	FVector2D GetValue();                                                                                                    // [0x1803fa0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x03C0 (0x0007F0 - 0x000BB0)
class UGranularSynth : public USynthComponent
{ 
public:
	USoundWave*                                        GranulatedSoundWave;                                        // 0x07F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x3B8];                                     // 0x07F8   (0x03B8)  MISSED


	/// Functions
	// Function /Script/Synthesis.GranularSynth.SetSustainGain
	void SetSustainGain(float SustainGain);                                                                                  // [0x1806980] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetSoundWave
	void SetSoundWave(USoundWave* InSoundWave);                                                                              // [0x1806870] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetScrubMode
	void SetScrubMode(bool bScrubMode);                                                                                      // [0x1806460] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec
	void SetReleaseTimeMsec(float ReleaseTimeMsec);                                                                          // [0x18063e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlayheadTime
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);                           // [0x1805d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed
	void SetPlaybackSpeed(float InPlayheadRate);                                                                             // [0x1805cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainVolume
	void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);                                                            // [0x1805850] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond
	void SetGrainsPerSecond(float InGrainsPerSecond);                                                                        // [0x1805910] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainProbability
	void SetGrainProbability(float InGrainProbability);                                                                      // [0x18057d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPitch
	void SetGrainPitch(float BasePitch, FVector2D PitchRange);                                                               // [0x1805710] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPan
	void SetGrainPan(float BasePan, FVector2D PanRange);                                                                     // [0x1805650] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType
	void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);                                                      // [0x18055d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainDuration
	void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);                                                  // [0x1805510] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetDecayTime
	void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x18048c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetAttackTime
	void SetAttackTime(float AttackTimeMsec);                                                                                // [0x18048c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOn
	void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x1804170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOff
	void NoteOff(float Note, bool bKill);                                                                                    // [0x1804010] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.IsLoaded
	bool IsLoaded();                                                                                                         // [0x1803fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetSampleDuration
	float GetSampleDuration();                                                                                               // [0x1803de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime
	float GetCurrentPlayheadTime();                                                                                          // [0x1803b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0148 (0x000028 - 0x000170)
class UMonoWaveTableSynthPreset : public UObject
{ 
public:
	FString                                            PresetName;                                                 // 0x0028   (0x0010)  
	bool                                               bLockKeyframesToGridBool;                                   // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            LockKeyframesToGrid;                                        // 0x003C   (0x0004)  
	int32_t                                            WaveTableResolution;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FRuntimeFloatCurve>                         WaveTable;                                                  // 0x0048   (0x0010)  
	bool                                               bNormalizeWaveTables;                                       // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x117];                                     // 0x0059   (0x0117)  MISSED
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0740 (0x0007F0 - 0x000F30)
class USynthComponentMonoWaveTable : public USynthComponent
{ 
public:
	FMulticastInlineDelegate                           OnTableAltered;                                             // 0x07F0   (0x0010)  
	FMulticastInlineDelegate                           OnNumTablesChanged;                                         // 0x0800   (0x0010)  
	UMonoWaveTableSynthPreset*                         CurrentPreset;                                              // 0x0810   (0x0008)  
	unsigned char                                      UnknownData00_6[0x718];                                     // 0x0818   (0x0718)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	void SetWaveTablePosition(float InPosition);                                                                             // [0x1806bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	void SetSustainPedalState(bool InSustainPedalState);                                                                     // [0x1806a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	void SetPosLfoType(ESynthLFOType InLfoType);                                                                             // [0x1805f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	void SetPosLfoFrequency(float InLfoFrequency);                                                                           // [0x1805ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	void SetPosLfoDepth(float InLfoDepth);                                                                                   // [0x1805e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	void SetPositionEnvelopeSustainGain(float InSustainGain);                                                                // [0x1806360] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);                                                            // [0x18062e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	void SetPositionEnvelopeInvert(bool bInInvert);                                                                          // [0x1806250] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	void SetPositionEnvelopeDepth(float InDepth);                                                                            // [0x18061d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);                                                                // [0x1806150] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);                                                                  // [0x18060c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	void SetPositionEnvelopeBiasDepth(float InDepth);                                                                        // [0x1806040] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);                                                              // [0x1805fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	void SetLowPassFilterResonance(float InNewQ);                                                                            // [0x1805c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency
	void SetLowPassFilterFrequency(float InNewFrequency);                                                                    // [0x1805bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	void SetFrequencyWithMidiNote(float InMidiNote);                                                                         // [0x1805490] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	void SetFrequencyPitchBend(float FrequencyOffsetCents);                                                                  // [0x1805410] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency
	void SetFrequency(float FrequencyHz);                                                                                    // [0x1805390] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	void SetFilterEnvelopeSustainGain(float InSustainGain);                                                                  // [0x1805110] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);                                                              // [0x1805090] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);                                                                 // [0x1805190] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	void SetFilterEnvelopeInvert(bool bInInvert);                                                                            // [0x1805000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	void SetFilterEnvelopeDepth(float InDepth);                                                                              // [0x1804f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);                                                                    // [0x1804ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	void SetFilterEnvelopeBiasDepth(float InDepth);                                                                          // [0x1804e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);                                                                // [0x1804df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);                                           // [0x1804ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent);                                                            // [0x1804a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex);                            // [0x1804940] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	void SetAmpEnvelopeSustainGain(float InSustainGain);                                                                     // [0x1804840] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);                                                                 // [0x18047c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	void SetAmpEnvelopeInvert(bool bInInvert);                                                                               // [0x1804730] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	void SetAmpEnvelopeDepth(float InDepth);                                                                                 // [0x18046b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);                                                                     // [0x1804630] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);                                                                       // [0x18045a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	void SetAmpEnvelopeBiasDepth(float InDepth);                                                                             // [0x1804520] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);                                                                   // [0x18044a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	void RefreshWaveTable(int32_t Index);                                                                                    // [0x1804380] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	void RefreshAllWaveTables();                                                                                             // [0x1804360] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn
	void NoteOn(float InMidiNote, float InVelocity);                                                                         // [0x1804290] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff
	void NoteOff(float InMidiNote);                                                                                          // [0x18040f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	int32_t GetNumTableEntries();                                                                                            // [0x1803db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	int32_t GetMaxTableIndex();                                                                                              // [0x1803d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	TArray<float> GetKeyFrameValuesForTable(float TableIndex);                                                               // [0x1803c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	float GetCurveTangent(int32_t TableIndex);                                                                               // [0x1803bb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x0130 (0x0007F0 - 0x000920)
class USynthSamplePlayer : public USynthComponent
{ 
public:
	USoundWave*                                        SoundWave;                                                  // 0x07F0   (0x0008)  
	FMulticastInlineDelegate                           OnSampleLoaded;                                             // 0x07F8   (0x0010)  
	FMulticastInlineDelegate                           OnSamplePlaybackProgress;                                   // 0x0808   (0x0010)  
	unsigned char                                      UnknownData00_6[0x108];                                     // 0x0818   (0x0108)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave
	void SetSoundWave(USoundWave* InSoundWave);                                                                              // [0x1807cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	void SetScrubTimeWidth(float InScrubTimeWidthSec);                                                                       // [0x1807c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode
	void SetScrubMode(bool bScrubMode);                                                                                      // [0x1807bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetPitch
	void SetPitch(float InPitch, float TimeSec);                                                                             // [0x1807af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SeekToTime
	void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);                                              // [0x1807940] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.IsLoaded
	bool IsLoaded();                                                                                                         // [0x1807910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration
	float GetSampleDuration();                                                                                               // [0x18078b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	float GetCurrentPlaybackProgressTime();                                                                                  // [0x1807880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	float GetCurrentPlaybackProgressPercent();                                                                               // [0x1807850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x0338 (0x000138 - 0x000470)
class USynthKnob : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0138   (0x0004)  
	float                                              StepSize;                                                   // 0x013C   (0x0004)  
	float                                              MouseSpeed;                                                 // 0x0140   (0x0004)  
	float                                              MouseFineTuneSpeed;                                         // 0x0144   (0x0004)  
	bool                                               ShowTooltipInfo;                                            // 0x0148:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0149   (0x0007)  MISSED
	FText                                              ParameterName;                                              // 0x0150   (0x0018)  
	FText                                              ParameterUnits;                                             // 0x0168   (0x0018)  
	FDelegateProperty                                  ValueDelegate;                                              // 0x0180   (0x0010)  
	FSynthKnobStyle                                    WidgetStyle;                                                // 0x0190   (0x0278)  
	bool                                               Locked;                                                     // 0x0408   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0409   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x040A   (0x0006)  MISSED
	FMulticastInlineDelegate                           OnMouseCaptureBegin;                                        // 0x0410   (0x0010)  
	FMulticastInlineDelegate                           OnMouseCaptureEnd;                                          // 0x0420   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureBegin;                                   // 0x0430   (0x0010)  
	FMulticastInlineDelegate                           OnControllerCaptureEnd;                                     // 0x0440   (0x0010)  
	FMulticastInlineDelegate                           OnValueChanged;                                             // 0x0450   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0460   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthKnob.SetValue
	void SetValue(float InValue);                                                                                            // [0x1807de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetStepSize
	void SetStepSize(float InValue);                                                                                         // [0x1807d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetLocked
	void SetLocked(bool InValue);                                                                                            // [0x1807a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.GetValue
	float GetValue();                                                                                                        // [0x18078e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FModularSynthPresetBankEntry
{ 
	FString                                            PresetName;                                                 // 0x0000   (0x0010)  
	FModularSynthPreset                                Preset;                                                     // 0x0010   (0x00E0)  
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FModularSynthPreset : FTableRowBase
{ 
	bool                                               bEnablePolyphony;                                           // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	ESynth1OscType                                     Osc1Type;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Osc1Gain;                                                   // 0x0010   (0x0004)  
	float                                              Osc1Octave;                                                 // 0x0014   (0x0004)  
	float                                              Osc1Semitones;                                              // 0x0018   (0x0004)  
	float                                              Osc1Cents;                                                  // 0x001C   (0x0004)  
	float                                              Osc1PulseWidth;                                             // 0x0020   (0x0004)  
	ESynth1OscType                                     Osc2Type;                                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Osc2Gain;                                                   // 0x0028   (0x0004)  
	float                                              Osc2Octave;                                                 // 0x002C   (0x0004)  
	float                                              Osc2Semitones;                                              // 0x0030   (0x0004)  
	float                                              Osc2Cents;                                                  // 0x0034   (0x0004)  
	float                                              Osc2PulseWidth;                                             // 0x0038   (0x0004)  
	float                                              Portamento;                                                 // 0x003C   (0x0004)  
	bool                                               bEnableUnison;                                              // 0x0040:0 (0x0001)  
	bool                                               bEnableOscillatorSync;                                      // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Spread;                                                     // 0x0044   (0x0004)  
	float                                              Pan;                                                        // 0x0048   (0x0004)  
	float                                              LFO1Frequency;                                              // 0x004C   (0x0004)  
	float                                              LFO1Gain;                                                   // 0x0050   (0x0004)  
	ESynthLFOType                                      LFO1Type;                                                   // 0x0054   (0x0001)  
	ESynthLFOMode                                      LFO1Mode;                                                   // 0x0055   (0x0001)  
	ESynthLFOPatchType                                 LFO1PatchType;                                              // 0x0056   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              LFO2Frequency;                                              // 0x0058   (0x0004)  
	float                                              LFO2Gain;                                                   // 0x005C   (0x0004)  
	ESynthLFOType                                      LFO2Type;                                                   // 0x0060   (0x0001)  
	ESynthLFOMode                                      LFO2Mode;                                                   // 0x0061   (0x0001)  
	ESynthLFOPatchType                                 LFO2PatchType;                                              // 0x0062   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0063   (0x0001)  MISSED
	float                                              GainDb;                                                     // 0x0064   (0x0004)  
	float                                              AttackTime;                                                 // 0x0068   (0x0004)  
	float                                              DecayTime;                                                  // 0x006C   (0x0004)  
	float                                              SustainGain;                                                // 0x0070   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0074   (0x0004)  
	ESynthModEnvPatch                                  ModEnvPatchType;                                            // 0x0078   (0x0001)  
	ESynthModEnvBiasPatch                              ModEnvBiasPatchType;                                        // 0x0079   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	bool                                               bInvertModulationEnvelope;                                  // 0x007C:0 (0x0001)  
	bool                                               bInvertModulationEnvelopeBias;                              // 0x007C:1 (0x0001)  
	unsigned char                                      UnknownData07_4[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              ModulationEnvelopeDepth;                                    // 0x0080   (0x0004)  
	float                                              ModulationEnvelopeAttackTime;                               // 0x0084   (0x0004)  
	float                                              ModulationEnvelopeDecayTime;                                // 0x0088   (0x0004)  
	float                                              ModulationEnvelopeSustainGain;                              // 0x008C   (0x0004)  
	float                                              ModulationEnvelopeReleaseTime;                              // 0x0090   (0x0004)  
	bool                                               bLegato;                                                    // 0x0094:0 (0x0001)  
	bool                                               bRetrigger;                                                 // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData08_4[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              FilterFrequency;                                            // 0x0098   (0x0004)  
	float                                              FilterQ;                                                    // 0x009C   (0x0004)  
	ESynthFilterType                                   FilterType;                                                 // 0x00A0   (0x0001)  
	ESynthFilterAlgorithm                              FilterAlgorithm;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData09_5[0x2];                                       // 0x00A2   (0x0002)  MISSED
	bool                                               bStereoDelayEnabled;                                        // 0x00A4:0 (0x0001)  
	unsigned char                                      UnknownData10_4[0x3];                                       // 0x00A5   (0x0003)  MISSED
	ESynthStereoDelayMode                              StereoDelayMode;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              StereoDelayTime;                                            // 0x00AC   (0x0004)  
	float                                              StereoDelayFeedback;                                        // 0x00B0   (0x0004)  
	float                                              StereoDelayWetlevel;                                        // 0x00B4   (0x0004)  
	float                                              StereoDelayRatio;                                           // 0x00B8   (0x0004)  
	bool                                               bChorusEnabled;                                             // 0x00BC:0 (0x0001)  
	unsigned char                                      UnknownData12_4[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              ChorusDepth;                                                // 0x00C0   (0x0004)  
	float                                              ChorusFeedback;                                             // 0x00C4   (0x0004)  
	float                                              ChorusFrequency;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FEpicSynth1Patch>                           Patches;                                                    // 0x00D0   (0x0010)  
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEpicSynth1Patch
{ 
	ESynth1PatchSource                                 PatchSource;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSynth1PatchCable>                          PatchCables;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSynth1PatchCable
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	ESynth1PatchDestination                            Destination;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPatchId
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectBitCrusherSettings
{ 
	float                                              CrushedSampleRate;                                          // 0x0000   (0x0004)  
	float                                              CrushedBits;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSourceEffectChorusSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSourceEffectDynamicsProcessorSettings
{ 
	ESourceEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESourceEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0008   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x000C   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0010   (0x0004)  
	float                                              Ratio;                                                      // 0x0014   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0018   (0x0004)  
	float                                              InputGainDb;                                                // 0x001C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0020   (0x0004)  
	bool                                               bStereoLinked;                                              // 0x0024:0 (0x0001)  
	bool                                               bAnalogMode;                                                // 0x0024:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectEnvelopeFollowerSettings
{ 
	float                                              AttackTime;                                                 // 0x0000   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0004   (0x0004)  
	EEnvelopeFollowerPeakMode                          PeakMode;                                                   // 0x0008   (0x0001)  
	bool                                               bIsAnalogMode;                                              // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectEQSettings
{ 
	TArray<FSourceEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled;                                                   // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectFilterSettings
{ 
	ESourceEffectFilterCircuit                         FilterCircuit;                                              // 0x0000   (0x0001)  
	ESourceEffectFilterType                            FilterType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CutoffFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectFoldbackDistortionSettings
{ 
	float                                              InputGainDb;                                                // 0x0000   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0004   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectMidSideSpreaderSettings
{ 
	EStereoChannelMode                                 InputMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              SpreadAmount;                                               // 0x0004   (0x0004)  
	EStereoChannelMode                                 OutputMode;                                                 // 0x0008   (0x0001)  
	bool                                               bEqualPower;                                                // 0x0009   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectPannerSettings
{ 
	float                                              Spread;                                                     // 0x0000   (0x0004)  
	float                                              Pan;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectPhaserSettings
{ 
	float                                              WetLevel;                                                   // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	EPhaserLFOType                                     LFOType;                                                    // 0x000C   (0x0001)  
	bool                                               UseQuadraturePhase;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSourceEffectRingModulationSettings
{ 
	ERingModulatorTypeSourceEffect                     ModulatorType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Depth;                                                      // 0x0008   (0x0004)  
	float                                              DryLevel;                                                   // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSourceEffectSimpleDelaySettings
{ 
	float                                              SpeedOfSound;                                               // 0x0000   (0x0004)  
	float                                              DelayAmount;                                                // 0x0004   (0x0004)  
	float                                              DryAmount;                                                  // 0x0008   (0x0004)  
	float                                              WetAmount;                                                  // 0x000C   (0x0004)  
	float                                              Feedback;                                                   // 0x0010   (0x0004)  
	bool                                               bDelayBasedOnDistance;                                      // 0x0014:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSourceEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectWaveShaperSettings
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSubmixEffectConvolutionReverbSettings
{ 
	float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)  
	float                                              SurroundRearChannelBleedDb;                                 // 0x0004   (0x0004)  
	bool                                               bInvertRearChannelBleedPhase;                               // 0x0008   (0x0001)  
	bool                                               bSurroundRearChannelFlip;                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000A   (0x0002)  MISSED
	float                                              SurroundRearChannelBleedAmount;                             // 0x000C   (0x0004)  
	UAudioImpulseResponse*                             ImpulseResponse;                                            // 0x0010   (0x0008)  
	bool                                               AllowHArdwareAcceleration;                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	float                                              DelayLength;                                                // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectFilterSettings
{ 
	ESubmixFilterType                                  FilterType;                                                 // 0x0000   (0x0001)  
	ESubmixFilterAlgorithm                             FilterAlgorithm;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectFlexiverbSettings
{ 
	float                                              PreDelay;                                                   // 0x0000   (0x0004)  
	float                                              DecayTime;                                                  // 0x0004   (0x0004)  
	float                                              RoomDampening;                                              // 0x0008   (0x0004)  
	int32_t                                            Complexity;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSubmixEffectTapDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	TArray<FTapDelayInfo>                              Taps;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTapDelayInfo
{ 
	ETapLineMode                                       TapLineMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayLength;                                                // 0x0004   (0x0004)  
	float                                              Gain;                                                       // 0x0008   (0x0004)  
	int32_t                                            OutputChannel;                                              // 0x000C   (0x0004)  
	float                                              PanInDegrees;                                               // 0x0010   (0x0004)  
	int32_t                                            TapId;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x0300 (0x000008 - 0x000308)
struct FSynth2DSliderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        NormalThumbImage;                                           // 0x0008   (0x0098)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x00A0   (0x0098)  
	FSlateBrush                                        NormalBarImage;                                             // 0x0138   (0x0098)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x01D0   (0x0098)  
	FSlateBrush                                        BackgroundImage;                                            // 0x0268   (0x0098)  
	float                                              BarThickness;                                               // 0x0300   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0304   (0x0004)  MISSED
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0270 (0x000008 - 0x000278)
struct FSynthKnobStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        LargeKnob;                                                  // 0x0008   (0x0098)  
	FSlateBrush                                        LargeKnobOverlay;                                           // 0x00A0   (0x0098)  
	FSlateBrush                                        MediumKnob;                                                 // 0x0138   (0x0098)  
	FSlateBrush                                        MediumKnobOverlay;                                          // 0x01D0   (0x0098)  
	float                                              MinValueAngle;                                              // 0x0268   (0x0004)  
	float                                              MaxValueAngle;                                              // 0x026C   (0x0004)  
	ESynthKnobSize                                     KnobSize;                                                   // 0x0270   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0271   (0x0007)  MISSED
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0008 (0x000008 - 0x000010)
struct FSynthSlateStyle : FSlateWidgetStyle
{ 
	ESynthSlateSizeType                                SizeType;                                                   // 0x0008   (0x0001)  
	ESynthSlateColorStyle                              ColorStyle;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x16
enum ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain                                                = 0,
	ESynth1PatchDestination__Osc1Frequency                                           = 1,
	ESynth1PatchDestination__Osc1Pulsewidth                                          = 2,
	ESynth1PatchDestination__Osc2Gain                                                = 3,
	ESynth1PatchDestination__Osc2Frequency                                           = 4,
	ESynth1PatchDestination__Osc2Pulsewidth                                          = 5,
	ESynth1PatchDestination__FilterFrequency                                         = 6,
	ESynth1PatchDestination__FilterQ                                                 = 7,
	ESynth1PatchDestination__Gain                                                    = 8,
	ESynth1PatchDestination__Pan                                                     = 9,
	ESynth1PatchDestination__LFO1Frequency                                           = 10,
	ESynth1PatchDestination__LFO1Gain                                                = 11,
	ESynth1PatchDestination__LFO2Frequency                                           = 12,
	ESynth1PatchDestination__LFO2Gain                                                = 13,
	ESynth1PatchDestination__Count                                                   = 14,
	ESynth1PatchDestination__ESynth1PatchDestination_MAX                             = 15
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x06
enum ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1                                                         = 0,
	ESynth1PatchSource__LFO2                                                         = 1,
	ESynth1PatchSource__Envelope                                                     = 2,
	ESynth1PatchSource__BiasEnvelope                                                 = 3,
	ESynth1PatchSource__Count                                                        = 4,
	ESynth1PatchSource__ESynth1PatchSource_MAX                                       = 5
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x05
enum ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal                                                    = 0,
	ESynthStereoDelayMode__Cross                                                     = 1,
	ESynthStereoDelayMode__PingPong                                                  = 2,
	ESynthStereoDelayMode__Count                                                     = 3,
	ESynthStereoDelayMode__ESynthStereoDelayMode_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x05
enum ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole                                                   = 0,
	ESynthFilterAlgorithm__StateVariable                                             = 1,
	ESynthFilterAlgorithm__Ladder                                                    = 2,
	ESynthFilterAlgorithm__Count                                                     = 3,
	ESynthFilterAlgorithm__ESynthFilterAlgorithm_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x06
enum ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass                                                        = 0,
	ESynthFilterType__HighPass                                                       = 1,
	ESynthFilterType__BandPass                                                       = 2,
	ESynthFilterType__BandStop                                                       = 3,
	ESynthFilterType__Count                                                          = 4,
	ESynthFilterType__ESynthFilterType_MAX                                           = 5
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x10
enum ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone                                               = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq                                            = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq                                         = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ                                            = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain                                           = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain                                           = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq                                           = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq                                           = 7,
	ESynthModEnvBiasPatch__Count                                                     = 8,
	ESynthModEnvBiasPatch__ESynthModEnvBiasPatch_MAX                                 = 9
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x10
enum ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone                                                   = 0,
	ESynthModEnvPatch__PatchToOscFreq                                                = 1,
	ESynthModEnvPatch__PatchToFilterFreq                                             = 2,
	ESynthModEnvPatch__PatchToFilterQ                                                = 3,
	ESynthModEnvPatch__PatchToLFO1Gain                                               = 4,
	ESynthModEnvPatch__PatchToLFO2Gain                                               = 5,
	ESynthModEnvPatch__PatchToLFO1Freq                                               = 6,
	ESynthModEnvPatch__PatchToLFO2Freq                                               = 7,
	ESynthModEnvPatch__Count                                                         = 8,
	ESynthModEnvPatch__ESynthModEnvPatch_MAX                                         = 9
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x11
enum ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone                                                  = 0,
	ESynthLFOPatchType__PatchToGain                                                  = 1,
	ESynthLFOPatchType__PatchToOscFreq                                               = 2,
	ESynthLFOPatchType__PatchToFilterFreq                                            = 3,
	ESynthLFOPatchType__PatchToFilterQ                                               = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth                                         = 5,
	ESynthLFOPatchType__PatchToOscPan                                                = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency                                     = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain                                          = 8,
	ESynthLFOPatchType__Count                                                        = 9,
	ESynthLFOPatchType__ESynthLFOPatchType_MAX                                       = 10
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x05
enum ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync                                                              = 0,
	ESynthLFOMode__OneShot                                                           = 1,
	ESynthLFOMode__Free                                                              = 2,
	ESynthLFOMode__Count                                                             = 3,
	ESynthLFOMode__ESynthLFOMode_MAX                                                 = 4
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x09
enum ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine                                                              = 0,
	ESynthLFOType__UpSaw                                                             = 1,
	ESynthLFOType__DownSaw                                                           = 2,
	ESynthLFOType__Square                                                            = 3,
	ESynthLFOType__Triangle                                                          = 4,
	ESynthLFOType__Exponential                                                       = 5,
	ESynthLFOType__RandomSampleHold                                                  = 6,
	ESynthLFOType__Count                                                             = 7,
	ESynthLFOType__ESynthLFOType_MAX                                                 = 8
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x07
enum ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine                                                             = 0,
	ESynth1OscType__Saw                                                              = 1,
	ESynth1OscType__Triangle                                                         = 2,
	ESynth1OscType__Square                                                           = 3,
	ESynth1OscType__Noise                                                            = 4,
	ESynth1OscType__Count                                                            = 5,
	ESynth1OscType__ESynth1OscType_MAX                                               = 6
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x05
enum ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESourceEffectDynamicsPeakMode__Peak                                              = 2,
	ESourceEffectDynamicsPeakMode__Count                                             = 3,
	ESourceEffectDynamicsPeakMode__ESourceEffectDynamicsPeakMode_MAX                 = 4
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x06
enum ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor                                   = 0,
	ESourceEffectDynamicsProcessorType__Limiter                                      = 1,
	ESourceEffectDynamicsProcessorType__Expander                                     = 2,
	ESourceEffectDynamicsProcessorType__Gate                                         = 3,
	ESourceEffectDynamicsProcessorType__Count                                        = 4,
	ESourceEffectDynamicsProcessorType__ESourceEffectDynamicsProcessorType_MAX       = 5
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x05
enum EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared                                           = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared                                       = 1,
	EEnvelopeFollowerPeakMode__Peak                                                  = 2,
	EEnvelopeFollowerPeakMode__Count                                                 = 3,
	EEnvelopeFollowerPeakMode__EEnvelopeFollowerPeakMode_MAX                         = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x06
enum ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass                                                 = 0,
	ESourceEffectFilterType__HighPass                                                = 1,
	ESourceEffectFilterType__BandPass                                                = 2,
	ESourceEffectFilterType__BandStop                                                = 3,
	ESourceEffectFilterType__Count                                                   = 4,
	ESourceEffectFilterType__ESourceEffectFilterType_MAX                             = 5
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x05
enum ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole                                              = 0,
	ESourceEffectFilterCircuit__StateVariable                                        = 1,
	ESourceEffectFilterCircuit__Ladder                                               = 2,
	ESourceEffectFilterCircuit__Count                                                = 3,
	ESourceEffectFilterCircuit__ESourceEffectFilterCircuit_MAX                       = 4
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x04
enum EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide                                                      = 0,
	EStereoChannelMode__LeftRight                                                    = 1,
	EStereoChannelMode__count                                                        = 2,
	EStereoChannelMode__EStereoChannelMode_MAX                                       = 3
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x09
enum EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine                                                             = 0,
	EPhaserLFOType__UpSaw                                                            = 1,
	EPhaserLFOType__DownSaw                                                          = 2,
	EPhaserLFOType__Square                                                           = 3,
	EPhaserLFOType__Triangle                                                         = 4,
	EPhaserLFOType__Exponential                                                      = 5,
	EPhaserLFOType__RandomSampleHold                                                 = 6,
	EPhaserLFOType__Count                                                            = 7,
	EPhaserLFOType__EPhaserLFOType_MAX                                               = 8
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x06
enum ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine                                             = 0,
	ERingModulatorTypeSourceEffect__Saw                                              = 1,
	ERingModulatorTypeSourceEffect__Triangle                                         = 2,
	ERingModulatorTypeSourceEffect__Square                                           = 3,
	ERingModulatorTypeSourceEffect__Count                                            = 4,
	ERingModulatorTypeSourceEffect__ERingModulatorTypeSourceEffect_MAX               = 5
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x05
enum EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal                                                 = 0,
	EStereoDelaySourceEffect__Cross                                                  = 1,
	EStereoDelaySourceEffect__PingPong                                               = 2,
	EStereoDelaySourceEffect__Count                                                  = 3,
	EStereoDelaySourceEffect__EStereoDelaySourceEffect_MAX                           = 4
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x04
enum ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256                            = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512                            = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024                           = 2,
	ESubmixEffectConvolutionReverbBlockSize__ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x05
enum ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole                                                  = 0,
	ESubmixFilterAlgorithm__StateVariable                                            = 1,
	ESubmixFilterAlgorithm__Ladder                                                   = 2,
	ESubmixFilterAlgorithm__Count                                                    = 3,
	ESubmixFilterAlgorithm__ESubmixFilterAlgorithm_MAX                               = 4
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x06
enum ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass                                                       = 0,
	ESubmixFilterType__HighPass                                                      = 1,
	ESubmixFilterType__BandPass                                                      = 2,
	ESubmixFilterType__BandStop                                                      = 3,
	ESubmixFilterType__Count                                                         = 4,
	ESubmixFilterType__ESubmixFilterType_MAX                                         = 5
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x04
enum ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel                                                      = 0,
	ETapLineMode__Panning                                                            = 1,
	ETapLineMode__Disabled                                                           = 2,
	ETapLineMode__ETapLineMode_MAX                                                   = 3
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x04
enum EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning                                            = 0,
	EGranularSynthSeekType__FromCurrentPosition                                      = 1,
	EGranularSynthSeekType__Count                                                    = 2,
	EGranularSynthSeekType__EGranularSynthSeekType_MAX                               = 3
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x16
enum EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular                                          = 0,
	EGranularSynthEnvelopeType__Triangle                                             = 1,
	EGranularSynthEnvelopeType__DownwardTriangle                                     = 2,
	EGranularSynthEnvelopeType__UpwardTriangle                                       = 3,
	EGranularSynthEnvelopeType__ExponentialDecay                                     = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease                                  = 5,
	EGranularSynthEnvelopeType__Gaussian                                             = 6,
	EGranularSynthEnvelopeType__Hanning                                              = 7,
	EGranularSynthEnvelopeType__Lanczos                                              = 8,
	EGranularSynthEnvelopeType__Cosine                                               = 9,
	EGranularSynthEnvelopeType__CosineSquared                                        = 10,
	EGranularSynthEnvelopeType__Welch                                                = 11,
	EGranularSynthEnvelopeType__Blackman                                             = 12,
	EGranularSynthEnvelopeType__BlackmanHarris                                       = 13,
	EGranularSynthEnvelopeType__Count                                                = 14,
	EGranularSynthEnvelopeType__EGranularSynthEnvelopeType_MAX                       = 15
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x04
enum CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP                                               = 0,
	CurveInterpolationType__LINEAR                                                   = 1,
	CurveInterpolationType__CONSTANT                                                 = 2,
	CurveInterpolationType__CurveInterpolationType_MAX                               = 3
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x05
enum ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning                                             = 0,
	ESamplePlayerSeekType__FromCurrentPosition                                       = 1,
	ESamplePlayerSeekType__FromEnd                                                   = 2,
	ESamplePlayerSeekType__Count                                                     = 3,
	ESamplePlayerSeekType__ESamplePlayerSeekType_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x04
enum ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium                                                           = 0,
	ESynthKnobSize__Large                                                            = 1,
	ESynthKnobSize__Count                                                            = 2,
	ESynthKnobSize__ESynthKnobSize_MAX                                               = 3
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x04
enum ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light                                                     = 0,
	ESynthSlateColorStyle__Dark                                                      = 1,
	ESynthSlateColorStyle__Count                                                     = 2,
	ESynthSlateColorStyle__ESynthSlateColorStyle_MAX                                 = 3
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x05
enum ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small                                                       = 0,
	ESynthSlateSizeType__Medium                                                      = 1,
	ESynthSlateSizeType__Large                                                       = 2,
	ESynthSlateSizeType__Count                                                       = 3,
	ESynthSlateSizeType__ESynthSlateSizeType_MAX                                     = 4
};

