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

// Enum InteractiveToolsFramework.EInputCaptureState
enum class InteractiveToolsFramework_EInputCaptureState : uint8_t
{
	EInputCaptureState__Begin      = 0,
	EInputCaptureState__Continue   = 1,
	EInputCaptureState__End        = 2,
	EInputCaptureState__Ignore     = 3,
	EInputCaptureState__EInputCaptureState_MAX = 4,

};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class InteractiveToolsFramework_EInputCaptureRequestType : uint8_t
{
	EInputCaptureRequestType__Begin = 0,
	EInputCaptureRequestType__Ignore = 1,
	EInputCaptureRequestType__EInputCaptureRequestType_MAX = 2,

};

// Enum InteractiveToolsFramework.EInputCaptureSide
enum class InteractiveToolsFramework_EInputCaptureSide : uint8_t
{
	EInputCaptureSide__None        = 0,
	EInputCaptureSide__Left        = 1,
	EInputCaptureSide__Right       = 2,
	EInputCaptureSide__Both        = 3,
	EInputCaptureSide__Any         = 4,
	EInputCaptureSide__EInputCaptureSide_MAX = 5,

};

// Enum InteractiveToolsFramework.EInputDevices
enum class InteractiveToolsFramework_EInputDevices : uint8_t
{
	EInputDevices__None            = 0,
	EInputDevices__Keyboard        = 1,
	EInputDevices__Mouse           = 2,
	EInputDevices__Gamepad         = 3,
	EInputDevices__OculusTouch     = 4,
	EInputDevices__HTCViveWands    = 5,
	EInputDevices__AnySpatialDevice = 6,
	EInputDevices__TabletFingers   = 7,
	EInputDevices__EInputDevices_MAX = 8,

};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class InteractiveToolsFramework_ETransformGizmoSubElements : uint8_t
{
	ETransformGizmoSubElements__None = 0,
	ETransformGizmoSubElements__TranslateAxisX = 1,
	ETransformGizmoSubElements__TranslateAxisY = 2,
	ETransformGizmoSubElements__TranslateAxisZ = 3,
	ETransformGizmoSubElements__TranslateAllAxes = 4,
	ETransformGizmoSubElements__TranslatePlaneXY = 5,
	ETransformGizmoSubElements__TranslatePlaneXZ = 6,
	ETransformGizmoSubElements__TranslatePlaneYZ = 7,
	ETransformGizmoSubElements__TranslateAllPlanes = 8,
	ETransformGizmoSubElements__RotateAxisX = 9,
	ETransformGizmoSubElements__RotateAxisY = 10,
	ETransformGizmoSubElements__RotateAxisZ = 11,
	ETransformGizmoSubElements__RotateAllAxes = 12,
	ETransformGizmoSubElements__StanedardTranslateRotate = 13,
	ETransformGizmoSubElements__ETransformGizmoSubElements_MAX = 14,

};

// Enum InteractiveToolsFramework.EToolSide
enum class InteractiveToolsFramework_EToolSide : uint8_t
{
	EToolSide__Left                = 0,
	EToolSide__Mouse               = 1,
	EToolSide__Right               = 2,
	EToolSide__EToolSide_MAX       = 3,

};

// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class InteractiveToolsFramework_ESelectedObjectsModificationType : uint8_t
{
	ESelectedObjectsModificationType__Replace = 0,
	ESelectedObjectsModificationType__Add = 1,
	ESelectedObjectsModificationType__Remove = 2,
	ESelectedObjectsModificationType__Clear = 3,
	ESelectedObjectsModificationType__ESelectedObjectsModificationType_MAX = 4,

};

// Enum InteractiveToolsFramework.EToolMessageLevel
enum class InteractiveToolsFramework_EToolMessageLevel : uint8_t
{
	EToolMessageLevel__Internal    = 0,
	EToolMessageLevel__UserMessage = 1,
	EToolMessageLevel__UserNotification = 2,
	EToolMessageLevel__UserWarning = 3,
	EToolMessageLevel__UserError   = 4,
	EToolMessageLevel__EToolMessageLevel_MAX = 5,

};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class InteractiveToolsFramework_EToolContextCoordinateSystem : uint8_t
{
	EToolContextCoordinateSystem__World = 0,
	EToolContextCoordinateSystem__Local = 1,
	EToolContextCoordinateSystem__EToolContextCoordinateSystem_MAX = 2,

};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class InteractiveToolsFramework_EStandardToolContextMaterials : uint8_t
{
	EStandardToolContextMaterials__VertexColorMaterial = 0,
	EStandardToolContextMaterials__EStandardToolContextMaterials_MAX = 1,

};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class InteractiveToolsFramework_ESceneSnapQueryTargetType : uint8_t
{
	ESceneSnapQueryTargetType__None = 0,
	ESceneSnapQueryTargetType__MeshVertex = 1,
	ESceneSnapQueryTargetType__MeshEdge = 2,
	ESceneSnapQueryTargetType__All = 3,
	ESceneSnapQueryTargetType__ESceneSnapQueryTargetType_MAX = 4,

};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class InteractiveToolsFramework_ESceneSnapQueryType : uint8_t
{
	ESceneSnapQueryType__Position  = 0,
	ESceneSnapQueryType__ESceneSnapQueryType_MAX = 1,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// 0x0000
struct FBehaviorInfo
{

};

// ScriptStruct InteractiveToolsFramework.InputRayHit
// 0x0000
struct FInputRayHit
{

};

// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// 0x0000
struct FActiveGizmo
{

};

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// 0x0000
struct FGizmoFloatParameterChange
{

};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// 0x0000
struct FGizmoVec2ParameterChange
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
