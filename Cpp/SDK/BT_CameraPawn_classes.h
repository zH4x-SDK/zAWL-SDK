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

// BlueprintGeneratedClass BT_CameraPawn.BT_CameraPawn_C
// 0x0000
class ABT_CameraPawn_C : public APawn
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BT_CameraPawn.BT_CameraPawn_C");
		return ptr;
	}



	void InpActEvt_Delete_K2Node_InputKeyEvent_5();
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_4();
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_3();
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_2();
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_1();
	void ReceiveTick();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_116();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_124();
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_32();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_64();
	void DeleteDynamicCamera();
	void InpAxisEvt_MoveBack_K2Node_InputAxisEvent_1();
	void InpAxisEvt_MoveLeft_K2Node_InputAxisEvent_2();
	void ExecuteUbergraph_BT_CameraPawn();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
