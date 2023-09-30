namespace offsets
{
	namespace UMediaTexture
	{
			constexpr auto AddressX = 0xb8; // Size: 1, Type: enum class TextureAddress
			constexpr auto AddressY = 0xb9; // Size: 1, Type: enum class TextureAddress
			constexpr auto AutoClear = 0xba; // Size: 1, Type: bool
			constexpr auto ClearColor = 0xbc; // Size: 16, Type: struct FLinearColor
			constexpr auto EnableGenMips = 0xcc; // Size: 1, Type: bool
			constexpr auto NumMips = 0xcd; // Size: 1, Type: char
			constexpr auto MediaPlayer = 0xd0; // Size: 8, Type: struct UMediaPlayer*
	}
} 
