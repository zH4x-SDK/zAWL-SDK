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

// WidgetBlueprintGeneratedClass AssetIcon.AssetIcon_C
// 0x0000
class UAssetIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AssetIcon.AssetIcon_C");
		return ptr;
	}



	void PreConstruct();
	void SetStyle();
	void Draw();
	void ExecuteUbergraph_AssetIcon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
