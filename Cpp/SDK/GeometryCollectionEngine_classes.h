#pragma once

// Name: AWL, Version: 4.24.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GeometryCollectionEngine.ChaosDestructionListener
// 0x0000
class UChaosDestructionListener : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.ChaosDestructionListener");
		return ptr;
	}



	void SortTrailingEvents();
	void SortCollisionEvents();
	void SortBreakingEvents();
	void SetTrailingEventRequestSettings();
	void SetTrailingEventEnabled();
	void SetCollisionEventRequestSettings();
	void SetCollisionEventEnabled();
	void SetBreakingEventRequestSettings();
	void SetBreakingEventEnabled();
	void RemoveGeometryCollectionActor();
	void RemoveChaosSolverActor();
	void IsEventListening();
	void AddGeometryCollectionActor();
	void AddChaosSolverActor();
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x0000
class AGeometryCollectionActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionActor");
		return ptr;
	}



	void RaycastSingle();
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x0000
class UGeometryCollectionCache : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionCache");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0x0000
class UGeometryCollectionComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionComponent");
		return ptr;
	}



	void SetNotifyBreaks();
	void ReceivePhysicsCollision();
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature();
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature();
	void ApplyPhysicsField();
	void ApplyKinematicField();
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x0000
class AGeometryCollectionDebugDrawActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0x0000
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollection
// 0x0000
class UGeometryCollection : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollection");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x0000
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
		return ptr;
	}



};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// 0x0000
class USkeletalMeshSimulationComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.SkeletalMeshSimulationComponent");
		return ptr;
	}



	void ReceivePhysicsCollision();
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// 0x0000
class UStaticMeshSimulationComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.StaticMeshSimulationComponent");
		return ptr;
	}



	void ReceivePhysicsCollision();
	void ForceRecreatePhysicsState();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
