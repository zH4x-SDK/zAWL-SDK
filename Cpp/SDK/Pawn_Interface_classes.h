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

// BlueprintGeneratedClass Pawn_Interface.Pawn_Interface_C
// 0x0000
class UPawn_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Pawn_Interface.Pawn_Interface_C");
		return ptr;
	}



	void GetActiveWeapon();
	void IsEnemy();
	void GetIsDead();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
