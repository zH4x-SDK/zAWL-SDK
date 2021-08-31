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

// WidgetBlueprintGeneratedClass AwardCard.AwardCard_C
// 0x0000
class UAwardCard_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AwardCard.AwardCard_C");
		return ptr;
	}



	void Draw();
	void WidgetAnimationEvt_Round_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_NoWin_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_Begin_K2Node_WidgetAnimationEvent_3();
	void ExecuteUbergraph_AwardCard();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
