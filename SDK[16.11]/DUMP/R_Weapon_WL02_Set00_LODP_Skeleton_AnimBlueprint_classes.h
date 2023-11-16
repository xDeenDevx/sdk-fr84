// DynamicClass R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C
// Size: 0x380 (Inherited: 0x2d0)
struct UR_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C : UWeaponAnimInstance {
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2d0(0x30)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x300(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x318(0x48)
	struct FAnimMsgData K2Node_MakeStruct_AnimMsgData; // 0x360(0x08)
	struct TArray<struct FAnimMsgData> K2Node_MakeArray_Array; // 0x368(0x10)
	char pad_378[0x8]; // 0x378(0x08)

	void TestAPI(); // Function R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.TestAPI // (Native|Public|BlueprintCallable) // @ game+0x1b39a10
	void InterruptAnim(); // Function R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.InterruptAnim // (Native|Public|BlueprintCallable) // @ game+0x1b47550
	void AnimNotify_QuitReload(); // Function R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitReload // (Native|Public|BlueprintCallable) // @ game+0x1b39b20
	void AnimNotify_QuitIdle(); // Function R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitIdle // (Native|Public|BlueprintCallable) // @ game+0x1b39b60
	void AnimNotify_QuitFire(); // Function R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitFire // (Native|Public|BlueprintCallable) // @ game+0x1b39b40
	void AnimNotify_EnterReload(); // Function R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterReload // (Native|Public|BlueprintCallable) // @ game+0x1b39a30
	void AnimNotify_EnterIdle(); // Function R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterIdle // (Native|Public|BlueprintCallable) // @ game+0x1b47430
	void AnimNotify_EnterFire(); // Function R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterFire // (Native|Public|BlueprintCallable) // @ game+0x1b39970
	void AnimGraph(struct FPoseLink& bpp__AnimGraph__pf); // Function R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimGraph // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b39790
};

