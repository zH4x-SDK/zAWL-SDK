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

// WidgetBlueprintGeneratedClass OverheadChatString.OverheadChatString_C
// 0x0000
class UOverheadChatString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OverheadChatString.OverheadChatString_C");
		return ptr;
	}



	void DrawString();
	void Construct();
	void ExecuteUbergraph_OverheadChatString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
