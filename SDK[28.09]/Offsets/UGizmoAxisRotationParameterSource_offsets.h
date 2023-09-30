namespace offsets
{
	namespace UGizmoAxisRotationParameterSource
	{
			constexpr auto AxisSource = 0x48; // Size: 16, Type: struct TScriptInterface<IGizmoAxisSource>
			constexpr auto TransformSource = 0x58; // Size: 16, Type: struct TScriptInterface<IGizmoTransformSource>
			constexpr auto Angle = 0x68; // Size: 4, Type: float
			constexpr auto LastChange = 0x6c; // Size: 8, Type: struct FGizmoFloatParameterChange
			constexpr auto CurRotationAxis = 0x74; // Size: 12, Type: struct FVector
			constexpr auto CurRotationOrigin = 0x80; // Size: 12, Type: struct FVector
			constexpr auto InitialTransform = 0x90; // Size: 48, Type: struct FTransform
	}
} 
