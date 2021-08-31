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

// BlueprintGeneratedClass HUD_RenderActor.HUD_RenderActor_C
// 0x0000
class AHUD_RenderActor_C : public AInventoryCharacterRender_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HUD_RenderActor.HUD_RenderActor_C");
		return ptr;
	}



	void SetAnimation();
	void UserConstructionScript();
	void Set_FOOT_Mesh();
	void Set_HANDS_Mesh();
	void Set_LEGS_Mesh();
	void Set_TORSE_Mesh();
	void UpdateBodyParts();
	void CheckPosition();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_HUD_RenderActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
