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

// Function PointerMapActor.PointerMapActor_C.PreConstruct
// ()
void UPointerMapActor_C::PreConstruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PointerMapActor.PointerMapActor_C.PreConstruct");

	UPointerMapActor_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PointerMapActor.PointerMapActor_C.ExecuteUbergraph_PointerMapActor
// ()
void UPointerMapActor_C::ExecuteUbergraph_PointerMapActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PointerMapActor.PointerMapActor_C.ExecuteUbergraph_PointerMapActor");

	UPointerMapActor_C_ExecuteUbergraph_PointerMapActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
