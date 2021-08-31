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

// WidgetBlueprintGeneratedClass Message_KillerShipMessage.Message_KillerShipMessage_C
// 0x0000
class UMessage_KillerShipMessage_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Message_KillerShipMessage.Message_KillerShipMessage_C");
		return ptr;
	}



	void SetOutlineColor();
	void DrawString();
	void ExecuteUbergraph_Message_KillerShipMessage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
