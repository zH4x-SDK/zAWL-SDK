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

// WidgetBlueprintGeneratedClass Message_GlobalString.Message_GlobalString_C
// 0x0000
class UMessage_GlobalString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Message_GlobalString.Message_GlobalString_C");
		return ptr;
	}



	void ShowMessageEvacuation();
	void ShowMyMessage();
	void WidgetAnimationEvt_Show_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_Message_GlobalString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
