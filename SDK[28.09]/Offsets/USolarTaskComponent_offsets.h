namespace offsets
{
	namespace USolarTaskComponent
	{
			constexpr auto TaskUpdateDelegate = 0xb8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto TaskCompoleteDelegate = 0xc8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto MarkingTaskChangedDelegate = 0xd8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ClientTaskUpdatedDelegate = 0xe8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ClientBattlePassTimeInfoDelegate = 0xf8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto TaskTypeHandleConfig = 0x108; // Size: 8, Type: struct UDataTable*
			constexpr auto TaskFormula = 0x110; // Size: 8, Type: ATaskFormula*
			constexpr auto FormulaInst = 0x118; // Size: 8, Type: struct ATaskFormula*
			constexpr auto MarkingTask = 0x120; // Size: 16, Type: struct TArray<int64_t>
			constexpr auto BattlePassTimeInfo = 0x130; // Size: 24, Type: struct FBattlePassTimeInfo
			constexpr auto tasks = 0x148; // Size: 16, Type: struct TArray<struct FTaskBriefData>
	}
} 
