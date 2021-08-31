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

// BlueprintGeneratedClass RoomMember.RoomMember_C
// 0x0000
class URoomMember_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RoomMember.RoomMember_C");
		return ptr;
	}



	void setNormalMaterials();
	void setTransparent();
	void GetMaterials();
	void ini();
	void ExecuteUbergraph_RoomMember();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
