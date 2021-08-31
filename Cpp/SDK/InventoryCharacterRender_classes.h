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

// BlueprintGeneratedClass InventoryCharacterRender.InventoryCharacterRender_C
// 0x0000
class AInventoryCharacterRender_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass InventoryCharacterRender.InventoryCharacterRender_C");
		return ptr;
	}



	void Turbine__FinishedFunc();
	void Turbine__UpdateFunc();
	void SetHelmet();
	void SetPrymaryWeapon();
	void SetSecondaryWeapon();
	void SetCharacterMesh();
	void SetMaterialRenderChar();
	void TurbineCharacter();
	void SetGrenade();
	void SetMeleeWeapon();
	void UpdateRenderMesh();
	void SetBackPack();
	void Set_FACE_Mesh();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_InventoryCharacterRender();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
