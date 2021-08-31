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
// Enums
//---------------------------------------------------------------------------

// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class GeometryCollectionEngine_EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone = 0,
	EChaosBreakingSortMethod__SortByHighestMass = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed = 2,
	EChaosBreakingSortMethod__SortByNearestFirst = 3,
	EChaosBreakingSortMethod__Count = 4,
	EChaosBreakingSortMethod__EChaosBreakingSortMethod_MAX = 5,

};

// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class GeometryCollectionEngine_EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone = 0,
	EChaosCollisionSortMethod__SortByHighestMass = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse = 3,
	EChaosCollisionSortMethod__SortByNearestFirst = 4,
	EChaosCollisionSortMethod__Count = 5,
	EChaosCollisionSortMethod__EChaosCollisionSortMethod_MAX = 6,

};

// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class GeometryCollectionEngine_EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone = 0,
	EChaosTrailingSortMethod__SortByHighestMass = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed = 2,
	EChaosTrailingSortMethod__SortByNearestFirst = 3,
	EChaosTrailingSortMethod__Count = 4,
	EChaosTrailingSortMethod__EChaosTrailingSortMethod_MAX = 5,

};

// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry__EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,

};

// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class GeometryCollectionEngine_ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform = 0,
	ECollectionGroupEnum__Chaos_Max = 1,

};

// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class GeometryCollectionEngine_ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active = 0,
	ECollectionAttributeEnum__Chaos_DynamicState = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup = 2,
	ECollectionAttributeEnum__Chaos_Max = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// 0x0000
struct FGeomComponentCacheParameters
{

};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// 0x0000
struct FChaosCollisionEventData
{

};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// 0x0000
struct FChaosBreakingEventData
{

};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// 0x0000
struct FChaosTrailingEventData
{

};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// 0x0000
struct FChaosBreakingEventRequestSettings
{

};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// 0x0000
struct FChaosCollisionEventRequestSettings
{

};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// 0x0000
struct FChaosTrailingEventRequestSettings
{

};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// 0x0000
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{

};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// 0x0000
struct FGeometryCollectionDebugDrawWarningMessage
{

};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// 0x0000
struct FGeometryCollectionSizeSpecificData
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
