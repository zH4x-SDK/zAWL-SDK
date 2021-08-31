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

// WidgetBlueprintGeneratedClass CommandWidgetBase.CommandWidgetBase_C
// 0x0000
class UCommandWidgetBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandWidgetBase.CommandWidgetBase_C");
		return ptr;
	}



	void Construct();
	void ShowMenu();
	void HIde_Menu();
	void ShowTalkMessage();
	void ExecuteUbergraph_CommandWidgetBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
