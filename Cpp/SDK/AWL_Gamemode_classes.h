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

// BlueprintGeneratedClass AWL_Gamemode.AWL_Gamemode_C
// 0x0000
class AAWL_Gamemode_C : public AGameMode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_Gamemode.AWL_Gamemode_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_AWL_Gamemode();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
