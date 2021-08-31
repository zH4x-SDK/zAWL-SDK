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

// BlueprintGeneratedClass Z_DefenderBot.Z_DefenderBot_C
// 0x0000
class AZ_DefenderBot_C : public AZ_Character_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Z_DefenderBot.Z_DefenderBot_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Z_DefenderBot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
