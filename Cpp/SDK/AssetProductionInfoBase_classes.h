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

// WidgetBlueprintGeneratedClass AssetProductionInfoBase.AssetProductionInfoBase_C
// 0x0000
class UAssetProductionInfoBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AssetProductionInfoBase.AssetProductionInfoBase_C");
		return ptr;
	}



	void OnOpen();
	void BndEvt__Button_Sell_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AssetWarehouseElement_K2Node_ComponentBoundEvent_1_click__DelegateSignature();
	void ExecuteUbergraph_AssetProductionInfoBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
