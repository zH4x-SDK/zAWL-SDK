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

// Function AWL_Message_PlaceCaptured.AWL_Message_PlaceCaptured_C.Draw
// ()
void UAWL_Message_PlaceCaptured_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_Message_PlaceCaptured.AWL_Message_PlaceCaptured_C.Draw");

	UAWL_Message_PlaceCaptured_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AWL_Message_PlaceCaptured.AWL_Message_PlaceCaptured_C.ExecuteUbergraph_AWL_Message_PlaceCaptured
// ()
void UAWL_Message_PlaceCaptured_C::ExecuteUbergraph_AWL_Message_PlaceCaptured()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AWL_Message_PlaceCaptured.AWL_Message_PlaceCaptured_C.ExecuteUbergraph_AWL_Message_PlaceCaptured");

	UAWL_Message_PlaceCaptured_C_ExecuteUbergraph_AWL_Message_PlaceCaptured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
