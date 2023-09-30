namespace offsets
{
	namespace UTransformGizmo
	{
			constexpr auto ActiveTarget = 0x40; // Size: 8, Type: struct UTransformProxy*
			constexpr auto bSnapToWorldGrid = 0x48; // Size: 1, Type: bool
			constexpr auto bUseContextCoordinateSystem = 0x49; // Size: 1, Type: bool
			constexpr auto CurrentCoordinateSystem = 0x4c; // Size: 4, Type: enum class EToolContextCoordinateSystem
			constexpr auto ActiveComponents = 0xe0; // Size: 16, Type: struct TArray<struct UPrimitiveComponent*>
			constexpr auto NonuniformScaleComponents = 0xf0; // Size: 16, Type: struct TArray<struct UPrimitiveComponent*>
			constexpr auto ActiveGizmos = 0x100; // Size: 16, Type: struct TArray<struct UInteractiveGizmo*>
			constexpr auto CameraAxisSource = 0x120; // Size: 8, Type: struct UGizmoConstantFrameAxisSource*
			constexpr auto AxisXSource = 0x128; // Size: 8, Type: struct UGizmoComponentAxisSource*
			constexpr auto AxisYSource = 0x130; // Size: 8, Type: struct UGizmoComponentAxisSource*
			constexpr auto AxisZSource = 0x138; // Size: 8, Type: struct UGizmoComponentAxisSource*
			constexpr auto UnitAxisXSource = 0x140; // Size: 8, Type: struct UGizmoComponentAxisSource*
			constexpr auto UnitAxisYSource = 0x148; // Size: 8, Type: struct UGizmoComponentAxisSource*
			constexpr auto UnitAxisZSource = 0x150; // Size: 8, Type: struct UGizmoComponentAxisSource*
			constexpr auto StateTarget = 0x158; // Size: 8, Type: struct UGizmoTransformChangeStateTarget*
			constexpr auto ScaledTransformSource = 0x160; // Size: 8, Type: struct UGizmoScaledTransformSource*
	}
} 
