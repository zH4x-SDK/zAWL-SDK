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

// Function ZCHAT_ZChatInterface.ZCHAT_ZChatInterface_C.ZCHAT_ShowMessage
// ()
void UZCHAT_ZChatInterface_C::ZCHAT_ShowMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ZCHAT_ZChatInterface.ZCHAT_ZChatInterface_C.ZCHAT_ShowMessage");

	UZCHAT_ZChatInterface_C_ZCHAT_ShowMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
