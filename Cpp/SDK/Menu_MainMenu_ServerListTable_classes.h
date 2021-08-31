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

// WidgetBlueprintGeneratedClass Menu_MainMenu_ServerListTable.Menu_MainMenu_ServerListTable_C
// 0x0000
class UMenu_MainMenu_ServerListTable_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Menu_MainMenu_ServerListTable.Menu_MainMenu_ServerListTable_C");
		return ptr;
	}



	void AddString();
	void ClearTable();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
