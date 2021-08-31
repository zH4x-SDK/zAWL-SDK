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

// BlueprintGeneratedClass InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C
// 0x0000
class AInventoryCharacterMainMenuRender_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass InventoryCharacterMainMenuRender.InventoryCharacterMainMenuRender_C");
		return ptr;
	}



	void UserConstructionScript();
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
	void ReceiveBeginPlay();
	void Set_FOOT_Mesh();
	void Set_HANDS_Mesh();
	void Set_LEGS_Mesh();
	void Set_TORSE_Mesh();
	void UpdateBodyParts();
	void Set_FACE_Mesh();
	void ExecuteUbergraph_InventoryCharacterMainMenuRender();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
