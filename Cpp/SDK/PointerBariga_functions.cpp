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

// Function PointerBariga.PointerBariga_C.PreConstruct
// ()
void UPointerBariga_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PointerBariga.PointerBariga_C.PreConstruct");

	UPointerBariga_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerBariga.PointerBariga_C.Construct
// ()
void UPointerBariga_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PointerBariga.PointerBariga_C.Construct");

	UPointerBariga_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerBariga.PointerBariga_C.ExecuteUbergraph_PointerBariga
// ()
void UPointerBariga_C::ExecuteUbergraph_PointerBariga()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PointerBariga.PointerBariga_C.ExecuteUbergraph_PointerBariga");

	UPointerBariga_C_ExecuteUbergraph_PointerBariga_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
