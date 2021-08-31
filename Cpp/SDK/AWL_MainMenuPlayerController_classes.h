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

// BlueprintGeneratedClass AWL_MainMenuPlayerController.AWL_MainMenuPlayerController_C
// 0x0000
class AAWL_MainMenuPlayerController_C : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_MainMenuPlayerController.AWL_MainMenuPlayerController_C");
		return ptr;
	}



	void getInformationFromJson();
	void SortingRooms();
	void InpActEvt_Multiply_K2Node_InputKeyEvent_1();
	void ReceiveBeginPlay();
	void UpdateRoomInformation();
	void GET_COMPLITE_EVENT_Event_1();
	void GET_FAIL_Event_1();
	void ExecuteUbergraph_AWL_MainMenuPlayerController();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
