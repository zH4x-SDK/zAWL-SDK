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

// WidgetBlueprintGeneratedClass ChatMessageString.ChatMessageString_C
// 0x0000
class UChatMessageString_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatMessageString.ChatMessageString_C");
		return ptr;
	}



	void DrawString();
	void ZDrawString();
	void ExecuteUbergraph_ChatMessageString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
