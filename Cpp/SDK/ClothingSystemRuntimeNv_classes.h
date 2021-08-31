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

// Class ClothingSystemRuntimeNv.ClothConfigNv
// 0x0000
class UClothConfigNv : public UClothConfigBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothConfigNv");
		return ptr;
	}



};

// Class ClothingSystemRuntimeNv.ClothingAssetNv
// 0x0000
class UClothingAssetNv : public UClothingAssetCommon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingAssetNv");
		return ptr;
	}



};

// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// 0x0000
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv");
		return ptr;
	}



};

// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// 0x0000
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv");
		return ptr;
	}



	void SetAnimDriveSpringStiffness();
	void SetAnimDriveDamperStiffness();
	void EnableGravityOverride();
	void DisableGravityOverride();
};

// Class ClothingSystemRuntimeNv.ClothLODDataNv
// 0x0000
class UClothLODDataNv : public UClothLODDataBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothLODDataNv");
		return ptr;
	}



};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv
// 0x0000
class UClothPhysicalMeshDataNv : public UClothPhysicalMeshDataBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
