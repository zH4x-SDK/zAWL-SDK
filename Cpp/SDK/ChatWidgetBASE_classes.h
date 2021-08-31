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

// WidgetBlueprintGeneratedClass ChatWidgetBASE.ChatWidgetBASE_C
// 0x0000
class UChatWidgetBASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatWidgetBASE.ChatWidgetBASE_C");
		return ptr;
	}



	void EncryptOnClient();
	void SelectButton();
	void Get_EditableTextBoxCHAT_HintText_1();
	void GetColorAndOpacity_3();
	void GetColorAndOpacity_2();
	void GetColorAndOpacity_1();
	void SetMouseOnWidget();
	void SetbuttonStyle();
	void AddChatMessage();
	void BndEvt__EditableTextBoxCHAT_K2Node_ComponentBoundEvent_62_OnEditableTextBoxCommittedEvent__DelegateSignature();
	void BndEvt__Button_ToAll_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_ToTeam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ReciveChatMessage();
	void CloseMainChatWindow();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_195_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_ToFriends_K2Node_ComponentBoundEvent_458_OnButtonClickedEvent__DelegateSignature();
	void OpenChat();
	void On_OpenMainWindow();
	void ZCHAT_ShowMessage();
	void Z_AddChatMessage();
	void ExecuteUbergraph_ChatWidgetBASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
