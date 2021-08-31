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

// BlueprintGeneratedClass Cv4_LobbyComponent.Cv4_LobbyComponent_C
// 0x0000
class UCv4_LobbyComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv4_LobbyComponent.Cv4_LobbyComponent_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Cv4_LobbyComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
