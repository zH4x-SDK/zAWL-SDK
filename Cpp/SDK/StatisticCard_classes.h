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

// WidgetBlueprintGeneratedClass StatisticCard.StatisticCard_C
// 0x0000
class UStatisticCard_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatisticCard.StatisticCard_C");
		return ptr;
	}



	void Draw();
	void PreConstruct();
	void ExecuteUbergraph_StatisticCard();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
