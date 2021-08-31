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

// WidgetBlueprintGeneratedClass AwardCalendarPage.AwardCalendarPage_C
// 0x0000
class UAwardCalendarPage_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AwardCalendarPage.AwardCalendarPage_C");
		return ptr;
	}



	void Draw();
	void ExecuteUbergraph_AwardCalendarPage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
