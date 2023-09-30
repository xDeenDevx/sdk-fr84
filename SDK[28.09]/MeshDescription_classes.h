// Class MeshDescription.MeshDescription
// Size: 0x28 (Inherited: 0x28)
struct UMeshDescription : UObject {
};

// Class MeshDescription.MeshDescriptionBase
// Size: 0x390 (Inherited: 0x28)
struct UMeshDescriptionBase : UObject {
	char pad_28[0x368]; // 0x28(0x368)

	void SetVertexPosition(struct FVertexID VertexID, struct FVector& Position); // Function MeshDescription.MeshDescriptionBase.SetVertexPosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3606630
	void SetPolygonVertexInstance(struct FPolygonID PolygonID, int32_t PerimeterIndex, struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x3606510
	void SetPolygonPolygonGroup(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x3606440
	void ReversePolygonFacing(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing // (Final|Native|Public|BlueprintCallable) // @ game+0x36063c0
	void ReserveNewVertices(int32_t NumberOfNewVertices); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertices // (Final|Native|Public|BlueprintCallable) // @ game+0x3606330
	void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances); // Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances // (Final|Native|Public|BlueprintCallable) // @ game+0x36060f0
	void ReserveNewTriangles(int32_t NumberOfNewTriangles); // Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles // (Final|Native|Public|BlueprintCallable) // @ game+0x36062a0
	void ReserveNewPolygons(int32_t NumberOfNewPolygons); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons // (Final|Native|Public|BlueprintCallable) // @ game+0x3606210
	void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups); // Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups // (Final|Native|Public|BlueprintCallable) // @ game+0x3606180
	void ReserveNewEdges(int32_t NumberOfNewEdges); // Function MeshDescription.MeshDescriptionBase.ReserveNewEdges // (Final|Native|Public|BlueprintCallable) // @ game+0x36060f0
	bool IsVertexValid(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3606060
	bool IsVertexOrphaned(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605fd0
	bool IsVertexInstanceValid(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605f40
	bool IsTriangleValid(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTriangleValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605eb0
	bool IsTrianglePartOfNgon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605e20
	bool IsPolygonValid(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsPolygonValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605d90
	bool IsPolygonGroupValid(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605d00
	bool IsEmpty(); // Function MeshDescription.MeshDescriptionBase.IsEmpty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605cd0
	bool IsEdgeValid(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605c40
	bool IsEdgeInternalToPolygon(struct FEdgeID EdgeID, struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605b60
	bool IsEdgeInternal(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.IsEdgeInternal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605ad0
	void GetVertexVertexInstances(struct FVertexID VertexID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x36059e0
	struct FVector GetVertexPosition(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605940
	struct FEdgeID GetVertexPairEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605860
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36057c0
	struct FEdgeID GetVertexInstancePairEdge(struct FVertexInstanceID VertexInstanceID0, struct FVertexInstanceID VertexInstanceID1); // Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36056e0
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(struct FTriangleID TriangleID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605600
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(struct FPolygonID PolygonID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605520
	void GetVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605430
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605340
	void GetVertexConnectedTriangles(struct FVertexID VertexID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605250
	void GetVertexConnectedPolygons(struct FVertexID VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605160
	void GetVertexConnectedEdges(struct FVertexID VertexID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3605070
	void GetVertexAdjacentVertices(struct FVertexID VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604f80
	void GetTriangleVertices(struct FTriangleID TriangleID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604e90
	void GetTriangleVertexInstances(struct FTriangleID TriangleID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604da0
	struct FVertexInstanceID GetTriangleVertexInstance(struct FTriangleID TriangleID, int32_t Index); // Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604cc0
	struct FPolygonGroupID GetTrianglePolygonGroup(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604c20
	struct FPolygonID GetTrianglePolygon(struct FTriangleID TriangleID); // Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604b80
	void GetTriangleEdges(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604a90
	void GetTriangleAdjacentTriangles(struct FTriangleID TriangleID, struct TArray<struct FTriangleID>& OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x36049a0
	void GetPolygonVertices(struct FPolygonID PolygonID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x36048b0
	void GetPolygonVertexInstances(struct FPolygonID PolygonID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x36047c0
	void GetPolygonTriangles(struct FPolygonID PolygonID, struct TArray<struct FTriangleID>& OutTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x36046d0
	struct FPolygonGroupID GetPolygonPolygonGroup(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604630
	void GetPolygonPerimeterEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604540
	void GetPolygonInternalEdges(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604450
	void GetPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FPolygonID>& OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604360
	void GetPolygonAdjacentPolygons(struct FPolygonID PolygonID, struct TArray<struct FPolygonID>& OutPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604270
	int32_t GetNumVertexVertexInstances(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36041e0
	int32_t GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604150
	int32_t GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID VertexInstanceID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36040c0
	int32_t GetNumVertexConnectedTriangles(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3604030
	int32_t GetNumVertexConnectedPolygons(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3603fa0
	int32_t GetNumVertexConnectedEdges(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3603f10
	int32_t GetNumPolygonVertices(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3603e80
	int32_t GetNumPolygonTriangles(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3603df0
	int32_t GetNumPolygonInternalEdges(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3603d60
	int32_t GetNumPolygonGroupPolygons(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3603cd0
	int32_t GetNumEdgeConnectedTriangles(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3603c40
	int32_t GetNumEdgeConnectedPolygons(struct FEdgeID EdgeID); // Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3603bb0
	void GetEdgeVertices(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OutVertexIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertices // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3603ac0
	struct FVertexID GetEdgeVertex(struct FEdgeID EdgeID, int32_t VertexNumber); // Function MeshDescription.MeshDescriptionBase.GetEdgeVertex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36039e0
	void GetEdgeConnectedTriangles(struct FEdgeID EdgeID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x36038f0
	void GetEdgeConnectedPolygons(struct FEdgeID EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3603800
	void Empty(); // Function MeshDescription.MeshDescriptionBase.Empty // (Final|Native|Public|BlueprintCallable) // @ game+0x36037e0
	void DeleteVertexInstance(struct FVertexInstanceID VertexInstanceID, struct TArray<struct FVertexID>& OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x36036f0
	void DeleteVertex(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.DeleteVertex // (Final|Native|Public|BlueprintCallable) // @ game+0x3603670
	void DeleteTriangle(struct FTriangleID TriangleID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr); // Function MeshDescription.MeshDescriptionBase.DeleteTriangle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x36034b0
	void DeletePolygonGroup(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x3603430
	void DeletePolygon(struct FPolygonID PolygonID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroups); // Function MeshDescription.MeshDescriptionBase.DeletePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3603270
	void DeleteEdge(struct FEdgeID EdgeID, struct TArray<struct FVertexID>& OrphanedVertices); // Function MeshDescription.MeshDescriptionBase.DeleteEdge // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3603180
	void CreateVertexWithID(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x3603100
	void CreateVertexInstanceWithID(struct FVertexInstanceID VertexInstanceID, struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x3603030
	struct FVertexInstanceID CreateVertexInstance(struct FVertexID VertexID); // Function MeshDescription.MeshDescriptionBase.CreateVertexInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x3602f90
	struct FVertexID CreateVertex(); // Function MeshDescription.MeshDescriptionBase.CreateVertex // (Final|Native|Public|BlueprintCallable) // @ game+0x3602f50
	void CreateTriangleWithID(struct FTriangleID TriangleID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3602da0
	struct FTriangleID CreateTriangle(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreateTriangle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3602c30
	void CreatePolygonWithID(struct FPolygonID PolygonID, struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3602a80
	void CreatePolygonGroupWithID(struct FPolygonGroupID PolygonGroupID); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x3602a00
	struct FPolygonGroupID CreatePolygonGroup(); // Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x36029c0
	struct FPolygonID CreatePolygon(struct FPolygonGroupID PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // Function MeshDescription.MeshDescriptionBase.CreatePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3602850
	void CreateEdgeWithID(struct FEdgeID EdgeID, struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID // (Final|Native|Public|BlueprintCallable) // @ game+0x3602730
	struct FEdgeID CreateEdge(struct FVertexID VertexID0, struct FVertexID VertexID1); // Function MeshDescription.MeshDescriptionBase.CreateEdge // (Final|Native|Public|BlueprintCallable) // @ game+0x3602650
	void ComputePolygonTriangulation(struct FPolygonID PolygonID); // Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation // (Final|Native|Public|BlueprintCallable) // @ game+0x36025d0
};

