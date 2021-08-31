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

// BlueprintGeneratedClass AssetObjectControl.AssetObjectControl_C
// 0x0000
class AAssetObjectControl_C : public ABuildings_Base_Surv_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AssetObjectControl.AssetObjectControl_C");
		return ptr;
	}



	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void ReceiveBeginPlay();
	void Blink_Red();
	void Blink_Green();
	void Blink_Yellow();
	void Action();
	void OnUpdate_Event_1();
	void hover();
	void Unhover();
	void OnAudioFinished_Event_1();
	void ExecuteUbergraph_AssetObjectControl();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
