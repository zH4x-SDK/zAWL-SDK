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

// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// 0x0000
class UMagicLeapHandMeshingComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent");
		return ptr;
	}



	void DisconnectMRMesh();
	void ConnectMRMesh();
};

// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// 0x0000
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary");
		return ptr;
	}



	void DisconnectMRMesh();
	void DestroyClient();
	void CreateClient();
	void ConnectMRMesh();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
