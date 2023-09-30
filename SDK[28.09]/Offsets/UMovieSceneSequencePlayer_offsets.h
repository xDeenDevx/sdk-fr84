namespace offsets
{
	namespace UMovieSceneSequencePlayer
	{
			constexpr auto OnPlay = 0x408; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlayReverse = 0x418; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStop = 0x428; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPause = 0x438; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnFinished = 0x448; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto status = 0x458; // Size: 1, Type: enum class EMovieScenePlayerStatus
			constexpr auto bReversePlayback = 0x45c; // Size: 1, Type: char
			constexpr auto Sequence = 0x460; // Size: 8, Type: struct UMovieSceneSequence*
			constexpr auto StartTime = 0x468; // Size: 4, Type: struct FFrameNumber
			constexpr auto DurationFrames = 0x46c; // Size: 4, Type: int32_t
			constexpr auto CurrentNumLoops = 0x470; // Size: 4, Type: int32_t
			constexpr auto PlaybackSettings = 0x488; // Size: 20, Type: struct FMovieSceneSequencePlaybackSettings
			constexpr auto RootTemplateInstance = 0x4a0; // Size: 800, Type: struct FMovieSceneRootEvaluationTemplateInstance
			constexpr auto NetSyncProps = 0x828; // Size: 16, Type: struct FMovieSceneSequenceReplProperties
			constexpr auto PlaybackClient = 0x838; // Size: 16, Type: struct TScriptInterface<IMovieScenePlaybackClient>
	}
} 
