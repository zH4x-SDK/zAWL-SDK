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

// WidgetBlueprintGeneratedClass KillsMultiplier_WB.KillsMultiplier_WB_C
// 0x0000
class UKillsMultiplier_WB_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KillsMultiplier_WB.KillsMultiplier_WB_C");
		return ptr;
	}



	void DrawXKIllsWidget();
	void ExecuteUbergraph_KillsMultiplier_WB();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
