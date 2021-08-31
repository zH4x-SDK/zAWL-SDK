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

// BlueprintGeneratedClass CV3_Map_Actor.CV3_Map_Actor_C
// 0x0000
class ACV3_Map_Actor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CV3_Map_Actor.CV3_Map_Actor_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void Draw();
	void ExecuteUbergraph_CV3_Map_Actor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
