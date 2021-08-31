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

// Function BTT_Attack.BTT_Attack_C.ReceiveExecuteAI
// ()
void UBTT_Attack_C::ReceiveExecuteAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Attack.BTT_Attack_C.ReceiveExecuteAI");

	UBTT_Attack_C_ReceiveExecuteAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTT_Attack.BTT_Attack_C.ExecuteUbergraph_BTT_Attack
// ()
void UBTT_Attack_C::ExecuteUbergraph_BTT_Attack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Attack.BTT_Attack_C.ExecuteUbergraph_BTT_Attack");

	UBTT_Attack_C_ExecuteUbergraph_BTT_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
