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

// WidgetBlueprintGeneratedClass AssetPriborButton.AssetPriborButton_C
// 0x0000
class UAssetPriborButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AssetPriborButton.AssetPriborButton_C");
		return ptr;
	}



	void OnMouseButtonDown();
	void SetOn();
	void SetOff();
	void ExecuteUbergraph_AssetPriborButton();
	void ChangeState__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
