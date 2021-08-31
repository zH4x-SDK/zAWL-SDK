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

// WidgetBlueprintGeneratedClass AWL_SaveGameString.AWL_SaveGameString_C
// 0x0000
class UAWL_SaveGameString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_SaveGameString.AWL_SaveGameString_C");
		return ptr;
	}



	void OnMouseButtonDown();
	void Draw();
	void OnMouseEnter();
	void OnMouseLeave();
	void BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_AWL_SaveGameString();
	void DeleteGame__DelegateSignature();
	void LoadGame__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
