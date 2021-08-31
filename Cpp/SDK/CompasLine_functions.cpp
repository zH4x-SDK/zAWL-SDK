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

// Function CompasLine.CompasLine_C.Update
// ()
void UCompasLine_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CompasLine.CompasLine_C.Update");

	UCompasLine_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompasLine.CompasLine_C.Tick
// ()
void UCompasLine_C::Tick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CompasLine.CompasLine_C.Tick");

	UCompasLine_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompasLine.CompasLine_C.AddCompasActor
// ()
void UCompasLine_C::AddCompasActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CompasLine.CompasLine_C.AddCompasActor");

	UCompasLine_C_AddCompasActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompasLine.CompasLine_C.PositionActors
// ()
void UCompasLine_C::PositionActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CompasLine.CompasLine_C.PositionActors");

	UCompasLine_C_PositionActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompasLine.CompasLine_C.AddCompasMarker
// ()
void UCompasLine_C::AddCompasMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CompasLine.CompasLine_C.AddCompasMarker");

	UCompasLine_C_AddCompasMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompasLine.CompasLine_C.PositionLocations
// ()
void UCompasLine_C::PositionLocations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CompasLine.CompasLine_C.PositionLocations");

	UCompasLine_C_PositionLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompasLine.CompasLine_C.DeleteCompasMarker
// ()
void UCompasLine_C::DeleteCompasMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CompasLine.CompasLine_C.DeleteCompasMarker");

	UCompasLine_C_DeleteCompasMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CompasLine.CompasLine_C.ExecuteUbergraph_CompasLine
// ()
void UCompasLine_C::ExecuteUbergraph_CompasLine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CompasLine.CompasLine_C.ExecuteUbergraph_CompasLine");

	UCompasLine_C_ExecuteUbergraph_CompasLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
