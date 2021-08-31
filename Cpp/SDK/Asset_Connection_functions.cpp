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

// Function Asset_Connection.Asset_Connection_C.SetConnection
// ()
void UAsset_Connection_C::SetConnection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Asset_Connection.Asset_Connection_C.SetConnection");

	UAsset_Connection_C_SetConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Asset_Connection.Asset_Connection_C.ExecuteUbergraph_Asset_Connection
// ()
void UAsset_Connection_C::ExecuteUbergraph_Asset_Connection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Asset_Connection.Asset_Connection_C.ExecuteUbergraph_Asset_Connection");

	UAsset_Connection_C_ExecuteUbergraph_Asset_Connection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
