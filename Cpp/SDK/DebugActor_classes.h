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

// BlueprintGeneratedClass DebugActor.DebugActor_C
// 0x0000
class ADebugActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DebugActor.DebugActor_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void CustomEvent_1();
	void ExecuteUbergraph_DebugActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
