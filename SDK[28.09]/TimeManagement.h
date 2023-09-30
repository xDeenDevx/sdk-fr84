/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TimeManagement.

/// Class /Script/TimeManagement.FixedFrameRateCustomTimeStep
/// Size: 0x0008 (0x000028 - 0x000030)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{ 
public:
	FFrameRate                                         FixedFrameRate;                                             // 0x0028   (0x0008)  
};

/// Class /Script/TimeManagement.TimeManagementBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/TimeManagement.TimeSynchronizationSource
/// Size: 0x0008 (0x000028 - 0x000030)
class UTimeSynchronizationSource : public UObject
{ 
public:
	bool                                               bUseForSynchronization;                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            FrameOffset;                                                // 0x002C   (0x0004)  
};

/// Struct /Script/TimeManagement.TimedDataInputEvaluationData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FTimedDataInputEvaluationData
{ 
	float                                              DistanceToNewestSampleSeconds;                              // 0x0000   (0x0004)  
	float                                              DistanceToOldestSampleSeconds;                              // 0x0004   (0x0004)  
};

/// Struct /Script/TimeManagement.TimedDataChannelSampleTime
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTimedDataChannelSampleTime
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Enum /Script/TimeManagement.EFrameNumberDisplayFormats
/// Size: 0x06
enum EFrameNumberDisplayFormats : uint8_t
{
	EFrameNumberDisplayFormats__NonDropFrameTimecode                                 = 0,
	EFrameNumberDisplayFormats__DropFrameTimecode                                    = 1,
	EFrameNumberDisplayFormats__Seconds                                              = 2,
	EFrameNumberDisplayFormats__Frames                                               = 3,
	EFrameNumberDisplayFormats__MAX_Count                                            = 4,
	EFrameNumberDisplayFormats__EFrameNumberDisplayFormats_MAX                       = 5
};

/// Enum /Script/TimeManagement.ETimedDataInputState
/// Size: 0x04
enum ETimedDataInputState : uint8_t
{
	ETimedDataInputState__Connected                                                  = 0,
	ETimedDataInputState__Unresponsive                                               = 1,
	ETimedDataInputState__Disconnected                                               = 2,
	ETimedDataInputState__ETimedDataInputState_MAX                                   = 3
};

/// Enum /Script/TimeManagement.ETimedDataInputEvaluationType
/// Size: 0x04
enum ETimedDataInputEvaluationType : uint8_t
{
	ETimedDataInputEvaluationType__None                                              = 0,
	ETimedDataInputEvaluationType__Timecode                                          = 1,
	ETimedDataInputEvaluationType__PlatformTime                                      = 2,
	ETimedDataInputEvaluationType__ETimedDataInputEvaluationType_MAX                 = 3
};

