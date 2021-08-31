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

// WidgetBlueprintGeneratedClass AWL_Place_Message.AWL_Place_Message_C
// 0x0000
class UAWL_Place_Message_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AWL_Place_Message.AWL_Place_Message_C");
		return ptr;
	}



	void ShowEffectTimer();
	void ShowPlaceCombinationMessage();
	void ShowNextPlaceMessages();
	void ExecuteUbergraph_AWL_Place_Message();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
