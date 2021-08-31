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

// Class AudioCapture.AudioCapture
// 0x0000
class UAudioCapture : public UAudioGenerator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioCapture.AudioCapture");
		return ptr;
	}



	void StopCapturingAudio();
	void StartCapturingAudio();
	void IsCapturingAudio();
	void GetAudioCaptureDeviceInfo();
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// 0x0000
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioCapture.AudioCaptureFunctionLibrary");
		return ptr;
	}



	void CreateAudioCapture();
};

// Class AudioCapture.AudioCaptureComponent
// 0x0000
class UAudioCaptureComponent : public USynthComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioCapture.AudioCaptureComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
