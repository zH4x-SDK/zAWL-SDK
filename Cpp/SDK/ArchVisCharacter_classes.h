﻿#pragma once

// Name: AWL, Version: 4.24.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class ArchVisCharacter.ArchVisCharacter
// 0x0000
class AArchVisCharacter : public ACharacter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharacter");
		return ptr;
	}



};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// 0x0000
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharMovementComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
