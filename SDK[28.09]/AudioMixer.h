/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioMixer.

/// Class /Script/AudioMixer.SynthComponent
/// Size: 0x04D0 (0x000320 - 0x0007F0)
class USynthComponent : public USceneComponent
{ 
public:
	bool                                               bAutoDestroy;                                               // 0x0318:0 (0x0001)  
	bool                                               bStopWhenOwnerDestroyed;                                    // 0x0318:1 (0x0001)  
	bool                                               bAllowSpatialization;                                       // 0x0318:2 (0x0001)  
	bool                                               bOverrideAttenuation;                                       // 0x0318:3 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0319   (0x0003)  MISSED
	bool                                               bOutputToBusOnly;                                           // 0x031C:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x031D   (0x0003)  MISSED
	USoundAttenuation*                                 AttenuationSettings;                                        // 0x0320   (0x0008)  
	FSoundAttenuationSettings                          AttenuationOverrides;                                       // 0x0328   (0x03A0)  
	USoundConcurrency*                                 ConcurrencySettings;                                        // 0x06C8   (0x0008)  
	TSet<USoundConcurrency*>                           ConcurrencySet;                                             // 0x06D0   (0x0050)  
	USoundClass*                                       SoundClass;                                                 // 0x0720   (0x0008)  
	USoundEffectSourcePresetChain*                     SourceEffectChain;                                          // 0x0728   (0x0008)  
	USoundSubmixBase*                                  SoundSubmix;                                                // 0x0730   (0x0008)  
	TArray<FSoundSubmixSendInfo>                       SoundSubmixSends;                                           // 0x0738   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    BusSends;                                                   // 0x0748   (0x0010)  
	FSoundModulation                                   Modulation;                                                 // 0x0758   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    PreEffectBusSends;                                          // 0x0768   (0x0010)  
	bool                                               bIsUISound;                                                 // 0x0778:0 (0x0001)  
	bool                                               bIsPreviewSound;                                            // 0x0778:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0779   (0x0003)  MISSED
	int32_t                                            EnvelopeFollowerAttackTime;                                 // 0x077C   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTime;                                // 0x0780   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0784   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnAudioEnvelopeValue;                                       // 0x0788   (0x0010)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x0798   (0x0020)  MISSED
	USynthSound*                                       Synth;                                                      // 0x07B8   (0x0008)  
	UAudioComponent*                                   AudioComponent;                                             // 0x07C0   (0x0008)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x07C8   (0x0028)  MISSED


	/// Functions
	// Function /Script/AudioMixer.SynthComponent.Stop
	void Stop();                                                                                                             // [0x3595730] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.Start
	void Start();                                                                                                            // [0x3595430] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetVolumeMultiplier
	void SetVolumeMultiplier(float VolumeMultiplier);                                                                        // [0x35953b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSubmixSend
	void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);                                                           // [0x35952e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.IsPlaying
	bool IsPlaying();                                                                                                        // [0x3594450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioMixer.AudioGenerator
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UAudioGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0028   (0x0080)  MISSED
};

/// Class /Script/AudioMixer.AudioMixerBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
/// Size: 0x00C8 (0x000040 - 0x000108)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x0040   (0x0078)  MISSED
	FSubmixEffectDynamicsProcessorSettings             Settings;                                                   // 0x00B8   (0x0050)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	void SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings);                                                      // [0x3594e30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	void SetExternalSubmix(USoundSubmix* Submix);                                                                            // [0x3594da0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectSubmixEQPreset
/// Size: 0x0048 (0x000040 - 0x000088)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0040   (0x0038)  MISSED
	FSubmixEffectSubmixEQSettings                      Settings;                                                   // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	void SetSettings(FSubmixEffectSubmixEQSettings& InSettings);                                                             // [0x18005d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectReverbPreset
/// Size: 0x0090 (0x000040 - 0x0000D0)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x5C];                                      // 0x0040   (0x005C)  MISSED
	FSubmixEffectReverbSettings                        Settings;                                                   // 0x009C   (0x0034)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	void SetSettingsWithReverbEffect(UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);                         // [0x35951d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettings
	void SetSettings(FSubmixEffectReverbSettings& InSettings);                                                               // [0x3595000] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectReverbFastPreset
/// Size: 0x0098 (0x000040 - 0x0000D8)
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0040   (0x0060)  MISSED
	FSubmixEffectReverbFastSettings                    Settings;                                                   // 0x00A0   (0x0038)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
	void SetSettingsWithReverbEffect(UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);                         // [0x35950c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectReverbFastPreset.SetSettings
	void SetSettings(FSubmixEffectReverbFastSettings& InSettings);                                                           // [0x3594f40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.SynthSound
/// Size: 0x0020 (0x000360 - 0x000380)
class USynthSound : public USoundWaveProcedural
{ 
public:
	USynthComponent*                                   OwningSynthComponent;                                       // 0x0360   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0368   (0x0018)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSubmixEffectDynamicsProcessorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	ESubmixEffectDynamicsChannelLinkMode               LinkMode;                                                   // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              InputGainDb;                                                // 0x0004   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0008   (0x0004)  
	float                                              Ratio;                                                      // 0x000C   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0010   (0x0004)  
	float                                              LookAheadMsec;                                              // 0x0014   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0018   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x001C   (0x0004)  
	USoundSubmix*                                      ExternalSubmix;                                             // 0x0020   (0x0008)  
	bool                                               bChannelLinked;                                             // 0x0028:0 (0x0001)  
	bool                                               bAnalogMode;                                                // 0x0028:1 (0x0001)  
	bool                                               bKeyAudition;                                               // 0x0028:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              KeyGainDb;                                                  // 0x002C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0030   (0x0004)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyHighshelf;                                               // 0x0034   (0x000C)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyLowshelf;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicProcessorFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectDynamicProcessorFilterSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Cutoff;                                                     // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/AudioMixer.SubmixEffectSubmixEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectSubmixEQSettings
{ 
	TArray<FSubmixEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/AudioMixer.SubmixEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled;                                                   // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectReverbSettings
/// Size: 0x0034 (0x000000 - 0x000034)
struct FSubmixEffectReverbSettings
{ 
	float                                              Density;                                                    // 0x0000   (0x0004)  
	float                                              Diffusion;                                                  // 0x0004   (0x0004)  
	float                                              Gain;                                                       // 0x0008   (0x0004)  
	float                                              GainHF;                                                     // 0x000C   (0x0004)  
	float                                              DecayTime;                                                  // 0x0010   (0x0004)  
	float                                              DecayHFRatio;                                               // 0x0014   (0x0004)  
	float                                              ReflectionsGain;                                            // 0x0018   (0x0004)  
	float                                              ReflectionsDelay;                                           // 0x001C   (0x0004)  
	float                                              LateGain;                                                   // 0x0020   (0x0004)  
	float                                              LateDelay;                                                  // 0x0024   (0x0004)  
	float                                              AirAbsorptionGainHF;                                        // 0x0028   (0x0004)  
	float                                              WetLevel;                                                   // 0x002C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0030   (0x0004)  
};

/// Struct /Script/AudioMixer.SubmixEffectReverbFastSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSubmixEffectReverbFastSettings
{ 
	bool                                               bBypass;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Density;                                                    // 0x0004   (0x0004)  
	float                                              Diffusion;                                                  // 0x0008   (0x0004)  
	float                                              Gain;                                                       // 0x000C   (0x0004)  
	float                                              GainHF;                                                     // 0x0010   (0x0004)  
	float                                              DecayTime;                                                  // 0x0014   (0x0004)  
	float                                              DecayHFRatio;                                               // 0x0018   (0x0004)  
	float                                              ReflectionsGain;                                            // 0x001C   (0x0004)  
	float                                              ReflectionsDelay;                                           // 0x0020   (0x0004)  
	float                                              LateGain;                                                   // 0x0024   (0x0004)  
	float                                              LateDelay;                                                  // 0x0028   (0x0004)  
	float                                              AirAbsorptionGainHF;                                        // 0x002C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0030   (0x0004)  
	float                                              DryLevel;                                                   // 0x0034   (0x0004)  
};

/// Enum /Script/AudioMixer.EAudioSpectrumType
/// Size: 0x03
enum EAudioSpectrumType : uint8_t
{
	EAudioSpectrumType__MagnitudeSpectrum                                            = 0,
	EAudioSpectrumType__PowerSpectrum                                                = 1,
	EAudioSpectrumType__EAudioSpectrumType_MAX                                       = 2
};

/// Enum /Script/AudioMixer.EFFTWindowType
/// Size: 0x05
enum EFFTWindowType : uint8_t
{
	EFFTWindowType__None                                                             = 0,
	EFFTWindowType__Hamming                                                          = 1,
	EFFTWindowType__Hann                                                             = 2,
	EFFTWindowType__Blackman                                                         = 3,
	EFFTWindowType__EFFTWindowType_MAX                                               = 4
};

/// Enum /Script/AudioMixer.EFFTPeakInterpolationMethod
/// Size: 0x04
enum EFFTPeakInterpolationMethod : uint8_t
{
	EFFTPeakInterpolationMethod__NearestNeighbor                                     = 0,
	EFFTPeakInterpolationMethod__Linear                                              = 1,
	EFFTPeakInterpolationMethod__Quadratic                                           = 2,
	EFFTPeakInterpolationMethod__EFFTPeakInterpolationMethod_MAX                     = 3
};

/// Enum /Script/AudioMixer.EFFTSize
/// Size: 0x06
enum EFFTSize : uint8_t
{
	EFFTSize__DefaultSize                                                            = 0,
	EFFTSize__Min                                                                    = 1,
	EFFTSize__Small                                                                  = 2,
	EFFTSize__Medium                                                                 = 3,
	EFFTSize__Large                                                                  = 4,
	EFFTSize__Max                                                                    = 5
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsChannelLinkMode
/// Size: 0x05
enum ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	ESubmixEffectDynamicsChannelLinkMode__Disabled                                   = 0,
	ESubmixEffectDynamicsChannelLinkMode__Average                                    = 1,
	ESubmixEffectDynamicsChannelLinkMode__Peak                                       = 2,
	ESubmixEffectDynamicsChannelLinkMode__Count                                      = 3,
	ESubmixEffectDynamicsChannelLinkMode__ESubmixEffectDynamicsChannelLinkMode_MAX   = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsPeakMode
/// Size: 0x05
enum ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESubmixEffectDynamicsPeakMode__Peak                                              = 2,
	ESubmixEffectDynamicsPeakMode__Count                                             = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX                 = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
/// Size: 0x06
enum ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor                                   = 0,
	ESubmixEffectDynamicsProcessorType__Limiter                                      = 1,
	ESubmixEffectDynamicsProcessorType__Expander                                     = 2,
	ESubmixEffectDynamicsProcessorType__Gate                                         = 3,
	ESubmixEffectDynamicsProcessorType__Count                                        = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX       = 5
};

