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

// WidgetBlueprintGeneratedClass AssetsOnHUD.AssetsOnHUD_C
// 0x0000
class UAssetsOnHUD_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AssetsOnHUD.AssetsOnHUD_C");
		return ptr;
	}



	void UpdateInfo();
	void Construct();
	void ExecuteUbergraph_AssetsOnHUD();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
