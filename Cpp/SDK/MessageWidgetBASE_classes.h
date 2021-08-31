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

// WidgetBlueprintGeneratedClass MessageWidgetBASE.MessageWidgetBASE_C
// 0x0000
class UMessageWidgetBASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MessageWidgetBASE.MessageWidgetBASE_C");
		return ptr;
	}



	void Construct();
	void ShowHintAction();
	void ShowLevelUp();
	void ShowNoCraft();
	void ShowZoneMessage();
	void ShowCustomMessage();
	void ShowEvacuation();
	void ShowGlobalMessage();
	void ShowCharacterActionMessage();
	void ExecuteUbergraph_MessageWidgetBASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
