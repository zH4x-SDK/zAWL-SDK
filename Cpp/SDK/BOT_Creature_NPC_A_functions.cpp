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

// Function BOT_Creature_NPC_A.BOT_Creature_NPC_A_C.UserConstructionScript
// ()
void ABOT_Creature_NPC_A_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BOT_Creature_NPC_A.BOT_Creature_NPC_A_C.UserConstructionScript");

	ABOT_Creature_NPC_A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
