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

// WidgetBlueprintGeneratedClass StatisticString.StatisticString_C
// 0x0000
class UStatisticString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatisticString.StatisticString_C");
		return ptr;
	}



	void Draw();
	void PreConstruct();
	void ExecuteUbergraph_StatisticString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
