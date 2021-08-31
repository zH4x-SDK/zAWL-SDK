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

// WidgetBlueprintGeneratedClass Place_CombinationIcon.Place_CombinationIcon_C
// 0x0000
class UPlace_CombinationIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Place_CombinationIcon.Place_CombinationIcon_C");
		return ptr;
	}



	void Timer();
	void Draw();
	void Timeout();
	void Construct();
	void ExecuteUbergraph_Place_CombinationIcon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
