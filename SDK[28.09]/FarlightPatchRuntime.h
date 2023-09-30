/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FarlightPatchRuntime.

/// Class /Script/FarlightPatchRuntime.PakHelper
/// Size: 0x0000 (0x000028 - 0x000028)
class UPakHelper : public UObject
{ 
public:
};

/// Class /Script/FarlightPatchRuntime.PakReader
/// Size: 0x0028 (0x000028 - 0x000050)
class UPakReader : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Class /Script/FarlightPatchRuntime.PakWriter
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UPakWriter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0028   (0x0098)  MISSED
};

/// Struct /Script/FarlightPatchRuntime.PakEntryInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPakEntryInfo
{ 
	FString                                            Filename;                                                   // 0x0000   (0x0010)  
	FString                                            MountPoint;                                                 // 0x0010   (0x0010)  
	int64_t                                            Size;                                                       // 0x0020   (0x0008)  
	int64_t                                            Offset;                                                     // 0x0028   (0x0008)  
	FString                                            Hash;                                                       // 0x0030   (0x0010)  
};

