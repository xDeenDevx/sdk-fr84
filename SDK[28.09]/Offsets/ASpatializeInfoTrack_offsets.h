namespace offsets
{
	namespace ASpatializeInfoTrack
	{
			constexpr auto TrackArray = 0x230; // Size: 304, Type: struct FTrackArray
			constexpr auto Timeout = 0x3ec; // Size: 4, Type: float
			constexpr auto MinRevealDistance = 0x3f0; // Size: 4, Type: float
			constexpr auto MaxTrackNum = 0x3f4; // Size: 4, Type: int32_t
			constexpr auto CurTrackWidgets = 0x3f8; // Size: 80, Type: struct TMap<struct FTrackItem, struct A3DMeshWidgetTrack*>
	}
} 
