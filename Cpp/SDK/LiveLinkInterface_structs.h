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

// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class LiveLinkInterface_ELiveLinkCameraProjectionMode : uint8_t
{
	ELiveLinkCameraProjectionMode__Perspective = 0,
	ELiveLinkCameraProjectionMode__Orthographic = 1,
	ELiveLinkCameraProjectionMode__ELiveLinkCameraProjectionMode_MAX = 2,

};

// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class LiveLinkInterface_ELiveLinkSourceMode : uint8_t
{
	ELiveLinkSourceMode__Latest    = 0,
	ELiveLinkSourceMode__EngineTime = 1,
	ELiveLinkSourceMode__Timecode  = 2,
	ELiveLinkSourceMode__ELiveLinkSourceMode_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// 0x0000
struct FLiveLinkSourceHandle
{

};

// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// 0x0000
struct FLiveLinkBaseBlueprintData
{

};

// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// 0x0000
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTransform
// 0x0000
struct FLiveLinkTransform
{

};

// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// 0x0000
struct FCachedSubjectFrame
{

};

// ScriptStruct LiveLinkInterface.SubjectMetadata
// 0x0000
struct FSubjectMetadata
{

};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// 0x0000
struct FLiveLinkBaseFrameData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// 0x0000
struct FLiveLinkMetaData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// 0x0000
struct FLiveLinkWorldTime
{

};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// 0x0000
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// 0x0000
struct FLiveLinkBaseStaticData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// 0x0000
struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// 0x0000
struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// 0x0000
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// 0x0000
struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// 0x0000
struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// 0x0000
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// 0x0000
struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// 0x0000
struct FLiveLinkCurveConversionSettings
{

};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// 0x0000
struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// 0x0000
struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// 0x0000
struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// 0x0000
struct FLiveLinkSubjectPreset
{

};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// 0x0000
struct FLiveLinkSubjectKey
{

};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// 0x0000
struct FLiveLinkSubjectName
{

};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// 0x0000
struct FLiveLinkSourcePreset
{

};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// 0x0000
struct FLiveLinkRefSkeleton
{

};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// 0x0000
struct FLiveLinkSubjectRepresentation
{

};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// 0x0000
struct FLiveLinkInterpolationSettings
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// 0x0000
struct FLiveLinkTimeSynchronizationSettings
{

};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// 0x0000
struct FLiveLinkSourceDebugInfo
{

};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// 0x0000
struct FLiveLinkSourceBufferManagementSettings
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// 0x0000
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// 0x0000
struct FLiveLinkFrameData
{

};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// 0x0000
struct FLiveLinkCurveElement
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// 0x0000
struct FLiveLinkTimeCode_Base_DEPRECATED
{

};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// 0x0000
struct FLiveLinkFrameRate : public FFrameRate
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// 0x0000
struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTime
// 0x0000
struct FLiveLinkTime
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
