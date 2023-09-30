namespace offsets
{
	namespace UCommonUISettings
	{
			constexpr auto bAutoLoadData = 0x28; // Size: 1, Type: bool
			constexpr auto DefaultImageResourceObject = 0x30; // Size: 40, Type: struct TSoftObjectPtr<UObject>
			constexpr auto DefaultThrobberMaterial = 0x58; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto DefaultRichTextDataClass = 0x80; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto DefaultImageResourceObjectInstance = 0xb0; // Size: 8, Type: struct UObject*
			constexpr auto DefaultThrobberMaterialInstance = 0xb8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto DefaultThrobberBrush = 0xc0; // Size: 152, Type: struct FSlateBrush
			constexpr auto RichTextDataInstance = 0x158; // Size: 8, Type: struct UCommonUIRichTextData*
	}
} 
