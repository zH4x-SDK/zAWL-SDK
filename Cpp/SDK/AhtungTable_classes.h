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

// WidgetBlueprintGeneratedClass AhtungTable.AhtungTable_C
// 0x0000
class UAhtungTable_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AhtungTable.AhtungTable_C");
		return ptr;
	}



	void OnMouseButtonDown();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Show();
	void ExecuteUbergraph_AhtungTable();
	void No__DelegateSignature();
	void Yes__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
