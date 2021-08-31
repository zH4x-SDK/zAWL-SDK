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

// BlueprintGeneratedClass Fow_AIController.Fow_AIController_C
// 0x0000
class AFow_AIController_C : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Fow_AIController.Fow_AIController_C");
		return ptr;
	}



	void OnFail_EC73DAE14142DCD3D694D1861C0867EC();
	void OnSuccess_EC73DAE14142DCD3D694D1861C0867EC();
	void StopMove();
	void MoveTo();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Fow_AIController();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
