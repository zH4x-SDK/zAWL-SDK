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

// WidgetBlueprintGeneratedClass CommandString.CommandString_C
// 0x0000
class UCommandString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandString.CommandString_C");
		return ptr;
	}



	void PreConstruct();
	void DrawString();
	void ExecuteUbergraph_CommandString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
