/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package RawInput.

/// Class /Script/RawInput.RawInputFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/RawInput.RawInputSettings
/// Size: 0x0060 (0x000038 - 0x000098)
class URawInputSettings : public UDeveloperSettings
{ 
public:
	TArray<FRawInputDeviceConfiguration>               DeviceConfigurations;                                       // 0x0038   (0x0010)  
	bool                                               bRegisterDefaultDevice;                                     // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FRawInputDeadzoneConfiguration                     LeftStickDeadzone;                                          // 0x0050   (0x0018)  
	FRawInputDeadzoneConfiguration                     RightStickDeadzone;                                         // 0x0068   (0x0018)  
	FRawInputDeadzoneConfiguration                     TriggerDeadzone;                                            // 0x0080   (0x0018)  
};

/// Struct /Script/RawInput.RegisteredDeviceInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRegisteredDeviceInfo
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
	int32_t                                            VendorID;                                                   // 0x0004   (0x0004)  
	int32_t                                            ProductID;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            DeviceName;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/RawInput.RawInputDeadzoneConfiguration
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRawInputDeadzoneConfiguration
{ 
	float                                              Deadzone;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FKey>                                       Keys;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/RawInput.RawInputDeviceConfiguration
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRawInputDeviceConfiguration
{ 
	FString                                            VendorID;                                                   // 0x0000   (0x0010)  
	FString                                            ProductID;                                                  // 0x0010   (0x0010)  
	TArray<FRawInputDeviceAxisProperties>              AxisProperties;                                             // 0x0020   (0x0010)  
	TArray<FRawInputDeviceButtonProperties>            ButtonProperties;                                           // 0x0030   (0x0010)  
};

/// Struct /Script/RawInput.RawInputDeviceButtonProperties
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRawInputDeviceButtonProperties
{ 
	bool                                               bEnabled;                                                   // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0001   (0x0007)  MISSED
	FKey                                               Key;                                                        // 0x0008   (0x0018)  
};

/// Struct /Script/RawInput.RawInputDeviceAxisProperties
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRawInputDeviceAxisProperties
{ 
	bool                                               bEnabled;                                                   // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0001   (0x0007)  MISSED
	FKey                                               Key;                                                        // 0x0008   (0x0018)  
	bool                                               bInverted;                                                  // 0x0020:0 (0x0001)  
	bool                                               bGamepadStick;                                              // 0x0020:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Offset;                                                     // 0x0024   (0x0004)  
};

