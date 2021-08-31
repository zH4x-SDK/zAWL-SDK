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

// WidgetBlueprintGeneratedClass Message_Global.Message_Global_C
// 0x0000
class UMessage_Global_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Message_Global.Message_Global_C");
		return ptr;
	}



	void ShowMessageEvacuation();
	void ShowMyMessage();
	void Construct();
	void ExecuteUbergraph_Message_Global();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
