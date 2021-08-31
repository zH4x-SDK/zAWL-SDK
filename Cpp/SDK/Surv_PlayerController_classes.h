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

// BlueprintGeneratedClass Surv_PlayerController.Surv_PlayerController_C
// 0x0000
class ASurv_PlayerController_C : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Surv_PlayerController.Surv_PlayerController_C");
		return ptr;
	}



	void ZL_CONTROLLER_GetSlots();
	void GiveAward();
	void SetTimeMark();
	void ResetAwards();
	void GetTimeMark();
	void CheckDalyAwards();
	void GetRealMyDay();
	void CheckIsValidSaveState();
	void UpdateSaveState();
	void ReturnSaveState();
	void CreateMenuSlots();
	void OnFailure_CF85FBD0449EA99A0CED2490FDC31426();
	void OnSuccess_CF85FBD0449EA99A0CED2490FDC31426();
	void OnFailure_AA206A6C4B03FF8A646ECAADDC772302();
	void OnSuccess_AA206A6C4B03FF8A646ECAADDC772302();
	void OnFailure_B04AF70C4F0D83150985F9BE89646F01();
	void OnSuccess_B04AF70C4F0D83150985F9BE89646F01();
	void OnFailure_00DBCDFB49EE95F7290527A8A67DFFC6();
	void OnSuccess_00DBCDFB49EE95F7290527A8A67DFFC6();
	void GetDBActorData();
	void ZL_GUI_ShowInventory();
	void ZL_GUI_Update();
	void ZL_GUI_ConstructMenu();
	void SaveConnectSession();
	void ClientDestroySession();
	void SERVER_UpdateBase();
	void ConnectToSession();
	void CLIENT_Show_day_Award();
	void BndEvt__VaRestFunctionsComponent_K2Node_ComponentBoundEvent_0_ReturnGetTimeStamp__DelegateSignature();
	void SERVER_Chaek_7Days_Stat();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void ZL_GUI_Overload();
	void ZL_CHARACTER_UNAttach_Server_();
	void ZL_GUI_DrawLootNear();
	void ZL_CHARACTER_AttachToWeapon_Server_();
	void ZL_GUI_SLOT_Unhovered();
	void ZL_GUI_SLOT_Hovered();
	void ZL_CHARACTER_Unequip_Serever_();
	void ZL_CHARACTER_USEThis_Server_();
	void ZL_CHARACTER_DropThis_Server_();
	void ZL_CHARACTER_EquipThis_Server_();
	void ZL_GUI_DND_Drop();
	void ZL_GUI_DnD_Drag();
	void ZL_GUI_ClearContainer();
	void ZL_GUI_Construkt_Container();
	void ZL_GUI_HideInventory();
	void ExecuteUbergraph_Surv_PlayerController();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
