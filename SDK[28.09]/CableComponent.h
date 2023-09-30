/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CableComponent.

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000228 - 0x000230)
class ACableActor : public AActor
{ 
public:
	UCableComponent*                                   CableComponent;                                             // 0x0228   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0090 (0x000580 - 0x000610)
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x0578   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x0579   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x057A   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x0580   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x05A8   (0x0008)  
	FVector                                            EndLocation;                                                // 0x05B0   (0x000C)  
	float                                              CableLength;                                                // 0x05BC   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x05C0   (0x0004)  
	float                                              SubstepTime;                                                // 0x05C4   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x05C8   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x05CC   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x05CD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x05CE   (0x0002)  MISSED
	float                                              CollisionFriction;                                          // 0x05D0   (0x0004)  
	FVector                                            CableForce;                                                 // 0x05D4   (0x000C)  
	float                                              CableGravityScale;                                          // 0x05E0   (0x0004)  
	float                                              CableWidth;                                                 // 0x05E4   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x05E8   (0x0004)  
	float                                              TileMaterial;                                               // 0x05EC   (0x0004)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x05F0   (0x0020)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);                                              // [0x17ca0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);                                           // [0x17c9fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x17c9f00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	USceneComponent* GetAttachedComponent();                                                                                 // [0x17c9ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	AActor* GetAttachedActor();                                                                                              // [0x17c9ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

