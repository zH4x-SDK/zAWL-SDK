// Name: AWL, Version: 4.24.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetSteeringRightInput
// ()
void UWheeledVehicleMovementComponentTank::SetSteeringRightInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetSteeringRightInput");

	UWheeledVehicleMovementComponentTank_SetSteeringRightInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetSteeringLeftInput
// ()
void UWheeledVehicleMovementComponentTank::SetSteeringLeftInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetSteeringLeftInput");

	UWheeledVehicleMovementComponentTank_SetSteeringLeftInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetBrakeRightInput
// ()
void UWheeledVehicleMovementComponentTank::SetBrakeRightInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetBrakeRightInput");

	UWheeledVehicleMovementComponentTank_SetBrakeRightInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetBrakeLeftInput
// ()
void UWheeledVehicleMovementComponentTank::SetBrakeLeftInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VehiclesPlugin.WheeledVehicleMovementComponentTank.SetBrakeLeftInput");

	UWheeledVehicleMovementComponentTank_SetBrakeLeftInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VehiclesPlugin.WheeledVehicleMovementComponentTank.ServerUpdateTankState
// ()
void UWheeledVehicleMovementComponentTank::ServerUpdateTankState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VehiclesPlugin.WheeledVehicleMovementComponentTank.ServerUpdateTankState");

	UWheeledVehicleMovementComponentTank_ServerUpdateTankState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
