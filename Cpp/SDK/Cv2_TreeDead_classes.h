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

// BlueprintGeneratedClass Cv2_TreeDead.Cv2_TreeDead_C
// 0x0000
class ACv2_TreeDead_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_TreeDead.Cv2_TreeDead_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick();
	void ExecuteUbergraph_Cv2_TreeDead();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
