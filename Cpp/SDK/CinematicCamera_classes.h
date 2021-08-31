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

// Class CinematicCamera.CameraRig_Crane
// 0x0000
class ACameraRig_Crane : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}



};

// Class CinematicCamera.CameraRig_Rail
// 0x0000
class ACameraRig_Rail : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}



	void GetRailSplineComponent();
};

// Class CinematicCamera.CineCameraActor
// 0x0000
class ACineCameraActor : public ACameraActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}



	void GetCineCameraComponent();
};

// Class CinematicCamera.CineCameraComponent
// 0x0000
class UCineCameraComponent : public UCameraComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}



	void SetLensPresetByName();
	void SetFilmbackPresetByName();
	void SetCurrentFocalLength();
	void GetVerticalFieldOfView();
	void GetLensPresetsCopy();
	void GetLensPresetName();
	void GetHorizontalFieldOfView();
	void GetFilmbackPresetName();
	void GetDefaultFilmbackPresetName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
