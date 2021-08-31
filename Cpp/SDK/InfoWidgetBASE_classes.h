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

// WidgetBlueprintGeneratedClass InfoWidgetBASE.InfoWidgetBASE_C
// 0x0000
class UInfoWidgetBASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InfoWidgetBASE.InfoWidgetBASE_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTInfoWidgetBASE_1();
	void CheckTemp();
	void UpdateTemper();
	void TimeToTemper();
	void Timer();
	void CheckPing();
	void CheckPanels();
	void Construct();
	void ShowPanel();
	void SequenceEvent_1();
	void GoIntown();
	void GoOutTown();
	void Destruct();
	void SetXP();
	void Set_Enemy_counts();
	void SetMoney();
	void ShowCurrentZoneName();
	void ExecuteUbergraph_InfoWidgetBASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
