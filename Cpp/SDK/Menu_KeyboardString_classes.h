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

// WidgetBlueprintGeneratedClass Menu_KeyboardString.Menu_KeyboardString_C
// 0x0000
class UMenu_KeyboardString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_KeyboardString.Menu_KeyboardString_C");
		return ptr;
	}



	void PreConstruct();
	void Draw();
	void BndEvt__InputKeySelector_0_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature();
	void Reset();
	void RestoreDefaults();
	void RestoreDefAzerty();
	void OnMouseEnter();
	void OnMouseLeave();
	void Construct();
	void ExecuteUbergraph_Menu_KeyboardString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
