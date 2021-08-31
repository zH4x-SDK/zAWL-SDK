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

// WidgetBlueprintGeneratedClass ChooseOfSideBASE.ChooseOfSideBASE_C
// 0x0000
class UChooseOfSideBASE_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChooseOfSideBASE.ChooseOfSideBASE_C");
		return ptr;
	}



	void CheckCharactersBlockString();
	void Get_AxisMaxPlayers_Text_1();
	void SelectCharacterString();
	void DrawCharacterList();
	void GetText_3();
	void IsNotTimeBlock();
	void GetCurrenNationDATA();
	void NationToSide();
	void SelectNation();
	void GetNationArray_AndSort();
	void GetVisibility_1();
	void UnselectFlags();
	void Lock();
	void SetMainFon();
	void AutomaticSelectTeam();
	void CalculateCountPlayers();
	void GetText_2();
	void GetText_1();
	void GetCharacterStrFomArray();
	void SelectTeamAnimation();
	void ShowButtons();
	void Hidebuttons();
	void Get_ClassName_Text_1();
	void Get_AxisText_ColorAndOpacity_1();
	void Get_AlliesText_ColorAndOpacity_1();
	void Get_StartButton_bIsEnabled_1();
	void Refreash();
	void SetWeaponIcoAndText();
	void Construct();
	void BndEvt__Button_92_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_155_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_303_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ALLIES_Button_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature();
	void Select_AXIS();
	void SelectALLIES();
	void BndEvt__StoreButton_K2Node_ComponentBoundEvent_222_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__StoreButton_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__StoreButton_K2Node_ComponentBoundEvent_307_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__FlagSlot_C_2_K2Node_ComponentBoundEvent_240_Click__DelegateSignature();
	void BndEvt__USA_K2Node_ComponentBoundEvent_17_Click__DelegateSignature();
	void BndEvt__FlagSlot_K2Node_ComponentBoundEvent_603_Click__DelegateSignature();
	void BndEvt__FlagSlot_171_K2Node_ComponentBoundEvent_42_Click__DelegateSignature();
	void BndEvt__FlagSlot_72_K2Node_ComponentBoundEvent_84_Click__DelegateSignature();
	void BndEvt__AhtungTable_K2Node_ComponentBoundEvent_2_Yes__DelegateSignature();
	void BndEvt__ShowSloder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShowWeapon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Tick();
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_424_OnButtonHoverEvent__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_ChooseOfSideBASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
