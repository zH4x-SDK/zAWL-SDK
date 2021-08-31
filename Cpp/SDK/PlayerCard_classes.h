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

// WidgetBlueprintGeneratedClass PlayerCard.PlayerCard_C
// 0x0000
class UPlayerCard_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerCard.PlayerCard_C");
		return ptr;
	}



	void BndEvt__ConnectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void DisableConnection();
	void Draw1();
	void OnMouseEnter();
	void OnMouseLeave();
	void ExecuteUbergraph_PlayerCard();
	void OnClick__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
