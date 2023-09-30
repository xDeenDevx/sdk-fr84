/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package RichtapToolsLib.

/// Class /Script/RichtapToolsLib.RichtapClip
/// Size: 0x0028 (0x000028 - 0x000050)
class URichtapClip : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FString                                            ClipData;                                                   // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Enum /Script/RichtapToolsLib.ERichtapPrebakeId
/// Size: 0x51
enum ERichtapPrebakeId : uint8_t
{
	ERichtapPrebakeId__RT_CLICK                                                      = 0,
	ERichtapPrebakeId__RT_DOUBLE_CLICK                                               = 1,
	ERichtapPrebakeId__RT_SOFT_CLICK                                                 = 2,
	ERichtapPrebakeId__RT_TICK                                                       = 3,
	ERichtapPrebakeId__RT_THUD                                                       = 4,
	ERichtapPrebakeId__RT_FAILURE                                                    = 5,
	ERichtapPrebakeId__RT_SUCCESS                                                    = 6,
	ERichtapPrebakeId__RT_RAMP_UP                                                    = 7,
	ERichtapPrebakeId__RT_TOGGLE_SWITCH                                              = 8,
	ERichtapPrebakeId__RT_LONG_PRESS                                                 = 9,
	ERichtapPrebakeId__RT_VIRTUAL_KEY                                                = 10,
	ERichtapPrebakeId__RT_KEYBOARD_TAP                                               = 11,
	ERichtapPrebakeId__RT_CLOCK_TICK                                                 = 12,
	ERichtapPrebakeId__RT_CALENDAR_DATE                                              = 13,
	ERichtapPrebakeId__RT_CONTEXT_CLICK                                              = 14,
	ERichtapPrebakeId__RT_KEYBOARD_RELEASE                                           = 15,
	ERichtapPrebakeId__RT_VIRTUAL_KEY_RELEASE                                        = 16,
	ERichtapPrebakeId__RT_TEXT_HANDLE_MOVE                                           = 17,
	ERichtapPrebakeId__RT_ENTRY_BUMP                                                 = 18,
	ERichtapPrebakeId__RT_DRAG_CROSSING                                              = 19,
	ERichtapPrebakeId__RT_GESTURE                                                    = 20,
	ERichtapPrebakeId__RT_CONFIRM                                                    = 21,
	ERichtapPrebakeId__RT_REJECT                                                     = 22,
	ERichtapPrebakeId__RT_BOMB                                                       = 23,
	ERichtapPrebakeId__RT_SWORD                                                      = 24,
	ERichtapPrebakeId__RT_GUNSHOT                                                    = 25,
	ERichtapPrebakeId__RT_SPEED_UP                                                   = 26,
	ERichtapPrebakeId__RT_JUMP                                                       = 27,
	ERichtapPrebakeId__RT_DRUM                                                       = 28,
	ERichtapPrebakeId__RT_COIN_DROP                                                  = 29,
	ERichtapPrebakeId__RT_HEARTBEAT                                                  = 30,
	ERichtapPrebakeId__RT_PLUCKING                                                   = 31,
	ERichtapPrebakeId__RT_DRAWING_ARROW                                              = 32,
	ERichtapPrebakeId__RT_CAMERA_SHUTTER                                             = 33,
	ERichtapPrebakeId__RT_FIREWORKS                                                  = 34,
	ERichtapPrebakeId__RT_SNIPER_RIFLE                                               = 35,
	ERichtapPrebakeId__RT_ASSAULT_RIFLE                                              = 36,
	ERichtapPrebakeId__RT_CYMBAL                                                     = 37,
	ERichtapPrebakeId__RT_TAMBOURINE                                                 = 38,
	ERichtapPrebakeId__RT_FAST_MOVING                                                = 39,
	ERichtapPrebakeId__RT_FLY                                                        = 40,
	ERichtapPrebakeId__RT_FOOTSTEP                                                   = 41,
	ERichtapPrebakeId__RT_ICE                                                        = 42,
	ERichtapPrebakeId__RT_LIGHTNING                                                  = 43,
	ERichtapPrebakeId__RT_SPRING                                                     = 44,
	ERichtapPrebakeId__RT_SWING                                                      = 45,
	ERichtapPrebakeId__RT_WIND                                                       = 46,
	ERichtapPrebakeId__RT_VICTORY                                                    = 47,
	ERichtapPrebakeId__RT_AWARD                                                      = 48,
	ERichtapPrebakeId__RT_GAMEOVER                                                   = 49,
	ERichtapPrebakeId__RT_MAX                                                        = 50
};

