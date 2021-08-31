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

// Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
enum class MagicLeapPlanes_EMagicLeapPlaneQueryFlags : uint8_t
{
	EMagicLeapPlaneQueryFlags__Vertical = 0,
	EMagicLeapPlaneQueryFlags__Horizontal = 1,
	EMagicLeapPlaneQueryFlags__Arbitrary = 2,
	EMagicLeapPlaneQueryFlags__OrientToGravity = 3,
	EMagicLeapPlaneQueryFlags__PreferInner = 4,
	EMagicLeapPlaneQueryFlags__Ceiling = 5,
	EMagicLeapPlaneQueryFlags__Floor = 6,
	EMagicLeapPlaneQueryFlags__Wall = 7,
	EMagicLeapPlaneQueryFlags__Polygons = 8,
	EMagicLeapPlaneQueryFlags__EMagicLeapPlaneQueryFlags_MAX = 9,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
// 0x0000
struct FMagicLeapPlaneBoundaries
{

};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
// 0x0000
struct FMagicLeapPlaneBoundary
{

};

// ScriptStruct MagicLeapPlanes.MagicLeapPolygon
// 0x0000
struct FMagicLeapPolygon
{

};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
// 0x0000
struct FMagicLeapPlaneResult
{

};

// ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
// 0x0000
struct FMagicLeapPlanesQuery
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
