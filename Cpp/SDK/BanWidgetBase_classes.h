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

// WidgetBlueprintGeneratedClass BanWidgetBase.BanWidgetBase_C
// 0x0000
class UBanWidgetBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BanWidgetBase.BanWidgetBase_C");
		return ptr;
	}



	void Timer();
	void GetText_1();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_BanWidgetBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
