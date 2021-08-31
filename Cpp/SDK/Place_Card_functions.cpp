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

// Function Place_Card.Place_Card_C.Draw
// ()
void UPlace_Card_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Place_Card.Place_Card_C.Draw");

	UPlace_Card_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Place_Card.Place_Card_C.ExecuteUbergraph_Place_Card
// ()
void UPlace_Card_C::ExecuteUbergraph_Place_Card()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Place_Card.Place_Card_C.ExecuteUbergraph_Place_Card");

	UPlace_Card_C_ExecuteUbergraph_Place_Card_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
