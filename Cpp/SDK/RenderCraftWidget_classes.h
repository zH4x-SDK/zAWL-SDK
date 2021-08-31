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

// WidgetBlueprintGeneratedClass RenderCraftWidget.RenderCraftWidget_C
// 0x0000
class URenderCraftWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RenderCraftWidget.RenderCraftWidget_C");
		return ptr;
	}



	void OnMouseButtonUp();
	void OnMouseButtonDown();
	void PreConstruct();
	void Construct();
	void Tick();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void OnMouseLeave();
	void Reset();
	void SetMesh();
	void ExecuteUbergraph_RenderCraftWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
