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

// WidgetBlueprintGeneratedClass LobbyPlayerInLobby.LobbyPlayerInLobby_C
// 0x0000
class ULobbyPlayerInLobby_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyPlayerInLobby.LobbyPlayerInLobby_C");
		return ptr;
	}



	void Set_clear();
	void Construct();
	void Draw();
	void ExecuteUbergraph_LobbyPlayerInLobby();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
