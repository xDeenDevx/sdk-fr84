namespace offsets
{
	namespace UOBMiniMapWidget
	{
			constexpr auto CurrentCheckedPlayerID = 0x348; // Size: 16, Type: struct FString
			constexpr auto MiniMapWidget = 0x358; // Size: 8, Type: struct UMiniMapWidget*
			constexpr auto PlayerNavIconMeshWidget = 0x360; // Size: 8, Type: struct URebuildableMeshRectangleWidget*
			constexpr auto PlayerNavDirMeshWidget = 0x368; // Size: 8, Type: struct URebuildableMeshRectangleWidget*
			constexpr auto PlayerNavNameMeshWidget = 0x370; // Size: 8, Type: struct URebuildableMeshRectangleWidget*
			constexpr auto PlayerNavDeadMeshWidget = 0x378; // Size: 8, Type: struct URebuildableMeshRectangleWidget*
			constexpr auto PlayerNavGunLineMeshWidget = 0x380; // Size: 8, Type: struct URebuildableMeshRectangleWidget*
			constexpr auto PlayerNavRTCanvas = 0x388; // Size: 8, Type: struct UCanvasPanel*
			constexpr auto MiniMapPlayerNavScale = 0x390; // Size: 4, Type: float
			constexpr auto GunLineDelayTime = 0x394; // Size: 4, Type: float
			constexpr auto SpectatorNavWidget = 0x398; // Size: 8, Type: struct UOBPlayerNavWidget*
			constexpr auto MapOBTeamPlayerNavWidgets = 0x3a0; // Size: 80, Type: struct TMap<int32_t, struct FTeamPlayerNavArray>
			constexpr auto SpectatorNavWidgetClass = 0x3f0; // Size: 8, Type: UOBPlayerNavWidget*
			constexpr auto OBTeamPlayerNavWidgetClass = 0x3f8; // Size: 8, Type: UOBPlayerNavWidget*
			constexpr auto MiniMapTexture = 0x410; // Size: 8, Type: struct UTextureRenderTarget2D*
			constexpr auto RTTexSize = 0x428; // Size: 8, Type: struct FVector2D
			constexpr auto NavIconType = 0x430; // Size: 4, Type: int32_t
			constexpr auto OBMiniMapData = 0x434; // Size: 24, Type: struct FMiniMapData
	}
} 
