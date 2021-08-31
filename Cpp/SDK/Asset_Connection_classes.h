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

// WidgetBlueprintGeneratedClass Asset_Connection.Asset_Connection_C
// 0x0000
class UAsset_Connection_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Asset_Connection.Asset_Connection_C");
		return ptr;
	}



	void SetConnection();
	void ExecuteUbergraph_Asset_Connection();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
