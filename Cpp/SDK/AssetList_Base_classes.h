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

// WidgetBlueprintGeneratedClass AssetList_Base.AssetList_Base_C
// 0x0000
class UAssetList_Base_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AssetList_Base.AssetList_Base_C");
		return ptr;
	}



	void OnKeyDown();
	void Update();
	void BndEvt__Button_247_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_AssetList_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
