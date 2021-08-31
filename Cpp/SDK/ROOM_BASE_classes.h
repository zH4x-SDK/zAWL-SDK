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

// BlueprintGeneratedClass ROOM_BASE.ROOM_BASE_C
// 0x0000
class AROOM_BASE_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ROOM_BASE.ROOM_BASE_C");
		return ptr;
	}



	void SetNormalAll();
	void SetTransparentAll();
	void ShowAll();
	void SetActorVisible();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Colision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__Colision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature();
	void ExecuteUbergraph_ROOM_BASE();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
