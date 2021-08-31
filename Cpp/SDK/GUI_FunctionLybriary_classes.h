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

// BlueprintGeneratedClass GUI_FunctionLybriary.GUI_FunctionLybriary_C
// 0x0000
class UGUI_FunctionLybriary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GUI_FunctionLybriary.GUI_FunctionLybriary_C");
		return ptr;
	}



	void GUI_GetCharacterBlockTime();
	void GUI_VoiceEnumToSound();
	void GUI_VoiceEnumToString();
	void GUI_GetCharacterBlockInfo();
	void GUI_SetTypeInHand();
	void GUI_GetZoneInfo();
	void SortIntegerArray();
	void GUI_SortPlayerBy();
	void GUI_GetCharacterNation();
	void GUI_GetRankIco();
	void GUI_GetBasePercent();
	void GetMyRankClientOnly();
	void GetMyDLC();
	void GUI_SortPlayesByScores();
	void GUI_CharacterToSide();
	void GUI_WeaponToLoot();
	void GUI_ArrayLootIntersect();
	void GUI_GetGameHud();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
