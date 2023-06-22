


















































	#define NEWTON_BROADPHASE_DEFAULT						0
	#define NEWTON_BROADPHASE_PERSINTENT					1

	#define NEWTON_DYNAMIC_BODY								0
	#define NEWTON_KINEMATIC_BODY							1
	#define NEWTON_DYNAMIC_ASYMETRIC_BODY					2


	#define SERIALIZE_ID_SPHERE								0
	#define SERIALIZE_ID_CAPSULE							1
	#define SERIALIZE_ID_CYLINDER							2
	#define SERIALIZE_ID_CHAMFERCYLINDER					3
	#define SERIALIZE_ID_BOX								4
	#define SERIALIZE_ID_CONE								5
	#define SERIALIZE_ID_CONVEXHULL							6
	#define SERIALIZE_ID_NULL								7
	#define SERIALIZE_ID_COMPOUND							8
	#define SERIALIZE_ID_TREE								9
	#define SERIALIZE_ID_HEIGHTFIELD						10
	#define SERIALIZE_ID_CLOTH_PATCH						11
	#define SERIALIZE_ID_DEFORMABLE_SOLID					12
	#define SERIALIZE_ID_USERMESH							13
	#define SERIALIZE_ID_SCENE								14
	#define SERIALIZE_ID_FRACTURED_COMPOUND					15


	typedef struct NewtonMesh NewtonMesh;
	typedef struct NewtonBody NewtonBody;
	typedef struct NewtonWorld NewtonWorld;
	typedef struct NewtonJoint NewtonJoint;
	typedef struct NewtonMaterial NewtonMaterial;
	typedef struct NewtonCollision NewtonCollision;
	typedef struct NewtonDeformableMeshSegment NewtonDeformableMeshSegment;
	typedef struct NewtonFracturedCompoundMeshPart NewtonFracturedCompoundMeshPart;


	typedef union
	{
		void* m_ptr;
		long long m_int;
		float m_float;
	} NewtonMaterialData;

	typedef struct NewtonCollisionMaterial
	{
		long long m_userId;
		NewtonMaterialData m_userData;
		NewtonMaterialData m_userParam[6];
	} NewtonCollisionMaterial;

	typedef struct NewtonBoxParam
	{
		float m_x;
		float m_y;
		float m_z;
	} NewtonBoxParam;

	typedef struct NewtonSphereParam
	{
		float m_radio;
	} NewtonSphereParam;


	typedef struct NewtonCapsuleParam
	{
		float m_radio0;
		float m_radio1;
		float m_height;
	} NewtonCapsuleParam;

	typedef struct NewtonCylinderParam
	{
		float m_radio0;
		float m_radio1;
		float m_height;
	} NewtonCylinderParam;

	typedef struct NewtonConeParam
	{
		float m_radio;
		float m_height;
	} NewtonConeParam;

	typedef struct NewtonChamferCylinderParam
	{
		float m_radio;
		float m_height;
	} NewtonChamferCylinderParam;

	typedef struct NewtonConvexHullParam
	{
		int m_vertexCount;
		int m_vertexStrideInBytes;
		int m_faceCount;
		float* m_vertex;
	} NewtonConvexHullParam;

	typedef struct NewtonCompoundCollisionParam
	{
		int m_chidrenCount;
	} NewtonCompoundCollisionParam;

	typedef struct NewtonCollisionTreeParam
	{
		int m_vertexCount;
		int m_indexCount;
	} NewtonCollisionTreeParam;

	typedef struct NewtonDeformableMeshParam
	{
		int m_vertexCount;
		int m_triangleCount;
		int m_vrtexStrideInBytes;
		unsigned short *m_indexList;
		float *m_vertexList;
	} NewtonDeformableMeshParam;

	typedef struct NewtonHeightFieldCollisionParam
	{
		int m_width;
		int m_height;
		int m_gridsDiagonals;
		int m_elevationDataType;	
		float m_verticalScale;
		float m_horizonalScale_x;
		float m_horizonalScale_z;
		void* m_vertialElevation;
		char* m_atributes;
	} NewtonHeightFieldCollisionParam;

	typedef struct NewtonSceneCollisionParam
	{
		int m_childrenProxyCount;
	} NewtonSceneCollisionParam;

	typedef struct NewtonCollisionInfoRecord
	{
		float m_offsetMatrix[4][4];
		NewtonCollisionMaterial m_collisionMaterial;
		int m_collisionType;				
		union {
			NewtonBoxParam m_box;
			NewtonConeParam m_cone;
			NewtonSphereParam m_sphere;
			NewtonCapsuleParam m_capsule;
			NewtonCylinderParam m_cylinder;
			NewtonChamferCylinderParam m_chamferCylinder;
			NewtonConvexHullParam m_convexHull;
			NewtonDeformableMeshParam m_deformableMesh;
			NewtonCompoundCollisionParam m_compoundCollision;
			NewtonCollisionTreeParam m_collisionTree;
			NewtonHeightFieldCollisionParam m_heightField;
			NewtonSceneCollisionParam m_sceneCollision;
			float m_paramArray[64];		    
		};
	} NewtonCollisionInfoRecord;

	typedef struct NewtonJointRecord
	{
		float m_attachmenMatrix_0[4][4];
		float m_attachmenMatrix_1[4][4];
		float m_minLinearDof[3];
		float m_maxLinearDof[3];
		float m_minAngularDof[3];
		float m_maxAngularDof[3];
		const NewtonBody* m_attachBody_0;
		const NewtonBody* m_attachBody_1;
		float m_extraParameters[64];
		int	m_bodiesCollisionOn;
		char m_descriptionType[128];
	} NewtonJointRecord;

	typedef struct NewtonUserMeshCollisionCollideDesc
	{
		float m_boxP0[4];							
		float m_boxP1[4];							
		float m_boxDistanceTravel[4];				
		int m_threadNumber;							
		int	m_faceCount;                        	
		int m_vertexStrideInBytes;              	
		float m_skinThickness;                     
		void* m_userData;                       	

		NewtonBody* m_objBody;                  	
		NewtonBody* m_polySoupBody;             	
		NewtonCollision* m_objCollision;			
		NewtonCollision* m_polySoupCollision;		

		float* m_vertex;                       	
		int* m_faceIndexCount;                  	
		int* m_faceVertexIndex;                 	
													
                                                	
		                                        	
													
													
													
	} NewtonUserMeshCollisionCollideDesc;

	typedef struct NewtonWorldConvexCastReturnInfo
	{
		float m_point[4];						
		float m_normal[4];						
		
												
		long long m_contactID;						
		const NewtonBody* m_hitBody;			
		float m_penetration;                   
	} NewtonWorldConvexCastReturnInfo;

	typedef struct NewtonUserMeshCollisionRayHitDesc
	{
		float m_p0[4];							
		float m_p1[4];                         
		float m_normalOut[4];					
		long long m_userIdOut;						
		void* m_userData;                       
	} NewtonUserMeshCollisionRayHitDesc;

	typedef struct NewtonHingeSliderUpdateDesc
	{
		float m_accel;
		float m_minFriction;
		float m_maxFriction;
		float m_timestep;
	} NewtonHingeSliderUpdateDesc;

	typedef struct NewtonUserContactPoint
	{
		float m_point[4];
		float m_normal[4];
		long long m_shapeId0;
		long long m_shapeId1;
		float m_penetration;
		int m_unused[3];
	} NewtonUserContactPoint;


	typedef struct NewtonImmediateModeConstraint
	{
		float m_jacobian01[8][6];
		float m_jacobian10[8][6];
		float m_minFriction[8];
		float m_maxFriction[8];
		float m_jointAccel[8];
		float m_jointStiffness[8];
	} NewtonConstraintDescriptor;


	
	typedef struct NewtonMeshDoubleData
	{
		double* m_data;
		int* m_indexList;
		int m_strideInBytes;
	} NewtonMeshDoubleData;

	typedef struct NewtonMeshFloatData
	{
		float* m_data;
		int* m_indexList;
		int m_strideInBytes;
	} NewtonMeshFloatData;

	typedef struct NewtonMeshVertexFormat
	{
		int m_faceCount;
		int* m_faceIndexCount;
		int* m_faceMaterial;
		NewtonMeshDoubleData m_vertex;
		NewtonMeshFloatData m_normal;
		NewtonMeshFloatData m_binormal;
		NewtonMeshFloatData m_uv0;
		NewtonMeshFloatData m_uv1;
		NewtonMeshFloatData m_vertexColor;
	} NewtonMeshVertexFormat;

	
	typedef void* (*NewtonAllocMemory) (int sizeInBytes);
	typedef void (*NewtonFreeMemory) (void* const ptr, int sizeInBytes);

	typedef void (*NewtonWorldDestructorCallback) (const NewtonWorld* const world);
	typedef void (*NewtonPostUpdateCallback) (const NewtonWorld* const world, float timestep);

	typedef void(*NewtonCreateContactCallback) (const NewtonWorld* const newtonWorld, NewtonJoint* const contact);
	typedef void(*NewtonDestroyContactCallback) (const NewtonWorld* const newtonWorld, NewtonJoint* const contact);

	typedef void (*NewtonWorldListenerDebugCallback) (const NewtonWorld* const world, void* const listener, void* const debugContext);
	typedef void (*NewtonWorldListenerBodyDestroyCallback) (const NewtonWorld* const world, void* const listenerUserData, NewtonBody* const body);
	typedef void (*NewtonWorldUpdateListenerCallback) (const NewtonWorld* const world, void* const listenerUserData, float timestep);
	typedef void (*NewtonWorldDestroyListenerCallback) (const NewtonWorld* const world, void* const listenerUserData);

	typedef long long (*NewtonGetTimeInMicrosencondsCallback) ();

	typedef void (*NewtonSerializeCallback) (void* const serializeHandle, const void* const buffer, int size);
	typedef void (*NewtonDeserializeCallback) (void* const serializeHandle, void* const buffer, int size);

	typedef void (*NewtonOnBodySerializationCallback) (NewtonBody* const body, void* const userData, NewtonSerializeCallback function, void* const serializeHandle);
	typedef void (*NewtonOnBodyDeserializationCallback) (NewtonBody* const body, void* const userData, NewtonDeserializeCallback function, void* const serializeHandle);

	typedef void (*NewtonOnJointSerializationCallback) (const NewtonJoint* const joint, NewtonSerializeCallback function, void* const serializeHandle);
	typedef void (*NewtonOnJointDeserializationCallback) (NewtonBody* const body0, NewtonBody* const body1, NewtonDeserializeCallback function, void* const serializeHandle);

	typedef void (*NewtonOnUserCollisionSerializationCallback) (void* const userData, NewtonSerializeCallback function, void* const serializeHandle);

	
	typedef void (*NewtonUserMeshCollisionDestroyCallback) (void* const userData);
	typedef float (*NewtonUserMeshCollisionRayHitCallback) (NewtonUserMeshCollisionRayHitDesc* const lineDescData);
	typedef void (*NewtonUserMeshCollisionGetCollisionInfo) (void* const userData, NewtonCollisionInfoRecord* const infoRecord);
	typedef int (*NewtonUserMeshCollisionAABBTest) (void* const userData, const float* const boxP0, const float* const boxP1);
	typedef int (*NewtonUserMeshCollisionGetFacesInAABB) (void* const userData, const float* const p0, const float* const p1,
														   const float** const vertexArray, int* const vertexCount, int* const vertexStrideInBytes,
		                                                   const int* const indexList, int maxIndexCount, const int* const userDataList);
	typedef void (*NewtonUserMeshCollisionCollideCallback) (NewtonUserMeshCollisionCollideDesc* const collideDescData, const void* const continueCollisionHandle);

	typedef int (*NewtonTreeCollisionFaceCallback) (void* const context, const float* const polygon, int strideInBytes, const int* const indexArray, int indexCount);

	typedef float (*NewtonCollisionTreeRayCastCallback) (const NewtonBody* const body, const NewtonCollision* const treeCollision, float intersection, float* const normal, int faceId, void* const usedData);
	typedef float (*NewtonHeightFieldRayCastCallback) (const NewtonBody* const body, const NewtonCollision* const heightFieldCollision, float intersection, int row, int col, float* const normal, int faceId, void* const usedData);

	typedef void (*NewtonCollisionCopyConstructionCallback) (const NewtonWorld* const newtonWorld, NewtonCollision* const collision, const NewtonCollision* const sourceCollision);
	typedef void (*NewtonCollisionDestructorCallback) (const NewtonWorld* const newtonWorld, const NewtonCollision* const collision);

	
	typedef void (*NewtonTreeCollisionCallback) (const NewtonBody* const bodyWithTreeCollision, const NewtonBody* const body, int faceID,
												 int vertexCount, const float* const vertex, int vertexStrideInBytes);

	typedef void (*NewtonBodyDestructor) (const NewtonBody* const body);
	typedef void (*NewtonApplyForceAndTorque) (const NewtonBody* const body, float timestep, int threadIndex);
	typedef void (*NewtonSetTransform) (const NewtonBody* const body, const float* const matrix4x4, int threadIndex);

	typedef int (*NewtonIslandUpdate) (const NewtonWorld* const newtonWorld, const void* islandHandle, int bodyCount);

	typedef void (*NewtonFractureCompoundCollisionOnEmitCompoundFractured) (NewtonBody* const fracturedBody);
	typedef void (*NewtonFractureCompoundCollisionOnEmitChunk) (NewtonBody* const chunkBody, NewtonFracturedCompoundMeshPart* const fracturexChunkMesh, const NewtonCollision* const fracturedCompountCollision);
	typedef void (*NewtonFractureCompoundCollisionReconstructMainMeshCallBack) (NewtonBody* const body, NewtonFracturedCompoundMeshPart* const mainMesh, const NewtonCollision* const fracturedCompountCollision);

	typedef unsigned (*NewtonWorldRayPrefilterCallback)(const NewtonBody* const body, const NewtonCollision* const collision, void* const userData);
	typedef float (*NewtonWorldRayFilterCallback)(const NewtonBody* const body, const NewtonCollision* const shapeHit, const float* const hitContact, const float* const hitNormal, long long collisionID, void* const userData, float intersectParam);

	typedef int (*NewtonOnAABBOverlap) (const NewtonJoint* const contact, float timestep, int threadIndex);
	typedef void (*NewtonContactsProcess) (const NewtonJoint* const contact, float timestep, int threadIndex);
	typedef int (*NewtonOnCompoundSubCollisionAABBOverlap) (const NewtonJoint* const contact, float timestep, const NewtonBody* const body0, const void* const collisionNode0, const NewtonBody* const body1, const void* const collisionNode1, int threadIndex);
	typedef int  (*NewtonOnContactGeneration) (const NewtonMaterial* const material, const NewtonBody* const body0, const NewtonCollision* const collision0, const NewtonBody* const body1, const NewtonCollision* const collision1, NewtonUserContactPoint* const contactBuffer, int maxCount, int threadIndex);

	typedef int (*NewtonBodyIterator) (const NewtonBody* const body, void* const userData);
	typedef void (*NewtonJointIterator) (const NewtonJoint* const joint, void* const userData);
	typedef void (*NewtonCollisionIterator) (void* const userData, int vertexCount, const float* const faceArray, int faceId);

	typedef void (*NewtonBallCallback) (const NewtonJoint* const ball, float timestep);
	typedef unsigned (*NewtonHingeCallback) (const NewtonJoint* const hinge, NewtonHingeSliderUpdateDesc* const desc);
	typedef unsigned (*NewtonSliderCallback) (const NewtonJoint* const slider, NewtonHingeSliderUpdateDesc* const desc);
	typedef unsigned (*NewtonUniversalCallback) (const NewtonJoint* const universal, NewtonHingeSliderUpdateDesc* const desc);
	typedef unsigned (*NewtonCorkscrewCallback) (const NewtonJoint* const corkscrew, NewtonHingeSliderUpdateDesc* const desc);

	typedef void (*NewtonUserBilateralCallback) (const NewtonJoint* const userJoint, float timestep, int threadIndex);
	typedef void (*NewtonUserBilateralGetInfoCallback) (const NewtonJoint* const userJoint, NewtonJointRecord* const info);

	typedef void (*NewtonConstraintDestructor) (const NewtonJoint* const me);

	typedef void (*NewtonJobTask) (NewtonWorld* const world, void* const userData, int threadIndex);
	typedef int (*NewtonReportProgress) (float normalizedProgressPercent, void* const userData);

	
	
	
	
	
	 int NewtonWorldGetVersion ();
	 int NewtonWorldFloatSize ();

	 int NewtonGetMemoryUsed ();
	 void NewtonSetMemorySystem (NewtonAllocMemory malloc, NewtonFreeMemory free);

	 NewtonWorld* NewtonCreate ();
	 void NewtonDestroy (const NewtonWorld* const newtonWorld);
	 void NewtonDestroyAllBodies (const NewtonWorld* const newtonWorld);

	 NewtonPostUpdateCallback NewtonGetPostUpdateCallback(const NewtonWorld* const newtonWorld);
	 void NewtonSetPostUpdateCallback (const NewtonWorld* const newtonWorld, NewtonPostUpdateCallback callback);

	 void* NewtonAlloc (int sizeInBytes);
	 void NewtonFree (void* const ptr);

	 void NewtonLoadPlugins(const NewtonWorld* const newtonWorld, const char* const plugInPath);
	 void NewtonUnloadPlugins(const NewtonWorld* const newtonWorld);
	 void* NewtonCurrentPlugin(const NewtonWorld* const newtonWorld);
	 void* NewtonGetFirstPlugin(const NewtonWorld* const newtonWorld);
	 void* NewtonGetPreferedPlugin(const NewtonWorld* const newtonWorld);
	 void* NewtonGetNextPlugin(const NewtonWorld* const newtonWorld, const void* const plugin);
	 const char* NewtonGetPluginString(const NewtonWorld* const newtonWorld, const void* const plugin);
	 void NewtonSelectPlugin(const NewtonWorld* const newtonWorld, const void* const plugin);

	 float NewtonGetContactMergeTolerance (const NewtonWorld* const newtonWorld);
	 void NewtonSetContactMergeTolerance (const NewtonWorld* const newtonWorld, float tolerance);

	 void NewtonInvalidateCache (const NewtonWorld* const newtonWorld);

	 void NewtonSetSolverIterations (const NewtonWorld* const newtonWorld, int model);
	 int NewtonGetSolverIterations(const NewtonWorld* const newtonWorld);

	 void NewtonSetParallelSolverOnLargeIsland (const NewtonWorld* const newtonWorld, int mode);
	 int NewtonGetParallelSolverOnLargeIsland (const NewtonWorld* const newtonWorld);

	 int NewtonGetBroadphaseAlgorithm (const NewtonWorld* const newtonWorld);
	 void NewtonSelectBroadphaseAlgorithm (const NewtonWorld* const newtonWorld, int algorithmType);
	 void NewtonResetBroadphase(const NewtonWorld* const newtonWorld);

	 void NewtonUpdate (const NewtonWorld* const newtonWorld, float timestep);
	 void NewtonUpdateAsync (const NewtonWorld* const newtonWorld, float timestep);
	 void NewtonWaitForUpdateToFinish (const NewtonWorld* const newtonWorld);

	 int NewtonGetNumberOfSubsteps (const NewtonWorld* const newtonWorld);
	 void NewtonSetNumberOfSubsteps (const NewtonWorld* const newtonWorld, int subSteps);
	 float NewtonGetLastUpdateTime (const NewtonWorld* const newtonWorld);

	 void NewtonSerializeToFile (const NewtonWorld* const newtonWorld, const char* const filename, NewtonOnBodySerializationCallback bodyCallback, void* const bodyUserData);
	 void NewtonDeserializeFromFile (const NewtonWorld* const newtonWorld, const char* const filename, NewtonOnBodyDeserializationCallback bodyCallback, void* const bodyUserData);

	 void NewtonSerializeScene(const NewtonWorld* const newtonWorld, NewtonOnBodySerializationCallback bodyCallback, void* const bodyUserData,
									   	 NewtonSerializeCallback serializeCallback, void* const serializeHandle);
	 void NewtonDeserializeScene(const NewtonWorld* const newtonWorld, NewtonOnBodyDeserializationCallback bodyCallback, void* const bodyUserData,
										   NewtonDeserializeCallback serializeCallback, void* const serializeHandle);

	 NewtonBody* NewtonFindSerializedBody(const NewtonWorld* const newtonWorld, int bodySerializedID);
	 void NewtonSetJointSerializationCallbacks (const NewtonWorld* const newtonWorld, NewtonOnJointSerializationCallback serializeJoint, NewtonOnJointDeserializationCallback deserializeJoint);
	 void NewtonGetJointSerializationCallbacks (const NewtonWorld* const newtonWorld, NewtonOnJointSerializationCallback* const serializeJoint, NewtonOnJointDeserializationCallback* const deserializeJoint);

	
	 void NewtonWorldCriticalSectionLock (const NewtonWorld* const newtonWorld, int threadIndex);
	 void NewtonWorldCriticalSectionUnlock (const NewtonWorld* const newtonWorld);
	 void NewtonSetThreadsCount (const NewtonWorld* const newtonWorld, int threads);
	 int NewtonGetThreadsCount(const NewtonWorld* const newtonWorld);
	 int NewtonGetMaxThreadsCount(const NewtonWorld* const newtonWorld);
	 void NewtonDispachThreadJob(const NewtonWorld* const newtonWorld, NewtonJobTask task, void* const usedData, const char* const functionName);
	 void NewtonSyncThreadJobs(const NewtonWorld* const newtonWorld);

	
	 int NewtonAtomicAdd (int* const ptr, int value);
	 int NewtonAtomicSwap (int* const ptr, int value);
	 void NewtonYield ();

	 void NewtonSetIslandUpdateEvent (const NewtonWorld* const newtonWorld, NewtonIslandUpdate islandUpdate);
	 void NewtonWorldForEachJointDo (const NewtonWorld* const newtonWorld, NewtonJointIterator callback, void* const userData);
	 void NewtonWorldForEachBodyInAABBDo (const NewtonWorld* const newtonWorld, const float* const p0, const float* const p1, NewtonBodyIterator callback, void* const userData);

	 void NewtonWorldSetUserData (const NewtonWorld* const newtonWorld, void* const userData);
	 void* NewtonWorldGetUserData (const NewtonWorld* const newtonWorld);

	 void* NewtonWorldAddListener (const NewtonWorld* const newtonWorld, const char* const nameId, void* const listenerUserData);
	 void* NewtonWorldGetListener (const NewtonWorld* const newtonWorld, const char* const nameId);

	 void NewtonWorldListenerSetDebugCallback (const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldListenerDebugCallback callback);
	 void NewtonWorldListenerSetPostStepCallback (const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldUpdateListenerCallback callback);
	 void NewtonWorldListenerSetPreUpdateCallback (const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldUpdateListenerCallback callback);
	 void NewtonWorldListenerSetPostUpdateCallback (const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldUpdateListenerCallback callback);
	 void NewtonWorldListenerSetDestructorCallback (const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldDestroyListenerCallback callback);
	 void NewtonWorldListenerSetBodyDestroyCallback(const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldListenerBodyDestroyCallback callback);
	 void NewtonWorldListenerDebug(const NewtonWorld* const newtonWorld, void* const context);
	 void* NewtonWorldGetListenerUserData(const NewtonWorld* const newtonWorld, void* const listener);
	 NewtonWorldListenerBodyDestroyCallback NewtonWorldListenerGetBodyDestroyCallback (const NewtonWorld* const newtonWorld, void* const listener);

	 void NewtonWorldSetDestructorCallback (const NewtonWorld* const newtonWorld, NewtonWorldDestructorCallback destructor);
	 NewtonWorldDestructorCallback NewtonWorldGetDestructorCallback (const NewtonWorld* const newtonWorld);
	 void NewtonWorldSetCollisionConstructorDestructorCallback (const NewtonWorld* const newtonWorld, NewtonCollisionCopyConstructionCallback constructor, NewtonCollisionDestructorCallback destructor);

	 void NewtonWorldSetCreateDestroyContactCallback(const NewtonWorld* const newtonWorld, NewtonCreateContactCallback createContact, NewtonDestroyContactCallback destroyContact);

	 void NewtonWorldRayCast (const NewtonWorld* const newtonWorld, const float* const p0, const float* const p1, NewtonWorldRayFilterCallback filter, void* const userData, NewtonWorldRayPrefilterCallback prefilter, int threadIndex);
	 int NewtonWorldConvexCast (const NewtonWorld* const newtonWorld, const float* const matrix4x4, const float* const target, const NewtonCollision* const shape, float* const param, void* const userData, NewtonWorldRayPrefilterCallback prefilter, NewtonWorldConvexCastReturnInfo* const info, int maxContactsCount, int threadIndex);
	 int NewtonWorldCollide (const NewtonWorld* const newtonWorld, const float* const matrix4x4, const NewtonCollision* const shape, void* const userData, NewtonWorldRayPrefilterCallback prefilter, NewtonWorldConvexCastReturnInfo* const info, int maxContactsCount, int threadIndex);

	
	 int NewtonWorldGetBodyCount(const NewtonWorld* const newtonWorld);
	 int NewtonWorldGetConstraintCount(const NewtonWorld* const newtonWorld);

	 NewtonJoint* NewtonWorldFindJoint(const NewtonBody* const body0, const NewtonBody* const body1);

	
	
	
	
	
	 NewtonBody* NewtonIslandGetBody (const void* const island, int bodyIndex);
	 void NewtonIslandGetBodyAABB (const void* const island, int bodyIndex, float* const p0, float* const p1);

	
	
	
	
	
	 int NewtonMaterialCreateGroupID(const NewtonWorld* const newtonWorld);
	 int NewtonMaterialGetDefaultGroupID(const NewtonWorld* const newtonWorld);
	 void NewtonMaterialDestroyAllGroupID(const NewtonWorld* const newtonWorld);

	
	 void* NewtonMaterialGetUserData (const NewtonWorld* const newtonWorld, int id0, int id1);
	 void NewtonMaterialSetSurfaceThickness (const NewtonWorld* const newtonWorld, int id0, int id1, float thickness);




	 void NewtonMaterialSetCallbackUserData (const NewtonWorld* const newtonWorld, int id0, int id1, void* const userData);
	 void NewtonMaterialSetContactGenerationCallback (const NewtonWorld* const newtonWorld, int id0, int id1, NewtonOnContactGeneration contactGeneration);
	 void NewtonMaterialSetCompoundCollisionCallback(const NewtonWorld* const newtonWorld, int id0, int id1, NewtonOnCompoundSubCollisionAABBOverlap compoundAabbOverlap);
	 void NewtonMaterialSetCollisionCallback (const NewtonWorld* const newtonWorld, int id0, int id1, NewtonOnAABBOverlap aabbOverlap, NewtonContactsProcess process);

	 void NewtonMaterialSetDefaultSoftness (const NewtonWorld* const newtonWorld, int id0, int id1, float value);
	 void NewtonMaterialSetDefaultElasticity (const NewtonWorld* const newtonWorld, int id0, int id1, float elasticCoef);
	 void NewtonMaterialSetDefaultCollidable (const NewtonWorld* const newtonWorld, int id0, int id1, int state);
	 void NewtonMaterialSetDefaultFriction (const NewtonWorld* const newtonWorld, int id0, int id1, float staticFriction, float kineticFriction);

	 void NewtonMaterialJointResetIntraJointCollision (const NewtonWorld* const newtonWorld, int id0, int id1);
	 void NewtonMaterialJointResetSelftJointCollision (const NewtonWorld* const newtonWorld, int id0, int id1);

	 NewtonMaterial* NewtonWorldGetFirstMaterial (const NewtonWorld* const newtonWorld);
	 NewtonMaterial* NewtonWorldGetNextMaterial (const NewtonWorld* const newtonWorld, const NewtonMaterial* const material);

	 NewtonBody* NewtonWorldGetFirstBody (const NewtonWorld* const newtonWorld);
	 NewtonBody* NewtonWorldGetNextBody (const NewtonWorld* const newtonWorld, const NewtonBody* const curBody);


	
	
	
	
	
	 void *NewtonMaterialGetMaterialPairUserData (const NewtonMaterial* const material);
	 unsigned NewtonMaterialGetContactFaceAttribute (const NewtonMaterial* const material);
	 NewtonCollision* NewtonMaterialGetBodyCollidingShape (const NewtonMaterial* const material, const NewtonBody* const body);
	 float NewtonMaterialGetContactNormalSpeed (const NewtonMaterial* const material);
	 void NewtonMaterialGetContactForce (const NewtonMaterial* const material, const NewtonBody* const body, float* const force);
	 void NewtonMaterialGetContactPositionAndNormal (const NewtonMaterial* const material, const NewtonBody* const body, float* const posit, float* const normal);
	 void NewtonMaterialGetContactTangentDirections (const NewtonMaterial* const material, const NewtonBody* const body, float* const dir0, float* const dir1);
	 float NewtonMaterialGetContactTangentSpeed (const NewtonMaterial* const material, int index);
	 float NewtonMaterialGetContactMaxNormalImpact (const NewtonMaterial* const material);
	 float NewtonMaterialGetContactMaxTangentImpact (const NewtonMaterial* const material, int index);
	 float NewtonMaterialGetContactPenetration (const NewtonMaterial* const material);
	 void NewtonMaterialSetAsSoftContact (const NewtonMaterial* const material, float relaxation);

	 void NewtonMaterialSetContactSoftness (const NewtonMaterial* const material, float softness);
	 void NewtonMaterialSetContactThickness (const NewtonMaterial* const material, float thickness);
	 void NewtonMaterialSetContactElasticity (const NewtonMaterial* const material, float restitution);
	 void NewtonMaterialSetContactFrictionState (const NewtonMaterial* const material, int state, int index);
	 void NewtonMaterialSetContactFrictionCoef (const NewtonMaterial* const material, float staticFrictionCoef, float kineticFrictionCoef, int index);

	 void NewtonMaterialSetContactNormalAcceleration (const NewtonMaterial* const material, float accel);
	 void NewtonMaterialSetContactNormalDirection (const NewtonMaterial* const material, const float* const directionVector);
	 void NewtonMaterialSetContactPosition (const NewtonMaterial* const material, const float* const position);

	 void NewtonMaterialSetContactTangentFriction (const NewtonMaterial* const material, float friction, int index);
	 void NewtonMaterialSetContactTangentAcceleration (const NewtonMaterial* const material, float accel, int index);
	 void NewtonMaterialContactRotateTangentDirections (const NewtonMaterial* const material, const float* const directionVector);

	
	
	 float NewtonMaterialGetContactPruningTolerance(const NewtonJoint* const contactJoint);
	 void NewtonMaterialSetContactPruningTolerance(const NewtonJoint* const contactJoint, float tolerance);

	
	
	
	
	
	 NewtonCollision* NewtonCreateNull (const NewtonWorld* const newtonWorld);
	 NewtonCollision* NewtonCreateSphere (const NewtonWorld* const newtonWorld, float radius, int shapeID, const float* const offsetMatrix);
	 NewtonCollision* NewtonCreateBox (const NewtonWorld* const newtonWorld, float dx, float dy, float dz, int shapeID, const float* const offsetMatrix);
	 NewtonCollision* NewtonCreateCone (const NewtonWorld* const newtonWorld, float radius, float height, int shapeID, const float* const offsetMatrix);
	 NewtonCollision* NewtonCreateCapsule (const NewtonWorld* const newtonWorld, float radius0, float radius1, float height, int shapeID, const float* const offsetMatrix);
	 NewtonCollision* NewtonCreateCylinder (const NewtonWorld* const newtonWorld, float radio0, float radio1, float height, int shapeID, const float* const offsetMatrix);
	 NewtonCollision* NewtonCreateChamferCylinder (const NewtonWorld* const newtonWorld, float radius, float height, int shapeID, const float* const offsetMatrix);
	 NewtonCollision* NewtonCreateConvexHull (const NewtonWorld* const newtonWorld, int count, const float* const vertexCloud, int strideInBytes, float tolerance, int shapeID, const float* const offsetMatrix);
	 NewtonCollision* NewtonCreateConvexHullFromMesh (const NewtonWorld* const newtonWorld, const NewtonMesh* const mesh, float tolerance, int shapeID);

	 int NewtonCollisionGetMode(const NewtonCollision* const convexCollision);
	 void NewtonCollisionSetMode (const NewtonCollision* const convexCollision, int mode);

	 int NewtonConvexHullGetFaceIndices (const NewtonCollision* const convexHullCollision, int face, int* const faceIndices);
	 int NewtonConvexHullGetVertexData (const NewtonCollision* const convexHullCollision, float** const vertexData, int* strideInBytes);

	 float NewtonConvexCollisionCalculateVolume (const NewtonCollision* const convexCollision);
	 void NewtonConvexCollisionCalculateInertialMatrix (const NewtonCollision* convexCollision, float* const inertia, float* const origin);
	 float NewtonConvexCollisionCalculateBuoyancyVolume (const NewtonCollision* const convexCollision, const float* const matrix4x4, const float* const fluidPlane, float* const centerOfBuoyancy);

	 const void* NewtonCollisionDataPointer (const NewtonCollision* const convexCollision);

	
	
	
	
	
	 NewtonCollision* NewtonCreateCompoundCollision (const NewtonWorld* const newtonWorld, int shapeID);
	 NewtonCollision* NewtonCreateCompoundCollisionFromMesh (const NewtonWorld* const newtonWorld, const NewtonMesh* const mesh, float hullTolerance, int shapeID, int subShapeID);

	 void NewtonCompoundCollisionBeginAddRemove (NewtonCollision* const compoundCollision);
	 void* NewtonCompoundCollisionAddSubCollision (NewtonCollision* const compoundCollision, const NewtonCollision* const convexCollision);
	 void NewtonCompoundCollisionRemoveSubCollision (NewtonCollision* const compoundCollision, const void* const collisionNode);
	 void NewtonCompoundCollisionRemoveSubCollisionByIndex (NewtonCollision* const compoundCollision, int nodeIndex);
	 void NewtonCompoundCollisionSetSubCollisionMatrix (NewtonCollision* const compoundCollision, const void* const collisionNode, const float* const matrix4x4);
	 void NewtonCompoundCollisionEndAddRemove (NewtonCollision* const compoundCollision);

	 void* NewtonCompoundCollisionGetFirstNode (NewtonCollision* const compoundCollision);
	 void* NewtonCompoundCollisionGetNextNode (NewtonCollision* const compoundCollision, const void* const collisionNode);

	 void* NewtonCompoundCollisionGetNodeByIndex (NewtonCollision* const compoundCollision, int index);
	 int NewtonCompoundCollisionGetNodeIndex (NewtonCollision* const compoundCollision, const void* const collisionNode);
	 NewtonCollision* NewtonCompoundCollisionGetCollisionFromNode (NewtonCollision* const compoundCollision, const void* const collisionNode);


	
	
	
	
	
	 NewtonCollision* NewtonCreateFracturedCompoundCollision (const NewtonWorld* const newtonWorld, const NewtonMesh* const solidMesh, int shapeID, int fracturePhysicsMaterialID, int pointcloudCount, const float* const vertexCloud, int strideInBytes, int materialID, const float* const textureMatrix,
																		NewtonFractureCompoundCollisionReconstructMainMeshCallBack regenerateMainMeshCallback,
																		NewtonFractureCompoundCollisionOnEmitCompoundFractured emitFracturedCompound, NewtonFractureCompoundCollisionOnEmitChunk emitFracfuredChunk);
	 NewtonCollision* NewtonFracturedCompoundPlaneClip (const NewtonCollision* const fracturedCompound, const float* const plane);

	 void NewtonFracturedCompoundSetCallbacks (const NewtonCollision* const fracturedCompound, NewtonFractureCompoundCollisionReconstructMainMeshCallBack regenerateMainMeshCallback,
														 NewtonFractureCompoundCollisionOnEmitCompoundFractured emitFracturedCompound, NewtonFractureCompoundCollisionOnEmitChunk emitFracfuredChunk);


	 int NewtonFracturedCompoundIsNodeFreeToDetach (const NewtonCollision* const fracturedCompound, void* const collisionNode);
	 int NewtonFracturedCompoundNeighborNodeList (const NewtonCollision* const fracturedCompound, void* const collisionNode, void** const list, int maxCount);


	 NewtonFracturedCompoundMeshPart* NewtonFracturedCompoundGetMainMesh (const NewtonCollision* const fracturedCompound);
	 NewtonFracturedCompoundMeshPart* NewtonFracturedCompoundGetFirstSubMesh(const NewtonCollision* const fracturedCompound);
	 NewtonFracturedCompoundMeshPart* NewtonFracturedCompoundGetNextSubMesh(const NewtonCollision* const fracturedCompound, NewtonFracturedCompoundMeshPart* const subMesh);

	 int NewtonFracturedCompoundCollisionGetVertexCount (const NewtonCollision* const fracturedCompound, const NewtonFracturedCompoundMeshPart* const meshOwner);
	 const float* NewtonFracturedCompoundCollisionGetVertexPositions (const NewtonCollision* const fracturedCompound, const NewtonFracturedCompoundMeshPart* const meshOwner);
	 const float* NewtonFracturedCompoundCollisionGetVertexNormals (const NewtonCollision* const fracturedCompound, const NewtonFracturedCompoundMeshPart* const meshOwner);
	 const float* NewtonFracturedCompoundCollisionGetVertexUVs (const NewtonCollision* const fracturedCompound, const NewtonFracturedCompoundMeshPart* const meshOwner);
	 int NewtonFracturedCompoundMeshPartGetIndexStream (const NewtonCollision* const fracturedCompound, const NewtonFracturedCompoundMeshPart* const meshOwner, const void* const segment, int* const index);

	 void* NewtonFracturedCompoundMeshPartGetFirstSegment (const NewtonFracturedCompoundMeshPart* const fractureCompoundMeshPart);
	 void* NewtonFracturedCompoundMeshPartGetNextSegment (const void* const fractureCompoundMeshSegment);
	 int NewtonFracturedCompoundMeshPartGetMaterial (const void* const fractureCompoundMeshSegment);
	 int NewtonFracturedCompoundMeshPartGetIndexCount (const void* const fractureCompoundMeshSegment);


	
	
	
	
	
	 NewtonCollision* NewtonCreateSceneCollision (const NewtonWorld* const newtonWorld, int shapeID);

	 void NewtonSceneCollisionBeginAddRemove (NewtonCollision* const sceneCollision);
	 void* NewtonSceneCollisionAddSubCollision (NewtonCollision* const sceneCollision, const NewtonCollision* const collision);
	 void NewtonSceneCollisionRemoveSubCollision (NewtonCollision* const compoundCollision, const void* const collisionNode);
	 void NewtonSceneCollisionRemoveSubCollisionByIndex (NewtonCollision* const sceneCollision, int nodeIndex);
	 void NewtonSceneCollisionSetSubCollisionMatrix (NewtonCollision* const sceneCollision, const void* const collisionNode, const float* const matrix4x4);
	 void NewtonSceneCollisionEndAddRemove (NewtonCollision* const sceneCollision);

	 void* NewtonSceneCollisionGetFirstNode (NewtonCollision* const sceneCollision);
	 void* NewtonSceneCollisionGetNextNode (NewtonCollision* const sceneCollision, const void* const collisionNode);

	 void* NewtonSceneCollisionGetNodeByIndex (NewtonCollision* const sceneCollision, int index);
	 int NewtonSceneCollisionGetNodeIndex (NewtonCollision* const sceneCollision, const void* const collisionNode);
	 NewtonCollision* NewtonSceneCollisionGetCollisionFromNode (NewtonCollision* const sceneCollision, const void* const collisionNode);


	
	
	
	
	
	 NewtonCollision* NewtonCreateUserMeshCollision (const NewtonWorld* const newtonWorld, const float* const minBox,
		const float* const maxBox, void* const userData, NewtonUserMeshCollisionCollideCallback collideCallback,
		NewtonUserMeshCollisionRayHitCallback rayHitCallback, NewtonUserMeshCollisionDestroyCallback destroyCallback,
		NewtonUserMeshCollisionGetCollisionInfo getInfoCallback, NewtonUserMeshCollisionAABBTest getLocalAABBCallback,
		NewtonUserMeshCollisionGetFacesInAABB facesInAABBCallback, NewtonOnUserCollisionSerializationCallback serializeCallback, int shapeID);

	 int NewtonUserMeshCollisionContinuousOverlapTest (const NewtonUserMeshCollisionCollideDesc* const collideDescData, const void* const continueCollisionHandle, const float* const minAabb, const float* const maxAabb);

	
	
	
	
	
	 NewtonCollision* NewtonCreateCollisionFromSerialization (const NewtonWorld* const newtonWorld, NewtonDeserializeCallback deserializeFunction, void* const serializeHandle);
	 void NewtonCollisionSerialize (const NewtonWorld* const newtonWorld, const NewtonCollision* const collision, NewtonSerializeCallback serializeFunction, void* const serializeHandle);
	 void NewtonCollisionGetInfo (const NewtonCollision* const collision, NewtonCollisionInfoRecord* const collisionInfo);

	
	
	
	
	
	 NewtonCollision* NewtonCreateHeightFieldCollision (const NewtonWorld* const newtonWorld, int width, int height, int gridsDiagonals, int elevationdatType, const void* const elevationMap, const char* const attributeMap, float verticalScale, float horizontalScale_x, float horizontalScale_z, int shapeID);
	 void NewtonHeightFieldSetUserRayCastCallback (const NewtonCollision* const heightfieldCollision, NewtonHeightFieldRayCastCallback rayHitCallback);

	 NewtonCollision* NewtonCreateTreeCollision (const NewtonWorld* const newtonWorld, int shapeID);
	 NewtonCollision* NewtonCreateTreeCollisionFromMesh (const NewtonWorld* const newtonWorld, const NewtonMesh* const mesh, int shapeID);
	 void NewtonTreeCollisionSetUserRayCastCallback (const NewtonCollision* const treeCollision, NewtonCollisionTreeRayCastCallback rayHitCallback);

	 void NewtonTreeCollisionBeginBuild (const NewtonCollision* const treeCollision);
	 void NewtonTreeCollisionAddFace (const NewtonCollision* const treeCollision, int vertexCount, const float* const vertexPtr, int strideInBytes, int faceAttribute);
	 void NewtonTreeCollisionEndBuild (const NewtonCollision* const treeCollision, int optimize);

	 int NewtonTreeCollisionGetFaceAttribute (const NewtonCollision* const treeCollision, const int* const faceIndexArray, int indexCount);
	 void NewtonTreeCollisionSetFaceAttribute (const NewtonCollision* const treeCollision, const int* const faceIndexArray, int indexCount, int attribute);

	 void NewtonTreeCollisionForEachFace (const NewtonCollision* const treeCollision, NewtonTreeCollisionFaceCallback forEachFaceCallback, void* const context);

	 int NewtonTreeCollisionGetVertexListTriangleListInAABB (const NewtonCollision* const treeCollision, const float* const p0, const float* const p1, const float** const vertexArray, int* const vertexCount, int* const vertexStrideInBytes, const int* const indexList, int maxIndexCount, const int* const faceAttribute);

	 void NewtonStaticCollisionSetDebugCallback (const NewtonCollision* const staticCollision, NewtonTreeCollisionCallback userCallback);

	
	
	
	
	
	 NewtonCollision* NewtonCollisionCreateInstance (const NewtonCollision* const collision);
	 int NewtonCollisionGetType (const NewtonCollision* const collision);
	 int NewtonCollisionIsConvexShape (const NewtonCollision* const collision);
	 int NewtonCollisionIsStaticShape (const NewtonCollision* const collision);

	
	 void NewtonCollisionSetUserData (const NewtonCollision* const collision, void* const userData);
	 void* NewtonCollisionGetUserData (const NewtonCollision* const collision);

	 void NewtonCollisionSetUserID (const NewtonCollision* const collision, long long id);
	 long long NewtonCollisionGetUserID (const NewtonCollision* const collision);

	 void NewtonCollisionGetMaterial (const NewtonCollision* const collision, NewtonCollisionMaterial* const userData);
	 void NewtonCollisionSetMaterial (const NewtonCollision* const collision, const NewtonCollisionMaterial* const userData);

	 void* NewtonCollisionGetSubCollisionHandle (const NewtonCollision* const collision);
	 NewtonCollision* NewtonCollisionGetParentInstance (const NewtonCollision* const collision);

	 void NewtonCollisionSetMatrix (const NewtonCollision* const collision, const float* const matrix4x4);
	 void NewtonCollisionGetMatrix (const NewtonCollision* const collision, float* const matrix4x4);

	 void NewtonCollisionSetScale (const NewtonCollision* const collision, float scaleX, float scaleY, float scaleZ);
	 void NewtonCollisionGetScale (const NewtonCollision* const collision, float* const scaleX, float* const scaleY, float* const scaleZ);
	 void NewtonDestroyCollision (const NewtonCollision* const collision);

	 float NewtonCollisionGetSkinThickness (const NewtonCollision* const collision);
	 void NewtonCollisionSetSkinThickness(const NewtonCollision* const collision, float thickness);

	 int NewtonCollisionIntersectionTest (const NewtonWorld* const newtonWorld,
		const NewtonCollision* const collisionA, const float* const matrixA,
		const NewtonCollision* const collisionB, const float* const matrixB, int threadIndex);

	 int NewtonCollisionPointDistance (const NewtonWorld* const newtonWorld, const float* const point,
		const NewtonCollision* const collision, const float* const matrix4x4, float* const contact, float* const normal, int threadIndex);

	 int NewtonCollisionClosestPoint (const NewtonWorld* const newtonWorld,
		const NewtonCollision* const collisionA, const float* const matrixA,
		const NewtonCollision* const collisionB, const float* const matrixB,
		float* const contactA, float* const contactB, float* const normalAB, int threadIndex);

	 int NewtonCollisionCollide (const NewtonWorld* const newtonWorld, int maxSize,
		const NewtonCollision* const collisionA, const float* const matrixA,
		const NewtonCollision* const collisionB, const float* const matrixB,
		float* const contacts, float* const normals, float* const penetration,
		long long* const attributeA, long long* const attributeB, int threadIndex);

	 int NewtonCollisionCollideContinue (const NewtonWorld* const newtonWorld, int maxSize, float timestep,
		const NewtonCollision* const collisionA, const float* const matrixA, const float* const velocA, const float* omegaA,
		const NewtonCollision* const collisionB, const float* const matrixB, const float* const velocB, const float* const omegaB,
		float* const timeOfImpact, float* const contacts, float* const normals, float* const penetration,
		long long* const attributeA, long long* const attributeB, int threadIndex);

	 void NewtonCollisionSupportVertex (const NewtonCollision* const collision, const float* const dir, float* const vertex);
	 float NewtonCollisionRayCast (const NewtonCollision* const collision, const float* const p0, const float* const p1, float* const normal, long long* const attribute);
	 void NewtonCollisionCalculateAABB (const NewtonCollision* const collision, const float* const matrix4x4, float* const p0, float* const p1);
	 void NewtonCollisionForEachPolygonDo (const NewtonCollision* const collision, const float* const matrix4x4, NewtonCollisionIterator callback, void* const userData);

	
	
	
	
	
	
	
	
	
	 void* NewtonCollisionAggregateCreate (NewtonWorld* const world);
	 void NewtonCollisionAggregateDestroy (void* const aggregate);
	 void NewtonCollisionAggregateAddBody (void* const aggregate, const NewtonBody* const body);
	 void NewtonCollisionAggregateRemoveBody (void* const aggregate, const NewtonBody* const body);

	 int NewtonCollisionAggregateGetSelfCollision (void* const aggregate);
	 void NewtonCollisionAggregateSetSelfCollision (void* const aggregate, int state);

	
	
	
	
	
	 void NewtonSetEulerAngle (const float* const eulersAngles, float* const matrix4x4);
	 void NewtonGetEulerAngle (const float* const matrix4x4, float* const eulersAngles0, float* const eulersAngles1);
	 float NewtonCalculateSpringDamperAcceleration (float dt, float ks, float x, float kd, float s);

	
	
	
	
	
	 NewtonBody* NewtonCreateDynamicBody (const NewtonWorld* const newtonWorld, const NewtonCollision* const collision, const float* const matrix4x4);
	 NewtonBody* NewtonCreateKinematicBody (const NewtonWorld* const newtonWorld, const NewtonCollision* const collision, const float* const matrix4x4);
	 NewtonBody* NewtonCreateAsymetricDynamicBody(const NewtonWorld* const newtonWorld, const NewtonCollision* const collision, const float* const matrix4x4);

	 void NewtonDestroyBody(const NewtonBody* const body);

	 int NewtonBodyGetSimulationState(const NewtonBody* const body);
	 void NewtonBodySetSimulationState(const NewtonBody* const bodyPtr, const int state);

	 int NewtonBodyGetType (const NewtonBody* const body);
	 int NewtonBodyGetCollidable (const NewtonBody* const body);
	 void NewtonBodySetCollidable (const NewtonBody* const body, int collidableState);

	 void  NewtonBodyAddForce (const NewtonBody* const body, const float* const force);
	 void  NewtonBodyAddTorque (const NewtonBody* const body, const float* const torque);

	 void  NewtonBodySetCentreOfMass (const NewtonBody* const body, const float* const com);
	 void  NewtonBodySetMassMatrix (const NewtonBody* const body, float mass, float Ixx, float Iyy, float Izz);
	 void  NewtonBodySetFullMassMatrix (const NewtonBody* const body, float mass, const float* const inertiaMatrix);

	 void  NewtonBodySetMassProperties (const NewtonBody* const body, float mass, const NewtonCollision* const collision);
	 void  NewtonBodySetMatrix (const NewtonBody* const body, const float* const matrix4x4);
	 void  NewtonBodySetMatrixNoSleep (const NewtonBody* const body, const float* const matrix4x4);
	 void  NewtonBodySetMatrixRecursive (const NewtonBody* const body, const float* const matrix4x4);

	 void  NewtonBodySetMaterialGroupID (const NewtonBody* const body, int id);
	 void  NewtonBodySetContinuousCollisionMode (const NewtonBody* const body, unsigned state);
	 void  NewtonBodySetJointRecursiveCollision (const NewtonBody* const body, unsigned state);
	 void  NewtonBodySetOmega (const NewtonBody* const body, const float* const omega);
	 void  NewtonBodySetOmegaNoSleep (const NewtonBody* const body, const float* const omega);
	 void  NewtonBodySetVelocity (const NewtonBody* const body, const float* const velocity);
	 void  NewtonBodySetVelocityNoSleep (const NewtonBody* const body, const float* const velocity);
	 void  NewtonBodySetForce (const NewtonBody* const body, const float* const force);
	 void  NewtonBodySetTorque (const NewtonBody* const body, const float* const torque);

	 void  NewtonBodySetLinearDamping (const NewtonBody* const body, float linearDamp);
	 void  NewtonBodySetAngularDamping (const NewtonBody* const body, const float* const angularDamp);
	 void  NewtonBodySetCollision (const NewtonBody* const body, const NewtonCollision* const collision);
	 void  NewtonBodySetCollisionScale (const NewtonBody* const body, float scaleX, float  scaleY, float scaleZ);

	 int  NewtonBodyGetSleepState (const NewtonBody* const body);
	 void NewtonBodySetSleepState (const NewtonBody* const body, int state);

	 int  NewtonBodyGetAutoSleep (const NewtonBody* const body);
	 void NewtonBodySetAutoSleep (const NewtonBody* const body, int state);

	 int  NewtonBodyGetFreezeState(const NewtonBody* const body);
	 void NewtonBodySetFreezeState (const NewtonBody* const body, int state);

	 int NewtonBodyGetGyroscopicTorque(const NewtonBody* const body);
	 void NewtonBodySetGyroscopicTorque(const NewtonBody* const body, int state);

	 void NewtonBodySetDestructorCallback (const NewtonBody* const body, NewtonBodyDestructor callback);
	 NewtonBodyDestructor NewtonBodyGetDestructorCallback (const NewtonBody* const body);

	 void  NewtonBodySetTransformCallback (const NewtonBody* const body, NewtonSetTransform callback);
	 NewtonSetTransform NewtonBodyGetTransformCallback (const NewtonBody* const body);

	 void  NewtonBodySetForceAndTorqueCallback (const NewtonBody* const body, NewtonApplyForceAndTorque callback);
	 NewtonApplyForceAndTorque NewtonBodyGetForceAndTorqueCallback (const NewtonBody* const body);

	 int NewtonBodyGetID (const NewtonBody* const body);

	 void  NewtonBodySetUserData (const NewtonBody* const body, void* const userData);
	 void* NewtonBodyGetUserData (const NewtonBody* const body);

	 NewtonWorld* NewtonBodyGetWorld (const NewtonBody* const body);
	 NewtonCollision* NewtonBodyGetCollision (const NewtonBody* const body);
	 int NewtonBodyGetMaterialGroupID (const NewtonBody* const body);

	 int NewtonBodyGetSerializedID(const NewtonBody* const body);
	 int NewtonBodyGetContinuousCollisionMode (const NewtonBody* const body);
	 int NewtonBodyGetJointRecursiveCollision (const NewtonBody* const body);

	 void NewtonBodyGetPosition(const NewtonBody* const body, float* const pos);
	 void NewtonBodyGetMatrix(const NewtonBody* const body, float* const matrix4x4);
	 void NewtonBodyGetRotation(const NewtonBody* const body, float* const rotation);
	 void NewtonBodyGetMass (const NewtonBody* const body, float* mass, float* const Ixx, float* const Iyy, float* const Izz);
	 void NewtonBodyGetInvMass(const NewtonBody* const body, float* const invMass, float* const invIxx, float* const invIyy, float* const invIzz);
	 void NewtonBodyGetInertiaMatrix(const NewtonBody* const body, float* const inertiaMatrix);
	 void NewtonBodyGetInvInertiaMatrix(const NewtonBody* const body, float* const invInertiaMatrix);
	 void NewtonBodyGetOmega(const NewtonBody* const body, float* const vector);
	 void NewtonBodyGetVelocity(const NewtonBody* const body, float* const vector);
	 void NewtonBodyGetAlpha(const NewtonBody* const body, float* const vector);
	 void NewtonBodyGetAcceleration(const NewtonBody* const body, float* const vector);
	 void NewtonBodyGetForce(const NewtonBody* const body, float* const vector);
	 void NewtonBodyGetTorque(const NewtonBody* const body, float* const vector);
	 void NewtonBodyGetCentreOfMass (const NewtonBody* const body, float* const com);
	 void NewtonBodyGetPointVelocity (const NewtonBody* const body, const float* const point, float* const velocOut);

	 void NewtonBodyApplyImpulsePair (const NewtonBody* const body, float* const linearImpulse, float* const angularImpulse, float timestep);
	 void NewtonBodyAddImpulse (const NewtonBody* const body, const float* const pointDeltaVeloc, const float* const pointPosit, float timestep);
	 void NewtonBodyApplyImpulseArray (const NewtonBody* const body, int impuleCount, int strideInByte, const float* const impulseArray, const float* const pointArray, float timestep);

	 void NewtonBodyIntegrateVelocity (const NewtonBody* const body, float timestep);

	 float NewtonBodyGetLinearDamping (const NewtonBody* const body);
	 void  NewtonBodyGetAngularDamping (const NewtonBody* const body, float* const vector);
	 void  NewtonBodyGetAABB (const NewtonBody* const body, float* const p0, float* const p1);

	 NewtonJoint* NewtonBodyGetFirstJoint (const NewtonBody* const body);
	 NewtonJoint* NewtonBodyGetNextJoint (const NewtonBody* const body, const NewtonJoint* const joint);

	 NewtonJoint* NewtonBodyGetFirstContactJoint (const NewtonBody* const body);
	 NewtonJoint* NewtonBodyGetNextContactJoint (const NewtonBody* const body, const NewtonJoint* const contactJoint);
	 NewtonJoint* NewtonBodyFindContact (const NewtonBody* const body0, const NewtonBody* const body1);

	
	
	
	
	
	 void* NewtonContactJointGetFirstContact (const NewtonJoint* const contactJoint);
	 void* NewtonContactJointGetNextContact (const NewtonJoint* const contactJoint, void* const contact);

	 int NewtonContactJointGetContactCount(const NewtonJoint* const contactJoint);
	 void NewtonContactJointRemoveContact(const NewtonJoint* const contactJoint, void* const contact);

	 float NewtonContactJointGetClosestDistance(const NewtonJoint* const contactJoint);
	 void NewtonContactJointResetSelftJointCollision(const NewtonJoint* const contactJoint);
	 void NewtonContactJointResetIntraJointCollision(const NewtonJoint* const contactJoint);

	 NewtonMaterial* NewtonContactGetMaterial (const void* const contact);

	 NewtonCollision* NewtonContactGetCollision0 (const void* const contact);
	 NewtonCollision* NewtonContactGetCollision1 (const void* const contact);

	 void* NewtonContactGetCollisionID0 (const void* const contact);
	 void* NewtonContactGetCollisionID1 (const void* const contact);


	
	
	
	
	
	 void* NewtonJointGetUserData (const NewtonJoint* const joint);
	 void NewtonJointSetUserData (const NewtonJoint* const joint, void* const userData);

	 NewtonBody* NewtonJointGetBody0 (const NewtonJoint* const joint);
	 NewtonBody* NewtonJointGetBody1 (const NewtonJoint* const joint);

	 void NewtonJointGetInfo  (const NewtonJoint* const joint, NewtonJointRecord* const info);
	 int NewtonJointGetCollisionState (const NewtonJoint* const joint);
	 void NewtonJointSetCollisionState (const NewtonJoint* const joint, int state);

	 float NewtonJointGetStiffness (const NewtonJoint* const joint);
	 void NewtonJointSetStiffness (const NewtonJoint* const joint, float state);

	 void NewtonDestroyJoint(const NewtonWorld* const newtonWorld, const NewtonJoint* const joint);
	 void NewtonJointSetDestructor (const NewtonJoint* const joint, NewtonConstraintDestructor destructor);

	 int NewtonJointIsActive (const NewtonJoint* const joint);

	
	
	
	
	
	 NewtonCollision* NewtonCreateMassSpringDamperSystem (const NewtonWorld* const newtonWorld, int shapeID,
																	const float* const points, int pointCount, int strideInBytes, const float* const pointMass,
																	const int* const links, int linksCount, const float* const linksSpring, const float* const linksDamper);

	 NewtonCollision* NewtonCreateDeformableSolid(const NewtonWorld* const newtonWorld, const NewtonMesh* const mesh, int shapeID);

	 int NewtonDeformableMeshGetParticleCount (const NewtonCollision* const deformableMesh);
	 int NewtonDeformableMeshGetParticleStrideInBytes (const NewtonCollision* const deformableMesh);
	 const float* NewtonDeformableMeshGetParticleArray (const NewtonCollision* const deformableMesh);


	
	
	
	
	
	 NewtonJoint* NewtonConstraintCreateBall (const NewtonWorld* const newtonWorld, const float* pivotPoint, const NewtonBody* const childBody, const NewtonBody* const parentBody);
	 void NewtonBallSetUserCallback (const NewtonJoint* const ball, NewtonBallCallback callback);
	 void NewtonBallGetJointAngle (const NewtonJoint* const ball, float* angle);
	 void NewtonBallGetJointOmega (const NewtonJoint* const ball, float* omega);
	 void NewtonBallGetJointForce (const NewtonJoint* const ball, float* const force);
	 void NewtonBallSetConeLimits (const NewtonJoint* const ball, const float* pin, float maxConeAngle, float maxTwistAngle);

	
	
	
	
	
	 NewtonJoint* NewtonConstraintCreateHinge (const NewtonWorld* const newtonWorld, const float* pivotPoint, const float* pinDir, const NewtonBody* const childBody, const NewtonBody* const parentBody);
	 void NewtonHingeSetUserCallback (const NewtonJoint* const hinge, NewtonHingeCallback callback);
	 float NewtonHingeGetJointAngle (const NewtonJoint* const hinge);
	 float NewtonHingeGetJointOmega (const NewtonJoint* const hinge);
	 void NewtonHingeGetJointForce (const NewtonJoint* const hinge, float* const force);
	 float NewtonHingeCalculateStopAlpha (const NewtonJoint* const hinge, const NewtonHingeSliderUpdateDesc* const desc, float angle);

	
	
	
	
	
	 NewtonJoint* NewtonConstraintCreateSlider (const NewtonWorld* const newtonWorld, const float* pivotPoint, const float* pinDir, const NewtonBody* const childBody, const NewtonBody* const parentBody);
	 void NewtonSliderSetUserCallback (const NewtonJoint* const slider, NewtonSliderCallback callback);
	 float NewtonSliderGetJointPosit (const NewtonJoint* slider);
	 float NewtonSliderGetJointVeloc (const NewtonJoint* slider);
	 void NewtonSliderGetJointForce (const NewtonJoint* const slider, float* const force);
	 float NewtonSliderCalculateStopAccel (const NewtonJoint* const slider, const NewtonHingeSliderUpdateDesc* const desc, float position);


	
	
	
	
	
	 NewtonJoint* NewtonConstraintCreateCorkscrew (const NewtonWorld* const newtonWorld, const float* pivotPoint, const float* pinDir, const NewtonBody* const childBody, const NewtonBody* const parentBody);
	 void NewtonCorkscrewSetUserCallback (const NewtonJoint* const corkscrew, NewtonCorkscrewCallback callback);
	 float NewtonCorkscrewGetJointPosit (const NewtonJoint* const corkscrew);
	 float NewtonCorkscrewGetJointAngle (const NewtonJoint* const corkscrew);
	 float NewtonCorkscrewGetJointVeloc (const NewtonJoint* const corkscrew);
	 float NewtonCorkscrewGetJointOmega (const NewtonJoint* const corkscrew);
	 void NewtonCorkscrewGetJointForce (const NewtonJoint* const corkscrew, float* const force);
	 float NewtonCorkscrewCalculateStopAlpha (const NewtonJoint* const corkscrew, const NewtonHingeSliderUpdateDesc* const desc, float angle);
	 float NewtonCorkscrewCalculateStopAccel (const NewtonJoint* const corkscrew, const NewtonHingeSliderUpdateDesc* const desc, float position);


	
	
	
	
	
	 NewtonJoint* NewtonConstraintCreateUniversal (const NewtonWorld* const newtonWorld, const float* pivotPoint, const float* pinDir0, const float* pinDir1, const NewtonBody* const childBody, const NewtonBody* const parentBody);
	 void NewtonUniversalSetUserCallback (const NewtonJoint* const universal, NewtonUniversalCallback callback);
	 float NewtonUniversalGetJointAngle0 (const NewtonJoint* const universal);
	 float NewtonUniversalGetJointAngle1 (const NewtonJoint* const universal);
	 float NewtonUniversalGetJointOmega0 (const NewtonJoint* const universal);
	 float NewtonUniversalGetJointOmega1 (const NewtonJoint* const universal);
	 void NewtonUniversalGetJointForce (const NewtonJoint* const universal, float* const force);
	 float NewtonUniversalCalculateStopAlpha0 (const NewtonJoint* const universal, const NewtonHingeSliderUpdateDesc* const desc, float angle);
	 float NewtonUniversalCalculateStopAlpha1 (const NewtonJoint* const universal, const NewtonHingeSliderUpdateDesc* const desc, float angle);


	
	
	
	
	
	 NewtonJoint* NewtonConstraintCreateUpVector (const NewtonWorld* const newtonWorld, const float* pinDir, const NewtonBody* const body);
	 void NewtonUpVectorGetPin (const NewtonJoint* const upVector, float *pin);
	 void NewtonUpVectorSetPin (const NewtonJoint* const upVector, const float *pin);


	
	
	
	
	
	 NewtonJoint* NewtonConstraintCreateUserJoint (const NewtonWorld* const newtonWorld, int maxDOF, NewtonUserBilateralCallback callback, const NewtonBody* const childBody, const NewtonBody* const parentBody) ;
	 int NewtonUserJointGetSolverModel(const NewtonJoint* const joint);
	 void NewtonUserJointSetSolverModel(const NewtonJoint* const joint, int model);
	 void NewtonUserJointMassScale(const NewtonJoint* const joint, float scaleBody0, float scaleBody1);

	 void NewtonUserJointSetFeedbackCollectorCallback (const NewtonJoint* const joint, NewtonUserBilateralCallback getFeedback);
	 void NewtonUserJointAddLinearRow (const NewtonJoint* const joint, const float* const pivot0, const float* const pivot1, const float* const dir);
	 void NewtonUserJointAddAngularRow (const NewtonJoint* const joint, float relativeAngle, const float* const dir);
	 void NewtonUserJointAddGeneralRow (const NewtonJoint* const joint, const float* const jacobian0, const float* const jacobian1);
	 void NewtonUserJointSetRowMinimumFriction (const NewtonJoint* const joint, float friction);
	 void NewtonUserJointSetRowMaximumFriction (const NewtonJoint* const joint, float friction);
	 float NewtonUserJointCalculateRowZeroAcceleration (const NewtonJoint* const joint);
	 float NewtonUserJointGetRowAcceleration (const NewtonJoint* const joint);
	 void NewtonUserJointGetRowJacobian(const NewtonJoint* const joint, float* const linear0, float* const angula0, float* const linear1, float* const angula1);
	 void NewtonUserJointSetRowAcceleration (const NewtonJoint* const joint, float acceleration);
	 void NewtonUserJointSetRowMassDependentSpringDamperAcceleration(const NewtonJoint* const joint, float spring, float damper);
	 void NewtonUserJointSetRowMassIndependentSpringDamperAcceleration (const NewtonJoint* const joint, float rowStiffness, float spring, float damper);
	 void NewtonUserJointSetRowStiffness (const NewtonJoint* const joint, float stiffness);
	 int NewtonUserJoinRowsCount (const NewtonJoint* const joint);
	 void NewtonUserJointGetGeneralRow (const NewtonJoint* const joint, int index, float* const jacobian0, float* const jacobian1);
	 float NewtonUserJointGetRowForce (const NewtonJoint* const joint, int row);

	
	
	
	
	
	 NewtonMesh* NewtonMeshCreate(const NewtonWorld* const newtonWorld);
	 NewtonMesh* NewtonMeshCreateFromMesh(const NewtonMesh* const mesh);
	 NewtonMesh* NewtonMeshCreateFromCollision(const NewtonCollision* const collision);
	 NewtonMesh* NewtonMeshCreateTetrahedraIsoSurface(const NewtonMesh* const mesh);
	 NewtonMesh* NewtonMeshCreateConvexHull (const NewtonWorld* const newtonWorld, int pointCount, const float* const vertexCloud, int strideInBytes, float tolerance);
	 NewtonMesh* NewtonMeshCreateVoronoiConvexDecomposition (const NewtonWorld* const newtonWorld, int pointCount, const float* const vertexCloud, int strideInBytes, int materialID, const float* const textureMatrix);
	 NewtonMesh* NewtonMeshCreateFromSerialization (const NewtonWorld* const newtonWorld, NewtonDeserializeCallback deserializeFunction, void* const serializeHandle);
	 void NewtonMeshDestroy(const NewtonMesh* const mesh);

	 void NewtonMeshSerialize (const NewtonMesh* const mesh, NewtonSerializeCallback serializeFunction, void* const serializeHandle);
	 void NewtonMeshSaveOFF(const NewtonMesh* const mesh, const char* const filename);
	 NewtonMesh* NewtonMeshLoadOFF(const NewtonWorld* const newtonWorld, const char* const filename);
	 NewtonMesh* NewtonMeshLoadTetrahedraMesh(const NewtonWorld* const newtonWorld, const char* const filename);

	 void NewtonMeshFlipWinding(const NewtonMesh* const mesh);

	 void NewtonMeshApplyTransform (const NewtonMesh* const mesh, const float* const matrix4x4);
	 void NewtonMeshCalculateOOBB(const NewtonMesh* const mesh, float* const matrix4x4, float* const x, float* const y, float* const z);

	 void NewtonMeshCalculateVertexNormals(const NewtonMesh* const mesh, float angleInRadians);
	 void NewtonMeshApplySphericalMapping(const NewtonMesh* const mesh, int material, const float* const aligmentMatrix);
	 void NewtonMeshApplyCylindricalMapping(const NewtonMesh* const mesh, int cylinderMaterial, int capMaterial, const float* const aligmentMatrix);
	 void NewtonMeshApplyBoxMapping(const NewtonMesh* const mesh, int frontMaterial, int sideMaterial, int topMaterial, const float* const aligmentMatrix);
	 void NewtonMeshApplyAngleBasedMapping(const NewtonMesh* const mesh, int material, NewtonReportProgress reportPrograssCallback, void* const reportPrgressUserData, float* const aligmentMatrix);

	 void NewtonCreateTetrahedraLinearBlendSkinWeightsChannel(const NewtonMesh* const tetrahedraMesh, NewtonMesh* const skinMesh);

	 void NewtonMeshOptimize (const NewtonMesh* const mesh);
	 void NewtonMeshOptimizePoints (const NewtonMesh* const mesh);
	 void NewtonMeshOptimizeVertex (const NewtonMesh* const mesh);
	 int NewtonMeshIsOpenMesh (const NewtonMesh* const mesh);
	 void NewtonMeshFixTJoints (const NewtonMesh* const mesh);

	 void NewtonMeshPolygonize (const NewtonMesh* const mesh);
	 void NewtonMeshTriangulate (const NewtonMesh* const mesh);
	 NewtonMesh* NewtonMeshUnion (const NewtonMesh* const mesh, const NewtonMesh* const clipper, const float* const clipperMatrix);
	 NewtonMesh* NewtonMeshDifference (const NewtonMesh* const mesh, const NewtonMesh* const clipper, const float* const clipperMatrix);
	 NewtonMesh* NewtonMeshIntersection (const NewtonMesh* const mesh, const NewtonMesh* const clipper, const float* const clipperMatrix);
	 void NewtonMeshClip (const NewtonMesh* const mesh, const NewtonMesh* const clipper, const float* const clipperMatrix, NewtonMesh** const topMesh, NewtonMesh** const bottomMesh);

	 NewtonMesh* NewtonMeshConvexMeshIntersection (const NewtonMesh* const mesh, const NewtonMesh* const convexMesh);

	 NewtonMesh* NewtonMeshSimplify (const NewtonMesh* const mesh, int maxVertexCount, NewtonReportProgress reportPrograssCallback, void* const reportPrgressUserData);
	 NewtonMesh* NewtonMeshApproximateConvexDecomposition (const NewtonMesh* const mesh, float maxConcavity, float backFaceDistanceFactor, int maxCount, int maxVertexPerHull, NewtonReportProgress reportProgressCallback, void* const reportProgressUserData);

	 void NewtonRemoveUnusedVertices(const NewtonMesh* const mesh, int* const vertexRemapTable);

	 void NewtonMeshBeginBuild(const NewtonMesh* const mesh);
		 void NewtonMeshBeginFace(const NewtonMesh* const mesh);
			 void NewtonMeshAddPoint(const NewtonMesh* const mesh, double x, double y, double z);
			 void NewtonMeshAddLayer(const NewtonMesh* const mesh, int layerIndex);
			 void NewtonMeshAddMaterial(const NewtonMesh* const mesh, int materialIndex);
			 void NewtonMeshAddNormal(const NewtonMesh* const mesh, float x, float y, float z);
			 void NewtonMeshAddBinormal(const NewtonMesh* const mesh, float x, float y, float z);
			 void NewtonMeshAddUV0(const NewtonMesh* const mesh, float u, float v);
			 void NewtonMeshAddUV1(const NewtonMesh* const mesh, float u, float v);
			 void NewtonMeshAddVertexColor(const NewtonMesh* const mesh, float r, float g, float b, float a);
		 void NewtonMeshEndFace(const NewtonMesh* const mesh);
	 void NewtonMeshEndBuild(const NewtonMesh* const mesh);

	 void NewtonMeshClearVertexFormat (NewtonMeshVertexFormat* const format);
	 void NewtonMeshBuildFromVertexListIndexList (const NewtonMesh* const mesh, const NewtonMeshVertexFormat* const format);

	 int NewtonMeshGetPointCount (const NewtonMesh* const mesh);
	 const int* NewtonMeshGetIndexToVertexMap(const NewtonMesh* const mesh);

	 void NewtonMeshGetVertexDoubleChannel (const NewtonMesh* const mesh, int vertexStrideInByte, double* const outBuffer);
	 void NewtonMeshGetVertexChannel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);
	 void NewtonMeshGetNormalChannel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);
	 void NewtonMeshGetBinormalChannel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);
	 void NewtonMeshGetUV0Channel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);
	 void NewtonMeshGetUV1Channel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);
	 void NewtonMeshGetVertexColorChannel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);

	 int NewtonMeshHasNormalChannel(const NewtonMesh* const mesh);
	 int NewtonMeshHasBinormalChannel(const NewtonMesh* const mesh);
	 int NewtonMeshHasUV0Channel(const NewtonMesh* const mesh);
	 int NewtonMeshHasUV1Channel(const NewtonMesh* const mesh);
	 int NewtonMeshHasVertexColorChannel(const NewtonMesh* const mesh);

	 void* NewtonMeshBeginHandle (const NewtonMesh* const mesh);
	 void NewtonMeshEndHandle (const NewtonMesh* const mesh, void* const handle);
	 int NewtonMeshFirstMaterial (const NewtonMesh* const mesh, void* const handle);
	 int NewtonMeshNextMaterial (const NewtonMesh* const mesh, void* const handle, int materialId);
	 int NewtonMeshMaterialGetMaterial (const NewtonMesh* const mesh, void* const handle, int materialId);
	 int NewtonMeshMaterialGetIndexCount (const NewtonMesh* const mesh, void* const handle, int materialId);
	 void NewtonMeshMaterialGetIndexStream (const NewtonMesh* const mesh, void* const handle, int materialId, int* const index);
	 void NewtonMeshMaterialGetIndexStreamShort (const NewtonMesh* const mesh, void* const handle, int materialId, short int* const index);

	 NewtonMesh* NewtonMeshCreateFirstSingleSegment (const NewtonMesh* const mesh);
	 NewtonMesh* NewtonMeshCreateNextSingleSegment (const NewtonMesh* const mesh, const NewtonMesh* const segment);

	 NewtonMesh* NewtonMeshCreateFirstLayer (const NewtonMesh* const mesh);
	 NewtonMesh* NewtonMeshCreateNextLayer (const NewtonMesh* const mesh, const NewtonMesh* const segment);

	 int NewtonMeshGetTotalFaceCount (const NewtonMesh* const mesh);
	 int NewtonMeshGetTotalIndexCount (const NewtonMesh* const mesh);
	 void NewtonMeshGetFaces (const NewtonMesh* const mesh, int* const faceIndexCount, int* const faceMaterial, void** const faceIndices);

	 int NewtonMeshGetVertexCount (const NewtonMesh* const mesh);
	 int NewtonMeshGetVertexStrideInByte (const NewtonMesh* const mesh);
	 const double* NewtonMeshGetVertexArray (const NewtonMesh* const mesh);

	 int NewtonMeshGetVertexBaseCount(const NewtonMesh* const mesh);
	 void NewtonMeshSetVertexBaseCount(const NewtonMesh* const mesh, int baseCount);

	 void* NewtonMeshGetFirstVertex (const NewtonMesh* const mesh);
	 void* NewtonMeshGetNextVertex (const NewtonMesh* const mesh, const void* const vertex);
	 int NewtonMeshGetVertexIndex (const NewtonMesh* const mesh, const void* const vertex);

	 void* NewtonMeshGetFirstPoint (const NewtonMesh* const mesh);
	 void* NewtonMeshGetNextPoint (const NewtonMesh* const mesh, const void* const point);
	 int NewtonMeshGetPointIndex (const NewtonMesh* const mesh, const void* const point);
	 int NewtonMeshGetVertexIndexFromPoint (const NewtonMesh* const mesh, const void* const point);

	 void* NewtonMeshGetFirstEdge (const NewtonMesh* const mesh);
	 void* NewtonMeshGetNextEdge (const NewtonMesh* const mesh, const void* const edge);
	 void NewtonMeshGetEdgeIndices (const NewtonMesh* const mesh, const void* const edge, int* const v0, int* const v1);
	

	 void* NewtonMeshGetFirstFace (const NewtonMesh* const mesh);
	 void* NewtonMeshGetNextFace (const NewtonMesh* const mesh, const void* const face);
	 int NewtonMeshIsFaceOpen (const NewtonMesh* const mesh, const void* const face);
	 int NewtonMeshGetFaceMaterial (const NewtonMesh* const mesh, const void* const face);
	 int NewtonMeshGetFaceIndexCount (const NewtonMesh* const mesh, const void* const face);
	 void NewtonMeshGetFaceIndices (const NewtonMesh* const mesh, const void* const face, int* const indices);
	 void NewtonMeshGetFacePointIndices (const NewtonMesh* const mesh, const void* const face, int* const indices);
	 void NewtonMeshCalculateFaceNormal (const NewtonMesh* const mesh, const void* const face, double* const normal);

	 void NewtonMeshSetFaceMaterial (const NewtonMesh* const mesh, const void* const face, int matId);








