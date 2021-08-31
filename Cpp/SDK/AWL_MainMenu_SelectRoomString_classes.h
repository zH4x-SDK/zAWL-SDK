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

// WidgetBlueprintGeneratedClass AWL_MainMenu_SelectRoomString.AWL_MainMenu_SelectRoomString_C
// 0x0000
class UAWL_MainMenu_SelectRoomString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_MainMenu_SelectRoomString.AWL_MainMenu_SelectRoomString_C");
		return ptr;
	}



	void OnMouseButtonDown();
	void Construct();
	void OnMouseLeave();
	void OnMouseEnter();
	void Draw();
	void UpdateRoomInfo();
	void BndEvt__Button_Leave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Leave_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_AWL_MainMenu_SelectRoomString();
	void LeaveRoom__DelegateSignature();
	void MouseDown__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
