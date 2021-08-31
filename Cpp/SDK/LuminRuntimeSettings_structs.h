﻿#pragma once

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

// Enum LuminRuntimeSettings.ELuminPrivilege
enum class LuminRuntimeSettings_ELuminPrivilege : uint8_t
{
	ELuminPrivilege__Invalid       = 0,
	ELuminPrivilege__BatteryInfo   = 1,
	ELuminPrivilege__CameraCapture = 2,
	ELuminPrivilege__WorldReconstruction = 3,
	ELuminPrivilege__InAppPurchase = 4,
	ELuminPrivilege__AudioCaptureMic = 5,
	ELuminPrivilege__DrmCertificates = 6,
	ELuminPrivilege__Occlusion     = 7,
	ELuminPrivilege__LowLatencyLightwear = 8,
	ELuminPrivilege__Internet      = 9,
	ELuminPrivilege__IdentityRead  = 10,
	ELuminPrivilege__BackgroundDownload = 11,
	ELuminPrivilege__BackgroundUpload = 12,
	ELuminPrivilege__MediaDrm      = 13,
	ELuminPrivilege__Media         = 14,
	ELuminPrivilege__MediaMetadata = 15,
	ELuminPrivilege__PowerInfo     = 16,
	ELuminPrivilege__LocalAreaNetwork = 17,
	ELuminPrivilege__VoiceInput    = 18,
	ELuminPrivilege__Documents     = 19,
	ELuminPrivilege__ConnectBackgroundMusicService = 20,
	ELuminPrivilege__RegisterBackgroundMusicService = 21,
	ELuminPrivilege__PwFoundObjRead = 22,
	ELuminPrivilege__NormalNotificationsUsage = 23,
	ELuminPrivilege__MusicService  = 24,
	ELuminPrivilege__ControllerPose = 25,
	ELuminPrivilege__ScreensProvider = 26,
	ELuminPrivilege__GesturesSubscribe = 27,
	ELuminPrivilege__GesturesConfig = 28,
	ELuminPrivilege__AddressBookRead = 29,
	ELuminPrivilege__AddressBookWrite = 30,
	ELuminPrivilege__CoarseLocation = 31,
	ELuminPrivilege__HandMesh      = 32,
	ELuminPrivilege__WifiStatusRead = 33,
	ELuminPrivilege__ELuminPrivilege_MAX = 34,

};

// Enum LuminRuntimeSettings.ELuminFrameTimingHint
enum class LuminRuntimeSettings_ELuminFrameTimingHint : uint8_t
{
	ELuminFrameTimingHint__Unspecified = 0,
	ELuminFrameTimingHint__Maximum = 1,
	ELuminFrameTimingHint__FPS     = 2,
	ELuminFrameTimingHint__FPS01   = 3,
	ELuminFrameTimingHint__ELuminFrameTimingHint_MAX = 4,

};

// Enum LuminRuntimeSettings.ELuminComponentType
enum class LuminRuntimeSettings_ELuminComponentType : uint8_t
{
	ELuminComponentType__Universe  = 0,
	ELuminComponentType__Fullscreen = 1,
	ELuminComponentType__SearchProvider = 2,
	ELuminComponentType__MusicService = 3,
	ELuminComponentType__Screens   = 4,
	ELuminComponentType__ScreensImmersive = 5,
	ELuminComponentType__Console   = 6,
	ELuminComponentType__SystemUI  = 7,
	ELuminComponentType__ELuminComponentType_MAX = 8,

};

// Enum LuminRuntimeSettings.ELuminComponentSubElementType
enum class LuminRuntimeSettings_ELuminComponentSubElementType : uint8_t
{
	ELuminComponentSubElementType__FileExtension = 0,
	ELuminComponentSubElementType__MimeType = 1,
	ELuminComponentSubElementType__Mode = 2,
	ELuminComponentSubElementType__MusicAttribute = 3,
	ELuminComponentSubElementType__Schema = 4,
	ELuminComponentSubElementType__ELuminComponentSubElementType_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LuminRuntimeSettings.LuminComponentElement
// 0x0000
struct FLuminComponentElement
{

};

// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
// 0x0000
struct FLuminComponentSubElement
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
