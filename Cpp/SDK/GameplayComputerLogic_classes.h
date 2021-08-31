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

// BlueprintGeneratedClass GameplayComputerLogic.GameplayComputerLogic_C
// 0x0000
class UGameplayComputerLogic_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GameplayComputerLogic.GameplayComputerLogic_C");
		return ptr;
	}



	void CheckValidStart();
	void StopAtack();
	void BuyAsset();
	void CheckState();
	void CapturePoint();
	void Atack();
	void Looting();
	void GetMoney();
	void IsValidSlot();
	void SetMoney();
	void CheckValidSlot();
	void StartLogic();
	void StopLogic();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GameplayComputerLogic();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
