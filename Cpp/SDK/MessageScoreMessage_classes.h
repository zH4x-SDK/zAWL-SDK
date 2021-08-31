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

// WidgetBlueprintGeneratedClass MessageScoreMessage.MessageScoreMessage_C
// 0x0000
class UMessageScoreMessage_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MessageScoreMessage.MessageScoreMessage_C");
		return ptr;
	}



	void AddMessage();
	void ExecuteUbergraph_MessageScoreMessage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
