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

// WidgetBlueprintGeneratedClass CommandMessage.CommandMessage_C
// 0x0000
class UCommandMessage_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommandMessage.CommandMessage_C");
		return ptr;
	}



	void ShowMessage();
	void ExecuteUbergraph_CommandMessage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
