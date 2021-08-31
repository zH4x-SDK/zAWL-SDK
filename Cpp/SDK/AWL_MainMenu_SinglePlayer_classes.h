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

// WidgetBlueprintGeneratedClass AWL_MainMenu_SinglePlayer.AWL_MainMenu_SinglePlayer_C
// 0x0000
class UAWL_MainMenu_SinglePlayer_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_MainMenu_SinglePlayer.AWL_MainMenu_SinglePlayer_C");
		return ptr;
	}



	void GetNewSaveName();
	void GetRoomInfo();
	void OnKeyDown();
	void BndEvt__AWL_GlobalMenuButton_2_K2Node_ComponentBoundEvent_3_OnClick_button__DelegateSignature();
	void BndEvt__AWL_GlobalMenuButton_New_K2Node_ComponentBoundEvent_4_OnClick_button__DelegateSignature();
	void BndEvt__AWL_GlobalMenuButton_Back_K2Node_ComponentBoundEvent_5_OnClick_button__DelegateSignature();
	void GetSavedGames();
	void LoadGame_Event_1();
	void Construct();
	void DeleteGame_Event_1();
	void BndEvt__AWL_Yes_No_K2Node_ComponentBoundEvent_0_ClickYes__DelegateSignature();
	void ExecuteUbergraph_AWL_MainMenu_SinglePlayer();
	void Close__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
