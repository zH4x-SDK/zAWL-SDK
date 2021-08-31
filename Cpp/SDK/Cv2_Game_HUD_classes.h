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

// BlueprintGeneratedClass Cv2_Game_HUD.Cv2_Game_HUD_C
// 0x0000
class ACv2_Game_HUD_C : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_Game_HUD.Cv2_Game_HUD_C");
		return ptr;
	}



	void ZL_CONTROLLER_GetSlots();
	void CloseFurnitureIfNeed();
	void LootInfoTune();
	void GetCharacterTimeFormArray();
	void CheckMenuSlotsCreate();
	void SetAmmoStructures();
	void GetCharacterBlocktime();
	void Print_settings();
	void RespawnPlayer();
	void CreateCharacterBlockTimes();
	void GetLandscapePivotActor();
	void CloseMainWidgets();
	void ResetProcedures();
	void CheckBlockChatShow();
	void ClearViewport();
	void GetLandscapeSize();
	void SpawnRamdomClass();
	void SetInputGameMode();
	void AnimateStep__FinishedFunc();
	void AnimateStep__UpdateFunc();
	void HideChooseOfSide();
	void ShowChooseOfSide();
	void Hide_Inventory_Widget();
	void Show_MainChatWindow();
	void Hide_ChatMainWindow();
	void ShowBlackScreen();
	void Hide_Black_Screen();
	void Show_InGameMenu();
	void Hide_InGameMenu();
	void Show_Inventory_Widget();
	void ShowEndGameWidget();
	void Hide_EndGame_Widget();
	void OpenChat();
	void ShowDamageDirection();
	void ReciveChatMessage();
	void ShowMapScreen();
	void HideMapScreen();
	void ZL_GUI_Overload();
	void ShowAdminPanel();
	void HideAdminPanel();
	void ZL_CHARACTER_UNAttach_Server_();
	void ShowBan();
	void ZL_GUI_ShowInventory();
	void ZL_GUI_HideInventory();
	void HideGlobalMenu();
	void ZL_GUI_DrawLootNear();
	void ShowGlobalMenu();
	void ShowSoftBlackScreen();
	void ShowTalkMenu();
	void HideTalkMenu();
	void ZL_CHARACTER_AttachToWeapon_Server_();
	void ZL_GUI_SLOT_Unhovered();
	void ShowGameOverWidget();
	void HideGameOverWidget();
	void ZL_GUI_SLOT_Hovered();
	void ZL_CHARACTER_Unequip_Serever_();
	void ZL_CHARACTER_USEThis_Server_();
	void ShowRoomInterfaceMenu();
	void HideRoomInterfaceMenu();
	void ZL_CHARACTER_DropThis_Server_();
	void SHOW_TaskList();
	void HIDE_TaskList();
	void ZL_CHARACTER_EquipThis_Server_();
	void ShowPlaceWidget();
	void HidePlaceWidget();
	void ZL_GUI_DND_Drop();
	void ZL_GUI_DnD_Drag();
	void ZL_GUI_ClearContainer();
	void SHOW_ASSET_GUI();
	void HIDE_ASSET_GUI();
	void Show_PlayerInRoom();
	void Hide_PlayersInRoom();
	void ZL_GUI_Construkt_Container();
	void ZL_GUI_Update();
	void ShowAssetList();
	void HideAssetList();
	void Show_AWL_Menu();
	void Hide_AWL_Menu();
	void ZL_GUI_ConstructMenu();
	void ShowDeathScreen();
	void HideDeathScreen();
	void ShowAssetObj_Widget();
	void HideAssetObj_Widget();
	void ShowWiki();
	void HideWiki();
	void QuestEvent();
	void ReceiveBeginPlay();
	void ShowScoreMessage();
	void HideAllHUD();
	void ReceiveDestroyed();
	void ResetAllGUI();
	void SlideWeapon();
	void ShowAllHud();
	void AnimateMapStep();
	void EnableRenderActors();
	void MapPressed();
	void InventoryPressed();
	void OptionsPressed();
	void CraftPressed();
	void OpenCraftActor();
	void ExitPressed();
	void PlayerBeginLive();
	void PlayerDead();
	void PressedTalkKey();
	void ShowCommandTalkMessage();
	void SendCommandTalkMessage();
	void ShowHeadshot();
	void ShowRebootEvaquation();
	void InventroyHide();
	void AddMArkerOnCompas();
	void DeleteMarkersFromCompas();
	void ShowTimer();
	void OnQuestActivate();
	void OnQuestComplite();
	void OnChangeWeapon();
	void UpdateCharacterState();
	void PressY();
	void PressF3();
	void ShowAcrionKeyPress();
	void ExecuteUbergraph_Cv2_Game_HUD();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
