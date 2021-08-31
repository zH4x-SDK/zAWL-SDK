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

// WidgetBlueprintGeneratedClass EndGameBase.EndGameBase_C
// 0x0000
class UEndGameBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EndGameBase.EndGameBase_C");
		return ptr;
	}



	void ShowVictoryLost();
	void GetGameXP();
	void SetAcurTopStrings();
	void SetDamageTopStrings();
	void GetPlayersInformation();
	void GetText_1();
	void AddScore();
	void AddScoreAnimated();
	void Tick();
	void Construct();
	void ExecuteUbergraph_EndGameBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
