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
// Enums
//---------------------------------------------------------------------------

// Enum ClothingSystemRuntimeNv.EClothingWindMethod
enum class ClothingSystemRuntimeNv_EClothingWindMethod : uint8_t
{
	EClothingWindMethod__Legacy    = 0,
	EClothingWindMethod__Accurate  = 1,
	EClothingWindMethod__EClothingWindMethod_MAX = 2,

};

// Enum ClothingSystemRuntimeNv.MaskTarget_PhysMesh
enum class ClothingSystemRuntimeNv_EMaskTarget_PhysMesh : uint8_t
{
	MaskTarget_PhysMesh__None      = 0,
	MaskTarget_PhysMesh__MaxDistance = 1,
	MaskTarget_PhysMesh__BackstopDistance = 2,
	MaskTarget_PhysMesh__BackstopRadius = 3,
	MaskTarget_PhysMesh__AnimDriveMultiplier = 4,
	MaskTarget_PhysMesh__MaskTarget_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntimeNv.ClothConfig
// 0x0000
struct FClothConfig
{

};

// ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetup
// 0x0000
struct FClothConstraintSetup
{

};

// ScriptStruct ClothingSystemRuntimeNv.ClothLODData
// 0x0000
struct FClothLODData
{

};

// ScriptStruct ClothingSystemRuntimeNv.ClothPhysicalMeshData
// 0x0000
struct FClothPhysicalMeshData
{

};

// ScriptStruct ClothingSystemRuntimeNv.ClothParameterMask_PhysMesh
// 0x0000
struct FClothParameterMask_PhysMesh
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
