/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package WindowsDeviceProfileSelector.

/// Class /Script/WindowsDeviceProfileSelector.WindowsDeviceProfileMatchingRules
/// Size: 0x0010 (0x000028 - 0x000038)
class UWindowsDeviceProfileMatchingRules : public UObject
{ 
public:
	TArray<FWIndowProfileMatch>                        MatchProfile;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/WindowsDeviceProfileSelector.WIndowProfileMatch
/// Size: 0x0020 (0x000000 - 0x000020)
struct FWIndowProfileMatch
{ 
	FString                                            Profile;                                                    // 0x0000   (0x0010)  
	FWindowsProfileMatchItem                           Match;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/WindowsDeviceProfileSelector.WindowsProfileMatchItem
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWindowsProfileMatchItem
{ 
	FString                                            PrimaryGPUBrand;                                            // 0x0000   (0x0010)  
};

