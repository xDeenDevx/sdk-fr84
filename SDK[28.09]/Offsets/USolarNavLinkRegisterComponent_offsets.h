namespace offsets
{
	namespace USolarNavLinkRegisterComponent
	{
			constexpr auto SmartLinkMap = 0x190; // Size: 80, Type: struct TMap<uint32_t, struct FSmartLinkInstance>
			constexpr auto LinkType = 0x230; // Size: 1, Type: enum class ENavLinkType
			constexpr auto VaultPoint = 0x234; // Size: 12, Type: struct FVector
			constexpr auto VaultDirect = 0x240; // Size: 12, Type: struct FVector
			constexpr auto VaultAnimate = 0x24c; // Size: 1, Type: enum class EVaultType
			constexpr auto VaultLandPoint = 0x250; // Size: 12, Type: struct FVector
	}
} 
