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

// BlueprintGeneratedClass Cv2_PassagerPawn.Cv2_PassagerPawn_C
// 0x0000
class ACv2_PassagerPawn_C : public APawn
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_PassagerPawn.Cv2_PassagerPawn_C");
		return ptr;
	}



	void InpActEvt_Use_K2Node_InputActionEvent_1();
	void ExitVehicle();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_124();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_116();
	void ExitVehicleServerOnly();
	void ReceivePossessed();
	void ClientSetPhysics();
	void ExecuteUbergraph_Cv2_PassagerPawn();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
