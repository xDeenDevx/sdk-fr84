namespace offsets
{
	namespace UMapMarkBase
	{
			constexpr auto MapOwner = 0x348; // Size: 8, Type: struct UMiniMapBase*
			constexpr auto MarkIconRealLoc = 0x350; // Size: 8, Type: struct FVector2D
			constexpr auto MarkIconAlignment = 0x358; // Size: 8, Type: struct FVector2D
			constexpr auto IsOnBigMap = 0x360; // Size: 1, Type: bool
			constexpr auto MarkerType = 0x361; // Size: 1, Type: enum class EMarkerType
			constexpr auto IsMapObject = 0x362; // Size: 1, Type: bool
			constexpr auto MoveAble = 0x363; // Size: 1, Type: bool
			constexpr auto SupportEdge = 0x364; // Size: 1, Type: bool
			constexpr auto SupportEdgeWithBigMap = 0x365; // Size: 1, Type: bool
			constexpr auto TargetActorRef = 0x368; // Size: 8, Type: struct AActor*
	}
} 
