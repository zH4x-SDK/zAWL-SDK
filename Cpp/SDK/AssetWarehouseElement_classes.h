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

// WidgetBlueprintGeneratedClass AssetWarehouseElement.AssetWarehouseElement_C
// 0x0000
class UAssetWarehouseElement_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AssetWarehouseElement.AssetWarehouseElement_C");
		return ptr;
	}



	void DrawText();
	void BndEvt__Button_Sell_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Tick();
	void Draw();
	void Sell();
	void ExecuteUbergraph_AssetWarehouseElement();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
