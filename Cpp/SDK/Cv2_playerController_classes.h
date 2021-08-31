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

// BlueprintGeneratedClass Cv2_playerController.Cv2_playerController_C
// 0x0000
class ACv2_playerController_C : public AFixPlayerController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_playerController.Cv2_playerController_C");
		return ptr;
	}



	void SpawndeathBox();
	void InteractionRaycast();
	void GetBeginClothers();
	void OutlineNearest();
	void SetExitTime();
	void GetLobbyExitZones();
	void UpdateSaveStateTimer();
	void ClearSaveState();
	void CheckIsValidSaveState();
	void UpdateSaveState();
	void ReturnSaveState();
	void RayCastToEnemy();
	void SaveInventory();
	void GetPlayerInfoFromStringId();
	void CheckHouseSpawn();
	void SetCrosshairType();
	void GetScenarioSpawnLocation();
	void CreateMenuSlots();
	void CreateCharacterBlockTimes();
	void UnCryptMesage();
	void CHAT_SendMessage();
	void GetMySteamFriends();
	void RespawnPlayer();
	void DropLootServer();
	void RemoveFromLootServerOnly();
	void AddToLootServerOnly();
	void InpActEvt_Enter_K2Node_InputKeyEvent_18();
	void InpActEvt_Escape_K2Node_InputKeyEvent_17();
	void InpActEvt_P_K2Node_InputKeyEvent_16();
	void InpActEvt_One_K2Node_InputKeyEvent_15();
	void InpActEvt_Two_K2Node_InputKeyEvent_14();
	void InpActEvt_Three_K2Node_InputKeyEvent_13();
	void InpActEvt_Four_K2Node_InputKeyEvent_12();
	void InpActEvt_Inventory_K2Node_InputActionEvent_4();
	void InpActEvt_Map_K2Node_InputActionEvent_3();
	void InpActEvt_Heal_K2Node_InputActionEvent_2();
	void InpActEvt_DropWeapon_K2Node_InputActionEvent_1();
	void InpActEvt_F1_K2Node_InputKeyEvent_11();
	void InpActEvt_F2_K2Node_InputKeyEvent_10();
	void InpActEvt_F3_K2Node_InputKeyEvent_9();
	void OnFailure_BE497B2B4AEE791EF7C9C1B266252EF2();
	void OnSuccess_BE497B2B4AEE791EF7C9C1B266252EF2();
	void OnFailure_D8550D004B72CDDFA2FA5D890A8FBB4E();
	void OnSuccess_D8550D004B72CDDFA2FA5D890A8FBB4E();
	void InpActEvt_Y_K2Node_InputKeyEvent_8();
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_7();
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_6();
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_5();
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_4();
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_3();
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_2();
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_1();
	void OnFailure_37C1D4E8416CAACD61E2649B3E9199A2();
	void OnSuccess_37C1D4E8416CAACD61E2649B3E9199A2();
	void ShowNumberScore();
	void ShowScoreMessageToAll_from_server_();
	void Recive_CHAT_Message_Client_();
	void Send_CHAT_Message_run_On_Server();
	void ShowChatToAll();
	void CraftingClientOnly();
	void SendKillSheepMessageToAll_Server_();
	void SetCraftArray();
	void CancelCraft();
	void ShowKillerSheepMessage();
	void Add_PointerWidget();
	void SetRespawnActorClient();
	void SetRespawnActorServer();
	void PlayerSuicideClient();
	void PlayerSuicideServer();
	void ReceiveBeginPlay();
	void CraftingPlayer();
	void SpawnAdminPawnServer();
	void AddResourceComplect();
	void BanPlayer();
	void KickPlayer();
	void KickPlayerClient();
	void ShowBanOnClient();
	void CheckBan();
	void Delete_Cheat_AddLoot();
	void EnemyHitEvent();
	void ShowBlood();
	void PlaySoundMulticast();
	void ShowLevelUp();
	void ControllerINICIALIZEInventory();
	void InicializeInventoryOnClient();
	void ServerSendCommandTalkMessage();
	void ClientReciveCommandTalkMessage();
	void ServerCreateBuildingCraft();
	void DeleteTest1();
	void ShowScoreMessage();
	void ShowInventory();
	void ClientRespawnPlayer();
	void SetWeaponUpServer();
	void ApplyDamageCreature();
	void ReceiveTick();
	void UpdateLootArray();
	void OpenChat();
	void ReciveChatMessage();
	void ClientExitToMainMenu();
	void ClientSpawnExitZone();
	void CLIENT_ShowRebootEvaquation();
	void ClientToServerSetLobbyID();
	void GetDBActorData();
	void BndEvt__PlayerInventory_K2Node_ComponentBoundEvent_1_OnLootAdded_ServerOnly___DelegateSignature();
	void BndEvt__PlayerInventory_K2Node_ComponentBoundEvent_2_OnLootRemove__DelegateSignature();
	void HUD_Update();
	void OnRequestComplete_Event_1();
	void OnRequestFail_Event_1();
	void ExecuteUbergraph_Cv2_playerController();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
