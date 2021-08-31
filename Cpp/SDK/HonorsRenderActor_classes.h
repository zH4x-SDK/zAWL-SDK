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

// BlueprintGeneratedClass HonorsRenderActor.HonorsRenderActor_C
// 0x0000
class AHonorsRenderActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HonorsRenderActor.HonorsRenderActor_C");
		return ptr;
	}



	void RotateActor();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void AddMedal__FinishedFunc();
	void AddMedal__UpdateFunc();
	void AddMedal__NewTrack_2__EventFunc();
	void SetActor();
	void Show();
	void ExecuteUbergraph_HonorsRenderActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
