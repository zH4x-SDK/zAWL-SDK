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

// WidgetBlueprintGeneratedClass END_Game_XP_Bar.END_Game_XP_Bar_C
// 0x0000
class UEND_Game_XP_Bar_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass END_Game_XP_Bar.END_Game_XP_Bar_C");
		return ptr;
	}



	void PreConstruct();
	void DrawBar();
	void ExecuteUbergraph_END_Game_XP_Bar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
