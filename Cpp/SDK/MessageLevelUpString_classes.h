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

// WidgetBlueprintGeneratedClass MessageLevelUpString.MessageLevelUpString_C
// 0x0000
class UMessageLevelUpString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MessageLevelUpString.MessageLevelUpString_C");
		return ptr;
	}



	void ShowLevelUp();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_MessageLevelUpString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
