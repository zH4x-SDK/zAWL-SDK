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

// Class FieldSystemEngine.FieldSystemActor
// 0x0000
class AFieldSystemActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		return ptr;
	}



};

// Class FieldSystemEngine.FieldSystem
// 0x0000
class UFieldSystem : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystem");
		return ptr;
	}



};

// Class FieldSystemEngine.FieldSystemComponent
// 0x0000
class UFieldSystemComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		return ptr;
	}



	void ResetFieldSystem();
	void ApplyUniformVectorFalloffForce();
	void ApplyStrainField();
	void ApplyStayDynamicField();
	void ApplyRadialVectorFalloffForce();
	void ApplyRadialForce();
	void ApplyPhysicsField();
	void ApplyLinearForce();
	void AddFieldCommand();
};

// Class FieldSystemEngine.FieldSystemMetaData
// 0x0000
class UFieldSystemMetaData : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaData");
		return ptr;
	}



};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// 0x0000
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataIteration");
		return ptr;
	}



	void SetMetaDataIteration();
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// 0x0000
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
		return ptr;
	}



	void SetMetaDataaProcessingResolutionType();
};

// Class FieldSystemEngine.FieldNodeBase
// 0x0000
class UFieldNodeBase : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeBase");
		return ptr;
	}



};

// Class FieldSystemEngine.FieldNodeInt
// 0x0000
class UFieldNodeInt : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeInt");
		return ptr;
	}



};

// Class FieldSystemEngine.FieldNodeFloat
// 0x0000
class UFieldNodeFloat : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeFloat");
		return ptr;
	}



};

// Class FieldSystemEngine.FieldNodeVector
// 0x0000
class UFieldNodeVector : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeVector");
		return ptr;
	}



};

// Class FieldSystemEngine.UniformInteger
// 0x0000
class UUniformInteger : public UFieldNodeInt
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.UniformInteger");
		return ptr;
	}



	void SetUniformInteger();
};

// Class FieldSystemEngine.RadialIntMask
// 0x0000
class URadialIntMask : public UFieldNodeInt
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.RadialIntMask");
		return ptr;
	}



	void SetRadialIntMask();
};

// Class FieldSystemEngine.UniformScalar
// 0x0000
class UUniformScalar : public UFieldNodeFloat
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.UniformScalar");
		return ptr;
	}



	void SetUniformScalar();
};

// Class FieldSystemEngine.RadialFalloff
// 0x0000
class URadialFalloff : public UFieldNodeFloat
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.RadialFalloff");
		return ptr;
	}



	void SetRadialFalloff();
};

// Class FieldSystemEngine.PlaneFalloff
// 0x0000
class UPlaneFalloff : public UFieldNodeFloat
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.PlaneFalloff");
		return ptr;
	}



	void SetPlaneFalloff();
};

// Class FieldSystemEngine.BoxFalloff
// 0x0000
class UBoxFalloff : public UFieldNodeFloat
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.BoxFalloff");
		return ptr;
	}



	void SetBoxFalloff();
};

// Class FieldSystemEngine.NoiseField
// 0x0000
class UNoiseField : public UFieldNodeFloat
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.NoiseField");
		return ptr;
	}



	void SetNoiseField();
};

// Class FieldSystemEngine.UniformVector
// 0x0000
class UUniformVector : public UFieldNodeVector
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.UniformVector");
		return ptr;
	}



	void SetUniformVector();
};

// Class FieldSystemEngine.RadialVector
// 0x0000
class URadialVector : public UFieldNodeVector
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.RadialVector");
		return ptr;
	}



	void SetRadialVector();
};

// Class FieldSystemEngine.RandomVector
// 0x0000
class URandomVector : public UFieldNodeVector
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.RandomVector");
		return ptr;
	}



	void SetRandomVector();
};

// Class FieldSystemEngine.OperatorField
// 0x0000
class UOperatorField : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.OperatorField");
		return ptr;
	}



	void SetOperatorField();
};

// Class FieldSystemEngine.ToIntegerField
// 0x0000
class UToIntegerField : public UFieldNodeInt
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.ToIntegerField");
		return ptr;
	}



	void SetToIntegerField();
};

// Class FieldSystemEngine.ToFloatField
// 0x0000
class UToFloatField : public UFieldNodeFloat
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.ToFloatField");
		return ptr;
	}



	void SetToFloatField();
};

// Class FieldSystemEngine.CullingField
// 0x0000
class UCullingField : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.CullingField");
		return ptr;
	}



	void SetCullingField();
};

// Class FieldSystemEngine.ReturnResultsTerminal
// 0x0000
class UReturnResultsTerminal : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FieldSystemEngine.ReturnResultsTerminal");
		return ptr;
	}



	void SetReturnResultsTerminal();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
