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

// BlueprintGeneratedClass Cv2_BombBP.Cv2_BombBP_C
// 0x0000
class ACv2_BombBP_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cv2_BombBP.Cv2_BombBP_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void BombTimer();
	void AttachToComponent();
	void ExecuteUbergraph_Cv2_BombBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
