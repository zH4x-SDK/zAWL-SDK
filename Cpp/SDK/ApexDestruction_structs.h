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

// Enum ApexDestruction.EImpactDamageOverride
enum class ApexDestruction_EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ApexDestruction.DestructibleChunkParameters
// 0x0000
struct FDestructibleChunkParameters
{

};

// ScriptStruct ApexDestruction.FractureMaterial
// 0x0000
struct FFractureMaterial
{

};

// ScriptStruct ApexDestruction.DestructibleParameters
// 0x0000
struct FDestructibleParameters
{

};

// ScriptStruct ApexDestruction.DestructibleParametersFlag
// 0x0000
struct FDestructibleParametersFlag
{

};

// ScriptStruct ApexDestruction.DestructibleDepthParameters
// 0x0000
struct FDestructibleDepthParameters
{

};

// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
// 0x0000
struct FDestructibleSpecialHierarchyDepths
{

};

// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
// 0x0000
struct FDestructibleAdvancedParameters
{

};

// ScriptStruct ApexDestruction.DestructibleDebrisParameters
// 0x0000
struct FDestructibleDebrisParameters
{

};

// ScriptStruct ApexDestruction.DestructibleDamageParameters
// 0x0000
struct FDestructibleDamageParameters
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
