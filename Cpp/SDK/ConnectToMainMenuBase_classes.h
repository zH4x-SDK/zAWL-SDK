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

// WidgetBlueprintGeneratedClass ConnectToMainMenuBase.ConnectToMainMenuBase_C
// 0x0000
class UConnectToMainMenuBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConnectToMainMenuBase.ConnectToMainMenuBase_C");
		return ptr;
	}



	void OnFailure_A6ADCDB9434681C709B05F9071CDE4D0();
	void OnSuccess_A6ADCDB9434681C709B05F9071CDE4D0();
	void Construct();
	void BndEvt__Reconnect_K2Node_ComponentBoundEvent_120_OnButtonClickedEvent__DelegateSignature();
	void StartSearch();
	void ConnectionFailure();
	void ShowButtons();
	void ExecuteUbergraph_ConnectToMainMenuBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
