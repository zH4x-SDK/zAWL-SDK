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

// BlueprintGeneratedClass PLACE_ACTOR.PLACE_ACTOR_C
// 0x0000
class APLACE_ACTOR_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PLACE_ACTOR.PLACE_ACTOR_C");
		return ptr;
	}



	void SetCaptured();
	void StopCapture();
	void StartCapture();
	void Stop();
	void Start();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void Anim();
	void Draw();
	void Ticker();
	void SetCapturable();
	void ExecuteUbergraph_PLACE_ACTOR();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
