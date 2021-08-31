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

// WidgetBlueprintGeneratedClass AWL_MainMenu_SelectRoom.AWL_MainMenu_SelectRoom_C
// 0x0000
class UAWL_MainMenu_SelectRoom_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_MainMenu_SelectRoom.AWL_MainMenu_SelectRoom_C");
		return ptr;
	}



	void LeaveRoom();
	void Update_Rooms_Information();
	void CreateRoomStrings();
	void OnKeyDown();
	void ConnectToRoom();
	void BndEvt__AWL_GlobalMenuButton_2_K2Node_ComponentBoundEvent_3_OnClick_button__DelegateSignature();
	void MouseDown_Event_1();
	void OnOpen();
	void OnGetComplite();
	void LeaveRoom_Event_2();
	void BndEvt__AWL_Yes_No_K2Node_ComponentBoundEvent_0_ClickYes__DelegateSignature();
	void ExecuteUbergraph_AWL_MainMenu_SelectRoom();
	void Close__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
