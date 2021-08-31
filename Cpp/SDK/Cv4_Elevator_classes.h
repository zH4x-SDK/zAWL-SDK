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

// BlueprintGeneratedClass Cv4_Elevator.Cv4_Elevator_C
// 0x0000
class ACv4_Elevator_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv4_Elevator.Cv4_Elevator_C");
		return ptr;
	}



	void GoMove();
	void Vizov();
	void OnRep_isOpen();
	void Init();
	void ReceiveBeginPlay();
	void ReceiveTick();
	void Init2();
	void ExecuteUbergraph_Cv4_Elevator();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
