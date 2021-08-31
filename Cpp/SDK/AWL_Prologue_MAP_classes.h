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

// BlueprintGeneratedClass AWL_Prologue_MAP.AWL_Prologue_MAP_C
// 0x0000
class AAWL_Prologue_MAP_C : public ALevelScriptActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AWL_Prologue_MAP.AWL_Prologue_MAP_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_AWL_Prologue_MAP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
