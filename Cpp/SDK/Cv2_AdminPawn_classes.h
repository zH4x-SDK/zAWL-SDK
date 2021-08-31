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

// BlueprintGeneratedClass Cv2_AdminPawn.Cv2_AdminPawn_C
// 0x0000
class ACv2_AdminPawn_C : public APawn
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_AdminPawn.Cv2_AdminPawn_C");
		return ptr;
	}



	void InpActEvt_Fire_K2Node_InputActionEvent_2();
	void InpActEvt_Fire_K2Node_InputActionEvent_1();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_124();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_116();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void RightButton();
	void LeftButton();
	void CheckArrayPlayers();
	void SetActorLocationServer();
	void BanPlayerAP();
	void KickPlayerAP();
	void AddResources();
	void CLIENT_ShowPlayerInGUI();
	void SERVER_ShowPlayer();
	void CLIENT_ShowAdminPanel();
	void SetPawnLocationServer();
	void ExecuteUbergraph_Cv2_AdminPawn();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
