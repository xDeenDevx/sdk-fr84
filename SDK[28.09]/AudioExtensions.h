/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioExtensions.

/// Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEncodingSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.AudioEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatializationPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.OcclusionPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UOcclusionPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundModulationPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundModulationPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.ReverbPluginSourceSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UReverbPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEndpointSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundfieldEffectSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USoundfieldEffectBase : public UObject
{ 
public:
	USoundfieldEffectSettingsBase*                     Settings;                                                   // 0x0028   (0x0008)  
};

/// Struct /Script/AudioExtensions.SoundModulationParameter
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSoundModulationParameter
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x000C   (0x0008)  MISSED
};

/// Struct /Script/AudioExtensions.SoundModulation
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSoundModulation
{ 
	TArray<USoundModulationPluginSourceSettingsBase*>  Settings;                                                   // 0x0000   (0x0010)  
};

