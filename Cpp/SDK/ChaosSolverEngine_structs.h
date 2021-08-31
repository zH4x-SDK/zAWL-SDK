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

// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class ChaosSolverEngine_EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	EClusterConnectionTypeEnum__Chaos_None = 4,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max = 5,
	EClusterConnectionTypeEnum__Chaos_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// 0x0000
struct FChaosPhysicsCollisionInfo
{

};

// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// 0x0000
struct FChaosBreakEvent
{

};

// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// 0x0000
struct FChaosHandlerSet
{

};

// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// 0x0000
struct FBreakEventCallbackWrapper
{

};

// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// 0x0000
struct FChaosDebugSubstepControl
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
