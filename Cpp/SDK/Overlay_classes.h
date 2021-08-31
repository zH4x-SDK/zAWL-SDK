#pragma once

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

// Class Overlay.Overlays
// 0x0000
class UOverlays : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.Overlays");
		return ptr;
	}



};

// Class Overlay.BasicOverlays
// 0x0000
class UBasicOverlays : public UOverlays
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.BasicOverlays");
		return ptr;
	}



};

// Class Overlay.LocalizedOverlays
// 0x0000
class ULocalizedOverlays : public UOverlays
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
