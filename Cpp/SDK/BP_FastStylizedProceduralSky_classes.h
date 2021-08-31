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

// BlueprintGeneratedClass BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C
// 0x0000
class ABP_FastStylizedProceduralSky_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C");
		return ptr;
	}



	void CheckOptimizationLights();
	void SelectCustomWeather();
	void TimeOfDayPresetChanged();
	void WetherPresetChanged();
	void UpdateCaptureMode();
	void SetTimeOfDayExternal();
	void UpdateLightning();
	void SetLightning();
	void SetTimeCycleDuration();
	void ChangeTimeOfDay();
	void SetTimeOfDayChangeMode();
	void SetTimeOfDayByIndex();
	void LerpTimeOfDayPreset();
	void UpdateTimeOfDayPreset();
	void Versioning();
	void SetSkylightCaptueMode();
	void GetPrecomputedSkyLight();
	void UpdateMoon();
	void SetShadowFunction();
	void UpdateShadowParameters();
	void SetTime();
	void UpdateSunParameters();
	void UpdateSkyLight();
	void SetPresetChangeMode();
	void SetPresetExternal();
	void LerpWeatherPreset();
	void UpdateExternalActors();
	void SampleCurveBySunHeight();
	void UpdateNightParameters();
	void UpdateWeatherPreset();
	void SetPresetByIndex();
	void UpdateLayersParameters();
	void UpdateCloudsParameters();
	void UpdateHorizonParameters();
	void ChangeWeather();
	void UpdateDateTime();
	void UpdateCurves();
	void UpdateSkyParameters();
	void UserConstructionScript();
	void LightningTimeline__FinishedFunc();
	void LightningTimeline__UpdateFunc();
	void ReceiveTick();
	void RecaptureSky();
	void ReceiveBeginPlay();
	void SetTimeOfDay();
	void PlayLightning();
	void PostConstructionScript();
	void ExecuteUbergraph_BP_FastStylizedProceduralSky();
	void OnLightningPlayed__DelegateSignature();
	void OnTimeOfDayPresetChanged__DelegateSignature();
	void OnWeatherPresetChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
