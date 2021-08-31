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

// BlueprintGeneratedClass AWL_FunctionLibriary.AWL_FunctionLibriary_C
// 0x0000
class UAWL_FunctionLibriary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_FunctionLibriary.AWL_FunctionLibriary_C");
		return ptr;
	}



	void AWL_GetPlayersAvatars();
	void AWL_IsSteamKey();
	void AWL_Arround_LocationInRadius();
	void AWL_GetSaveGameName();
	void AWL_GetDifficulty();
	void AWL_GetComputerInfo();
	void AWL_IsPlayerHaveDLC();
	void AWL_GetDistanceToPlayer();
	void AWL_GetGamemodeEnum();
	void AWL_IsStaemOk();
	void AWL_SetViewportSavedSizeSize();
	void AWL_GetViewportSavedSize();
	void AWL_GetAssetIconColor();
	void AWL_GetAssetTerminalByType();
	void AWL_GetSteamID();
	void AWl_NoiseToAI();
	void AWL_GenerateQuestEvent();
	void AWL_GetQuestDispatcher();
	void AWL_CallInterfaceFunction();
	void AWL_QUEST_TransitCompare();
	void AWL_QuestId_ToQuestStr();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
