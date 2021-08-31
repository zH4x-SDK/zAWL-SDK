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

// WidgetBlueprintGeneratedClass GameOverWidgetBASE.GameOverWidgetBASE_C
// 0x0000
class UGameOverWidgetBASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameOverWidgetBASE.GameOverWidgetBASE_C");
		return ptr;
	}



	void GetHonors();
	void Timer();
	void AddRanksOfBattle();
	void DrawTops();
	void DrawPlayerStatistic();
	void SetStyle();
	void ShowRankOneByOne();
	void ShowHonorOneByOne();
	void RotateMedal();
	void Construct();
	void ShowHonor();
	void AddAllHonors();
	void ShowRank();
	void AddRanks();
	void RankEndShow();
	void HonorsEndShow();
	void ShowTiner();
	void RunAnumateGUI();
	void Destruct();
	void ExecuteUbergraph_GameOverWidgetBASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
