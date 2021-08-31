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

// WidgetBlueprintGeneratedClass PlayerString.PlayerString_C
// 0x0000
class UPlayerString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerString.PlayerString_C");
		return ptr;
	}



	void ShowPlayerOnAdmin();
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature();
	void SetSelfStyle();
	void BndEvt__FriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetFriendStyle();
	void SetNormalStyle();
	void OnMouseLeave();
	void DrawString();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_PlayerString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
