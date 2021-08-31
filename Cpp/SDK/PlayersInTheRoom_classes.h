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

// WidgetBlueprintGeneratedClass PlayersInTheRoom.PlayersInTheRoom_C
// 0x0000
class UPlayersInTheRoom_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayersInTheRoom.PlayersInTheRoom_C");
		return ptr;
	}



	void OnKeyDown();
	void Update();
	void Construct();
	void BndEvt__Button_925_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnClick_Event_1();
	void OnSaveComplite_Event_1();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_2_ChangeDynamic__DelegateSignature();
	void OnClose();
	void ExecuteUbergraph_PlayersInTheRoom();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
