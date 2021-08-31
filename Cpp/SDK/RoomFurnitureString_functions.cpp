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

// Function RoomFurnitureString.RoomFurnitureString_C.Draw
// ()
void URoomFurnitureString_C::Draw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RoomFurnitureString.RoomFurnitureString_C.Draw");

	URoomFurnitureString_C_Draw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RoomFurnitureString.RoomFurnitureString_C.ExecuteUbergraph_RoomFurnitureString
// ()
void URoomFurnitureString_C::ExecuteUbergraph_RoomFurnitureString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RoomFurnitureString.RoomFurnitureString_C.ExecuteUbergraph_RoomFurnitureString");

	URoomFurnitureString_C_ExecuteUbergraph_RoomFurnitureString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
