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

// Class AnimGraphRuntime.AnimCustomInstance
// 0x0000
class UAnimCustomInstance : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimGraphRuntime.AnimCustomInstance");
		return ptr;
	}



};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0000
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		return ptr;
	}



};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0000
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		return ptr;
	}



};

// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000
class UAnimSequencerInstance : public UAnimCustomInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}



};

// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		return ptr;
	}



	void K2_TwoBoneIK();
	void K2_StartProfilingTimer();
	void K2_MakePerlinNoiseVectorAndRemap();
	void K2_MakePerlinNoiseAndRemap();
	void K2_LookAt();
	void K2_EndProfilingTimer();
	void K2_DistanceBetweenTwoSocketsAndMapRange();
	void K2_DirectionBetweenSockets();
	void K2_CalculateVelocityFromSockets();
	void K2_CalculateVelocityFromPositionHistory();
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0000
class UPlayMontageCallbackProxy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		return ptr;
	}



	void OnNotifyEndReceived();
	void OnNotifyBeginReceived();
	void OnMontageEnded();
	void OnMontageBlendingOut();
	void CreateProxyObjectForPlayMontage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
