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

// BlueprintGeneratedClass RagdollProxy.RagdollProxy_C
// 0x0000
class ARagdollProxy_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RagdollProxy.RagdollProxy_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomLifeSpan();
	void ExecuteUbergraph_RagdollProxy();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
