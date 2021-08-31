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

// WidgetBlueprintGeneratedClass SurvBannerPoint.SurvBannerPoint_C
// 0x0000
class USurvBannerPoint_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SurvBannerPoint.SurvBannerPoint_C");
		return ptr;
	}



	void Construct();
	void SetSelected();
	void SetUnSelected();
	void ExecuteUbergraph_SurvBannerPoint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
