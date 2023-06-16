










































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
	typedef void (*NewtonSetTransform) (const NewtonBody* const body, const float* const matrix, int threadIndex);

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

	
	
	
	
	
	__attribute__((visibility("default"))) int NewtonWorldGetVersion ();
	__attribute__((visibility("default"))) int NewtonWorldFloatSize ();

	__attribute__((visibility("default"))) int NewtonGetMemoryUsed ();
	__attribute__((visibility("default"))) void NewtonSetMemorySystem (NewtonAllocMemory malloc, NewtonFreeMemory free);

	__attribute__((visibility("default"))) NewtonWorld* NewtonCreate ();
	__attribute__((visibility("default"))) void NewtonDestroy (const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void NewtonDestroyAllBodies (const NewtonWorld* const newtonWorld);

	__attribute__((visibility("default"))) NewtonPostUpdateCallback NewtonGetPostUpdateCallback(const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void NewtonSetPostUpdateCallback (const NewtonWorld* const newtonWorld, NewtonPostUpdateCallback callback);

	__attribute__((visibility("default"))) void* NewtonAlloc (int sizeInBytes);
	__attribute__((visibility("default"))) void NewtonFree (void* const ptr);

	__attribute__((visibility("default"))) void NewtonLoadPlugins(const NewtonWorld* const newtonWorld, const char* const plugInPath);
	__attribute__((visibility("default"))) void NewtonUnloadPlugins(const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void* NewtonCurrentPlugin(const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void* NewtonGetFirstPlugin(const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void* NewtonGetPreferedPlugin(const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void* NewtonGetNextPlugin(const NewtonWorld* const newtonWorld, const void* const plugin);
	__attribute__((visibility("default"))) const char* NewtonGetPluginString(const NewtonWorld* const newtonWorld, const void* const plugin);
	__attribute__((visibility("default"))) void NewtonSelectPlugin(const NewtonWorld* const newtonWorld, const void* const plugin);

	__attribute__((visibility("default"))) float NewtonGetContactMergeTolerance (const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void NewtonSetContactMergeTolerance (const NewtonWorld* const newtonWorld, float tolerance);

	__attribute__((visibility("default"))) void NewtonInvalidateCache (const NewtonWorld* const newtonWorld);

	__attribute__((visibility("default"))) void NewtonSetSolverIterations (const NewtonWorld* const newtonWorld, int model);
	__attribute__((visibility("default"))) int NewtonGetSolverIterations(const NewtonWorld* const newtonWorld);

	__attribute__((visibility("default"))) void NewtonSetParallelSolverOnLargeIsland (const NewtonWorld* const newtonWorld, int mode);
	__attribute__((visibility("default"))) int NewtonGetParallelSolverOnLargeIsland (const NewtonWorld* const newtonWorld);

	__attribute__((visibility("default"))) int NewtonGetBroadphaseAlgorithm (const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void NewtonSelectBroadphaseAlgorithm (const NewtonWorld* const newtonWorld, int algorithmType);
	__attribute__((visibility("default"))) void NewtonResetBroadphase(const NewtonWorld* const newtonWorld);

	__attribute__((visibility("default"))) void NewtonUpdate (const NewtonWorld* const newtonWorld, float timestep);
	__attribute__((visibility("default"))) void NewtonUpdateAsync (const NewtonWorld* const newtonWorld, float timestep);
	__attribute__((visibility("default"))) void NewtonWaitForUpdateToFinish (const NewtonWorld* const newtonWorld);

	__attribute__((visibility("default"))) int NewtonGetNumberOfSubsteps (const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void NewtonSetNumberOfSubsteps (const NewtonWorld* const newtonWorld, int subSteps);
	__attribute__((visibility("default"))) float NewtonGetLastUpdateTime (const NewtonWorld* const newtonWorld);

	__attribute__((visibility("default"))) void NewtonSerializeToFile (const NewtonWorld* const newtonWorld, const char* const filename, NewtonOnBodySerializationCallback bodyCallback, void* const bodyUserData);
	__attribute__((visibility("default"))) void NewtonDeserializeFromFile (const NewtonWorld* const newtonWorld, const char* const filename, NewtonOnBodyDeserializationCallback bodyCallback, void* const bodyUserData);

	__attribute__((visibility("default"))) void NewtonSerializeScene(const NewtonWorld* const newtonWorld, NewtonOnBodySerializationCallback bodyCallback, void* const bodyUserData,
									   	 NewtonSerializeCallback serializeCallback, void* const serializeHandle);
	__attribute__((visibility("default"))) void NewtonDeserializeScene(const NewtonWorld* const newtonWorld, NewtonOnBodyDeserializationCallback bodyCallback, void* const bodyUserData,
										   NewtonDeserializeCallback serializeCallback, void* const serializeHandle);

	__attribute__((visibility("default"))) NewtonBody* NewtonFindSerializedBody(const NewtonWorld* const newtonWorld, int bodySerializedID);
	__attribute__((visibility("default"))) void NewtonSetJointSerializationCallbacks (const NewtonWorld* const newtonWorld, NewtonOnJointSerializationCallback serializeJoint, NewtonOnJointDeserializationCallback deserializeJoint);
	__attribute__((visibility("default"))) void NewtonGetJointSerializationCallbacks (const NewtonWorld* const newtonWorld, NewtonOnJointSerializationCallback* const serializeJoint, NewtonOnJointDeserializationCallback* const deserializeJoint);

	
	__attribute__((visibility("default"))) void NewtonWorldCriticalSectionLock (const NewtonWorld* const newtonWorld, int threadIndex);
	__attribute__((visibility("default"))) void NewtonWorldCriticalSectionUnlock (const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void NewtonSetThreadsCount (const NewtonWorld* const newtonWorld, int threads);
	__attribute__((visibility("default"))) int NewtonGetThreadsCount(const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) int NewtonGetMaxThreadsCount(const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void NewtonDispachThreadJob(const NewtonWorld* const newtonWorld, NewtonJobTask task, void* const usedData, const char* const functionName);
	__attribute__((visibility("default"))) void NewtonSyncThreadJobs(const NewtonWorld* const newtonWorld);

	
	__attribute__((visibility("default"))) int NewtonAtomicAdd (int* const ptr, int value);
	__attribute__((visibility("default"))) int NewtonAtomicSwap (int* const ptr, int value);
	__attribute__((visibility("default"))) void NewtonYield ();

	__attribute__((visibility("default"))) void NewtonSetIslandUpdateEvent (const NewtonWorld* const newtonWorld, NewtonIslandUpdate islandUpdate);
	__attribute__((visibility("default"))) void NewtonWorldForEachJointDo (const NewtonWorld* const newtonWorld, NewtonJointIterator callback, void* const userData);
	__attribute__((visibility("default"))) void NewtonWorldForEachBodyInAABBDo (const NewtonWorld* const newtonWorld, const float* const p0, const float* const p1, NewtonBodyIterator callback, void* const userData);

	__attribute__((visibility("default"))) void NewtonWorldSetUserData (const NewtonWorld* const newtonWorld, void* const userData);
	__attribute__((visibility("default"))) void* NewtonWorldGetUserData (const NewtonWorld* const newtonWorld);

	__attribute__((visibility("default"))) void* NewtonWorldAddListener (const NewtonWorld* const newtonWorld, const char* const nameId, void* const listenerUserData);
	__attribute__((visibility("default"))) void* NewtonWorldGetListener (const NewtonWorld* const newtonWorld, const char* const nameId);

	__attribute__((visibility("default"))) void NewtonWorldListenerSetDebugCallback (const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldListenerDebugCallback callback);
	__attribute__((visibility("default"))) void NewtonWorldListenerSetPostStepCallback (const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldUpdateListenerCallback callback);
	__attribute__((visibility("default"))) void NewtonWorldListenerSetPreUpdateCallback (const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldUpdateListenerCallback callback);
	__attribute__((visibility("default"))) void NewtonWorldListenerSetPostUpdateCallback (const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldUpdateListenerCallback callback);
	__attribute__((visibility("default"))) void NewtonWorldListenerSetDestructorCallback (const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldDestroyListenerCallback callback);
	__attribute__((visibility("default"))) void NewtonWorldListenerSetBodyDestroyCallback(const NewtonWorld* const newtonWorld, void* const listener, NewtonWorldListenerBodyDestroyCallback callback);
	__attribute__((visibility("default"))) void NewtonWorldListenerDebug(const NewtonWorld* const newtonWorld, void* const context);
	__attribute__((visibility("default"))) void* NewtonWorldGetListenerUserData(const NewtonWorld* const newtonWorld, void* const listener);
	__attribute__((visibility("default"))) NewtonWorldListenerBodyDestroyCallback NewtonWorldListenerGetBodyDestroyCallback (const NewtonWorld* const newtonWorld, void* const listener);

	__attribute__((visibility("default"))) void NewtonWorldSetDestructorCallback (const NewtonWorld* const newtonWorld, NewtonWorldDestructorCallback destructor);
	__attribute__((visibility("default"))) NewtonWorldDestructorCallback NewtonWorldGetDestructorCallback (const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void NewtonWorldSetCollisionConstructorDestructorCallback (const NewtonWorld* const newtonWorld, NewtonCollisionCopyConstructionCallback constructor, NewtonCollisionDestructorCallback destructor);

	__attribute__((visibility("default"))) void NewtonWorldSetCreateDestroyContactCallback(const NewtonWorld* const newtonWorld, NewtonCreateContactCallback createContact, NewtonDestroyContactCallback destroyContact);

	__attribute__((visibility("default"))) void NewtonWorldRayCast (const NewtonWorld* const newtonWorld, const float* const p0, const float* const p1, NewtonWorldRayFilterCallback filter, void* const userData, NewtonWorldRayPrefilterCallback prefilter, int threadIndex);
	__attribute__((visibility("default"))) int NewtonWorldConvexCast (const NewtonWorld* const newtonWorld, const float* const matrix, const float* const target, const NewtonCollision* const shape, float* const param, void* const userData, NewtonWorldRayPrefilterCallback prefilter, NewtonWorldConvexCastReturnInfo* const info, int maxContactsCount, int threadIndex);
	__attribute__((visibility("default"))) int NewtonWorldCollide (const NewtonWorld* const newtonWorld, const float* const matrix, const NewtonCollision* const shape, void* const userData, NewtonWorldRayPrefilterCallback prefilter, NewtonWorldConvexCastReturnInfo* const info, int maxContactsCount, int threadIndex);

	
	__attribute__((visibility("default"))) int NewtonWorldGetBodyCount(const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) int NewtonWorldGetConstraintCount(const NewtonWorld* const newtonWorld);

	__attribute__((visibility("default"))) NewtonJoint* NewtonWorldFindJoint(const NewtonBody* const body0, const NewtonBody* const body1);

	
	
	
	
	
	__attribute__((visibility("default"))) NewtonBody* NewtonIslandGetBody (const void* const island, int bodyIndex);
	__attribute__((visibility("default"))) void NewtonIslandGetBodyAABB (const void* const island, int bodyIndex, float* const p0, float* const p1);

	
	
	
	
	
	__attribute__((visibility("default"))) int NewtonMaterialCreateGroupID(const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) int NewtonMaterialGetDefaultGroupID(const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) void NewtonMaterialDestroyAllGroupID(const NewtonWorld* const newtonWorld);

	
	__attribute__((visibility("default"))) void* NewtonMaterialGetUserData (const NewtonWorld* const newtonWorld, int id0, int id1);
	__attribute__((visibility("default"))) void NewtonMaterialSetSurfaceThickness (const NewtonWorld* const newtonWorld, int id0, int id1, float thickness);




	__attribute__((visibility("default"))) void NewtonMaterialSetCallbackUserData (const NewtonWorld* const newtonWorld, int id0, int id1, void* const userData);
	__attribute__((visibility("default"))) void NewtonMaterialSetContactGenerationCallback (const NewtonWorld* const newtonWorld, int id0, int id1, NewtonOnContactGeneration contactGeneration);
	__attribute__((visibility("default"))) void NewtonMaterialSetCompoundCollisionCallback(const NewtonWorld* const newtonWorld, int id0, int id1, NewtonOnCompoundSubCollisionAABBOverlap compoundAabbOverlap);
	__attribute__((visibility("default"))) void NewtonMaterialSetCollisionCallback (const NewtonWorld* const newtonWorld, int id0, int id1, NewtonOnAABBOverlap aabbOverlap, NewtonContactsProcess process);

	__attribute__((visibility("default"))) void NewtonMaterialSetDefaultSoftness (const NewtonWorld* const newtonWorld, int id0, int id1, float value);
	__attribute__((visibility("default"))) void NewtonMaterialSetDefaultElasticity (const NewtonWorld* const newtonWorld, int id0, int id1, float elasticCoef);
	__attribute__((visibility("default"))) void NewtonMaterialSetDefaultCollidable (const NewtonWorld* const newtonWorld, int id0, int id1, int state);
	__attribute__((visibility("default"))) void NewtonMaterialSetDefaultFriction (const NewtonWorld* const newtonWorld, int id0, int id1, float staticFriction, float kineticFriction);

	__attribute__((visibility("default"))) void NewtonMaterialJointResetIntraJointCollision (const NewtonWorld* const newtonWorld, int id0, int id1);
	__attribute__((visibility("default"))) void NewtonMaterialJointResetSelftJointCollision (const NewtonWorld* const newtonWorld, int id0, int id1);

	__attribute__((visibility("default"))) NewtonMaterial* NewtonWorldGetFirstMaterial (const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) NewtonMaterial* NewtonWorldGetNextMaterial (const NewtonWorld* const newtonWorld, const NewtonMaterial* const material);

	__attribute__((visibility("default"))) NewtonBody* NewtonWorldGetFirstBody (const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) NewtonBody* NewtonWorldGetNextBody (const NewtonWorld* const newtonWorld, const NewtonBody* const curBody);


	
	
	
	
	
	__attribute__((visibility("default"))) void *NewtonMaterialGetMaterialPairUserData (const NewtonMaterial* const material);
	__attribute__((visibility("default"))) unsigned NewtonMaterialGetContactFaceAttribute (const NewtonMaterial* const material);
	__attribute__((visibility("default"))) NewtonCollision* NewtonMaterialGetBodyCollidingShape (const NewtonMaterial* const material, const NewtonBody* const body);
	__attribute__((visibility("default"))) float NewtonMaterialGetContactNormalSpeed (const NewtonMaterial* const material);
	__attribute__((visibility("default"))) void NewtonMaterialGetContactForce (const NewtonMaterial* const material, const NewtonBody* const body, float* const force);
	__attribute__((visibility("default"))) void NewtonMaterialGetContactPositionAndNormal (const NewtonMaterial* const material, const NewtonBody* const body, float* const posit, float* const normal);
	__attribute__((visibility("default"))) void NewtonMaterialGetContactTangentDirections (const NewtonMaterial* const material, const NewtonBody* const body, float* const dir0, float* const dir1);
	__attribute__((visibility("default"))) float NewtonMaterialGetContactTangentSpeed (const NewtonMaterial* const material, int index);
	__attribute__((visibility("default"))) float NewtonMaterialGetContactMaxNormalImpact (const NewtonMaterial* const material);
	__attribute__((visibility("default"))) float NewtonMaterialGetContactMaxTangentImpact (const NewtonMaterial* const material, int index);
	__attribute__((visibility("default"))) float NewtonMaterialGetContactPenetration (const NewtonMaterial* const material);
	__attribute__((visibility("default"))) void NewtonMaterialSetAsSoftContact (const NewtonMaterial* const material, float relaxation);

	__attribute__((visibility("default"))) void NewtonMaterialSetContactSoftness (const NewtonMaterial* const material, float softness);
	__attribute__((visibility("default"))) void NewtonMaterialSetContactThickness (const NewtonMaterial* const material, float thickness);
	__attribute__((visibility("default"))) void NewtonMaterialSetContactElasticity (const NewtonMaterial* const material, float restitution);
	__attribute__((visibility("default"))) void NewtonMaterialSetContactFrictionState (const NewtonMaterial* const material, int state, int index);
	__attribute__((visibility("default"))) void NewtonMaterialSetContactFrictionCoef (const NewtonMaterial* const material, float staticFrictionCoef, float kineticFrictionCoef, int index);

	__attribute__((visibility("default"))) void NewtonMaterialSetContactNormalAcceleration (const NewtonMaterial* const material, float accel);
	__attribute__((visibility("default"))) void NewtonMaterialSetContactNormalDirection (const NewtonMaterial* const material, const float* const directionVector);
	__attribute__((visibility("default"))) void NewtonMaterialSetContactPosition (const NewtonMaterial* const material, const float* const position);

	__attribute__((visibility("default"))) void NewtonMaterialSetContactTangentFriction (const NewtonMaterial* const material, float friction, int index);
	__attribute__((visibility("default"))) void NewtonMaterialSetContactTangentAcceleration (const NewtonMaterial* const material, float accel, int index);
	__attribute__((visibility("default"))) void NewtonMaterialContactRotateTangentDirections (const NewtonMaterial* const material, const float* const directionVector);

	
	
	__attribute__((visibility("default"))) float NewtonMaterialGetContactPruningTolerance(const NewtonJoint* const contactJoint);
	__attribute__((visibility("default"))) void NewtonMaterialSetContactPruningTolerance(const NewtonJoint* const contactJoint, float tolerance);

	
	
	
	
	
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateNull (const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateSphere (const NewtonWorld* const newtonWorld, float radius, int shapeID, const float* const offsetMatrix);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateBox (const NewtonWorld* const newtonWorld, float dx, float dy, float dz, int shapeID, const float* const offsetMatrix);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateCone (const NewtonWorld* const newtonWorld, float radius, float height, int shapeID, const float* const offsetMatrix);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateCapsule (const NewtonWorld* const newtonWorld, float radius0, float radius1, float height, int shapeID, const float* const offsetMatrix);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateCylinder (const NewtonWorld* const newtonWorld, float radio0, float radio1, float height, int shapeID, const float* const offsetMatrix);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateChamferCylinder (const NewtonWorld* const newtonWorld, float radius, float height, int shapeID, const float* const offsetMatrix);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateConvexHull (const NewtonWorld* const newtonWorld, int count, const float* const vertexCloud, int strideInBytes, float tolerance, int shapeID, const float* const offsetMatrix);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateConvexHullFromMesh (const NewtonWorld* const newtonWorld, const NewtonMesh* const mesh, float tolerance, int shapeID);

	__attribute__((visibility("default"))) int NewtonCollisionGetMode(const NewtonCollision* const convexCollision);
	__attribute__((visibility("default"))) void NewtonCollisionSetMode (const NewtonCollision* const convexCollision, int mode);

	__attribute__((visibility("default"))) int NewtonConvexHullGetFaceIndices (const NewtonCollision* const convexHullCollision, int face, int* const faceIndices);
	__attribute__((visibility("default"))) int NewtonConvexHullGetVertexData (const NewtonCollision* const convexHullCollision, float** const vertexData, int* strideInBytes);

	__attribute__((visibility("default"))) float NewtonConvexCollisionCalculateVolume (const NewtonCollision* const convexCollision);
	__attribute__((visibility("default"))) void NewtonConvexCollisionCalculateInertialMatrix (const NewtonCollision* convexCollision, float* const inertia, float* const origin);
	__attribute__((visibility("default"))) float NewtonConvexCollisionCalculateBuoyancyVolume (const NewtonCollision* const convexCollision, const float* const matrix, const float* const fluidPlane, float* const centerOfBuoyancy);

	__attribute__((visibility("default"))) const void* NewtonCollisionDataPointer (const NewtonCollision* const convexCollision);

	
	
	
	
	
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateCompoundCollision (const NewtonWorld* const newtonWorld, int shapeID);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateCompoundCollisionFromMesh (const NewtonWorld* const newtonWorld, const NewtonMesh* const mesh, float hullTolerance, int shapeID, int subShapeID);

	__attribute__((visibility("default"))) void NewtonCompoundCollisionBeginAddRemove (NewtonCollision* const compoundCollision);
	__attribute__((visibility("default"))) void* NewtonCompoundCollisionAddSubCollision (NewtonCollision* const compoundCollision, const NewtonCollision* const convexCollision);
	__attribute__((visibility("default"))) void NewtonCompoundCollisionRemoveSubCollision (NewtonCollision* const compoundCollision, const void* const collisionNode);
	__attribute__((visibility("default"))) void NewtonCompoundCollisionRemoveSubCollisionByIndex (NewtonCollision* const compoundCollision, int nodeIndex);
	__attribute__((visibility("default"))) void NewtonCompoundCollisionSetSubCollisionMatrix (NewtonCollision* const compoundCollision, const void* const collisionNode, const float* const matrix);
	__attribute__((visibility("default"))) void NewtonCompoundCollisionEndAddRemove (NewtonCollision* const compoundCollision);

	__attribute__((visibility("default"))) void* NewtonCompoundCollisionGetFirstNode (NewtonCollision* const compoundCollision);
	__attribute__((visibility("default"))) void* NewtonCompoundCollisionGetNextNode (NewtonCollision* const compoundCollision, const void* const collisionNode);

	__attribute__((visibility("default"))) void* NewtonCompoundCollisionGetNodeByIndex (NewtonCollision* const compoundCollision, int index);
	__attribute__((visibility("default"))) int NewtonCompoundCollisionGetNodeIndex (NewtonCollision* const compoundCollision, const void* const collisionNode);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCompoundCollisionGetCollisionFromNode (NewtonCollision* const compoundCollision, const void* const collisionNode);


	
	
	
	
	
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateFracturedCompoundCollision (const NewtonWorld* const newtonWorld, const NewtonMesh* const solidMesh, int shapeID, int fracturePhysicsMaterialID, int pointcloudCount, const float* const vertexCloud, int strideInBytes, int materialID, const float* const textureMatrix,
																		NewtonFractureCompoundCollisionReconstructMainMeshCallBack regenerateMainMeshCallback,
																		NewtonFractureCompoundCollisionOnEmitCompoundFractured emitFracturedCompound, NewtonFractureCompoundCollisionOnEmitChunk emitFracfuredChunk);
	__attribute__((visibility("default"))) NewtonCollision* NewtonFracturedCompoundPlaneClip (const NewtonCollision* const fracturedCompound, const float* const plane);

	__attribute__((visibility("default"))) void NewtonFracturedCompoundSetCallbacks (const NewtonCollision* const fracturedCompound, NewtonFractureCompoundCollisionReconstructMainMeshCallBack regenerateMainMeshCallback,
														 NewtonFractureCompoundCollisionOnEmitCompoundFractured emitFracturedCompound, NewtonFractureCompoundCollisionOnEmitChunk emitFracfuredChunk);


	__attribute__((visibility("default"))) int NewtonFracturedCompoundIsNodeFreeToDetach (const NewtonCollision* const fracturedCompound, void* const collisionNode);
	__attribute__((visibility("default"))) int NewtonFracturedCompoundNeighborNodeList (const NewtonCollision* const fracturedCompound, void* const collisionNode, void** const list, int maxCount);


	__attribute__((visibility("default"))) NewtonFracturedCompoundMeshPart* NewtonFracturedCompoundGetMainMesh (const NewtonCollision* const fracturedCompound);
	__attribute__((visibility("default"))) NewtonFracturedCompoundMeshPart* NewtonFracturedCompoundGetFirstSubMesh(const NewtonCollision* const fracturedCompound);
	__attribute__((visibility("default"))) NewtonFracturedCompoundMeshPart* NewtonFracturedCompoundGetNextSubMesh(const NewtonCollision* const fracturedCompound, NewtonFracturedCompoundMeshPart* const subMesh);

	__attribute__((visibility("default"))) int NewtonFracturedCompoundCollisionGetVertexCount (const NewtonCollision* const fracturedCompound, const NewtonFracturedCompoundMeshPart* const meshOwner);
	__attribute__((visibility("default"))) const float* NewtonFracturedCompoundCollisionGetVertexPositions (const NewtonCollision* const fracturedCompound, const NewtonFracturedCompoundMeshPart* const meshOwner);
	__attribute__((visibility("default"))) const float* NewtonFracturedCompoundCollisionGetVertexNormals (const NewtonCollision* const fracturedCompound, const NewtonFracturedCompoundMeshPart* const meshOwner);
	__attribute__((visibility("default"))) const float* NewtonFracturedCompoundCollisionGetVertexUVs (const NewtonCollision* const fracturedCompound, const NewtonFracturedCompoundMeshPart* const meshOwner);
	__attribute__((visibility("default"))) int NewtonFracturedCompoundMeshPartGetIndexStream (const NewtonCollision* const fracturedCompound, const NewtonFracturedCompoundMeshPart* const meshOwner, const void* const segment, int* const index);

	__attribute__((visibility("default"))) void* NewtonFracturedCompoundMeshPartGetFirstSegment (const NewtonFracturedCompoundMeshPart* const fractureCompoundMeshPart);
	__attribute__((visibility("default"))) void* NewtonFracturedCompoundMeshPartGetNextSegment (const void* const fractureCompoundMeshSegment);
	__attribute__((visibility("default"))) int NewtonFracturedCompoundMeshPartGetMaterial (const void* const fractureCompoundMeshSegment);
	__attribute__((visibility("default"))) int NewtonFracturedCompoundMeshPartGetIndexCount (const void* const fractureCompoundMeshSegment);


	
	
	
	
	
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateSceneCollision (const NewtonWorld* const newtonWorld, int shapeID);

	__attribute__((visibility("default"))) void NewtonSceneCollisionBeginAddRemove (NewtonCollision* const sceneCollision);
	__attribute__((visibility("default"))) void* NewtonSceneCollisionAddSubCollision (NewtonCollision* const sceneCollision, const NewtonCollision* const collision);
	__attribute__((visibility("default"))) void NewtonSceneCollisionRemoveSubCollision (NewtonCollision* const compoundCollision, const void* const collisionNode);
	__attribute__((visibility("default"))) void NewtonSceneCollisionRemoveSubCollisionByIndex (NewtonCollision* const sceneCollision, int nodeIndex);
	__attribute__((visibility("default"))) void NewtonSceneCollisionSetSubCollisionMatrix (NewtonCollision* const sceneCollision, const void* const collisionNode, const float* const matrix);
	__attribute__((visibility("default"))) void NewtonSceneCollisionEndAddRemove (NewtonCollision* const sceneCollision);

	__attribute__((visibility("default"))) void* NewtonSceneCollisionGetFirstNode (NewtonCollision* const sceneCollision);
	__attribute__((visibility("default"))) void* NewtonSceneCollisionGetNextNode (NewtonCollision* const sceneCollision, const void* const collisionNode);

	__attribute__((visibility("default"))) void* NewtonSceneCollisionGetNodeByIndex (NewtonCollision* const sceneCollision, int index);
	__attribute__((visibility("default"))) int NewtonSceneCollisionGetNodeIndex (NewtonCollision* const sceneCollision, const void* const collisionNode);
	__attribute__((visibility("default"))) NewtonCollision* NewtonSceneCollisionGetCollisionFromNode (NewtonCollision* const sceneCollision, const void* const collisionNode);


	
	
	
	
	
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateUserMeshCollision (const NewtonWorld* const newtonWorld, const float* const minBox,
		const float* const maxBox, void* const userData, NewtonUserMeshCollisionCollideCallback collideCallback,
		NewtonUserMeshCollisionRayHitCallback rayHitCallback, NewtonUserMeshCollisionDestroyCallback destroyCallback,
		NewtonUserMeshCollisionGetCollisionInfo getInfoCallback, NewtonUserMeshCollisionAABBTest getLocalAABBCallback,
		NewtonUserMeshCollisionGetFacesInAABB facesInAABBCallback, NewtonOnUserCollisionSerializationCallback serializeCallback, int shapeID);

	__attribute__((visibility("default"))) int NewtonUserMeshCollisionContinuousOverlapTest (const NewtonUserMeshCollisionCollideDesc* const collideDescData, const void* const continueCollisionHandle, const float* const minAabb, const float* const maxAabb);

	
	
	
	
	
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateCollisionFromSerialization (const NewtonWorld* const newtonWorld, NewtonDeserializeCallback deserializeFunction, void* const serializeHandle);
	__attribute__((visibility("default"))) void NewtonCollisionSerialize (const NewtonWorld* const newtonWorld, const NewtonCollision* const collision, NewtonSerializeCallback serializeFunction, void* const serializeHandle);
	__attribute__((visibility("default"))) void NewtonCollisionGetInfo (const NewtonCollision* const collision, NewtonCollisionInfoRecord* const collisionInfo);

	
	
	
	
	
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateHeightFieldCollision (const NewtonWorld* const newtonWorld, int width, int height, int gridsDiagonals, int elevationdatType, const void* const elevationMap, const char* const attributeMap, float verticalScale, float horizontalScale_x, float horizontalScale_z, int shapeID);
	__attribute__((visibility("default"))) void NewtonHeightFieldSetUserRayCastCallback (const NewtonCollision* const heightfieldCollision, NewtonHeightFieldRayCastCallback rayHitCallback);

	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateTreeCollision (const NewtonWorld* const newtonWorld, int shapeID);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateTreeCollisionFromMesh (const NewtonWorld* const newtonWorld, const NewtonMesh* const mesh, int shapeID);
	__attribute__((visibility("default"))) void NewtonTreeCollisionSetUserRayCastCallback (const NewtonCollision* const treeCollision, NewtonCollisionTreeRayCastCallback rayHitCallback);

	__attribute__((visibility("default"))) void NewtonTreeCollisionBeginBuild (const NewtonCollision* const treeCollision);
	__attribute__((visibility("default"))) void NewtonTreeCollisionAddFace (const NewtonCollision* const treeCollision, int vertexCount, const float* const vertexPtr, int strideInBytes, int faceAttribute);
	__attribute__((visibility("default"))) void NewtonTreeCollisionEndBuild (const NewtonCollision* const treeCollision, int optimize);

	__attribute__((visibility("default"))) int NewtonTreeCollisionGetFaceAttribute (const NewtonCollision* const treeCollision, const int* const faceIndexArray, int indexCount);
	__attribute__((visibility("default"))) void NewtonTreeCollisionSetFaceAttribute (const NewtonCollision* const treeCollision, const int* const faceIndexArray, int indexCount, int attribute);

	__attribute__((visibility("default"))) void NewtonTreeCollisionForEachFace (const NewtonCollision* const treeCollision, NewtonTreeCollisionFaceCallback forEachFaceCallback, void* const context);

	__attribute__((visibility("default"))) int NewtonTreeCollisionGetVertexListTriangleListInAABB (const NewtonCollision* const treeCollision, const float* const p0, const float* const p1, const float** const vertexArray, int* const vertexCount, int* const vertexStrideInBytes, const int* const indexList, int maxIndexCount, const int* const faceAttribute);

	__attribute__((visibility("default"))) void NewtonStaticCollisionSetDebugCallback (const NewtonCollision* const staticCollision, NewtonTreeCollisionCallback userCallback);

	
	
	
	
	
	__attribute__((visibility("default"))) NewtonCollision* NewtonCollisionCreateInstance (const NewtonCollision* const collision);
	__attribute__((visibility("default"))) int NewtonCollisionGetType (const NewtonCollision* const collision);
	__attribute__((visibility("default"))) int NewtonCollisionIsConvexShape (const NewtonCollision* const collision);
	__attribute__((visibility("default"))) int NewtonCollisionIsStaticShape (const NewtonCollision* const collision);

	
	__attribute__((visibility("default"))) void NewtonCollisionSetUserData (const NewtonCollision* const collision, void* const userData);
	__attribute__((visibility("default"))) void* NewtonCollisionGetUserData (const NewtonCollision* const collision);

	__attribute__((visibility("default"))) void NewtonCollisionSetUserID (const NewtonCollision* const collision, long long id);
	__attribute__((visibility("default"))) long long NewtonCollisionGetUserID (const NewtonCollision* const collision);

	__attribute__((visibility("default"))) void NewtonCollisionGetMaterial (const NewtonCollision* const collision, NewtonCollisionMaterial* const userData);
	__attribute__((visibility("default"))) void NewtonCollisionSetMaterial (const NewtonCollision* const collision, const NewtonCollisionMaterial* const userData);

	__attribute__((visibility("default"))) void* NewtonCollisionGetSubCollisionHandle (const NewtonCollision* const collision);
	__attribute__((visibility("default"))) NewtonCollision* NewtonCollisionGetParentInstance (const NewtonCollision* const collision);

	__attribute__((visibility("default"))) void NewtonCollisionSetMatrix (const NewtonCollision* const collision, const float* const matrix);
	__attribute__((visibility("default"))) void NewtonCollisionGetMatrix (const NewtonCollision* const collision, float* const matrix);

	__attribute__((visibility("default"))) void NewtonCollisionSetScale (const NewtonCollision* const collision, float scaleX, float scaleY, float scaleZ);
	__attribute__((visibility("default"))) void NewtonCollisionGetScale (const NewtonCollision* const collision, float* const scaleX, float* const scaleY, float* const scaleZ);
	__attribute__((visibility("default"))) void NewtonDestroyCollision (const NewtonCollision* const collision);

	__attribute__((visibility("default"))) float NewtonCollisionGetSkinThickness (const NewtonCollision* const collision);
	__attribute__((visibility("default"))) void NewtonCollisionSetSkinThickness(const NewtonCollision* const collision, float thickness);

	__attribute__((visibility("default"))) int NewtonCollisionIntersectionTest (const NewtonWorld* const newtonWorld,
		const NewtonCollision* const collisionA, const float* const matrixA,
		const NewtonCollision* const collisionB, const float* const matrixB, int threadIndex);

	__attribute__((visibility("default"))) int NewtonCollisionPointDistance (const NewtonWorld* const newtonWorld, const float* const point,
		const NewtonCollision* const collision, const float* const matrix, float* const contact, float* const normal, int threadIndex);

	__attribute__((visibility("default"))) int NewtonCollisionClosestPoint (const NewtonWorld* const newtonWorld,
		const NewtonCollision* const collisionA, const float* const matrixA,
		const NewtonCollision* const collisionB, const float* const matrixB,
		float* const contactA, float* const contactB, float* const normalAB, int threadIndex);

	__attribute__((visibility("default"))) int NewtonCollisionCollide (const NewtonWorld* const newtonWorld, int maxSize,
		const NewtonCollision* const collisionA, const float* const matrixA,
		const NewtonCollision* const collisionB, const float* const matrixB,
		float* const contacts, float* const normals, float* const penetration,
		long long* const attributeA, long long* const attributeB, int threadIndex);

	__attribute__((visibility("default"))) int NewtonCollisionCollideContinue (const NewtonWorld* const newtonWorld, int maxSize, float timestep,
		const NewtonCollision* const collisionA, const float* const matrixA, const float* const velocA, const float* omegaA,
		const NewtonCollision* const collisionB, const float* const matrixB, const float* const velocB, const float* const omegaB,
		float* const timeOfImpact, float* const contacts, float* const normals, float* const penetration,
		long long* const attributeA, long long* const attributeB, int threadIndex);

	__attribute__((visibility("default"))) void NewtonCollisionSupportVertex (const NewtonCollision* const collision, const float* const dir, float* const vertex);
	__attribute__((visibility("default"))) float NewtonCollisionRayCast (const NewtonCollision* const collision, const float* const p0, const float* const p1, float* const normal, long long* const attribute);
	__attribute__((visibility("default"))) void NewtonCollisionCalculateAABB (const NewtonCollision* const collision, const float* const matrix, float* const p0, float* const p1);
	__attribute__((visibility("default"))) void NewtonCollisionForEachPolygonDo (const NewtonCollision* const collision, const float* const matrix, NewtonCollisionIterator callback, void* const userData);

	
	
	
	
	
	
	
	
	
	__attribute__((visibility("default"))) void* NewtonCollisionAggregateCreate (NewtonWorld* const world);
	__attribute__((visibility("default"))) void NewtonCollisionAggregateDestroy (void* const aggregate);
	__attribute__((visibility("default"))) void NewtonCollisionAggregateAddBody (void* const aggregate, const NewtonBody* const body);
	__attribute__((visibility("default"))) void NewtonCollisionAggregateRemoveBody (void* const aggregate, const NewtonBody* const body);

	__attribute__((visibility("default"))) int NewtonCollisionAggregateGetSelfCollision (void* const aggregate);
	__attribute__((visibility("default"))) void NewtonCollisionAggregateSetSelfCollision (void* const aggregate, int state);

	
	
	
	
	
	__attribute__((visibility("default"))) void NewtonSetEulerAngle (const float* const eulersAngles, float* const matrix);
	__attribute__((visibility("default"))) void NewtonGetEulerAngle (const float* const matrix, float* const eulersAngles0, float* const eulersAngles1);
	__attribute__((visibility("default"))) float NewtonCalculateSpringDamperAcceleration (float dt, float ks, float x, float kd, float s);

	
	
	
	
	
	__attribute__((visibility("default"))) NewtonBody* NewtonCreateDynamicBody (const NewtonWorld* const newtonWorld, const NewtonCollision* const collision, const float* const matrix);
	__attribute__((visibility("default"))) NewtonBody* NewtonCreateKinematicBody (const NewtonWorld* const newtonWorld, const NewtonCollision* const collision, const float* const matrix);
	__attribute__((visibility("default"))) NewtonBody* NewtonCreateAsymetricDynamicBody(const NewtonWorld* const newtonWorld, const NewtonCollision* const collision, const float* const matrix);

	__attribute__((visibility("default"))) void NewtonDestroyBody(const NewtonBody* const body);

	__attribute__((visibility("default"))) int NewtonBodyGetSimulationState(const NewtonBody* const body);
	__attribute__((visibility("default"))) void NewtonBodySetSimulationState(const NewtonBody* const bodyPtr, const int state);

	__attribute__((visibility("default"))) int NewtonBodyGetType (const NewtonBody* const body);
	__attribute__((visibility("default"))) int NewtonBodyGetCollidable (const NewtonBody* const body);
	__attribute__((visibility("default"))) void NewtonBodySetCollidable (const NewtonBody* const body, int collidableState);

	__attribute__((visibility("default"))) void  NewtonBodyAddForce (const NewtonBody* const body, const float* const force);
	__attribute__((visibility("default"))) void  NewtonBodyAddTorque (const NewtonBody* const body, const float* const torque);

	__attribute__((visibility("default"))) void  NewtonBodySetCentreOfMass (const NewtonBody* const body, const float* const com);
	__attribute__((visibility("default"))) void  NewtonBodySetMassMatrix (const NewtonBody* const body, float mass, float Ixx, float Iyy, float Izz);
	__attribute__((visibility("default"))) void  NewtonBodySetFullMassMatrix (const NewtonBody* const body, float mass, const float* const inertiaMatrix);

	__attribute__((visibility("default"))) void  NewtonBodySetMassProperties (const NewtonBody* const body, float mass, const NewtonCollision* const collision);
	__attribute__((visibility("default"))) void  NewtonBodySetMatrix (const NewtonBody* const body, const float* const matrix);
	__attribute__((visibility("default"))) void  NewtonBodySetMatrixNoSleep (const NewtonBody* const body, const float* const matrix);
	__attribute__((visibility("default"))) void  NewtonBodySetMatrixRecursive (const NewtonBody* const body, const float* const matrix);

	__attribute__((visibility("default"))) void  NewtonBodySetMaterialGroupID (const NewtonBody* const body, int id);
	__attribute__((visibility("default"))) void  NewtonBodySetContinuousCollisionMode (const NewtonBody* const body, unsigned state);
	__attribute__((visibility("default"))) void  NewtonBodySetJointRecursiveCollision (const NewtonBody* const body, unsigned state);
	__attribute__((visibility("default"))) void  NewtonBodySetOmega (const NewtonBody* const body, const float* const omega);
	__attribute__((visibility("default"))) void  NewtonBodySetOmegaNoSleep (const NewtonBody* const body, const float* const omega);
	__attribute__((visibility("default"))) void  NewtonBodySetVelocity (const NewtonBody* const body, const float* const velocity);
	__attribute__((visibility("default"))) void  NewtonBodySetVelocityNoSleep (const NewtonBody* const body, const float* const velocity);
	__attribute__((visibility("default"))) void  NewtonBodySetForce (const NewtonBody* const body, const float* const force);
	__attribute__((visibility("default"))) void  NewtonBodySetTorque (const NewtonBody* const body, const float* const torque);

	__attribute__((visibility("default"))) void  NewtonBodySetLinearDamping (const NewtonBody* const body, float linearDamp);
	__attribute__((visibility("default"))) void  NewtonBodySetAngularDamping (const NewtonBody* const body, const float* const angularDamp);
	__attribute__((visibility("default"))) void  NewtonBodySetCollision (const NewtonBody* const body, const NewtonCollision* const collision);
	__attribute__((visibility("default"))) void  NewtonBodySetCollisionScale (const NewtonBody* const body, float scaleX, float  scaleY, float scaleZ);

	__attribute__((visibility("default"))) int  NewtonBodyGetSleepState (const NewtonBody* const body);
	__attribute__((visibility("default"))) void NewtonBodySetSleepState (const NewtonBody* const body, int state);

	__attribute__((visibility("default"))) int  NewtonBodyGetAutoSleep (const NewtonBody* const body);
	__attribute__((visibility("default"))) void NewtonBodySetAutoSleep (const NewtonBody* const body, int state);

	__attribute__((visibility("default"))) int  NewtonBodyGetFreezeState(const NewtonBody* const body);
	__attribute__((visibility("default"))) void NewtonBodySetFreezeState (const NewtonBody* const body, int state);

	__attribute__((visibility("default"))) int NewtonBodyGetGyroscopicTorque(const NewtonBody* const body);
	__attribute__((visibility("default"))) void NewtonBodySetGyroscopicTorque(const NewtonBody* const body, int state);

	__attribute__((visibility("default"))) void NewtonBodySetDestructorCallback (const NewtonBody* const body, NewtonBodyDestructor callback);
	__attribute__((visibility("default"))) NewtonBodyDestructor NewtonBodyGetDestructorCallback (const NewtonBody* const body);

	__attribute__((visibility("default"))) void  NewtonBodySetTransformCallback (const NewtonBody* const body, NewtonSetTransform callback);
	__attribute__((visibility("default"))) NewtonSetTransform NewtonBodyGetTransformCallback (const NewtonBody* const body);

	__attribute__((visibility("default"))) void  NewtonBodySetForceAndTorqueCallback (const NewtonBody* const body, NewtonApplyForceAndTorque callback);
	__attribute__((visibility("default"))) NewtonApplyForceAndTorque NewtonBodyGetForceAndTorqueCallback (const NewtonBody* const body);

	__attribute__((visibility("default"))) int NewtonBodyGetID (const NewtonBody* const body);

	__attribute__((visibility("default"))) void  NewtonBodySetUserData (const NewtonBody* const body, void* const userData);
	__attribute__((visibility("default"))) void* NewtonBodyGetUserData (const NewtonBody* const body);

	__attribute__((visibility("default"))) NewtonWorld* NewtonBodyGetWorld (const NewtonBody* const body);
	__attribute__((visibility("default"))) NewtonCollision* NewtonBodyGetCollision (const NewtonBody* const body);
	__attribute__((visibility("default"))) int NewtonBodyGetMaterialGroupID (const NewtonBody* const body);

	__attribute__((visibility("default"))) int NewtonBodyGetSerializedID(const NewtonBody* const body);
	__attribute__((visibility("default"))) int NewtonBodyGetContinuousCollisionMode (const NewtonBody* const body);
	__attribute__((visibility("default"))) int NewtonBodyGetJointRecursiveCollision (const NewtonBody* const body);

	__attribute__((visibility("default"))) void NewtonBodyGetPosition(const NewtonBody* const body, float* const pos);
	__attribute__((visibility("default"))) void NewtonBodyGetMatrix(const NewtonBody* const body, float* const matrix);
	__attribute__((visibility("default"))) void NewtonBodyGetRotation(const NewtonBody* const body, float* const rotation);
	__attribute__((visibility("default"))) void NewtonBodyGetMass (const NewtonBody* const body, float* mass, float* const Ixx, float* const Iyy, float* const Izz);
	__attribute__((visibility("default"))) void NewtonBodyGetInvMass(const NewtonBody* const body, float* const invMass, float* const invIxx, float* const invIyy, float* const invIzz);
	__attribute__((visibility("default"))) void NewtonBodyGetInertiaMatrix(const NewtonBody* const body, float* const inertiaMatrix);
	__attribute__((visibility("default"))) void NewtonBodyGetInvInertiaMatrix(const NewtonBody* const body, float* const invInertiaMatrix);
	__attribute__((visibility("default"))) void NewtonBodyGetOmega(const NewtonBody* const body, float* const vector);
	__attribute__((visibility("default"))) void NewtonBodyGetVelocity(const NewtonBody* const body, float* const vector);
	__attribute__((visibility("default"))) void NewtonBodyGetAlpha(const NewtonBody* const body, float* const vector);
	__attribute__((visibility("default"))) void NewtonBodyGetAcceleration(const NewtonBody* const body, float* const vector);
	__attribute__((visibility("default"))) void NewtonBodyGetForce(const NewtonBody* const body, float* const vector);
	__attribute__((visibility("default"))) void NewtonBodyGetTorque(const NewtonBody* const body, float* const vector);
	__attribute__((visibility("default"))) void NewtonBodyGetCentreOfMass (const NewtonBody* const body, float* const com);
	__attribute__((visibility("default"))) void NewtonBodyGetPointVelocity (const NewtonBody* const body, const float* const point, float* const velocOut);

	__attribute__((visibility("default"))) void NewtonBodyApplyImpulsePair (const NewtonBody* const body, float* const linearImpulse, float* const angularImpulse, float timestep);
	__attribute__((visibility("default"))) void NewtonBodyAddImpulse (const NewtonBody* const body, const float* const pointDeltaVeloc, const float* const pointPosit, float timestep);
	__attribute__((visibility("default"))) void NewtonBodyApplyImpulseArray (const NewtonBody* const body, int impuleCount, int strideInByte, const float* const impulseArray, const float* const pointArray, float timestep);

	__attribute__((visibility("default"))) void NewtonBodyIntegrateVelocity (const NewtonBody* const body, float timestep);

	__attribute__((visibility("default"))) float NewtonBodyGetLinearDamping (const NewtonBody* const body);
	__attribute__((visibility("default"))) void  NewtonBodyGetAngularDamping (const NewtonBody* const body, float* const vector);
	__attribute__((visibility("default"))) void  NewtonBodyGetAABB (const NewtonBody* const body, float* const p0, float* const p1);

	__attribute__((visibility("default"))) NewtonJoint* NewtonBodyGetFirstJoint (const NewtonBody* const body);
	__attribute__((visibility("default"))) NewtonJoint* NewtonBodyGetNextJoint (const NewtonBody* const body, const NewtonJoint* const joint);

	__attribute__((visibility("default"))) NewtonJoint* NewtonBodyGetFirstContactJoint (const NewtonBody* const body);
	__attribute__((visibility("default"))) NewtonJoint* NewtonBodyGetNextContactJoint (const NewtonBody* const body, const NewtonJoint* const contactJoint);
	__attribute__((visibility("default"))) NewtonJoint* NewtonBodyFindContact (const NewtonBody* const body0, const NewtonBody* const body1);

	
	
	
	
	
	__attribute__((visibility("default"))) void* NewtonContactJointGetFirstContact (const NewtonJoint* const contactJoint);
	__attribute__((visibility("default"))) void* NewtonContactJointGetNextContact (const NewtonJoint* const contactJoint, void* const contact);

	__attribute__((visibility("default"))) int NewtonContactJointGetContactCount(const NewtonJoint* const contactJoint);
	__attribute__((visibility("default"))) void NewtonContactJointRemoveContact(const NewtonJoint* const contactJoint, void* const contact);

	__attribute__((visibility("default"))) float NewtonContactJointGetClosestDistance(const NewtonJoint* const contactJoint);
	__attribute__((visibility("default"))) void NewtonContactJointResetSelftJointCollision(const NewtonJoint* const contactJoint);
	__attribute__((visibility("default"))) void NewtonContactJointResetIntraJointCollision(const NewtonJoint* const contactJoint);

	__attribute__((visibility("default"))) NewtonMaterial* NewtonContactGetMaterial (const void* const contact);

	__attribute__((visibility("default"))) NewtonCollision* NewtonContactGetCollision0 (const void* const contact);
	__attribute__((visibility("default"))) NewtonCollision* NewtonContactGetCollision1 (const void* const contact);

	__attribute__((visibility("default"))) void* NewtonContactGetCollisionID0 (const void* const contact);
	__attribute__((visibility("default"))) void* NewtonContactGetCollisionID1 (const void* const contact);


	
	
	
	
	
	__attribute__((visibility("default"))) void* NewtonJointGetUserData (const NewtonJoint* const joint);
	__attribute__((visibility("default"))) void NewtonJointSetUserData (const NewtonJoint* const joint, void* const userData);

	__attribute__((visibility("default"))) NewtonBody* NewtonJointGetBody0 (const NewtonJoint* const joint);
	__attribute__((visibility("default"))) NewtonBody* NewtonJointGetBody1 (const NewtonJoint* const joint);

	__attribute__((visibility("default"))) void NewtonJointGetInfo  (const NewtonJoint* const joint, NewtonJointRecord* const info);
	__attribute__((visibility("default"))) int NewtonJointGetCollisionState (const NewtonJoint* const joint);
	__attribute__((visibility("default"))) void NewtonJointSetCollisionState (const NewtonJoint* const joint, int state);

	__attribute__((visibility("default"))) float NewtonJointGetStiffness (const NewtonJoint* const joint);
	__attribute__((visibility("default"))) void NewtonJointSetStiffness (const NewtonJoint* const joint, float state);

	__attribute__((visibility("default"))) void NewtonDestroyJoint(const NewtonWorld* const newtonWorld, const NewtonJoint* const joint);
	__attribute__((visibility("default"))) void NewtonJointSetDestructor (const NewtonJoint* const joint, NewtonConstraintDestructor destructor);

	__attribute__((visibility("default"))) int NewtonJointIsActive (const NewtonJoint* const joint);

	
	
	
	
	
	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateMassSpringDamperSystem (const NewtonWorld* const newtonWorld, int shapeID,
																	const float* const points, int pointCount, int strideInBytes, const float* const pointMass,
																	const int* const links, int linksCount, const float* const linksSpring, const float* const linksDamper);

	__attribute__((visibility("default"))) NewtonCollision* NewtonCreateDeformableSolid(const NewtonWorld* const newtonWorld, const NewtonMesh* const mesh, int shapeID);

	__attribute__((visibility("default"))) int NewtonDeformableMeshGetParticleCount (const NewtonCollision* const deformableMesh);
	__attribute__((visibility("default"))) int NewtonDeformableMeshGetParticleStrideInBytes (const NewtonCollision* const deformableMesh);
	__attribute__((visibility("default"))) const float* NewtonDeformableMeshGetParticleArray (const NewtonCollision* const deformableMesh);


	
	
	
	
	
	__attribute__((visibility("default"))) NewtonJoint* NewtonConstraintCreateBall (const NewtonWorld* const newtonWorld, const float* pivotPoint, const NewtonBody* const childBody, const NewtonBody* const parentBody);
	__attribute__((visibility("default"))) void NewtonBallSetUserCallback (const NewtonJoint* const ball, NewtonBallCallback callback);
	__attribute__((visibility("default"))) void NewtonBallGetJointAngle (const NewtonJoint* const ball, float* angle);
	__attribute__((visibility("default"))) void NewtonBallGetJointOmega (const NewtonJoint* const ball, float* omega);
	__attribute__((visibility("default"))) void NewtonBallGetJointForce (const NewtonJoint* const ball, float* const force);
	__attribute__((visibility("default"))) void NewtonBallSetConeLimits (const NewtonJoint* const ball, const float* pin, float maxConeAngle, float maxTwistAngle);

	
	
	
	
	
	__attribute__((visibility("default"))) NewtonJoint* NewtonConstraintCreateHinge (const NewtonWorld* const newtonWorld, const float* pivotPoint, const float* pinDir, const NewtonBody* const childBody, const NewtonBody* const parentBody);
	__attribute__((visibility("default"))) void NewtonHingeSetUserCallback (const NewtonJoint* const hinge, NewtonHingeCallback callback);
	__attribute__((visibility("default"))) float NewtonHingeGetJointAngle (const NewtonJoint* const hinge);
	__attribute__((visibility("default"))) float NewtonHingeGetJointOmega (const NewtonJoint* const hinge);
	__attribute__((visibility("default"))) void NewtonHingeGetJointForce (const NewtonJoint* const hinge, float* const force);
	__attribute__((visibility("default"))) float NewtonHingeCalculateStopAlpha (const NewtonJoint* const hinge, const NewtonHingeSliderUpdateDesc* const desc, float angle);

	
	
	
	
	
	__attribute__((visibility("default"))) NewtonJoint* NewtonConstraintCreateSlider (const NewtonWorld* const newtonWorld, const float* pivotPoint, const float* pinDir, const NewtonBody* const childBody, const NewtonBody* const parentBody);
	__attribute__((visibility("default"))) void NewtonSliderSetUserCallback (const NewtonJoint* const slider, NewtonSliderCallback callback);
	__attribute__((visibility("default"))) float NewtonSliderGetJointPosit (const NewtonJoint* slider);
	__attribute__((visibility("default"))) float NewtonSliderGetJointVeloc (const NewtonJoint* slider);
	__attribute__((visibility("default"))) void NewtonSliderGetJointForce (const NewtonJoint* const slider, float* const force);
	__attribute__((visibility("default"))) float NewtonSliderCalculateStopAccel (const NewtonJoint* const slider, const NewtonHingeSliderUpdateDesc* const desc, float position);


	
	
	
	
	
	__attribute__((visibility("default"))) NewtonJoint* NewtonConstraintCreateCorkscrew (const NewtonWorld* const newtonWorld, const float* pivotPoint, const float* pinDir, const NewtonBody* const childBody, const NewtonBody* const parentBody);
	__attribute__((visibility("default"))) void NewtonCorkscrewSetUserCallback (const NewtonJoint* const corkscrew, NewtonCorkscrewCallback callback);
	__attribute__((visibility("default"))) float NewtonCorkscrewGetJointPosit (const NewtonJoint* const corkscrew);
	__attribute__((visibility("default"))) float NewtonCorkscrewGetJointAngle (const NewtonJoint* const corkscrew);
	__attribute__((visibility("default"))) float NewtonCorkscrewGetJointVeloc (const NewtonJoint* const corkscrew);
	__attribute__((visibility("default"))) float NewtonCorkscrewGetJointOmega (const NewtonJoint* const corkscrew);
	__attribute__((visibility("default"))) void NewtonCorkscrewGetJointForce (const NewtonJoint* const corkscrew, float* const force);
	__attribute__((visibility("default"))) float NewtonCorkscrewCalculateStopAlpha (const NewtonJoint* const corkscrew, const NewtonHingeSliderUpdateDesc* const desc, float angle);
	__attribute__((visibility("default"))) float NewtonCorkscrewCalculateStopAccel (const NewtonJoint* const corkscrew, const NewtonHingeSliderUpdateDesc* const desc, float position);


	
	
	
	
	
	__attribute__((visibility("default"))) NewtonJoint* NewtonConstraintCreateUniversal (const NewtonWorld* const newtonWorld, const float* pivotPoint, const float* pinDir0, const float* pinDir1, const NewtonBody* const childBody, const NewtonBody* const parentBody);
	__attribute__((visibility("default"))) void NewtonUniversalSetUserCallback (const NewtonJoint* const universal, NewtonUniversalCallback callback);
	__attribute__((visibility("default"))) float NewtonUniversalGetJointAngle0 (const NewtonJoint* const universal);
	__attribute__((visibility("default"))) float NewtonUniversalGetJointAngle1 (const NewtonJoint* const universal);
	__attribute__((visibility("default"))) float NewtonUniversalGetJointOmega0 (const NewtonJoint* const universal);
	__attribute__((visibility("default"))) float NewtonUniversalGetJointOmega1 (const NewtonJoint* const universal);
	__attribute__((visibility("default"))) void NewtonUniversalGetJointForce (const NewtonJoint* const universal, float* const force);
	__attribute__((visibility("default"))) float NewtonUniversalCalculateStopAlpha0 (const NewtonJoint* const universal, const NewtonHingeSliderUpdateDesc* const desc, float angle);
	__attribute__((visibility("default"))) float NewtonUniversalCalculateStopAlpha1 (const NewtonJoint* const universal, const NewtonHingeSliderUpdateDesc* const desc, float angle);


	
	
	
	
	
	__attribute__((visibility("default"))) NewtonJoint* NewtonConstraintCreateUpVector (const NewtonWorld* const newtonWorld, const float* pinDir, const NewtonBody* const body);
	__attribute__((visibility("default"))) void NewtonUpVectorGetPin (const NewtonJoint* const upVector, float *pin);
	__attribute__((visibility("default"))) void NewtonUpVectorSetPin (const NewtonJoint* const upVector, const float *pin);


	
	
	
	
	
	__attribute__((visibility("default"))) NewtonJoint* NewtonConstraintCreateUserJoint (const NewtonWorld* const newtonWorld, int maxDOF, NewtonUserBilateralCallback callback, const NewtonBody* const childBody, const NewtonBody* const parentBody) ;
	__attribute__((visibility("default"))) int NewtonUserJointGetSolverModel(const NewtonJoint* const joint);
	__attribute__((visibility("default"))) void NewtonUserJointSetSolverModel(const NewtonJoint* const joint, int model);
	__attribute__((visibility("default"))) void NewtonUserJointMassScale(const NewtonJoint* const joint, float scaleBody0, float scaleBody1);

	__attribute__((visibility("default"))) void NewtonUserJointSetFeedbackCollectorCallback (const NewtonJoint* const joint, NewtonUserBilateralCallback getFeedback);
	__attribute__((visibility("default"))) void NewtonUserJointAddLinearRow (const NewtonJoint* const joint, const float* const pivot0, const float* const pivot1, const float* const dir);
	__attribute__((visibility("default"))) void NewtonUserJointAddAngularRow (const NewtonJoint* const joint, float relativeAngle, const float* const dir);
	__attribute__((visibility("default"))) void NewtonUserJointAddGeneralRow (const NewtonJoint* const joint, const float* const jacobian0, const float* const jacobian1);
	__attribute__((visibility("default"))) void NewtonUserJointSetRowMinimumFriction (const NewtonJoint* const joint, float friction);
	__attribute__((visibility("default"))) void NewtonUserJointSetRowMaximumFriction (const NewtonJoint* const joint, float friction);
	__attribute__((visibility("default"))) float NewtonUserJointCalculateRowZeroAcceleration (const NewtonJoint* const joint);
	__attribute__((visibility("default"))) float NewtonUserJointGetRowAcceleration (const NewtonJoint* const joint);
	__attribute__((visibility("default"))) void NewtonUserJointGetRowJacobian(const NewtonJoint* const joint, float* const linear0, float* const angula0, float* const linear1, float* const angula1);
	__attribute__((visibility("default"))) void NewtonUserJointSetRowAcceleration (const NewtonJoint* const joint, float acceleration);
	__attribute__((visibility("default"))) void NewtonUserJointSetRowMassDependentSpringDamperAcceleration(const NewtonJoint* const joint, float spring, float damper);
	__attribute__((visibility("default"))) void NewtonUserJointSetRowMassIndependentSpringDamperAcceleration (const NewtonJoint* const joint, float rowStiffness, float spring, float damper);
	__attribute__((visibility("default"))) void NewtonUserJointSetRowStiffness (const NewtonJoint* const joint, float stiffness);
	__attribute__((visibility("default"))) int NewtonUserJoinRowsCount (const NewtonJoint* const joint);
	__attribute__((visibility("default"))) void NewtonUserJointGetGeneralRow (const NewtonJoint* const joint, int index, float* const jacobian0, float* const jacobian1);
	__attribute__((visibility("default"))) float NewtonUserJointGetRowForce (const NewtonJoint* const joint, int row);

	
	
	
	
	
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshCreate(const NewtonWorld* const newtonWorld);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshCreateFromMesh(const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshCreateFromCollision(const NewtonCollision* const collision);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshCreateTetrahedraIsoSurface(const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshCreateConvexHull (const NewtonWorld* const newtonWorld, int pointCount, const float* const vertexCloud, int strideInBytes, float tolerance);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshCreateVoronoiConvexDecomposition (const NewtonWorld* const newtonWorld, int pointCount, const float* const vertexCloud, int strideInBytes, int materialID, const float* const textureMatrix);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshCreateFromSerialization (const NewtonWorld* const newtonWorld, NewtonDeserializeCallback deserializeFunction, void* const serializeHandle);
	__attribute__((visibility("default"))) void NewtonMeshDestroy(const NewtonMesh* const mesh);

	__attribute__((visibility("default"))) void NewtonMeshSerialize (const NewtonMesh* const mesh, NewtonSerializeCallback serializeFunction, void* const serializeHandle);
	__attribute__((visibility("default"))) void NewtonMeshSaveOFF(const NewtonMesh* const mesh, const char* const filename);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshLoadOFF(const NewtonWorld* const newtonWorld, const char* const filename);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshLoadTetrahedraMesh(const NewtonWorld* const newtonWorld, const char* const filename);

	__attribute__((visibility("default"))) void NewtonMeshFlipWinding(const NewtonMesh* const mesh);

	__attribute__((visibility("default"))) void NewtonMeshApplyTransform (const NewtonMesh* const mesh, const float* const matrix);
	__attribute__((visibility("default"))) void NewtonMeshCalculateOOBB(const NewtonMesh* const mesh, float* const matrix, float* const x, float* const y, float* const z);

	__attribute__((visibility("default"))) void NewtonMeshCalculateVertexNormals(const NewtonMesh* const mesh, float angleInRadians);
	__attribute__((visibility("default"))) void NewtonMeshApplySphericalMapping(const NewtonMesh* const mesh, int material, const float* const aligmentMatrix);
	__attribute__((visibility("default"))) void NewtonMeshApplyCylindricalMapping(const NewtonMesh* const mesh, int cylinderMaterial, int capMaterial, const float* const aligmentMatrix);
	__attribute__((visibility("default"))) void NewtonMeshApplyBoxMapping(const NewtonMesh* const mesh, int frontMaterial, int sideMaterial, int topMaterial, const float* const aligmentMatrix);
	__attribute__((visibility("default"))) void NewtonMeshApplyAngleBasedMapping(const NewtonMesh* const mesh, int material, NewtonReportProgress reportPrograssCallback, void* const reportPrgressUserData, float* const aligmentMatrix);

	__attribute__((visibility("default"))) void NewtonCreateTetrahedraLinearBlendSkinWeightsChannel(const NewtonMesh* const tetrahedraMesh, NewtonMesh* const skinMesh);

	__attribute__((visibility("default"))) void NewtonMeshOptimize (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void NewtonMeshOptimizePoints (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void NewtonMeshOptimizeVertex (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) int NewtonMeshIsOpenMesh (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void NewtonMeshFixTJoints (const NewtonMesh* const mesh);

	__attribute__((visibility("default"))) void NewtonMeshPolygonize (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void NewtonMeshTriangulate (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshUnion (const NewtonMesh* const mesh, const NewtonMesh* const clipper, const float* const clipperMatrix);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshDifference (const NewtonMesh* const mesh, const NewtonMesh* const clipper, const float* const clipperMatrix);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshIntersection (const NewtonMesh* const mesh, const NewtonMesh* const clipper, const float* const clipperMatrix);
	__attribute__((visibility("default"))) void NewtonMeshClip (const NewtonMesh* const mesh, const NewtonMesh* const clipper, const float* const clipperMatrix, NewtonMesh** const topMesh, NewtonMesh** const bottomMesh);

	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshConvexMeshIntersection (const NewtonMesh* const mesh, const NewtonMesh* const convexMesh);

	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshSimplify (const NewtonMesh* const mesh, int maxVertexCount, NewtonReportProgress reportPrograssCallback, void* const reportPrgressUserData);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshApproximateConvexDecomposition (const NewtonMesh* const mesh, float maxConcavity, float backFaceDistanceFactor, int maxCount, int maxVertexPerHull, NewtonReportProgress reportProgressCallback, void* const reportProgressUserData);

	__attribute__((visibility("default"))) void NewtonRemoveUnusedVertices(const NewtonMesh* const mesh, int* const vertexRemapTable);

	__attribute__((visibility("default"))) void NewtonMeshBeginBuild(const NewtonMesh* const mesh);
		__attribute__((visibility("default"))) void NewtonMeshBeginFace(const NewtonMesh* const mesh);
			__attribute__((visibility("default"))) void NewtonMeshAddPoint(const NewtonMesh* const mesh, double x, double y, double z);
			__attribute__((visibility("default"))) void NewtonMeshAddLayer(const NewtonMesh* const mesh, int layerIndex);
			__attribute__((visibility("default"))) void NewtonMeshAddMaterial(const NewtonMesh* const mesh, int materialIndex);
			__attribute__((visibility("default"))) void NewtonMeshAddNormal(const NewtonMesh* const mesh, float x, float y, float z);
			__attribute__((visibility("default"))) void NewtonMeshAddBinormal(const NewtonMesh* const mesh, float x, float y, float z);
			__attribute__((visibility("default"))) void NewtonMeshAddUV0(const NewtonMesh* const mesh, float u, float v);
			__attribute__((visibility("default"))) void NewtonMeshAddUV1(const NewtonMesh* const mesh, float u, float v);
			__attribute__((visibility("default"))) void NewtonMeshAddVertexColor(const NewtonMesh* const mesh, float r, float g, float b, float a);
		__attribute__((visibility("default"))) void NewtonMeshEndFace(const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void NewtonMeshEndBuild(const NewtonMesh* const mesh);

	__attribute__((visibility("default"))) void NewtonMeshClearVertexFormat (NewtonMeshVertexFormat* const format);
	__attribute__((visibility("default"))) void NewtonMeshBuildFromVertexListIndexList (const NewtonMesh* const mesh, const NewtonMeshVertexFormat* const format);

	__attribute__((visibility("default"))) int NewtonMeshGetPointCount (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) const int* NewtonMeshGetIndexToVertexMap(const NewtonMesh* const mesh);

	__attribute__((visibility("default"))) void NewtonMeshGetVertexDoubleChannel (const NewtonMesh* const mesh, int vertexStrideInByte, double* const outBuffer);
	__attribute__((visibility("default"))) void NewtonMeshGetVertexChannel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);
	__attribute__((visibility("default"))) void NewtonMeshGetNormalChannel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);
	__attribute__((visibility("default"))) void NewtonMeshGetBinormalChannel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);
	__attribute__((visibility("default"))) void NewtonMeshGetUV0Channel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);
	__attribute__((visibility("default"))) void NewtonMeshGetUV1Channel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);
	__attribute__((visibility("default"))) void NewtonMeshGetVertexColorChannel (const NewtonMesh* const mesh, int vertexStrideInByte, float* const outBuffer);

	__attribute__((visibility("default"))) int NewtonMeshHasNormalChannel(const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) int NewtonMeshHasBinormalChannel(const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) int NewtonMeshHasUV0Channel(const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) int NewtonMeshHasUV1Channel(const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) int NewtonMeshHasVertexColorChannel(const NewtonMesh* const mesh);

	__attribute__((visibility("default"))) void* NewtonMeshBeginHandle (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void NewtonMeshEndHandle (const NewtonMesh* const mesh, void* const handle);
	__attribute__((visibility("default"))) int NewtonMeshFirstMaterial (const NewtonMesh* const mesh, void* const handle);
	__attribute__((visibility("default"))) int NewtonMeshNextMaterial (const NewtonMesh* const mesh, void* const handle, int materialId);
	__attribute__((visibility("default"))) int NewtonMeshMaterialGetMaterial (const NewtonMesh* const mesh, void* const handle, int materialId);
	__attribute__((visibility("default"))) int NewtonMeshMaterialGetIndexCount (const NewtonMesh* const mesh, void* const handle, int materialId);
	__attribute__((visibility("default"))) void NewtonMeshMaterialGetIndexStream (const NewtonMesh* const mesh, void* const handle, int materialId, int* const index);
	__attribute__((visibility("default"))) void NewtonMeshMaterialGetIndexStreamShort (const NewtonMesh* const mesh, void* const handle, int materialId, short int* const index);

	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshCreateFirstSingleSegment (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshCreateNextSingleSegment (const NewtonMesh* const mesh, const NewtonMesh* const segment);

	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshCreateFirstLayer (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) NewtonMesh* NewtonMeshCreateNextLayer (const NewtonMesh* const mesh, const NewtonMesh* const segment);

	__attribute__((visibility("default"))) int NewtonMeshGetTotalFaceCount (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) int NewtonMeshGetTotalIndexCount (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void NewtonMeshGetFaces (const NewtonMesh* const mesh, int* const faceIndexCount, int* const faceMaterial, void** const faceIndices);

	__attribute__((visibility("default"))) int NewtonMeshGetVertexCount (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) int NewtonMeshGetVertexStrideInByte (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) const double* NewtonMeshGetVertexArray (const NewtonMesh* const mesh);

	__attribute__((visibility("default"))) int NewtonMeshGetVertexBaseCount(const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void NewtonMeshSetVertexBaseCount(const NewtonMesh* const mesh, int baseCount);

	__attribute__((visibility("default"))) void* NewtonMeshGetFirstVertex (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void* NewtonMeshGetNextVertex (const NewtonMesh* const mesh, const void* const vertex);
	__attribute__((visibility("default"))) int NewtonMeshGetVertexIndex (const NewtonMesh* const mesh, const void* const vertex);

	__attribute__((visibility("default"))) void* NewtonMeshGetFirstPoint (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void* NewtonMeshGetNextPoint (const NewtonMesh* const mesh, const void* const point);
	__attribute__((visibility("default"))) int NewtonMeshGetPointIndex (const NewtonMesh* const mesh, const void* const point);
	__attribute__((visibility("default"))) int NewtonMeshGetVertexIndexFromPoint (const NewtonMesh* const mesh, const void* const point);

	__attribute__((visibility("default"))) void* NewtonMeshGetFirstEdge (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void* NewtonMeshGetNextEdge (const NewtonMesh* const mesh, const void* const edge);
	__attribute__((visibility("default"))) void NewtonMeshGetEdgeIndices (const NewtonMesh* const mesh, const void* const edge, int* const v0, int* const v1);
	

	__attribute__((visibility("default"))) void* NewtonMeshGetFirstFace (const NewtonMesh* const mesh);
	__attribute__((visibility("default"))) void* NewtonMeshGetNextFace (const NewtonMesh* const mesh, const void* const face);
	__attribute__((visibility("default"))) int NewtonMeshIsFaceOpen (const NewtonMesh* const mesh, const void* const face);
	__attribute__((visibility("default"))) int NewtonMeshGetFaceMaterial (const NewtonMesh* const mesh, const void* const face);
	__attribute__((visibility("default"))) int NewtonMeshGetFaceIndexCount (const NewtonMesh* const mesh, const void* const face);
	__attribute__((visibility("default"))) void NewtonMeshGetFaceIndices (const NewtonMesh* const mesh, const void* const face, int* const indices);
	__attribute__((visibility("default"))) void NewtonMeshGetFacePointIndices (const NewtonMesh* const mesh, const void* const face, int* const indices);
	__attribute__((visibility("default"))) void NewtonMeshCalculateFaceNormal (const NewtonMesh* const mesh, const void* const face, double* const normal);

	__attribute__((visibility("default"))) void NewtonMeshSetFaceMaterial (const NewtonMesh* const mesh, const void* const face, int matId);








