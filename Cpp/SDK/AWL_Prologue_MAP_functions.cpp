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

// Function AWL_Prologue_MAP.AWL_Prologue_MAP_C.ReceiveBeginPlay
// ()
void AAWL_Prologue_MAP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_Prologue_MAP.AWL_Prologue_MAP_C.ReceiveBeginPlay");

	AAWL_Prologue_MAP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AWL_Prologue_MAP.AWL_Prologue_MAP_C.ExecuteUbergraph_AWL_Prologue_MAP
// ()
void AAWL_Prologue_MAP_C::ExecuteUbergraph_AWL_Prologue_MAP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_Prologue_MAP.AWL_Prologue_MAP_C.ExecuteUbergraph_AWL_Prologue_MAP");

	AAWL_Prologue_MAP_C_ExecuteUbergraph_AWL_Prologue_MAP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
