/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MaterialShaderQualitySettings.

/// Class /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UMaterialShaderQualitySettings : public UObject
{ 
public:
	TMap<FName, UShaderPlatformQualitySettings*>       ForwardSettingMap;                                          // 0x0028   (0x0050)  
};

/// Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
/// Size: 0x0030 (0x000028 - 0x000058)
class UShaderPlatformQualitySettings : public UObject
{ 
public:
	FMaterialQualityOverrides                          QualityOverrides;                                           // 0x0028   (0x001B)  
	unsigned char                                      UnknownData00_6[0x15];                                      // 0x0043   (0x0015)  MISSED
};

/// Struct /Script/MaterialShaderQualitySettings.MaterialQualityOverrides
/// Size: 0x0009 (0x000000 - 0x000009)
struct FMaterialQualityOverrides
{ 
	bool                                               bDiscardQualityDuringCook;                                  // 0x0000   (0x0001)  
	bool                                               bEnableOverride;                                            // 0x0001   (0x0001)  
	bool                                               bForceFullyRough;                                           // 0x0002   (0x0001)  
	bool                                               bForceNonMetal;                                             // 0x0003   (0x0001)  
	bool                                               bForceDisableLMDirectionality;                              // 0x0004   (0x0001)  
	bool                                               bForceLQReflections;                                        // 0x0005   (0x0001)  
	bool                                               bForceDisablePreintegratedGF;                               // 0x0006   (0x0001)  
	bool                                               bDisableMaterialNormalCalculation;                          // 0x0007   (0x0001)  
	EMobileCSMQuality                                  MobileCSMQuality;                                           // 0x0008   (0x0001)  
};

/// Enum /Script/MaterialShaderQualitySettings.EMobileCSMQuality
/// Size: 0x05
enum EMobileCSMQuality : uint8_t
{
	EMobileCSMQuality__NoFiltering                                                   = 0,
	EMobileCSMQuality__PCF_1x1                                                       = 1,
	EMobileCSMQuality__PCF_2x2                                                       = 2,
	EMobileCSMQuality__PCF_3x3                                                       = 3,
	EMobileCSMQuality__EMobileCSMQuality_MAX                                         = 4
};

