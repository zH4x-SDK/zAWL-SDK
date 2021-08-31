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

// Enum VehiclesPlugin.EWheelNum
enum class VehiclesPlugin_EWheelNum : uint8_t
{
	EWheelNum__WN_Six              = 0,
	EWheelNum__WN_Eight            = 1,
	EWheelNum__WN_Ten              = 2,
	EWheelNum__WN_Twelve           = 3,
	EWheelNum__WN_Fourteen         = 4,
	EWheelNum__WN_Sixteen          = 5,
	EWheelNum__WN_MAX              = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VehiclesPlugin.TankTransmissionData
// 0x0000
struct FTankTransmissionData
{

};

// ScriptStruct VehiclesPlugin.TankGearData
// 0x0000
struct FTankGearData
{

};

// ScriptStruct VehiclesPlugin.TankEngineData
// 0x0000
struct FTankEngineData
{

};

// ScriptStruct VehiclesPlugin.RepTankState
// 0x0000
struct FRepTankState
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
