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

// Function MessageZoneInfo.MessageZoneInfo_C.AddMessage
// ()
void UMessageZoneInfo_C::AddMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageZoneInfo.MessageZoneInfo_C.AddMessage");

	UMessageZoneInfo_C_AddMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MessageZoneInfo.MessageZoneInfo_C.ExecuteUbergraph_MessageZoneInfo
// ()
void UMessageZoneInfo_C::ExecuteUbergraph_MessageZoneInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageZoneInfo.MessageZoneInfo_C.ExecuteUbergraph_MessageZoneInfo");

	UMessageZoneInfo_C_ExecuteUbergraph_MessageZoneInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
