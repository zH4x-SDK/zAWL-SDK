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

// WidgetBlueprintGeneratedClass AWL_MainMenuPlayerSlot.AWL_MainMenuPlayerSlot_C
// 0x0000
class UAWL_MainMenuPlayerSlot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_MainMenuPlayerSlot.AWL_MainMenuPlayerSlot_C");
		return ptr;
	}



	void PreConstruct();
	void Draw();
	void IsEmpty();
	void ExecuteUbergraph_AWL_MainMenuPlayerSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
