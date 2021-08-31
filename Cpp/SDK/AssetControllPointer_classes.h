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

// WidgetBlueprintGeneratedClass AssetControllPointer.AssetControllPointer_C
// 0x0000
class UAssetControllPointer_C : public UPointer_Root_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AssetControllPointer.AssetControllPointer_C");
		return ptr;
	}



	void Construct();
	void PreConstruct();
	void UpdateState();
	void Destruct();
	void ShowMessage();
	void ExecuteUbergraph_AssetControllPointer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
