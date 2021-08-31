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

// WidgetBlueprintGeneratedClass OverheadWidgetBASE.OverheadWidgetBASE_C
// 0x0000
class UOverheadWidgetBASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OverheadWidgetBASE.OverheadWidgetBASE_C");
		return ptr;
	}



	void CheckIsFriend();
	void SetNickText();
	void ReciveChatMessage();
	void ShowSpeak();
	void HideSpeak();
	void Construct();
	void OpenChat();
	void EventShowChatText();
	void ExecuteUbergraph_OverheadWidgetBASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
