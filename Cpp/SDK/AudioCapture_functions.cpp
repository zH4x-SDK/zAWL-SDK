// Name: AWL, Version: 4.24.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AudioCapture.AudioCapture.StopCapturingAudio
// ()
void UAudioCapture::StopCapturingAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StopCapturingAudio");

	UAudioCapture_StopCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioCapture.AudioCapture.StartCapturingAudio
// ()
void UAudioCapture::StartCapturingAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StartCapturingAudio");

	UAudioCapture_StartCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioCapture.AudioCapture.IsCapturingAudio
// ()
void UAudioCapture::IsCapturingAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.IsCapturingAudio");

	UAudioCapture_IsCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
// ()
void UAudioCapture::GetAudioCaptureDeviceInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo");

	UAudioCapture_GetAudioCaptureDeviceInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
// ()
void UAudioCaptureFunctionLibrary::CreateAudioCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture");

	UAudioCaptureFunctionLibrary_CreateAudioCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
