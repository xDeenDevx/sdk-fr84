namespace offsets
{
	namespace UPawnAction_Move
	{
			constexpr auto GoalActor = 0x98; // Size: 8, Type: struct AActor*
			constexpr auto GoalLocation = 0xa0; // Size: 12, Type: struct FVector
			constexpr auto AcceptableRadius = 0xac; // Size: 4, Type: float
			constexpr auto FilterClass = 0xb0; // Size: 8, Type: UNavigationQueryFilter*
			constexpr auto bAllowStrafe = 0xb8; // Size: 1, Type: char
			constexpr auto bFinishOnOverlap = 0xb8; // Size: 1, Type: char
			constexpr auto bUsePathfinding = 0xb8; // Size: 1, Type: char
			constexpr auto bAllowPartialPath = 0xb8; // Size: 1, Type: char
			constexpr auto bProjectGoalToNavigation = 0xb8; // Size: 1, Type: char
			constexpr auto bUpdatePathToGoal = 0xb8; // Size: 1, Type: char
			constexpr auto bAbortChildActionOnPathChange = 0xb8; // Size: 1, Type: char
	}
} 
