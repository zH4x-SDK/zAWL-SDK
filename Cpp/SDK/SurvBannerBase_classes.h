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

// WidgetBlueprintGeneratedClass SurvBannerBase.SurvBannerBase_C
// 0x0000
class USurvBannerBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SurvBannerBase.SurvBannerBase_C");
		return ptr;
	}



	void SelectPoint();
	void CreatePoints();
	void Construct();
	void OnClick();
	void Destruct();
	void ChangeBannerNew();
	void Reset();
	void ExecuteUbergraph_SurvBannerBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
