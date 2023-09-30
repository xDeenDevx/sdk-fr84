namespace offsets
{
	namespace UEmojiBubbleWidget
	{
			constexpr auto ShowTime = 0x358; // Size: 4, Type: float
			constexpr auto EmojiBegin_Anim = 0x390; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto EmojiEnd_Anim = 0x398; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Img_Emoji = 0x3a0; // Size: 8, Type: struct UImage*
			constexpr auto IsSpecialEmoji = 0x3a8; // Size: 1, Type: bool
			constexpr auto EmojiOffsetInLobby = 0x3ac; // Size: 4, Type: int32_t
			constexpr auto LobbyEmojiSize = 0x3b0; // Size: 8, Type: struct FVector2D
			constexpr auto EmojiSizeCurve = 0x3b8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto EnemyEmojiSizeCurve = 0x440; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto TeamMateEmojiOffset = 0x4c8; // Size: 4, Type: int32_t
			constexpr auto SelfEmojiOffset = 0x4cc; // Size: 4, Type: int32_t
			constexpr auto EmoteAppearSoundConfig = 0x4d0; // Size: 16, Type: struct TArray<enum class EUsePlayerType>
			constexpr auto EmoteSoundConfig = 0x4e0; // Size: 16, Type: struct TArray<enum class EUsePlayerType>
	}
} 
