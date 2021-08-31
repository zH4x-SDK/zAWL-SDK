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

// BlueprintGeneratedClass SoundController.SoundController_C
// 0x0000
class ASoundController_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SoundController.SoundController_C");
		return ptr;
	}



	void GetBots();
	void Volume__FinishedFunc();
	void Volume__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void PlayMusic();
	void BotsSpeak();
	void Is_Danger();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SoundController();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
