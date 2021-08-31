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

// WidgetBlueprintGeneratedClass AwardCalendarBase.AwardCalendarBase_C
// 0x0000
class UAwardCalendarBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AwardCalendarBase.AwardCalendarBase_C");
		return ptr;
	}



	void DrawCalendar();
	void ExecuteUbergraph_AwardCalendarBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
