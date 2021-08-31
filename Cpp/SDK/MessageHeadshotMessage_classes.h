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

// WidgetBlueprintGeneratedClass MessageHeadshotMessage.MessageHeadshotMessage_C
// 0x0000
class UMessageHeadshotMessage_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MessageHeadshotMessage.MessageHeadshotMessage_C");
		return ptr;
	}



	void Construct();
	void ShowMwssage();
	void ExecuteUbergraph_MessageHeadshotMessage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
