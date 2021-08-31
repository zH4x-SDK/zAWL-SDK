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

// Class InteractiveToolsFramework.InputBehavior
// 0x0000
class UInputBehavior : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AnyButtonInputBehavior
// 0x0000
class UAnyButtonInputBehavior : public UInputBehavior
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.AnyButtonInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// 0x0000
class UInteractiveGizmoBuilder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// 0x0000
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveGizmo
// 0x0000
class UInteractiveGizmo : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisAngleGizmo
// 0x0000
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// 0x0000
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisPositionGizmo
// 0x0000
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
// 0x0000
class UGizmoConstantAxisSource : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantAxisSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
// 0x0000
class UGizmoWorldAxisSource : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoWorldAxisSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
// 0x0000
class UGizmoComponentAxisSource : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentAxisSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ClickDragInputBehavior
// 0x0000
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveToolBuilder
// 0x0000
class UInteractiveToolBuilder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ClickDragToolBuilder
// 0x0000
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveTool
// 0x0000
class UInteractiveTool : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ClickDragTool
// 0x0000
class UClickDragTool : public UInteractiveTool
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InternalToolFrameworkActor
// 0x0000
class AInternalToolFrameworkActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InternalToolFrameworkActor");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoActor
// 0x0000
class AGizmoActor : public AInternalToolFrameworkActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoActor");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseComponent
// 0x0000
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseComponent");
		return ptr;
	}



	void UpdateWorldLocalState();
	void UpdateHoverState();
};

// Class InteractiveToolsFramework.GizmoArrowComponent
// 0x0000
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoArrowComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoCircleComponent
// 0x0000
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoCircleComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoTransformSource
// 0x0000
class UGizmoTransformSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformSource");
		return ptr;
	}



	void SetTransform();
	void GetTransform();
};

// Class InteractiveToolsFramework.GizmoAxisSource
// 0x0000
class UGizmoAxisSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisSource");
		return ptr;
	}



	void HasTangentVectors();
	void GetTangentVectors();
	void GetOrigin();
	void GetDirection();
};

// Class InteractiveToolsFramework.GizmoClickTarget
// 0x0000
class UGizmoClickTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoClickTarget");
		return ptr;
	}



	void UpdateHoverState();
};

// Class InteractiveToolsFramework.GizmoStateTarget
// 0x0000
class UGizmoStateTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoStateTarget");
		return ptr;
	}



	void EndUpdate();
	void BeginUpdate();
};

// Class InteractiveToolsFramework.GizmoFloatParameterSource
// 0x0000
class UGizmoFloatParameterSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoFloatParameterSource");
		return ptr;
	}



	void SetParameter();
	void GetParameter();
	void EndModify();
	void BeginModify();
};

// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// 0x0000
class UGizmoVec2ParameterSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoVec2ParameterSource");
		return ptr;
	}



	void SetParameter();
	void GetParameter();
	void EndModify();
	void BeginModify();
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
// 0x0000
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoRectangleComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// 0x0000
class UGizmoLambdaHitTarget : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaHitTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
// 0x0000
class UGizmoComponentHitTarget : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentHitTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InputBehaviorSet
// 0x0000
class UInputBehaviorSet : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InputBehaviorSource
// 0x0000
class UInputBehaviorSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InputRouter
// 0x0000
class UInputRouter : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InputRouter");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveGizmoManager
// 0x0000
class UInteractiveGizmoManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoManager");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
// 0x0000
class UInteractiveToolPropertySet : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolPropertySet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ToolContextTransactionProvider
// 0x0000
class UToolContextTransactionProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolContextTransactionProvider");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveToolManager
// 0x0000
class UInteractiveToolManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolManager");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ToolFrameworkComponent
// 0x0000
class UToolFrameworkComponent : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolFrameworkComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveToolsContext
// 0x0000
class UInteractiveToolsContext : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolsContext");
		return ptr;
	}



};

// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// 0x0000
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.KeyAsModifierInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// 0x0000
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleSelectionTool
// 0x0000
class USingleSelectionTool : public UInteractiveTool
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleSelectionTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MeshSurfacePointTool
// 0x0000
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MeshSurfacePointToolMouseBehavior
// 0x0000
class UMeshSurfacePointToolMouseBehavior : public UAnyButtonInputBehavior
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolMouseBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MouseHoverBehavior
// 0x0000
class UMouseHoverBehavior : public UInputBehavior
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MouseHoverBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// 0x0000
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiClickSequenceInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MultiSelectionTool
// 0x0000
class UMultiSelectionTool : public UInteractiveTool
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiSelectionTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// 0x0000
class UGizmoBaseFloatParameterSource : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseFloatParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// 0x0000
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalFloatParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// 0x0000
class UGizmoBaseVec2ParameterSource : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// 0x0000
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// 0x0000
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// 0x0000
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// 0x0000
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisRotationParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// 0x0000
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.PlanePositionGizmo
// 0x0000
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SelectionSet
// 0x0000
class USelectionSet : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.SelectionSet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MeshSelectionSet
// 0x0000
class UMeshSelectionSet : public USelectionSet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSelectionSet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleClickInputBehavior
// 0x0000
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleClickToolBuilder
// 0x0000
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleClickTool
// 0x0000
class USingleClickTool : public UInteractiveTool
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoNilStateTarget
// 0x0000
class UGizmoNilStateTarget : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoNilStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// 0x0000
class UGizmoLambdaStateTarget : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// 0x0000
class UGizmoObjectModifyStateTarget : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoObjectModifyStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// 0x0000
class UGizmoTransformChangeStateTarget : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformChangeStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformGizmoActor
// 0x0000
class ATransformGizmoActor : public AGizmoActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoActor");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformGizmoBuilder
// 0x0000
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformGizmo
// 0x0000
class UTransformGizmo : public UInteractiveGizmo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformProxy
// 0x0000
class UTransformProxy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformProxy");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseTransformSource
// 0x0000
class UGizmoBaseTransformSource : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseTransformSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// 0x0000
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentWorldTransformSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// 0x0000
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformProxyTransformSource");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
