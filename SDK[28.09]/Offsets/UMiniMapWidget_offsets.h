namespace offsets
{
	namespace UMiniMapWidget
	{
			constexpr auto MiniMapData = 0x3b4; // Size: 24, Type: struct FMiniMapData
			constexpr auto AutoOffset = 0x3cc; // Size: 1, Type: bool
			constexpr auto OnCar = 0x3cd; // Size: 1, Type: bool
			constexpr auto WithIconScale = 0x3ce; // Size: 1, Type: bool
			constexpr auto AspectRatio = 0x3d0; // Size: 4, Type: float
			constexpr auto CurrentState = 0x3d4; // Size: 1, Type: enum class EMapState
			constexpr auto SelfNavSlotSize = 0x3d8; // Size: 8, Type: struct FVector2D
			constexpr auto PlayerNavMap = 0x3e0; // Size: 80, Type: struct TMap<int32_t, struct UPlayerNavWidget*>
			constexpr auto MapFOVSizeBox = 0x430; // Size: 8, Type: struct USizeBox*
			constexpr auto MapOffset = 0x438; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto SolarImageMap = 0x440; // Size: 8, Type: struct USolarImage*
			constexpr auto ImageFrameLayer = 0x448; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto MarkerLayer = 0x450; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto MapScale = 0x458; // Size: 8, Type: struct UScaleBox*
			constexpr auto RenderTargetCanvas = 0x460; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto Img_EMP = 0x468; // Size: 8, Type: struct USolarImage*
			constexpr auto IconMeshRectangleWidget = 0x470; // Size: 8, Type: struct UMeshRectangleWidget*
			constexpr auto AnimIconMeshWidget = 0x478; // Size: 8, Type: struct UMeshRectangleWidget*
			constexpr auto MiniMapMeshWidgetConfigData = 0x480; // Size: 24, Type: struct FConfigMiniMapMeshWidgetData
			constexpr auto SelfNav = 0x498; // Size: 8, Type: struct UPlayerNavWidget*
			constexpr auto CurrentMapOffset = 0x4a0; // Size: 8, Type: struct FVector2D
			constexpr auto MapIconScale = 0x4a8; // Size: 8, Type: struct FVector2D
			constexpr auto MapMgr = 0x4b0; // Size: 8, Type: struct USolarMapManager*
			constexpr auto MapImageWidget = 0x4b8; // Size: 8, Type: struct UMiniMapBGWidget*
			constexpr auto bBelongToBigMap = 0x4c0; // Size: 1, Type: bool
			constexpr auto ClampMarkTickRate = 0x4c4; // Size: 4, Type: float
			constexpr auto AirdropMeshWidgetDataMap = 0x4c8; // Size: 80, Type: struct TMap<enum class EAirdropStatus, struct FAirdropMeshWidgetData>
			constexpr auto AdjustMapRatio = 0x518; // Size: 4, Type: float
			constexpr auto AdjustWorldDis = 0x51c; // Size: 4, Type: float
			constexpr auto AirdropAnimOutsideScale = 0x520; // Size: 4, Type: float
			constexpr auto AirdropClearTime = 0x524; // Size: 4, Type: float
			constexpr auto ReviveMarkNormalParms = 0x52c; // Size: 24, Type: struct FConfigMiniMapMeshWidgetData
			constexpr auto ReviveMarkAnimParms = 0x544; // Size: 24, Type: struct FConfigMiniMapMeshWidgetData
			constexpr auto ReviveMarkAnimTime = 0x55c; // Size: 4, Type: float
			constexpr auto IconSizeFormatInterval = 0x560; // Size: 4, Type: float
			constexpr auto bUpdateSelfNav = 0x574; // Size: 1, Type: bool
			constexpr auto CacheFOVScaleCurve = 0x5c8; // Size: 8, Type: struct UCurveFloat*
	}
} 
