namespace offsets
{
	namespace UBackpackVertAnimMeshComponent
	{
			constexpr auto DefaultAnimInfo = 0x630; // Size: 16, Type: struct FVertexAnimInfo
			constexpr auto BackPackAnimInfoMap = 0x640; // Size: 80, Type: struct TMap<enum class EBackPackAnimSubType, struct FVertexAnimInfo>
			constexpr auto SolarCharacter = 0x690; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto BackPackActor = 0x698; // Size: 8, Type: struct ASolarBackpackActor*
	}
} 
