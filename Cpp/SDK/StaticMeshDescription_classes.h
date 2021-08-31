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

// Class StaticMeshDescription.StaticMeshDescription
// 0x0000
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StaticMeshDescription.StaticMeshDescription");
		return ptr;
	}



	void SetVertexInstanceUV();
	void SetPolygonGroupMaterialSlotName();
	void GetVertexInstanceUV();
	void CreateCube();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
