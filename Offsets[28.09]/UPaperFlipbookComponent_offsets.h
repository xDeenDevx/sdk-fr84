namespace offsets
{
	namespace UPaperFlipbookComponent
	{
			constexpr auto SourceFlipbook = 0x578; // Size: 8, Type: struct UPaperFlipbook*
			constexpr auto Material = 0x580; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto PlayRate = 0x588; // Size: 4, Type: float
			constexpr auto bLooping = 0x58c; // Size: 1, Type: char
			constexpr auto bReversePlayback = 0x58c; // Size: 1, Type: char
			constexpr auto bPlaying = 0x58c; // Size: 1, Type: char
			constexpr auto AccumulatedTime = 0x590; // Size: 4, Type: float
			constexpr auto CachedFrameIndex = 0x594; // Size: 4, Type: int32_t
			constexpr auto SpriteColor = 0x598; // Size: 16, Type: struct FLinearColor
			constexpr auto CachedBodySetup = 0x5a8; // Size: 8, Type: struct UBodySetup*
			constexpr auto OnFinishedPlaying = 0x5b0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
