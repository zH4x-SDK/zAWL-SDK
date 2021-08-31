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

// WidgetBlueprintGeneratedClass LearnBeginPlay.LearnBeginPlay_C
// 0x0000
class ULearnBeginPlay_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LearnBeginPlay.LearnBeginPlay_C");
		return ptr;
	}



	void OnKeyDown();
	void Show();
	void Close();
	void BndEvt__AWL_GlobalMenuButton_K2Node_ComponentBoundEvent_0_OnClick_button__DelegateSignature();
	void ExecuteUbergraph_LearnBeginPlay();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
