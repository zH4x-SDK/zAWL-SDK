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

// BlueprintGeneratedClass Z_Chat_Component.Z_Chat_Component_C
// 0x0000
class UZ_Chat_Component_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_Chat_Component.Z_Chat_Component_C");
		return ptr;
	}



	void UncryptMessage();
	void ReceiveBeginPlay();
	void SERVER_SEND_MESSAGE_ON_SERVER();
	void SEND_MESSAGE_TO_ALL();
	void Add_To_Team();
	void CLIENT_RECIVE_MESSAGE();
	void ShowMessage();
	void ExecuteUbergraph_Z_Chat_Component();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
