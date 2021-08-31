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

// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class MagicLeapAR_ELuminARLineTraceChannel : uint8_t
{
	ELuminARLineTraceChannel__None = 0,
	ELuminARLineTraceChannel__FeaturePoint = 1,
	ELuminARLineTraceChannel__InfinitePlane = 2,
	ELuminARLineTraceChannel__PlaneUsingExtent = 3,
	ELuminARLineTraceChannel__PlaneUsingBoundaryPolygon = 4,
	ELuminARLineTraceChannel__FeaturePointWithSurfaceNormal = 5,
	ELuminARLineTraceChannel__ELuminARLineTraceChannel_MAX = 6,

};

// Enum MagicLeapAR.ELuminARTrackingState
enum class MagicLeapAR_ELuminARTrackingState : uint8_t
{
	ELuminARTrackingState__Tracking = 0,
	ELuminARTrackingState__NotTracking = 1,
	ELuminARTrackingState__StoppedTracking = 2,
	ELuminARTrackingState__ELuminARTrackingState_MAX = 3,

};

// Enum MagicLeapAR.ELuminARFunctionStatus
enum class MagicLeapAR_ELuminARFunctionStatus : uint8_t
{
	ELuminARFunctionStatus__Success = 0,
	ELuminARFunctionStatus__Fatal  = 1,
	ELuminARFunctionStatus__SessionPaused = 2,
	ELuminARFunctionStatus__NotTracking = 3,
	ELuminARFunctionStatus__ResourceExhausted = 4,
	ELuminARFunctionStatus__NotAvailable = 5,
	ELuminARFunctionStatus__InvalidType = 6,
	ELuminARFunctionStatus__Unknown = 7,
	ELuminARFunctionStatus__ELuminARFunctionStatus_MAX = 8,

};

// Enum MagicLeapAR.ELuminARAvailability
enum class MagicLeapAR_ELuminARAvailability : uint8_t
{
	ELuminARAvailability__UnknownError = 0,
	ELuminARAvailability__SupportedInstalled = 1,
	ELuminARAvailability__ELuminARAvailability_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapAR.LuminARLightEstimate
// 0x0000
struct FLuminARLightEstimate
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
