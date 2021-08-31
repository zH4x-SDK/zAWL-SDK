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

// Class VehiclesPlugin.TankVehicle
// 0x0000
class ATankVehicle : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VehiclesPlugin.TankVehicle");
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle10W
// 0x0000
class AWheeledVehicle10W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VehiclesPlugin.WheeledVehicle10W");
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle12W
// 0x0000
class AWheeledVehicle12W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VehiclesPlugin.WheeledVehicle12W");
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle14W
// 0x0000
class AWheeledVehicle14W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VehiclesPlugin.WheeledVehicle14W");
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle16W
// 0x0000
class AWheeledVehicle16W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VehiclesPlugin.WheeledVehicle16W");
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle6W
// 0x0000
class AWheeledVehicle6W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VehiclesPlugin.WheeledVehicle6W");
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicle8W
// 0x0000
class AWheeledVehicle8W : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VehiclesPlugin.WheeledVehicle8W");
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicleMovementComponentNW
// 0x0000
class UWheeledVehicleMovementComponentNW : public UWheeledVehicleMovementComponent4W
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VehiclesPlugin.WheeledVehicleMovementComponentNW");
		return ptr;
	}



};

// Class VehiclesPlugin.WheeledVehicleMovementComponentTank
// 0x0000
class UWheeledVehicleMovementComponentTank : public UWheeledVehicleMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VehiclesPlugin.WheeledVehicleMovementComponentTank");
		return ptr;
	}



	void SetSteeringRightInput();
	void SetSteeringLeftInput();
	void SetBrakeRightInput();
	void SetBrakeLeftInput();
	void ServerUpdateTankState();
};

// Class VehiclesPlugin.WheeledVehicleNW
// 0x0000
class AWheeledVehicleNW : public AWheeledVehicle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VehiclesPlugin.WheeledVehicleNW");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
