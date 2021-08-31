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

// BlueprintGeneratedClass TutorialController.TutorialController_C
// 0x0000
class UTutorialController_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TutorialController.TutorialController_C");
		return ptr;
	}



	void CheckTutorWasShown();
	void EnableTutor();
	void DisableTutor();
	void CompileCurrentTutor();
	void PauseTutor();
	void ShowTutor();
	void LoadState();
	void SaveState();
	void ReceiveBeginPlay();
	void StartTutorial();
	void ExecuteUbergraph_TutorialController();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
