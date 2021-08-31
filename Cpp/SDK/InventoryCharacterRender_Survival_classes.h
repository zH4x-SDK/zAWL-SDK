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

// BlueprintGeneratedClass InventoryCharacterRender_Survival.InventoryCharacterRender_Survival_C
// 0x0000
class AInventoryCharacterRender_Survival_C : public AInventoryCharacterRender_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass InventoryCharacterRender_Survival.InventoryCharacterRender_Survival_C");
		return ptr;
	}



	void UserConstructionScript();
	void Set_FOOT_Mesh();
	void Set_HANDS_Mesh();
	void Set_LEGS_Mesh();
	void Set_TORSE_Mesh();
	void UpdateBodyParts();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_InventoryCharacterRender_Survival();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
