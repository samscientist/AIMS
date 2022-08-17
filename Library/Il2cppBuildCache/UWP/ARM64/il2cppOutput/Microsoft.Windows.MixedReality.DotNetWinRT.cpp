#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1, T2, T3, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { &p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2, T3, T4, T5*, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, &p2, &p3, &p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// WinRT._VectorOfObjectBase`2/CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>
struct CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605;
// WinRT._VectorOfObjectBase`2/CreateT<System.Object,WinRT.Interop.IVectorViewOfObject>
struct CreateT_t26E05C6EF694BEB2BB953DC779832222A6626512;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct Dictionary_2_t69D6B109D32E790635B3FF7361434124D06AD073;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4;
// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0;
// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<WinRT.WinrtModule>
struct Func_1_tD8A84A53B12143B8723C25B6C21E79C0534FCCB5;
// System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8;
// System.Func`2<System.Int32,System.Int32Enum>
struct Func_2_t27812FE58E785602A6A0494E3EBE39B1DE1597C2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>
struct IReadOnlyList_1_tDF9BCA5420E317746550E0A0B92C59B5849B2014;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct IReadOnlyList_1_tACE436F2BDA24C29292E5524232C19D5A2C0F417;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct KeyCollection_t9498217A43DC9904758B46B2EFC727B1F14C90F1;
// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE;
// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4;
// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8;
// System.Lazy`1<System.Object>
struct Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>
struct ObjectReference_1_t04E3072FFDD22A787A84F5DBBCA9FA30A64CE899;
// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>
struct ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0;
// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>
struct ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>
struct ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>
struct ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>
struct ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>
struct ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>
struct ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>
struct ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>
struct ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>
struct ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>
struct ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct ValueCollection_t28DF867A308D3338CBF951A8A9490CB424B71C3E;
// WinRT.VectorViewOfEnum`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct VectorViewOfEnum_1_tF7644CE935AF97047C0DC0237D4739C36457E71E;
// WinRT.VectorViewOfEnum`1<System.Int32Enum>
struct VectorViewOfEnum_1_t586461B314BC1A30597BA839003438AD3D91CB68;
// WinRT.VectorViewOfObject`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>
struct VectorViewOfObject_1_tFE46525328D955B072EB9635CA8747986E2119D2;
// WinRT.VectorViewOfObject`1<System.Object>
struct VectorViewOfObject_1_tA62A736236DE5D1DB3407654E0C32EA2B6AA213D;
// WinRT.WeakLazy`1<System.Object>
struct WeakLazy_1_tEE5E9E366433C2295E0E7F55189E4E8B2A6F583E;
// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5;
// System.WeakReference`1<WinRT.WinrtModule>
struct WeakReference_1_t2C425508530B20B1082BAEBFD04B8B6EBCC62AEE;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.WeakReference`1<WinRT.DllModule>>[]
struct EntryU5BU5D_t2D90F227BEBD1554250454D0DEC1ABA06448DB20;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// Microsoft.Windows.Graphics.Holographic.HolographicCamera
struct HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D;
// Microsoft.Windows.Graphics.Holographic.HolographicCameraPose
struct HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103;
// Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters
struct HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443;
// Microsoft.Windows.Graphics.Holographic.HolographicFrame
struct HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF;
// Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction
struct HolographicFramePrediction_tD69CDC6735F51F12E74AAB82631EDE4C64AB6997;
// Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration
struct HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera
struct IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD;
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6
struct IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose
struct IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
struct IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4
struct IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441;
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame
struct IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF;
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction
struct IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA;
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration
struct IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44;
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2
struct IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25;
// WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1;
// WinRT.IObjectReference
struct IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471;
// WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.LazyHelper
struct LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WinRT.WinrtModule
struct WinrtModule_t60E422073093BD51F62229380BB5E6161746C587;
// WinRT.Interop._get_PropertyAsBool
struct _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7;
// WinRT.Interop._get_PropertyAsDouble
struct _get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239;
// WinRT.Interop._get_PropertyAsEnum
struct _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1;
// WinRT.Interop._get_PropertyAsObject
struct _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D;
// WinRT.Interop._get_PropertyAsUInt
struct _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7;
// WinRT.Interop._put_PropertyAsBool
struct _put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079;
// WinRT.Interop._put_PropertyAsEnum
struct _put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4;
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c
struct U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00;
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c
struct U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93;
// WinRT.Interop.IInspectableVftbl/_GetIids
struct _GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833;
// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName
struct _GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7;
// WinRT.Interop.IInspectableVftbl/_GetTrustLevel
struct _GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F;
// WinRT.Interop.IIteratorOfEnum/_GetMany
struct _GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534;
// WinRT.Interop.IIteratorOfEnum/_MoveNext
struct _MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96;
// WinRT.Interop.IIteratorOfObject/_GetMany
struct _GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B;
// WinRT.Interop.IIteratorOfObject/_MoveNext
struct _MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF;
// WinRT.Interop.IUnknownVftbl/_AddRef
struct _AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113;
// WinRT.Interop.IUnknownVftbl/_QueryInterface
struct _QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B;
// WinRT.Interop.IUnknownVftbl/_Release
struct _Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488;
// WinRT.Interop.IVectorViewOfEnum/_GetAt
struct _GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7;
// WinRT.Interop.IVectorViewOfEnum/_GetMany
struct _GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8;
// WinRT.Interop.IVectorViewOfEnum/_IndexOf
struct _IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9;
// WinRT.Interop.IVectorViewOfObject/_GetAt
struct _GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06;
// WinRT.Interop.IVectorViewOfObject/_GetMany
struct _GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8;
// WinRT.Interop.IVectorViewOfObject/_IndexOf
struct _IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF;
// WinRT.Platform/DotNETLinkage
struct DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4;
// WinRT.Platform/IL2CPPLinkage
struct IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069;
// WinRT.Platform/IPlatformLinkage
struct IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0;
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters
struct _GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t69D6B109D32E790635B3FF7361434124D06AD073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllModule_t59FA753ADAF12BC807F9E333A4DE966479274579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicFramePrediction_tD69CDC6735F51F12E74AAB82631EDE4C64AB6997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorViewOfEnum_1_tF7644CE935AF97047C0DC0237D4739C36457E71E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorViewOfObject_1_tFE46525328D955B072EB9635CA8747986E2119D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96;
IL2CPP_EXTERN_C String_t* _stringLiteral35588C4FF7022D2E8A6DFBE65CE509BB624FF21C;
IL2CPP_EXTERN_C String_t* _stringLiteral376C23DA1914D1A4BFE3DE23D6B327481318B5C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4201DFBD8CAB7C9A03E8B1367CFCBB72F014FBB8;
IL2CPP_EXTERN_C String_t* _stringLiteral73908C06C84C4BE07CC5E20FC2850C795792759B;
IL2CPP_EXTERN_C String_t* _stringLiteral8C30C2A121B10CF66C074014633BC557626C1D72;
IL2CPP_EXTERN_C String_t* _stringLiteralEB4CF09C157EFFADC79B7ADF5C0202D2B4C570CF;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m87B90C08A8868EC38BC40AF633C2B79F27E57AF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HolographicCameraRenderingParameters_U3C_ctorU3Eb__2_0_m5935E694FBDD6DFD4A7E4D1CCE5A3C370BB3495E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HolographicCamera_U3C_ctorU3Eb__2_0_mA84A9964591C660458C1E9625711643CDBB2B18B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HolographicViewConfiguration_U3C_ctorU3Eb__2_0_m514198ACCE44789DBAAFC066245B58F486D25EB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IL2CPPLinkage__AddDllDirectory_mB2E2CE51D5E3632AED171A9AC9333B9AC987E807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_mE160549453670CBA61781BE6CB0B79C5892A38C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_m1534B60ADC2D3C5FD929E56A41059C79BFF00D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_mD1C83FF1D34A2E1F35D7ABE0AF2664F0E26F93B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_m49002D8A977AFFC67D6261EB09FAACEB328E7323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_mFAE7C81F1F3B4B247B9E8622DBA30132350F8B86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_m25E3F08F7070F779F6F9A998B386FFD3DF80DC2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_m66C0DADD407FABCA4E65DE3DE449B00DFE138A96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mD9AF2FC425B61DE0A37881BEE845FF09E1E772D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_m579487DDA2F2441B3151FADCB636975541F6829A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_m7C81996BE44A2D6D2EEF6090CC0FCED214B6BB98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_mA12CF582CEA0267DBDC7BE7190B7F128E71E32E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleReference_Release_mD18E0FE8710E2B79D5B9ABB1D2F620705966EA70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m4211059F0BE59EA50A1914AB81F08B280660F6A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m81FA317933C0923CD23630BB4BF60DB37607937C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m95494375A01D046A55417F2C7851906E3C3E79B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m9EBBE2A17BC45BA8BCB6E92781618230881BBF8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_mAD4FB43EF4F01699CD9F2513C5F4B952A9EFEF34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_mB30E87AD7B9FEFC26064CFB4302F43FE1A143968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_FromNativePtr_m543528DEFCE2A27B052EAE66B526895564A73007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m884EB3BDE39F9CD41439A79CAA382D45679E2C5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_SupportedDepthReprojectionMethodsU3Eb__6_0_m8861B611C7F52AD092DE3FC74BEF321AFC301E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VectorViewOfEnum_1__ctor_mCC11E662D49CFE05A0BF43043941C18283D73790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VectorViewOfObject_1__ctor_m5BB6C758913ADC705E9AE23AC8405DF2D43206A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1__ctor_mB7A90BAADA5E514115709A36E1A5F6AE349F10C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1_get_Value_mA239626DD9380945F8D7477241A2EB33239DC041_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1;;
struct IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com;
struct IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com;;
struct IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke;
struct IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke;;
struct IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4;;
struct IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_com;
struct IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_com;;
struct IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_pinvoke;
struct IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_pinvoke;;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t215FF18FFAD3D5EFF9344A4F7020061E2F902553 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct Dictionary_2_t69D6B109D32E790635B3FF7361434124D06AD073  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2D90F227BEBD1554250454D0DEC1ABA06448DB20* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9498217A43DC9904758B46B2EFC727B1F14C90F1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t28DF867A308D3338CBF951A8A9490CB424B71C3E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE  : public RuntimeObject
{
	// System.LazyHelper modreq(System.Runtime.CompilerServices.IsVolatile) System.Lazy`1::_state
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ____state_0;
	// System.Func`1<T> System.Lazy`1::_factory
	Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4* ____factory_1;
	// T System.Lazy`1::_value
	IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* ____value_2;
};

// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4  : public RuntimeObject
{
	// System.LazyHelper modreq(System.Runtime.CompilerServices.IsVolatile) System.Lazy`1::_state
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ____state_0;
	// System.Func`1<T> System.Lazy`1::_factory
	Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0* ____factory_1;
	// T System.Lazy`1::_value
	IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* ____value_2;
};

// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8  : public RuntimeObject
{
	// System.LazyHelper modreq(System.Runtime.CompilerServices.IsVolatile) System.Lazy`1::_state
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ____state_0;
	// System.Func`1<T> System.Lazy`1::_factory
	Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB* ____factory_1;
	// T System.Lazy`1::_value
	IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* ____value_2;
};

// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5  : public RuntimeObject
{
	// System.Func`1<T> WinRT.WeakLazy`1::_constructor
	Func_1_tD8A84A53B12143B8723C25B6C21E79C0534FCCB5* ____constructor_0;
	// System.WeakReference`1<T> WinRT.WeakLazy`1::_instance
	WeakReference_1_t2C425508530B20B1082BAEBFD04B8B6EBCC62AEE* ____instance_1;
};
struct Il2CppArrayBounds;

// WinRT.DllModule
struct DllModule_t59FA753ADAF12BC807F9E333A4DE966479274579  : public RuntimeObject
{
};

struct DllModule_t59FA753ADAF12BC807F9E333A4DE966479274579_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>> WinRT.DllModule::_cache
	Dictionary_2_t69D6B109D32E790635B3FF7361434124D06AD073* ____cache_0;
};

// Microsoft.Windows.Graphics.Holographic.HolographicCamera
struct HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D  : public RuntimeObject
{
	// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.HolographicCamera::_interface
	IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* ____interface_0;
	// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6> Microsoft.Windows.Graphics.Holographic.HolographicCamera::_interface6
	Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE* ____interface6_1;
};

// Microsoft.Windows.Graphics.Holographic.HolographicCameraPose
struct HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103  : public RuntimeObject
{
	// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::_interface
	IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* ____interface_0;
};

// Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters
struct HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443  : public RuntimeObject
{
	// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::_interface
	IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* ____interface_0;
	// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4> Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::_interface4
	Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4* ____interface4_1;
};

// Microsoft.Windows.Graphics.Holographic.HolographicFrame
struct HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF  : public RuntimeObject
{
	// Microsoft.Windows.Graphics.Holographic.IHolographicFrame Microsoft.Windows.Graphics.Holographic.HolographicFrame::_interface
	IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* ____interface_0;
};

// Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction
struct HolographicFramePrediction_tD69CDC6735F51F12E74AAB82631EDE4C64AB6997  : public RuntimeObject
{
	// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::_interface
	IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* ____interface_0;
};

// Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration
struct HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2  : public RuntimeObject
{
	// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::_interface
	IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* ____interface_0;
	// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2> Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::_interface2
	Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8* ____interface2_1;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCamera
struct IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCamera::_obj
	ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* ____obj_0;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6
struct IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::_obj
	ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* ____obj_0;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose
struct IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::_obj
	ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* ____obj_0;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
struct IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::_obj
	ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* ____obj_0;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4
struct IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::_obj
	ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* ____obj_0;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicFrame
struct IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicFrame::_obj
	ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* ____obj_0;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction
struct IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::_obj
	ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* ____obj_0;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration
struct IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::_obj
	ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* ____obj_0;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2
struct IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25  : public RuntimeObject
{
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::_obj
	ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* ____obj_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// WinRT.Platform
struct Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34  : public RuntimeObject
{
};

struct Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_StaticFields
{
	// WinRT.Platform/IPlatformLinkage WinRT.Platform::_platformLinkage
	RuntimeObject* ____platformLinkage_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c
struct U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00  : public RuntimeObject
{
};

struct U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_StaticFields
{
	// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::<>9
	U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00* ___U3CU3E9_0;
	// WinRT._VectorOfObjectBase`2/CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::<>9__6_0
	CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605* ___U3CU3E9__6_0_1;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c
struct U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93  : public RuntimeObject
{
};

struct U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_StaticFields
{
	// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::<>9
	U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93* ___U3CU3E9_0;
	// System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::<>9__6_0
	Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8* ___U3CU3E9__6_0_1;
};

// WinRT.Platform/DotNETLinkage
struct DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4  : public RuntimeObject
{
};

// WinRT.Platform/IL2CPPLinkage
struct IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IUnknownVftbl/_QueryInterface WinRT.Interop.IUnknownVftbl::QueryInterface
	_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B* ___QueryInterface_0;
	// WinRT.Interop.IUnknownVftbl/_AddRef WinRT.Interop.IUnknownVftbl::AddRef
	_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113* ___AddRef_1;
	// WinRT.Interop.IUnknownVftbl/_Release WinRT.Interop.IUnknownVftbl::Release
	_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488* ___Release_2;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_pinvoke
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};
// Native definition for COM marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_com
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// WinRT.Interop._Bool
struct _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 
{
	// System.Int32 WinRT.Interop._Bool::RawValue
	int32_t ___RawValue_0;
};

// WinRT.VectorViewOfEnum`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct VectorViewOfEnum_1_tF7644CE935AF97047C0DC0237D4739C36457E71E  : public RuntimeObject
{
	// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum> WinRT.VectorViewOfEnum`1::_obj
	ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0* ____obj_0;
	// System.Guid WinRT.VectorViewOfEnum`1::_iidIterable
	Guid_t ____iidIterable_1;
	// System.Func`2<System.Int32,T> WinRT.VectorViewOfEnum`1::_castToEnum
	Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8* ____castToEnum_2;
};

// WinRT._VectorOfObjectBase`2<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>
struct _VectorOfObjectBase_2_tFF8FD6290A853403DF2547EC0901BBE3F39A42EA  : public RuntimeObject
{
	// WinRT.ObjectReference`1<I> WinRT._VectorOfObjectBase`2::_obj
	ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420* ____obj_0;
	// System.Guid WinRT._VectorOfObjectBase`2::_iidIterable
	Guid_t ____iidIterable_1;
	// WinRT._VectorOfObjectBase`2/CreateT<T,I> WinRT._VectorOfObjectBase`2::_createT
	CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605* ____createT_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Microsoft.Windows.Graphics.Holographic.IID
struct IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C  : public RuntimeObject
{
};

struct IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_StaticFields
{
	// System.Guid Microsoft.Windows.Graphics.Holographic.IID::IIterableOfHolographicCameraPose
	Guid_t ___IIterableOfHolographicCameraPose_0;
	// System.Guid Microsoft.Windows.Graphics.Holographic.IID::IIterableOfHolographicDepthReprojectionMethod
	Guid_t ___IIterableOfHolographicDepthReprojectionMethod_1;
};

// WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IUnknownVftbl WinRT.Interop.IInspectableVftbl::IUnknownVftbl
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ___IUnknownVftbl_0;
	// WinRT.Interop.IInspectableVftbl/_GetIids WinRT.Interop.IInspectableVftbl::GetIids
	_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833* ___GetIids_1;
	// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName WinRT.Interop.IInspectableVftbl::GetRuntimeClassName
	_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7* ___GetRuntimeClassName_2;
	// WinRT.Interop.IInspectableVftbl/_GetTrustLevel WinRT.Interop.IInspectableVftbl::GetTrustLevel
	_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F* ___GetTrustLevel_3;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke
{
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_pinvoke ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};
// Native definition for COM marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com
{
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_com ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};

// WinRT.ModuleReference
struct ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 
{
	// System.Object WinRT.ModuleReference::_module
	RuntimeObject* ____module_0;
	// System.Int32* WinRT.ModuleReference::_refCountPtr
	int32_t* ____refCountPtr_1;
	// System.IntPtr WinRT.ModuleReference::_nativeHandle
	intptr_t ____nativeHandle_2;
};
// Native definition for P/Invoke marshalling of WinRT.ModuleReference
struct ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshaled_pinvoke
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};
// Native definition for COM marshalling of WinRT.ModuleReference
struct ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshaled_com
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// WinRT.VftblPtr
struct VftblPtr_tCBB094DF560C81CC358867396B2FA7CC8BB6799D 
{
	// System.IntPtr WinRT.VftblPtr::Vftbl
	intptr_t ___Vftbl_0;
};

// WinRT.VectorViewOfObject`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>
struct VectorViewOfObject_1_tFE46525328D955B072EB9635CA8747986E2119D2  : public _VectorOfObjectBase_2_tFF8FD6290A853403DF2547EC0901BBE3F39A42EA
{
};

// WinRT.Interop.IIterableOfEnum
struct IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15 
{
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIterableOfEnum::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IIterableOfEnum::get_First
	_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* ___get_First_1;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IIterableOfEnum
struct IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};
// Native definition for COM marshalling of WinRT.Interop.IIterableOfEnum
struct IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};

// WinRT.Interop.IIterableOfObject
struct IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6 
{
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIterableOfObject::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IIterableOfObject::get_First
	_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* ___get_First_1;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IIterableOfObject
struct IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};
// Native definition for COM marshalling of WinRT.Interop.IIterableOfObject
struct IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};

// WinRT.Interop.IIteratorOfEnum
struct IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9 
{
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIteratorOfEnum::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsEnum WinRT.Interop.IIteratorOfEnum::get_Current
	_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* ___get_Current_1;
	// WinRT.Interop._get_PropertyAsBool WinRT.Interop.IIteratorOfEnum::get_HasCurrent
	_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* ___get_HasCurrent_2;
	// WinRT.Interop.IIteratorOfEnum/_MoveNext WinRT.Interop.IIteratorOfEnum::MoveNext
	_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96* ___MoveNext_3;
	// WinRT.Interop.IIteratorOfEnum/_GetMany WinRT.Interop.IIteratorOfEnum::GetMany
	_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534* ___GetMany_4;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IIteratorOfEnum
struct IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IIteratorOfEnum
struct IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};

// WinRT.Interop.IIteratorOfObject
struct IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF 
{
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIteratorOfObject::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IIteratorOfObject::get_Current
	_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* ___get_Current_1;
	// WinRT.Interop._get_PropertyAsBool WinRT.Interop.IIteratorOfObject::get_HasCurrent
	_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* ___get_HasCurrent_2;
	// WinRT.Interop.IIteratorOfObject/_MoveNext WinRT.Interop.IIteratorOfObject::MoveNext
	_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF* ___MoveNext_3;
	// WinRT.Interop.IIteratorOfObject/_GetMany WinRT.Interop.IIteratorOfObject::GetMany
	_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B* ___GetMany_4;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IIteratorOfObject
struct IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IIteratorOfObject
struct IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};

// WinRT.IObjectReference
struct IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471  : public RuntimeObject
{
	// System.IntPtr WinRT.IObjectReference::ThisPtr
	intptr_t ___ThisPtr_0;
	// WinRT.ModuleReference WinRT.IObjectReference::Module
	ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___Module_1;
	// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::<VftblIUnknown>k__BackingField
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ___U3CVftblIUnknownU3Ek__BackingField_2;
};

// WinRT.Interop.IVectorViewOfEnum
struct IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B 
{
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IVectorViewOfEnum::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// WinRT.Interop.IVectorViewOfEnum/_GetAt WinRT.Interop.IVectorViewOfEnum::GetAt
	_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7* ___GetAt_1;
	// WinRT.Interop._get_PropertyAsUInt WinRT.Interop.IVectorViewOfEnum::get_Size
	_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* ___get_Size_2;
	// WinRT.Interop.IVectorViewOfEnum/_IndexOf WinRT.Interop.IVectorViewOfEnum::IndexOf
	_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9* ___IndexOf_3;
	// WinRT.Interop.IVectorViewOfEnum/_GetMany WinRT.Interop.IVectorViewOfEnum::GetMany
	_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8* ___GetMany_4;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IVectorViewOfEnum
struct IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IVectorViewOfEnum
struct IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};

// WinRT.Interop.IVectorViewOfObject
struct IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1 
{
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IVectorViewOfObject::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// WinRT.Interop.IVectorViewOfObject/_GetAt WinRT.Interop.IVectorViewOfObject::GetAt
	_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06* ___GetAt_1;
	// WinRT.Interop._get_PropertyAsUInt WinRT.Interop.IVectorViewOfObject::get_Size
	_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* ___get_Size_2;
	// WinRT.Interop.IVectorViewOfObject/_IndexOf WinRT.Interop.IVectorViewOfObject::IndexOf
	_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF* ___IndexOf_3;
	// WinRT.Interop.IVectorViewOfObject/_GetMany WinRT.Interop.IVectorViewOfObject::GetMany
	_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8* ___GetMany_4;
};
// Native definition for P/Invoke marshalling of WinRT.Interop.IVectorViewOfObject
struct IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IVectorViewOfObject
struct IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// WinRT.WinrtModule
struct WinrtModule_t60E422073093BD51F62229380BB5E6161746C587  : public RuntimeObject
{
	// WinRT.ModuleReference WinRT.WinrtModule::_module
	ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ____module_0;
};

struct WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_StaticFields
{
	// WinRT.WeakLazy`1<WinRT.WinrtModule> WinRT.WinrtModule::_instance
	WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5* ____instance_1;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
struct Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::get_RenderTargetSize
	intptr_t ___get_RenderTargetSize_1;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::get_ViewportScaleFactor
	intptr_t ___get_ViewportScaleFactor_2;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::put_ViewportScaleFactor
	intptr_t ___put_ViewportScaleFactor_3;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::get_IsStereo
	intptr_t ___get_IsStereo_4;
	// WinRT.Interop._get_PropertyAsUInt Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::get_Id
	_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* ___get_Id_5;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::SetNearPlaneDistance
	intptr_t ___SetNearPlaneDistance_6;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl::SetFarPlaneDistance
	intptr_t ___SetFarPlaneDistance_7;
};
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
struct Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	intptr_t ___get_RenderTargetSize_1;
	intptr_t ___get_ViewportScaleFactor_2;
	intptr_t ___put_ViewportScaleFactor_3;
	intptr_t ___get_IsStereo_4;
	Il2CppMethodPointer ___get_Id_5;
	intptr_t ___SetNearPlaneDistance_6;
	intptr_t ___SetFarPlaneDistance_7;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
struct Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	intptr_t ___get_RenderTargetSize_1;
	intptr_t ___get_ViewportScaleFactor_2;
	intptr_t ___put_ViewportScaleFactor_3;
	intptr_t ___get_IsStereo_4;
	Il2CppMethodPointer ___get_Id_5;
	intptr_t ___SetNearPlaneDistance_6;
	intptr_t ___SetFarPlaneDistance_7;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
struct Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl::get_ViewConfiguration
	_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* ___get_ViewConfiguration_1;
};
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
struct Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_ViewConfiguration_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
struct Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_ViewConfiguration_1;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
struct Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl::get_HolographicCamera
	_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* ___get_HolographicCamera_1;
};
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
struct Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_HolographicCamera_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
struct Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_HolographicCamera_1;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
struct Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2 
{
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
};
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
struct Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
struct Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
struct Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsEnum Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl::get_DepthReprojectionMethod
	_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* ___get_DepthReprojectionMethod_1;
	// WinRT.Interop._put_PropertyAsEnum Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl::put_DepthReprojectionMethod
	_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* ___put_DepthReprojectionMethod_2;
};
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
struct Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_DepthReprojectionMethod_1;
	Il2CppMethodPointer ___put_DepthReprojectionMethod_2;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
struct Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_DepthReprojectionMethod_1;
	Il2CppMethodPointer ___put_DepthReprojectionMethod_2;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
struct Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::get_AddedCameras
	intptr_t ___get_AddedCameras_1;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::get_RemovedCameras
	intptr_t ___get_RemovedCameras_2;
	// Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::GetRenderingParameters
	_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* ___GetRenderingParameters_3;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::get_Duration
	intptr_t ___get_Duration_4;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl::get_CurrentPrediction
	_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* ___get_CurrentPrediction_5;
};
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
struct Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	intptr_t ___get_AddedCameras_1;
	intptr_t ___get_RemovedCameras_2;
	Il2CppMethodPointer ___GetRenderingParameters_3;
	intptr_t ___get_Duration_4;
	Il2CppMethodPointer ___get_CurrentPrediction_5;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
struct Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	intptr_t ___get_AddedCameras_1;
	intptr_t ___get_RemovedCameras_2;
	Il2CppMethodPointer ___GetRenderingParameters_3;
	intptr_t ___get_Duration_4;
	Il2CppMethodPointer ___get_CurrentPrediction_5;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
struct Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl::get_CameraPoses
	_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* ___get_CameraPoses_1;
};
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
struct Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_CameraPoses_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
struct Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_CameraPoses_1;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
struct Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_NativeRenderTargetSize
	intptr_t ___get_NativeRenderTargetSize_1;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_RenderTargetSize
	intptr_t ___get_RenderTargetSize_2;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::RequestRenderTargetSize
	intptr_t ___RequestRenderTargetSize_3;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_SupportedPixelFormats
	intptr_t ___get_SupportedPixelFormats_4;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_PixelFormat
	intptr_t ___get_PixelFormat_5;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::put_PixelFormat
	intptr_t ___put_PixelFormat_6;
	// WinRT.Interop._get_PropertyAsBool Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_IsStereo
	_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* ___get_IsStereo_7;
	// WinRT.Interop._get_PropertyAsDouble Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_RefreshRate
	_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239* ___get_RefreshRate_8;
	// WinRT.Interop._get_PropertyAsEnum Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_Kind
	_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* ___get_Kind_9;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_Display
	_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* ___get_Display_10;
	// WinRT.Interop._get_PropertyAsBool Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::get_IsEnabled
	_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* ___get_IsEnabled_11;
	// WinRT.Interop._put_PropertyAsBool Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl::put_IsEnabled
	_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079* ___put_IsEnabled_12;
};
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
struct Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	intptr_t ___get_NativeRenderTargetSize_1;
	intptr_t ___get_RenderTargetSize_2;
	intptr_t ___RequestRenderTargetSize_3;
	intptr_t ___get_SupportedPixelFormats_4;
	intptr_t ___get_PixelFormat_5;
	intptr_t ___put_PixelFormat_6;
	Il2CppMethodPointer ___get_IsStereo_7;
	Il2CppMethodPointer ___get_RefreshRate_8;
	Il2CppMethodPointer ___get_Kind_9;
	Il2CppMethodPointer ___get_Display_10;
	Il2CppMethodPointer ___get_IsEnabled_11;
	Il2CppMethodPointer ___put_IsEnabled_12;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
struct Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	intptr_t ___get_NativeRenderTargetSize_1;
	intptr_t ___get_RenderTargetSize_2;
	intptr_t ___RequestRenderTargetSize_3;
	intptr_t ___get_SupportedPixelFormats_4;
	intptr_t ___get_PixelFormat_5;
	intptr_t ___put_PixelFormat_6;
	Il2CppMethodPointer ___get_IsStereo_7;
	Il2CppMethodPointer ___get_RefreshRate_8;
	Il2CppMethodPointer ___get_Kind_9;
	Il2CppMethodPointer ___get_Display_10;
	Il2CppMethodPointer ___get_IsEnabled_11;
	Il2CppMethodPointer ___put_IsEnabled_12;
};

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
struct Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693 
{
	static const Il2CppGuid CLSID;

	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl::IInspectableVftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl::get_SupportedDepthReprojectionMethods
	_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* ___get_SupportedDepthReprojectionMethods_1;
};
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
struct Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshaled_pinvoke
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_SupportedDepthReprojectionMethods_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
struct Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshaled_com
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_SupportedDepthReprojectionMethods_1;
};

// WinRT._VectorOfObjectBase`2/CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>
struct CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605  : public MulticastDelegate_t
{
};

// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4  : public MulticastDelegate_t
{
};

// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0  : public MulticastDelegate_t
{
};

// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8  : public MulticastDelegate_t
{
};

// WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>
struct ObjectReference_1_t04E3072FFDD22A787A84F5DBBCA9FA30A64CE899  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>
struct ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>
struct ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>
struct ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>
struct ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>
struct ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>
struct ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>
struct ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>
struct ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>
struct ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>
struct ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>
struct ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED  : public IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471
{
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693 ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_18;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_19;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_20;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_21;
};

// WinRT.Interop._get_PropertyAsBool
struct _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsDouble
struct _get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsEnum
struct _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsObject
struct _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D  : public MulticastDelegate_t
{
};

// WinRT.Interop._get_PropertyAsUInt
struct _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7  : public MulticastDelegate_t
{
};

// WinRT.Interop._put_PropertyAsBool
struct _put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079  : public MulticastDelegate_t
{
};

// WinRT.Interop._put_PropertyAsEnum
struct _put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4  : public MulticastDelegate_t
{
};

// WinRT.Interop.IInspectableVftbl/_GetIids
struct _GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833  : public MulticastDelegate_t
{
};

// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName
struct _GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7  : public MulticastDelegate_t
{
};

// WinRT.Interop.IInspectableVftbl/_GetTrustLevel
struct _GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F  : public MulticastDelegate_t
{
};

// WinRT.Interop.IIteratorOfEnum/_GetMany
struct _GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534  : public MulticastDelegate_t
{
};

// WinRT.Interop.IIteratorOfEnum/_MoveNext
struct _MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96  : public MulticastDelegate_t
{
};

// WinRT.Interop.IIteratorOfObject/_GetMany
struct _GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B  : public MulticastDelegate_t
{
};

// WinRT.Interop.IIteratorOfObject/_MoveNext
struct _MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF  : public MulticastDelegate_t
{
};

// WinRT.Interop.IUnknownVftbl/_AddRef
struct _AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113  : public MulticastDelegate_t
{
};

// WinRT.Interop.IUnknownVftbl/_QueryInterface
struct _QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B  : public MulticastDelegate_t
{
};

// WinRT.Interop.IUnknownVftbl/_Release
struct _Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488  : public MulticastDelegate_t
{
};

// WinRT.Interop.IVectorViewOfEnum/_GetAt
struct _GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7  : public MulticastDelegate_t
{
};

// WinRT.Interop.IVectorViewOfEnum/_GetMany
struct _GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8  : public MulticastDelegate_t
{
};

// WinRT.Interop.IVectorViewOfEnum/_IndexOf
struct _IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9  : public MulticastDelegate_t
{
};

// WinRT.Interop.IVectorViewOfObject/_GetAt
struct _GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06  : public MulticastDelegate_t
{
};

// WinRT.Interop.IVectorViewOfObject/_GetMany
struct _GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8  : public MulticastDelegate_t
{
};

// WinRT.Interop.IVectorViewOfObject/_IndexOf
struct _IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF  : public MulticastDelegate_t
{
};

// Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters
struct _GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022  : public MulticastDelegate_t
{
};

// System.DllNotFoundException
struct DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_pinvoke(const IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4& unmarshaled, IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_pinvoke_back(const IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_pinvoke& marshaled, IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4& unmarshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_pinvoke_cleanup(IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_com(const IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4& unmarshaled, IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_com_back(const IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_com& marshaled, IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4& unmarshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_com_cleanup(IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(const IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1& unmarshaled, IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(const IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke& marshaled, IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1& unmarshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(const IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1& unmarshaled, IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(const IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com& marshaled, IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1& unmarshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T WinRT.WeakLazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakLazy_1_get_Value_m269BA1569FE1CC837F091ADDFFFD3A481F3D4759_gshared (WeakLazy_1_tEE5E9E366433C2295E0E7F55189E4E8B2A6F583E* __this, const RuntimeMethod* method) ;
// System.Void WinRT.WeakLazy`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakLazy_1__ctor_m25C096AC4CFD22D71F63F6AA1C0E63E0DD611A13_gshared (WeakLazy_1_tEE5E9E366433C2295E0E7F55189E4E8B2A6F583E* __this, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* ObjectReference_1_Attach_m9EBBE2A17BC45BA8BCB6E92781618230881BBF8A_gshared (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* ObjectReference_1_Attach_m81FA317933C0923CD23630BB4BF60DB37607937C_gshared (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>::FromNativePtr(WinRT.ModuleReference,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t04E3072FFDD22A787A84F5DBBCA9FA30A64CE899* ObjectReference_1_FromNativePtr_m543528DEFCE2A27B052EAE66B526895564A73007_gshared (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t ___thisPtr1, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* IObjectReference_As_TisVftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_m49002D8A977AFFC67D6261EB09FAACEB328E7323_gshared (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* IObjectReference_As_TisVftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_mFAE7C81F1F3B4B247B9E8622DBA30132350F8B86_gshared (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* ObjectReference_1_Attach_mAD4FB43EF4F01699CD9F2513C5F4B952A9EFEF34_gshared (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Lazy`1<System.Object>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_m4CD0C5ACC0541018DB9BDB090B1EFE67D5A9CEF1_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___valueFactory0, const RuntimeMethod* method) ;
// T System.Lazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* IObjectReference_As_TisVftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_mE160549453670CBA61781BE6CB0B79C5892A38C6_gshared (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0* ObjectReference_1_Attach_mB30E87AD7B9FEFC26064CFB4302F43FE1A143968_gshared (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Int32,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF7EA0C0597102B34AE4C37131B8E3B99C68A91C6_gshared (Func_2_t27812FE58E785602A6A0494E3EBE39B1DE1597C2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WinRT.VectorViewOfEnum`1<System.Int32Enum>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>,System.Guid,System.Func`2<System.Int32,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorViewOfEnum_1__ctor_mCC91911D84849ED0DD623411A86289D0ACF9CF45_gshared (VectorViewOfEnum_1_t586461B314BC1A30597BA839003438AD3D91CB68* __this, ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0* ___obj0, Guid_t ___iidIterable1, Func_2_t27812FE58E785602A6A0494E3EBE39B1DE1597C2* ___castToEnum2, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420* ObjectReference_1_Attach_m95494375A01D046A55417F2C7851906E3C3E79B1_gshared (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method) ;
// System.Void WinRT._VectorOfObjectBase`2/CreateT<System.Object,WinRT.Interop.IVectorViewOfObject>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateT__ctor_mEF676E1CE98313DC7782B105D9CB4364A9F74A30_gshared (CreateT_t26E05C6EF694BEB2BB953DC779832222A6626512* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WinRT.VectorViewOfObject`1<System.Object>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>,System.Guid,WinRT._VectorOfObjectBase`2/CreateT<T,WinRT.Interop.IVectorViewOfObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorViewOfObject_1__ctor_m844C6447DC0A3FED5A084A2C40F29C697EAF5633_gshared (VectorViewOfObject_1_tA62A736236DE5D1DB3407654E0C32EA2B6AA213D* __this, ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420* ___obj0, Guid_t ___iidIterable1, CreateT_t26E05C6EF694BEB2BB953DC779832222A6626512* ___createT2, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* IObjectReference_As_TisVftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_m1534B60ADC2D3C5FD929E56A41059C79BFF00D90_gshared (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* ObjectReference_1_Attach_m4211059F0BE59EA50A1914AB81F08B280660F6A4_gshared (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* IObjectReference_As_TisVftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_mD1C83FF1D34A2E1F35D7ABE0AF2664F0E26F93B3_gshared (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method) ;

// System.Void WinRT.Platform/DotNETLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_m162F691922D4E48C7855309A0500070010755E59 (DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4* __this, const RuntimeMethod* method) ;
// System.Void WinRT.Platform/IL2CPPLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_m5F0408A626619E91CF126264DACE7001762AD607 (IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069* __this, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_mE6EBB66D082833D71591DE47DD6D49905894C430 (const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::ThrowExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E (int32_t ___errorCode0, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/DotNETLinkage::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_AddDllDirectory_mC01F86774A3E0582BCD37601E57FAB4FE8B0E059 (String_t* ___pathName0, const RuntimeMethod* method) ;
// System.Boolean WinRT.Platform/DotNETLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_m660549ED20E910E6279B5634A7DEF60388405810 (intptr_t ___moduleHandle0, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_m1D8CB106887E9C652DCAA62ECD3639C4C1F19CA8 (intptr_t* ___cookie0, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_mBF87903711A780C9F336572DFC14A1C6B3693272 (intptr_t ___cookie0, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_mDA04C0AFA8EF82D178F0CDA5D035865E8EC15013 (intptr_t ___hstring0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetHRForLastWin32Error_m82A7BCC0552EB054386277BD757F2CE017DE614D (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean WinRT.Platform/IL2CPPLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m1B984F17666B4BB7296B1E56420989065A59A37B (intptr_t ___moduleHandle0, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_mDD0CF2F5D65F1095CBD3C0978E8913CAE46721A3 (intptr_t* ___cookie0, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_m5082567B423723F3FFDEC6DB62D9D92EAC953D7B (intptr_t ___cookie0, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_mD3570C8E1685BB0AE9258DCA86584CDA18FC01E0 (intptr_t ___hstring0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocCoTaskMem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocCoTaskMem_m95086FD05127CA9C384799B002A977490DBA084E (int32_t ___cb0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_m43E9D2E7F8A426E17C9AF42439F196DAB0A89E36 (const RuntimeMethod* method) ;
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference__ctor_m097E8F45DCF21119185D353A358D193445E7DB59 (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19* __this, RuntimeObject* ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m7AC68EC482A6AFD97BCEFABA0FD45D203F3EA2E1 (int32_t* ___location0, const RuntimeMethod* method) ;
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ModuleReference_AddRef_m70B0C59E22EA83EF010794708BE8403D595E0585 (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_mFACC375A9985A7E1A3473EECE768B1D2ECB8CEF5 (int32_t* ___location0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_FreeLibrary_mBA740B0EA210A13AF54991478D49C9E4784C7869 (intptr_t ___moduleHandle0, const RuntimeMethod* method) ;
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_m07AF33659C486DFDEC1C6C233640149D56B1A006 (intptr_t ___cookie0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeCoTaskMem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeCoTaskMem_mE241F2AFFBBC79B1441FD2F15F1CCFCE519F33F1 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void WinRT.ModuleReference::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference_Release_mD18E0FE8710E2B79D5B9ABB1D2F620705966EA70 (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::.ctor()
inline void Dictionary_2__ctor_m87B90C08A8868EC38BC40AF633C2B79F27E57AF1 (Dictionary_2_t69D6B109D32E790635B3FF7361434124D06AD073* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t69D6B109D32E790635B3FF7361434124D06AD073*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE (const RuntimeMethod* method) ;
// System.Object System.AppDomain::GetData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppDomain_GetData_m10C16E04DB1CB63E8481AA27D57B58A5E2895C92 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Int32 WinRT.Platform::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_AddDllDirectory_mE47A4725C3C1E595E24807FF8FE1E6246912BA47 (String_t* ___pathName0, const RuntimeMethod* method) ;
// T WinRT.WeakLazy`1<WinRT.WinrtModule>::get_Value()
inline WinrtModule_t60E422073093BD51F62229380BB5E6161746C587* WeakLazy_1_get_Value_mA239626DD9380945F8D7477241A2EB33239DC041 (WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5* __this, const RuntimeMethod* method)
{
	return ((  WinrtModule_t60E422073093BD51F62229380BB5E6161746C587* (*) (WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5*, const RuntimeMethod*))WeakLazy_1_get_Value_m269BA1569FE1CC837F091ADDFFFD3A481F3D4759_gshared)(__this, method);
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_m4EB749424328F76C2DEE20C24331A00B6ADCEB7E (const RuntimeMethod* method) ;
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ModuleReference_Allocate_mE0678068DD625EA2D90D95526225CA0A73B49B1B (RuntimeObject* ___module0, intptr_t* ___nativeHandle1, const RuntimeMethod* method) ;
// System.Void WinRT.WeakLazy`1<WinRT.WinrtModule>::.ctor()
inline void WeakLazy_1__ctor_mB7A90BAADA5E514115709A36E1A5F6AE349F10C8 (WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5* __this, const RuntimeMethod* method)
{
	((  void (*) (WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5*, const RuntimeMethod*))WeakLazy_1__ctor_m25C096AC4CFD22D71F63F6AA1C0E63E0DD611A13_gshared)(__this, method);
}
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830 (Guid_t* __this, String_t* ___g0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFrame::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicFrame__ctor_m8ACDA90ABAB9D72BFB7274FBC90D38785D842091 (IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* __this, ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* ___obj0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters::Invoke(System.IntPtr,System.IntPtr,System.IntPtr*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_inline (_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* ObjectReference_1_Attach_m9EBBE2A17BC45BA8BCB6E92781618230881BBF8A (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* (*) (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19, intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m9EBBE2A17BC45BA8BCB6E92781618230881BBF8A_gshared)(___module0, ___thisPtr1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* IHolographicCameraRenderingParameters_op_Implicit_m609E27B63ECD6C92790ECDFAE4EAE13660D07935 (ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* ___obj0, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._get_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_inline (_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* ObjectReference_1_Attach_m81FA317933C0923CD23630BB4BF60DB37607937C (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* (*) (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19, intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m81FA317933C0923CD23630BB4BF60DB37607937C_gshared)(___module0, ___thisPtr1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* IHolographicFramePrediction_op_Implicit_mB8A8C290A58FF65AF318F5A6350D2EF1D85062B3 (ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* ___obj0, const RuntimeMethod* method) ;
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 WinrtModule_get_Instance_mE625543305636C7438845256485038140A90E38C (const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>::FromNativePtr(WinRT.ModuleReference,System.IntPtr)
inline ObjectReference_1_t04E3072FFDD22A787A84F5DBBCA9FA30A64CE899* ObjectReference_1_FromNativePtr_m543528DEFCE2A27B052EAE66B526895564A73007 (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t04E3072FFDD22A787A84F5DBBCA9FA30A64CE899* (*) (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19, intptr_t, const RuntimeMethod*))ObjectReference_1_FromNativePtr_m543528DEFCE2A27B052EAE66B526895564A73007_gshared)(___module0, ___thisPtr1, method);
}
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>()
inline ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* IObjectReference_As_TisVftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_m49002D8A977AFFC67D6261EB09FAACEB328E7323 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* (*) (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*, const RuntimeMethod*))IObjectReference_As_TisVftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_m49002D8A977AFFC67D6261EB09FAACEB328E7323_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame Microsoft.Windows.Graphics.Holographic.IHolographicFrame::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* IHolographicFrame_op_Implicit_mD9710DDA9E0E249BEA071E61A62C0C29748C1D32 (ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFrame::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicFrame__ctor_m345466F80A6EAE54A1EFB1526D343AA248DCC43D (HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF* __this, IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* ___interface0, const RuntimeMethod* method) ;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicFrame::GetRenderingParameters(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* IHolographicFrame_GetRenderingParameters_m1A3C28E5DC85046CA1076EC77084C036D247B417 (IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* __this, IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* ___cameraPose0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCameraRenderingParameters__ctor_m77E08C169EF37D22321691F6175950E15DE1B93B (HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443* __this, IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* ___interface0, const RuntimeMethod* method) ;
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFrame::get_CurrentPrediction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* IHolographicFrame_get_CurrentPrediction_m929D8A5A03EC055662ACF9F510EEC5544581905C (IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicFramePrediction__ctor_m73ACDC396D6A0B1FA4B02D37CC64D987611AD413 (HolographicFramePrediction_tD69CDC6735F51F12E74AAB82631EDE4C64AB6997* __this, IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* ___interface0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCamera__ctor_m28B43862984AE33D1949D37867972A8473EDF0E0 (IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* __this, ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* ___obj0, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._get_PropertyAsUInt::Invoke(System.IntPtr,System.UInt32*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_inline (_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>()
inline ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* IObjectReference_As_TisVftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_mFAE7C81F1F3B4B247B9E8622DBA30132350F8B86 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* (*) (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*, const RuntimeMethod*))IObjectReference_As_TisVftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_mFAE7C81F1F3B4B247B9E8622DBA30132350F8B86_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* IHolographicCamera6_op_Implicit_m308CA97E276892403287C842BD09253FCD1BC617 (ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCamera6__ctor_m689548BEF952680395722F8DF5CBD24B8774EFA8 (IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* __this, ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* ___obj0, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* ObjectReference_1_Attach_mAD4FB43EF4F01699CD9F2513C5F4B952A9EFEF34 (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* (*) (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19, intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_mAD4FB43EF4F01699CD9F2513C5F4B952A9EFEF34_gshared)(___module0, ___thisPtr1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* IHolographicViewConfiguration_op_Implicit_m993439ED4B0359C5BDE4C194D607FF7D0345F7AB (ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m0E7DEDADBE84DA12C37404FAA9587ADCAA5C3E71 (Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>::.ctor(System.Func`1<T>)
inline void Lazy_1__ctor_m25E3F08F7070F779F6F9A998B386FFD3DF80DC2B (Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE* __this, Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4* ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE*, Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4*, const RuntimeMethod*))Lazy_1__ctor_m4CD0C5ACC0541018DB9BDB090B1EFE67D5A9CEF1_gshared)(__this, ___valueFactory0, method);
}
// System.UInt32 Microsoft.Windows.Graphics.Holographic.IHolographicCamera::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IHolographicCamera_get_Id_mC10C1E23A01D14FE8A070CD87239080986DFC23A (IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* __this, const RuntimeMethod* method) ;
// T System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>::get_Value()
inline IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* Lazy_1_get_Value_mA12CF582CEA0267DBDC7BE7190B7F128E71E32E4 (Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE* __this, const RuntimeMethod* method)
{
	return ((  IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* (*) (Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE*, const RuntimeMethod*))Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::get_ViewConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* IHolographicCamera6_get_ViewConfiguration_m57F9DDF897ADD544372792EDDA6369448FC87A57 (IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicViewConfiguration__ctor_m0C974A0982E6D3C9B9A105255298C2DE237C7666 (HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2* __this, IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* ___interface0, const RuntimeMethod* method) ;
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* IHolographicCamera6_op_Implicit_m7DCCC77DFCDBFCAF83F1B1ECF45A8689A0E916D3 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicViewConfiguration__ctor_m6F4357ADBBC3184FAF075CD2767D8532DF6BE67B (IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* __this, ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* ___obj0, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>()
inline ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* IObjectReference_As_TisVftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_mE160549453670CBA61781BE6CB0B79C5892A38C6 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* (*) (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*, const RuntimeMethod*))IObjectReference_As_TisVftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_mE160549453670CBA61781BE6CB0B79C5892A38C6_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* IHolographicViewConfiguration2_op_Implicit_m3DAFE1B2B225AB857A7446CAE065FA0007059F76 (ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicViewConfiguration2__ctor_m100EE93A9ECCEC634BCD359E6F99DA09C75CACCB (IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* __this, ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* ___obj0, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0* ObjectReference_1_Attach_mB30E87AD7B9FEFC26064CFB4302F43FE1A143968 (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0* (*) (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19, intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_mB30E87AD7B9FEFC26064CFB4302F43FE1A143968_gshared)(___module0, ___thisPtr1, method);
}
// System.Void System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m67C4BB45599DFBAE5935CB6263C0152FC9276F23 (Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mF7EA0C0597102B34AE4C37131B8E3B99C68A91C6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WinRT.VectorViewOfEnum`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>,System.Guid,System.Func`2<System.Int32,T>)
inline void VectorViewOfEnum_1__ctor_mCC11E662D49CFE05A0BF43043941C18283D73790 (VectorViewOfEnum_1_tF7644CE935AF97047C0DC0237D4739C36457E71E* __this, ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0* ___obj0, Guid_t ___iidIterable1, Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8* ___castToEnum2, const RuntimeMethod* method)
{
	((  void (*) (VectorViewOfEnum_1_tF7644CE935AF97047C0DC0237D4739C36457E71E*, ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0*, Guid_t, Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8*, const RuntimeMethod*))VectorViewOfEnum_1__ctor_mCC91911D84849ED0DD623411A86289D0ACF9CF45_gshared)(__this, ___obj0, ___iidIterable1, ___castToEnum2, method);
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF8C043844304E060AF97B2EC3AD4469B6F10BE8E (U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m6582917FE40A0F4B4BE9E16011D763BFD6E90E4F (Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>::.ctor(System.Func`1<T>)
inline void Lazy_1__ctor_mD9AF2FC425B61DE0A37881BEE845FF09E1E772D6 (Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8* __this, Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB* ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8*, Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB*, const RuntimeMethod*))Lazy_1__ctor_m4CD0C5ACC0541018DB9BDB090B1EFE67D5A9CEF1_gshared)(__this, ___valueFactory0, method);
}
// T System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>::get_Value()
inline IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* Lazy_1_get_Value_m7C81996BE44A2D6D2EEF6090CC0FCED214B6BB98 (Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8* __this, const RuntimeMethod* method)
{
	return ((  IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* (*) (Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8*, const RuntimeMethod*))Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared)(__this, method);
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::get_SupportedDepthReprojectionMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IHolographicViewConfiguration2_get_SupportedDepthReprojectionMethods_m334751557EEB0D083FC867AE724159C80FB7C358 (IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* __this, const RuntimeMethod* method) ;
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* IHolographicViewConfiguration2_op_Implicit_mF5DBC75C73CC64EF1FAB442A95C62E4EC3FD67BC (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicFramePrediction__ctor_m736B74B5ACC06F0573CC13FA3A34EF8C3245B696 (IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* __this, ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* ___obj0, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420* ObjectReference_1_Attach_m95494375A01D046A55417F2C7851906E3C3E79B1 (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420* (*) (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19, intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m95494375A01D046A55417F2C7851906E3C3E79B1_gshared)(___module0, ___thisPtr1, method);
}
// System.Void WinRT._VectorOfObjectBase`2/CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>::.ctor(System.Object,System.IntPtr)
inline void CreateT__ctor_m523ECA416632380B0A46D9418149B4713DBC74DD (CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605*, RuntimeObject*, intptr_t, const RuntimeMethod*))CreateT__ctor_mEF676E1CE98313DC7782B105D9CB4364A9F74A30_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WinRT.VectorViewOfObject`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>,System.Guid,WinRT._VectorOfObjectBase`2/CreateT<T,WinRT.Interop.IVectorViewOfObject>)
inline void VectorViewOfObject_1__ctor_m5BB6C758913ADC705E9AE23AC8405DF2D43206A8 (VectorViewOfObject_1_tFE46525328D955B072EB9635CA8747986E2119D2* __this, ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420* ___obj0, Guid_t ___iidIterable1, CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605* ___createT2, const RuntimeMethod* method)
{
	((  void (*) (VectorViewOfObject_1_tFE46525328D955B072EB9635CA8747986E2119D2*, ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420*, Guid_t, CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605*, const RuntimeMethod*))VectorViewOfObject_1__ctor_m844C6447DC0A3FED5A084A2C40F29C697EAF5633_gshared)(__this, ___obj0, ___iidIterable1, ___createT2, method);
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A374018D7BF48EF81A2D07FDFD6AE8C9A158239 (U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00* __this, const RuntimeMethod* method) ;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* IHolographicCameraPose_op_Implicit_m55529EF6194AB8A7DDF9E845900CF2373FC27890 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCameraPose__ctor_m7CA32445CEEAD6002E80CCFBE2614CB6A6939F3B (HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103* __this, IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* ___interface0, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::get_CameraPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IHolographicFramePrediction_get_CameraPoses_mFBAC32C8D84A31F586996B975F48C2A7D2C59264 (IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* __this, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>()
inline ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* IObjectReference_As_TisVftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_m1534B60ADC2D3C5FD929E56A41059C79BFF00D90 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* (*) (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*, const RuntimeMethod*))IObjectReference_As_TisVftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_m1534B60ADC2D3C5FD929E56A41059C79BFF00D90_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* IHolographicCameraPose_op_Implicit_m2384DC86416726D0A9B8F05F757246016585C47A (ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraPose__ctor_mE82A004514F7D3531C114D168F589DD7DF523C26 (IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* __this, ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* ___obj0, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* ObjectReference_1_Attach_m4211059F0BE59EA50A1914AB81F08B280660F6A4 (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* (*) (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19, intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m4211059F0BE59EA50A1914AB81F08B280660F6A4_gshared)(___module0, ___thisPtr1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCamera::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* IHolographicCamera_op_Implicit_m4BDC578C5767D388845126AB381A95D7E7E5D623 (ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* ___obj0, const RuntimeMethod* method) ;
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::get_HolographicCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* IHolographicCameraPose_get_HolographicCamera_mDBF06C0C6BBD100B296D24F204AB35654099F647 (IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCamera::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCamera__ctor_mACDEA1AFCDEB8444CFE0EA3556B72748D076A515 (HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D* __this, IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* ___interface0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters__ctor_m189865DF9B0559165B9665FFCE975446A9A511AB (IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* __this, ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* ___obj0, const RuntimeMethod* method) ;
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>()
inline ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* IObjectReference_As_TisVftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_mD1C83FF1D34A2E1F35D7ABE0AF2664F0E26F93B3 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* (*) (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*, const RuntimeMethod*))IObjectReference_As_TisVftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_mD1C83FF1D34A2E1F35D7ABE0AF2664F0E26F93B3_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* IHolographicCameraRenderingParameters4_op_Implicit_mCEA7220A476A57D5066E0C33C52FC6029C130E14 (ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4__ctor_m1C7FADDD371B704FDD43A2C493B9E0CBC5A6E22E (IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* __this, ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* ___obj0, const RuntimeMethod* method) ;
// System.Int32 WinRT.Interop._put_PropertyAsEnum::Invoke(System.IntPtr,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_inline (_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m72D0CF0E1272033DD92286BA3D7535080E2D553D (Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>::.ctor(System.Func`1<T>)
inline void Lazy_1__ctor_m66C0DADD407FABCA4E65DE3DE449B00DFE138A96 (Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4* __this, Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0* ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4*, Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0*, const RuntimeMethod*))Lazy_1__ctor_m4CD0C5ACC0541018DB9BDB090B1EFE67D5A9CEF1_gshared)(__this, ___valueFactory0, method);
}
// T System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>::get_Value()
inline IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* Lazy_1_get_Value_m579487DDA2F2441B3151FADCB636975541F6829A (Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4* __this, const RuntimeMethod* method)
{
	return ((  IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* (*) (Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4*, const RuntimeMethod*))Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared)(__this, method);
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::set_DepthReprojectionMethod(Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4_set_DepthReprojectionMethod_mF6E8FCBCD555D5DDA84EABB6473EA75E46180599 (IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* IHolographicCameraRenderingParameters4_op_Implicit_m69F88EA74EA06425C79C30DE830E886798211D5A (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* ___obj0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoIncrementMTAUsage(intptr_t*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoDecrementMTAUsage(intptr_t);
IL2CPP_EXTERN_C int32_t STDCALL WindowsDeleteString(intptr_t);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AddDllDirectory(Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoIncrementMTAUsage(intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoDecrementMTAUsage(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL WindowsDeleteString(intptr_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.Platform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__cctor_m0C508C637B294E2477DE99636FC6C02E344693DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4* L_0 = (DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4*)il2cpp_codegen_object_new(DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DotNETLinkage__ctor_m162F691922D4E48C7855309A0500070010755E59(L_0, NULL);
		((Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var))->____platformLinkage_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var))->____platformLinkage_0), (void*)L_0);
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_1 = ((Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var))->____platformLinkage_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(4 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsDeleteString(System.IntPtr) */, IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var, L_1, (0));
		goto IL_0029;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001c;
		}
		throw e;
	}

CATCH_001c:
	{// begin catch(System.DllNotFoundException)
		IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069* L_3 = (IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		IL2CPPLinkage__ctor_m5F0408A626619E91CF126264DACE7001762AD607(L_3, NULL);
		((Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var))))->____platformLinkage_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var))))->____platformLinkage_0), (void*)L_3);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		return;
	}
}
// System.Int32 WinRT.Platform::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_AddDllDirectory_mE47A4725C3C1E595E24807FF8FE1E6246912BA47 (String_t* ___pathName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var))->____platformLinkage_0;
		String_t* L_1 = ___pathName0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(0 /* System.Int32 WinRT.Platform/IPlatformLinkage::_AddDllDirectory(System.String) */, IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_FreeLibrary_mBA740B0EA210A13AF54991478D49C9E4784C7869 (intptr_t ___moduleHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var))->____platformLinkage_0;
		intptr_t L_1 = ___moduleHandle0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(1 /* System.Boolean WinRT.Platform/IPlatformLinkage::_FreeLibrary(System.IntPtr) */, IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Platform_GetHRForLastWin32Error_mE6EBB66D082833D71591DE47DD6D49905894C430(NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E(L_3, NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_m4EB749424328F76C2DEE20C24331A00B6ADCEB7E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var))->____platformLinkage_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, intptr_t* >::Invoke(2 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoIncrementMTAUsage(System.IntPtr*) */, IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var, L_0, (intptr_t*)((uintptr_t)(&V_0)));
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E(L_1, NULL);
		intptr_t L_2 = V_0;
		return L_2;
	}
}
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_m07AF33659C486DFDEC1C6C233640149D56B1A006 (intptr_t ___cookie0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var))->____platformLinkage_0;
		intptr_t L_1 = ___cookie0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(3 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoDecrementMTAUsage(System.IntPtr) */, IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E(L_2, NULL);
		return;
	}
}
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_mE6EBB66D082833D71591DE47DD6D49905894C430 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var))->____platformLinkage_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 WinRT.Platform/IPlatformLinkage::_GetHRForLastWin32Error() */, IPlatformLinkage_t98D296C778E34A7570F81933E247815F16991FF0_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 WinRT.Platform/DotNETLinkage::_AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__AddDllDirectory_mF95E06B49C4E12C6AC09B6B93CDF8DAC036BEF30 (DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4* __this, String_t* ___pathName0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___pathName0;
		int32_t L_1;
		L_1 = DotNETLinkage_AddDllDirectory_mC01F86774A3E0582BCD37601E57FAB4FE8B0E059(L_0, NULL);
		return L_1;
	}
}
// System.Boolean WinRT.Platform/DotNETLinkage::_FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage__FreeLibrary_mB0E24B0B8608069313D699940C252F046CD37D54 (DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4* __this, intptr_t ___moduleHandle0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___moduleHandle0;
		bool L_1;
		L_1 = DotNETLinkage_FreeLibrary_m660549ED20E910E6279B5634A7DEF60388405810(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoIncrementMTAUsage_m61302C63740EE6BDA262C04A16FD7781A4C8ED71 (DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4* __this, intptr_t* ___cookie0, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___cookie0;
		int32_t L_1;
		L_1 = DotNETLinkage_CoIncrementMTAUsage_m1D8CB106887E9C652DCAA62ECD3639C4C1F19CA8(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoDecrementMTAUsage_m60D755111851B9F56DA3F9FC22169DFB1F93B591 (DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4* __this, intptr_t ___cookie0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___cookie0;
		int32_t L_1;
		L_1 = DotNETLinkage_CoDecrementMTAUsage_mBF87903711A780C9F336572DFC14A1C6B3693272(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__WindowsDeleteString_mF8E5937771B6F3246824E341C5457F342491FAF1 (DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4* __this, intptr_t ___hstring0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___hstring0;
		int32_t L_1;
		L_1 = DotNETLinkage_WindowsDeleteString_mDA04C0AFA8EF82D178F0CDA5D035865E8EC15013(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__GetHRForLastWin32Error_mD355BB96D31DF9A437553EA39438110ACDBEF81D (DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Marshal_GetHRForLastWin32Error_m82A7BCC0552EB054386277BD757F2CE017DE614D(NULL);
		return L_0;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_AddDllDirectory_mC01F86774A3E0582BCD37601E57FAB4FE8B0E059 (String_t* ___pathName0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "AddDllDirectory", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pathName0' to native representation
	Il2CppChar* ____pathName0_marshaled = NULL;
	if (___pathName0 != NULL)
	{
		____pathName0_marshaled = &___pathName0->____firstChar_5;
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AddDllDirectory)(____pathName0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____pathName0_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean WinRT.Platform/DotNETLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_m660549ED20E910E6279B5634A7DEF60388405810 (intptr_t ___moduleHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___moduleHandle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___moduleHandle0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.Int32 WinRT.Platform/DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_m1D8CB106887E9C652DCAA62ECD3639C4C1F19CA8 (intptr_t* ___cookie0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoIncrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoIncrementMTAUsage)(___cookie0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cookie0);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_mBF87903711A780C9F336572DFC14A1C6B3693272 (intptr_t ___cookie0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoDecrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoDecrementMTAUsage)(___cookie0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cookie0);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_mDA04C0AFA8EF82D178F0CDA5D035865E8EC15013 (intptr_t ___hstring0, const RuntimeMethod* method) 
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsDeleteString", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsDeleteString)(___hstring0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hstring0);
	#endif

	return returnValue;
}
// System.Void WinRT.Platform/DotNETLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_m162F691922D4E48C7855309A0500070010755E59 (DotNETLinkage_t2867D27C0C15CEB5AB0399B3353DE13798BF21B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 WinRT.Platform/IL2CPPLinkage::_AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__AddDllDirectory_mB2E2CE51D5E3632AED171A9AC9333B9AC987E807 (IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069* __this, String_t* ___pathName0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral376C23DA1914D1A4BFE3DE23D6B327481318B5C5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IL2CPPLinkage__AddDllDirectory_mB2E2CE51D5E3632AED171A9AC9333B9AC987E807_RuntimeMethod_var)));
	}
}
// System.Boolean WinRT.Platform/IL2CPPLinkage::_FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage__FreeLibrary_mBBF0DD294AAD5509162A25A0518D418A34A2CCFB (IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069* __this, intptr_t ___moduleHandle0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___moduleHandle0;
		bool L_1;
		L_1 = IL2CPPLinkage_FreeLibrary_m1B984F17666B4BB7296B1E56420989065A59A37B(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoIncrementMTAUsage_m7B7CC999A362A6533102246AD638F4DE809DED22 (IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069* __this, intptr_t* ___cookie0, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___cookie0;
		int32_t L_1;
		L_1 = IL2CPPLinkage_CoIncrementMTAUsage_mDD0CF2F5D65F1095CBD3C0978E8913CAE46721A3(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoDecrementMTAUsage_mA122D54733587F5315A3DD9D566E952CDD04F094 (IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069* __this, intptr_t ___cookie0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___cookie0;
		int32_t L_1;
		L_1 = IL2CPPLinkage_CoDecrementMTAUsage_m5082567B423723F3FFDEC6DB62D9D92EAC953D7B(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__WindowsDeleteString_mDAEF9CC164784750F81EE4EED7FEC2F9EA0D592C (IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069* __this, intptr_t ___hstring0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___hstring0;
		int32_t L_1;
		L_1 = IL2CPPLinkage_WindowsDeleteString_mD3570C8E1685BB0AE9258DCA86584CDA18FC01E0(L_0, NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__GetHRForLastWin32Error_mF57CE183A55B5B968DA45B34BB48CA81F3E77839 (IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)-2147467259);
	}
}
// System.Boolean WinRT.Platform/IL2CPPLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m1B984F17666B4BB7296B1E56420989065A59A37B (intptr_t ___moduleHandle0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___moduleHandle0);
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_mDD0CF2F5D65F1095CBD3C0978E8913CAE46721A3 (intptr_t* ___cookie0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoIncrementMTAUsage)(___cookie0);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_m5082567B423723F3FFDEC6DB62D9D92EAC953D7B (intptr_t ___cookie0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoDecrementMTAUsage)(___cookie0);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_mD3570C8E1685BB0AE9258DCA86584CDA18FC01E0 (intptr_t ___hstring0, const RuntimeMethod* method) 
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsDeleteString)(___hstring0);

	return returnValue;
}
// System.Void WinRT.Platform/IL2CPPLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_m5F0408A626619E91CF126264DACE7001762AD607 (IL2CPPLinkage_tE0E39CA85D203B041C99B7538C80428D033B4069* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshal_pinvoke(const ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19& unmarshaled, ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____module_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____module_0))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____module_0));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____module_0);
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.____refCountPtr_1;
	marshaled.____nativeHandle_2 = unmarshaled.____nativeHandle_2;
}
IL2CPP_EXTERN_C void ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshal_pinvoke_back(const ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshaled_pinvoke& marshaled, ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.____module_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____module_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____module_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____module_0), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.____module_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____module_0), (void*)NULL);
	}
	unmarshaled.____refCountPtr_1 = marshaled.____refCountPtr_1;
	intptr_t unmarshaled_nativeHandle_temp_2;
	memset((&unmarshaled_nativeHandle_temp_2), 0, sizeof(unmarshaled_nativeHandle_temp_2));
	unmarshaled_nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.____nativeHandle_2 = unmarshaled_nativeHandle_temp_2;
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshal_pinvoke_cleanup(ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshaled_pinvoke& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// Conversion methods for marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshal_com(const ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19& unmarshaled, ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshaled_com& marshaled)
{
	if (unmarshaled.____module_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____module_0))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____module_0));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____module_0);
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.____refCountPtr_1;
	marshaled.____nativeHandle_2 = unmarshaled.____nativeHandle_2;
}
IL2CPP_EXTERN_C void ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshal_com_back(const ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshaled_com& marshaled, ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.____module_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____module_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____module_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____module_0), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.____module_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____module_0), (void*)NULL);
	}
	unmarshaled.____refCountPtr_1 = marshaled.____refCountPtr_1;
	intptr_t unmarshaled_nativeHandle_temp_2;
	memset((&unmarshaled_nativeHandle_temp_2), 0, sizeof(unmarshaled_nativeHandle_temp_2));
	unmarshaled_nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.____nativeHandle_2 = unmarshaled_nativeHandle_temp_2;
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshal_com_cleanup(ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19_marshaled_com& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_m43E9D2E7F8A426E17C9AF42439F196DAB0A89E36 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Marshal_AllocCoTaskMem_m95086FD05127CA9C384799B002A977490DBA084E(4, NULL);
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = V_0;
		return L_3;
	}
}
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ModuleReference_Allocate_mE0678068DD625EA2D90D95526225CA0A73B49B1B (RuntimeObject* ___module0, intptr_t* ___nativeHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___module0;
		int32_t* L_1;
		L_1 = ModuleReference_AllocateRefCount_m43E9D2E7F8A426E17C9AF42439F196DAB0A89E36(NULL);
		intptr_t* L_2 = ___nativeHandle1;
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ModuleReference__ctor_m097E8F45DCF21119185D353A358D193445E7DB59((&L_3), L_0, L_1, ((*(L_2))), /*hidden argument*/NULL);
		intptr_t* L_4 = ___nativeHandle1;
		*((intptr_t*)L_4) = (intptr_t)(0);
		return L_3;
	}
}
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference__ctor_m097E8F45DCF21119185D353A358D193445E7DB59 (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19* __this, RuntimeObject* ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___module0;
		__this->____module_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____module_0), (void*)L_0);
		int32_t* L_1 = ___refCountPtr1;
		__this->____refCountPtr_1 = L_1;
		int32_t* L_2 = __this->____refCountPtr_1;
		if ((((intptr_t)L_2) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_3 = __this->____refCountPtr_1;
		int32_t L_4;
		L_4 = Interlocked_Increment_m7AC68EC482A6AFD97BCEFABA0FD45D203F3EA2E1((int32_t*)L_3, NULL);
	}

IL_0024:
	{
		intptr_t L_5 = ___nativeHandle2;
		__this->____nativeHandle_2 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void ModuleReference__ctor_m097E8F45DCF21119185D353A358D193445E7DB59_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method)
{
	ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19*>(__this + _offset);
	ModuleReference__ctor_m097E8F45DCF21119185D353A358D193445E7DB59(_thisAdjusted, ___module0, ___refCountPtr1, ___nativeHandle2, method);
}
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ModuleReference_AddRef_m70B0C59E22EA83EF010794708BE8403D595E0585 (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____module_0;
		int32_t* L_1 = __this->____refCountPtr_1;
		intptr_t L_2 = __this->____nativeHandle_2;
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ModuleReference__ctor_m097E8F45DCF21119185D353A358D193445E7DB59((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ModuleReference_AddRef_m70B0C59E22EA83EF010794708BE8403D595E0585_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19*>(__this + _offset);
	ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 _returnValue;
	_returnValue = ModuleReference_AddRef_m70B0C59E22EA83EF010794708BE8403D595E0585(_thisAdjusted, method);
	return _returnValue;
}
// System.Void WinRT.ModuleReference::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference_Release_mD18E0FE8710E2B79D5B9ABB1D2F620705966EA70 (ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllModule_t59FA753ADAF12BC807F9E333A4DE966479274579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->____refCountPtr_1;
		if ((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t* L_1 = __this->____refCountPtr_1;
		int32_t L_2;
		L_2 = Interlocked_Decrement_mFACC375A9985A7E1A3473EECE768B1D2ECB8CEF5((int32_t*)L_1, NULL);
		if (L_2)
		{
			goto IL_00d7;
		}
	}
	{
		RuntimeObject* L_3 = __this->____module_0;
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		intptr_t L_4 = __this->____nativeHandle_2;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_4, (0), NULL);
		if (!L_5)
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject* L_6 = __this->____module_0;
		if (!((DllModule_t59FA753ADAF12BC807F9E333A4DE966479274579*)IsInstClass((RuntimeObject*)L_6, DllModule_t59FA753ADAF12BC807F9E333A4DE966479274579_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		intptr_t L_7 = __this->____nativeHandle_2;
		il2cpp_codegen_runtime_class_init_inline(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		Platform_FreeLibrary_mBA740B0EA210A13AF54991478D49C9E4784C7869(L_7, NULL);
		goto IL_0093;
	}

IL_0054:
	{
		RuntimeObject* L_8 = __this->____module_0;
		if (!((WinrtModule_t60E422073093BD51F62229380BB5E6161746C587*)IsInstClass((RuntimeObject*)L_8, WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_9 = __this->____nativeHandle_2;
		il2cpp_codegen_runtime_class_init_inline(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		Platform_CoDecrementMTAUsage_m07AF33659C486DFDEC1C6C233640149D56B1A006(L_9, NULL);
		goto IL_0093;
	}

IL_006e:
	{
		RuntimeObject* L_10 = __this->____module_0;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		String_t* L_13;
		L_13 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral35588C4FF7022D2E8A6DFBE65CE509BB624FF21C)), L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C30C2A121B10CF66C074014633BC557626C1D72)), NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_14 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_mD18E0FE8710E2B79D5B9ABB1D2F620705966EA70_RuntimeMethod_var)));
	}

IL_0093:
	{
		__this->____nativeHandle_2 = (0);
		goto IL_00ab;
	}

IL_00a0:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_15 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_mD18E0FE8710E2B79D5B9ABB1D2F620705966EA70_RuntimeMethod_var)));
	}

IL_00ab:
	{
		__this->____module_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____module_0), (void*)NULL);
		goto IL_00bf;
	}

IL_00b4:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_16 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_mD18E0FE8710E2B79D5B9ABB1D2F620705966EA70_RuntimeMethod_var)));
	}

IL_00bf:
	{
		int32_t* L_17 = __this->____refCountPtr_1;
		intptr_t L_18;
		L_18 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeCoTaskMem_mE241F2AFFBBC79B1441FD2F15F1CCFCE519F33F1(L_18, NULL);
		__this->____refCountPtr_1 = (int32_t*)((uintptr_t)0);
	}

IL_00d7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ModuleReference_Release_mD18E0FE8710E2B79D5B9ABB1D2F620705966EA70_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19*>(__this + _offset);
	ModuleReference_Release_mD18E0FE8710E2B79D5B9ABB1D2F620705966EA70(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::get_VftblIUnknown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 IObjectReference_get_VftblIUnknown_mD14CD8621FC53101DB741564B1BE06A61B185D53 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method) 
{
	{
		IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 L_0 = __this->___U3CVftblIUnknownU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void WinRT.IObjectReference::.ctor(WinRT.ModuleReference,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IObjectReference__ctor_mA6A8BE84486FAC0C8F58F6D40E98F48D11F89A92 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 ___module0, intptr_t ___thisPtr1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_0;
		L_0 = ModuleReference_AddRef_m70B0C59E22EA83EF010794708BE8403D595E0585((&___module0), NULL);
		__this->___Module_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Module_1))->____module_0), (void*)NULL);
		intptr_t L_1 = ___thisPtr1;
		__this->___ThisPtr_0 = L_1;
		return;
	}
}
// System.Void WinRT.IObjectReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IObjectReference_Finalize_m18CA339A25B9DA95BF2F760B50126F917287D6F6 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* __this, const RuntimeMethod* method) 
{
	ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_0 = __this->___Module_1;
			V_0 = L_0;
			ModuleReference_Release_mD18E0FE8710E2B79D5B9ABB1D2F620705966EA70((&V_0), NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.DllModule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule__cctor_m7BB7E76FD4D80A03906287D251F2673EE8B0D7E4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m87B90C08A8868EC38BC40AF633C2B79F27E57AF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t69D6B109D32E790635B3FF7361434124D06AD073_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllModule_t59FA753ADAF12BC807F9E333A4DE966479274579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4201DFBD8CAB7C9A03E8B1367CFCBB72F014FBB8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Dictionary_2_t69D6B109D32E790635B3FF7361434124D06AD073* L_0 = (Dictionary_2_t69D6B109D32E790635B3FF7361434124D06AD073*)il2cpp_codegen_object_new(Dictionary_2_t69D6B109D32E790635B3FF7361434124D06AD073_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m87B90C08A8868EC38BC40AF633C2B79F27E57AF1(L_0, Dictionary_2__ctor_m87B90C08A8868EC38BC40AF633C2B79F27E57AF1_RuntimeMethod_var);
		((DllModule_t59FA753ADAF12BC807F9E333A4DE966479274579_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t59FA753ADAF12BC807F9E333A4DE966479274579_il2cpp_TypeInfo_var))->____cache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DllModule_t59FA753ADAF12BC807F9E333A4DE966479274579_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t59FA753ADAF12BC807F9E333A4DE966479274579_il2cpp_TypeInfo_var))->____cache_0), (void*)L_0);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_1;
		L_1 = AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE(NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AppDomain_GetData_m10C16E04DB1CB63E8481AA27D57B58A5E2895C92(L_1, _stringLiteral4201DFBD8CAB7C9A03E8B1367CFCBB72F014FBB8, NULL);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_5 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
		NullCheck(L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_5, L_7, NULL);
		V_1 = L_8;
		V_2 = 0;
		goto IL_004a;
	}

IL_003d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_runtime_class_init_inline(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Platform_AddDllDirectory_mE47A4725C3C1E595E24807FF8FE1E6246912BA47(L_12, NULL);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004a:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_003d;
		}
	}

IL_0050:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 WinrtModule_get_Instance_mE625543305636C7438845256485038140A90E38C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1_get_Value_mA239626DD9380945F8D7477241A2EB33239DC041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_il2cpp_TypeInfo_var);
		WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5* L_0 = ((WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_il2cpp_TypeInfo_var))->____instance_1;
		NullCheck(L_0);
		WinrtModule_t60E422073093BD51F62229380BB5E6161746C587* L_1;
		L_1 = WeakLazy_1_get_Value_mA239626DD9380945F8D7477241A2EB33239DC041(L_0, WeakLazy_1_get_Value_mA239626DD9380945F8D7477241A2EB33239DC041_RuntimeMethod_var);
		NullCheck(L_1);
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_2 = L_1->____module_0;
		return L_2;
	}
}
// System.Void WinRT.WinrtModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule__ctor_mF6B9CA82C2CCDBADB56B1208A765E05BB1BCDF9D (WinrtModule_t60E422073093BD51F62229380BB5E6161746C587* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Platform_t22C1DCFFB7F68268CA13C70C04A984026D445A34_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Platform_CoIncrementMTAUsage_m4EB749424328F76C2DEE20C24331A00B6ADCEB7E(NULL);
		V_0 = L_0;
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_1;
		L_1 = ModuleReference_Allocate_mE0678068DD625EA2D90D95526225CA0A73B49B1B(__this, (&V_0), NULL);
		__this->____module_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____module_0))->____module_0), (void*)NULL);
		return;
	}
}
// System.Void WinRT.WinrtModule::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule_Finalize_mBBE9B616822F89D87D9DED9AF20970F4B960FFDB (WinrtModule_t60E422073093BD51F62229380BB5E6161746C587* __this, const RuntimeMethod* method) 
{
	ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_0 = __this->____module_0;
			V_0 = L_0;
			ModuleReference_Release_mD18E0FE8710E2B79D5B9ABB1D2F620705966EA70((&V_0), NULL);
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		return;
	}
}
// System.Void WinRT.WinrtModule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule__cctor_m4D19A7A226DD9CF0A7779D8B60EB379E58BD999C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1__ctor_mB7A90BAADA5E514115709A36E1A5F6AE349F10C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5* L_0 = (WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5*)il2cpp_codegen_object_new(WeakLazy_1_tFFB676D95DDDD047609464294602514BFC0F01D5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WeakLazy_1__ctor_mB7A90BAADA5E514115709A36E1A5F6AE349F10C8(L_0, WeakLazy_1__ctor_mB7A90BAADA5E514115709A36E1A5F6AE349F10C8_RuntimeMethod_var);
		((WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_il2cpp_TypeInfo_var))->____instance_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_il2cpp_TypeInfo_var))->____instance_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_pinvoke(const IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4& unmarshaled, IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_pinvoke& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___QueryInterface_0));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___AddRef_1));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Release_2));
}
IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_pinvoke_back(const IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_pinvoke& marshaled, IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___QueryInterface_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B>(marshaled.___QueryInterface_0, _QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___QueryInterface_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B>(marshaled.___QueryInterface_0, _QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B_il2cpp_TypeInfo_var));
	unmarshaled.___AddRef_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113>(marshaled.___AddRef_1, _AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___AddRef_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113>(marshaled.___AddRef_1, _AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113_il2cpp_TypeInfo_var));
	unmarshaled.___Release_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488>(marshaled.___Release_2, _Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Release_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488>(marshaled.___Release_2, _Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_pinvoke_cleanup(IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_com(const IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4& unmarshaled, IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_com& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___QueryInterface_0));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___AddRef_1));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Release_2));
}
IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_com_back(const IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_com& marshaled, IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___QueryInterface_0 = il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B>(marshaled.___QueryInterface_0, _QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___QueryInterface_0), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B>(marshaled.___QueryInterface_0, _QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B_il2cpp_TypeInfo_var));
	unmarshaled.___AddRef_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113>(marshaled.___AddRef_1, _AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___AddRef_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113>(marshaled.___AddRef_1, _AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113_il2cpp_TypeInfo_var));
	unmarshaled.___Release_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488>(marshaled.___Release_2, _Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Release_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488>(marshaled.___Release_2, _Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_com_cleanup(IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _QueryInterface_Invoke_mB1ABAF906041D47C7EE9586792199EF19D3BB682_Multicast(_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B* __this, intptr_t ___pThis0, Guid_t* ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B* currentDelegate = reinterpret_cast<_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Guid_t*, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pThis0, ___iid1, ___vftbl2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _QueryInterface_Invoke_mB1ABAF906041D47C7EE9586792199EF19D3BB682_OpenInst(_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B* __this, intptr_t ___pThis0, Guid_t* ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, ___iid1, ___vftbl2, method);
}
int32_t _QueryInterface_Invoke_mB1ABAF906041D47C7EE9586792199EF19D3BB682_OpenStatic(_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B* __this, intptr_t ___pThis0, Guid_t* ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, ___iid1, ___vftbl2, method);
}
int32_t _QueryInterface_Invoke_mB1ABAF906041D47C7EE9586792199EF19D3BB682_OpenStaticInvoker(_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B* __this, intptr_t ___pThis0, Guid_t* ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, Guid_t*, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___pThis0, ___iid1, ___vftbl2);
}
int32_t _QueryInterface_Invoke_mB1ABAF906041D47C7EE9586792199EF19D3BB682_ClosedStaticInvoker(_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B* __this, intptr_t ___pThis0, Guid_t* ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, Guid_t*, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pThis0, ___iid1, ___vftbl2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B (_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B* __this, intptr_t ___pThis0, Guid_t* ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___iid1, ___vftbl2);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_QueryInterface::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QueryInterface__ctor_mEA65AEDBF324CBD29FB2F03089CA6BDD1643A3E3 (_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_QueryInterface_Invoke_mB1ABAF906041D47C7EE9586792199EF19D3BB682_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_QueryInterface_Invoke_mB1ABAF906041D47C7EE9586792199EF19D3BB682_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_QueryInterface_Invoke_mB1ABAF906041D47C7EE9586792199EF19D3BB682_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_QueryInterface_Invoke_mB1ABAF906041D47C7EE9586792199EF19D3BB682_Multicast;
}
// System.Int32 WinRT.Interop.IUnknownVftbl/_QueryInterface::Invoke(System.IntPtr,System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _QueryInterface_Invoke_mB1ABAF906041D47C7EE9586792199EF19D3BB682 (_QueryInterface_tCCD34239F328F404BBF136E07511C387B0255C2B* __this, intptr_t ___pThis0, Guid_t* ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Guid_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pThis0, ___iid1, ___vftbl2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint32_t _AddRef_Invoke_mA3E75C3D39831269FE223D76C21E00C80CEA006A_Multicast(_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113* currentDelegate = reinterpret_cast<_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pThis0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint32_t _AddRef_Invoke_mA3E75C3D39831269FE223D76C21E00C80CEA006A_OpenInst(_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, method);
}
uint32_t _AddRef_Invoke_mA3E75C3D39831269FE223D76C21E00C80CEA006A_OpenStatic(_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, method);
}
uint32_t _AddRef_Invoke_mA3E75C3D39831269FE223D76C21E00C80CEA006A_OpenStaticInvoker(_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< uint32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pThis0);
}
uint32_t _AddRef_Invoke_mA3E75C3D39831269FE223D76C21E00C80CEA006A_ClosedStaticInvoker(_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uint32_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pThis0);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113 (_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___pThis0);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_AddRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AddRef__ctor_m6292F787A27811252E4D966A5A3D04D84AA70864 (_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_AddRef_Invoke_mA3E75C3D39831269FE223D76C21E00C80CEA006A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_AddRef_Invoke_mA3E75C3D39831269FE223D76C21E00C80CEA006A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_AddRef_Invoke_mA3E75C3D39831269FE223D76C21E00C80CEA006A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_AddRef_Invoke_mA3E75C3D39831269FE223D76C21E00C80CEA006A_Multicast;
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_AddRef::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _AddRef_Invoke_mA3E75C3D39831269FE223D76C21E00C80CEA006A (_AddRef_t9B429E5C5A556B2BF5BAA7E7CA9546764A3E1113* __this, intptr_t ___pThis0, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pThis0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint32_t _Release_Invoke_m4826E567F811E7C11AD42F618256DD2F8AB24A7F_Multicast(_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488* currentDelegate = reinterpret_cast<_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488*>(delegatesToInvoke[i]);
		typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pThis0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint32_t _Release_Invoke_m4826E567F811E7C11AD42F618256DD2F8AB24A7F_OpenInst(_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, method);
}
uint32_t _Release_Invoke_m4826E567F811E7C11AD42F618256DD2F8AB24A7F_OpenStatic(_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, method);
}
uint32_t _Release_Invoke_m4826E567F811E7C11AD42F618256DD2F8AB24A7F_OpenStaticInvoker(_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< uint32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___pThis0);
}
uint32_t _Release_Invoke_m4826E567F811E7C11AD42F618256DD2F8AB24A7F_ClosedStaticInvoker(_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uint32_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pThis0);
}
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488 (_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488* __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___pThis0);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_Release::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Release__ctor_m5A83C2CF17B67E15EA93C0F6236860E305E28873 (_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_Release_Invoke_m4826E567F811E7C11AD42F618256DD2F8AB24A7F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_Release_Invoke_m4826E567F811E7C11AD42F618256DD2F8AB24A7F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_Release_Invoke_m4826E567F811E7C11AD42F618256DD2F8AB24A7F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_Release_Invoke_m4826E567F811E7C11AD42F618256DD2F8AB24A7F_Multicast;
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_Release::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _Release_Invoke_m4826E567F811E7C11AD42F618256DD2F8AB24A7F (_Release_t5D0F52BBE7F03F084B6FAEE0F94226B785424488* __this, intptr_t ___pThis0, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pThis0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(const IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1& unmarshaled, IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_pinvoke(unmarshaled.___IUnknownVftbl_0, marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetIids_1));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRuntimeClassName_2));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTrustLevel_3));
}
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(const IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke& marshaled, IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 unmarshaledIUnknownVftbl_temp_0;
	memset((&unmarshaledIUnknownVftbl_temp_0), 0, sizeof(unmarshaledIUnknownVftbl_temp_0));
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_pinvoke_back(marshaled.___IUnknownVftbl_0, unmarshaledIUnknownVftbl_temp_0);
	unmarshaled.___IUnknownVftbl_0 = unmarshaledIUnknownVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	unmarshaled.___GetIids_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833>(marshaled.___GetIids_1, _GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetIids_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833>(marshaled.___GetIids_1, _GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833_il2cpp_TypeInfo_var));
	unmarshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRuntimeClassName_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7_il2cpp_TypeInfo_var));
	unmarshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTrustLevel_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_pinvoke_cleanup(marshaled.___IUnknownVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(const IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1& unmarshaled, IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com& marshaled)
{
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_com(unmarshaled.___IUnknownVftbl_0, marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetIids_1));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRuntimeClassName_2));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetTrustLevel_3));
}
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(const IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com& marshaled, IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4 unmarshaledIUnknownVftbl_temp_0;
	memset((&unmarshaledIUnknownVftbl_temp_0), 0, sizeof(unmarshaledIUnknownVftbl_temp_0));
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_com_back(marshaled.___IUnknownVftbl_0, unmarshaledIUnknownVftbl_temp_0);
	unmarshaled.___IUnknownVftbl_0 = unmarshaledIUnknownVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	unmarshaled.___GetIids_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833>(marshaled.___GetIids_1, _GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetIids_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833>(marshaled.___GetIids_1, _GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833_il2cpp_TypeInfo_var));
	unmarshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRuntimeClassName_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7_il2cpp_TypeInfo_var));
	unmarshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetTrustLevel_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshaled_com& marshaled)
{
	IUnknownVftbl_t78DDFD6571E0111A17F0106F9BB28FDC3543ACC4_marshal_com_cleanup(marshaled.___IUnknownVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetIids_Invoke_m3CB9CF7F5065305139350D6FC49FD977EA6E1307_Multicast(_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833* __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833* currentDelegate = reinterpret_cast<_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pThis0, ___iidCount1, ___iids2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetIids_Invoke_m3CB9CF7F5065305139350D6FC49FD977EA6E1307_OpenInst(_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833* __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, ___iidCount1, ___iids2, method);
}
int32_t _GetIids_Invoke_m3CB9CF7F5065305139350D6FC49FD977EA6E1307_OpenStatic(_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833* __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, ___iidCount1, ___iids2, method);
}
int32_t _GetIids_Invoke_m3CB9CF7F5065305139350D6FC49FD977EA6E1307_OpenStaticInvoker(_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833* __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___pThis0, ___iidCount1, ___iids2);
}
int32_t _GetIids_Invoke_m3CB9CF7F5065305139350D6FC49FD977EA6E1307_ClosedStaticInvoker(_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833* __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, uint32_t*, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pThis0, ___iidCount1, ___iids2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833 (_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833* __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___iidCount1, ___iids2);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetIids::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetIids__ctor_m2ADD7109A53FB6DF7AF9AEEF7D5CA59899FF31DF (_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetIids_Invoke_m3CB9CF7F5065305139350D6FC49FD977EA6E1307_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetIids_Invoke_m3CB9CF7F5065305139350D6FC49FD977EA6E1307_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetIids_Invoke_m3CB9CF7F5065305139350D6FC49FD977EA6E1307_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetIids_Invoke_m3CB9CF7F5065305139350D6FC49FD977EA6E1307_Multicast;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetIids::Invoke(System.IntPtr,System.UInt32*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetIids_Invoke_m3CB9CF7F5065305139350D6FC49FD977EA6E1307 (_GetIids_tA7DB167A5900155AF08CBA9DDE2AF3C5298C4833* __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pThis0, ___iidCount1, ___iids2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetRuntimeClassName_Invoke_m9946FF47CE3F2D3AFA6F64D44887C7B36C8ACD49_Multicast(_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7* __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7* currentDelegate = reinterpret_cast<_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pThis0, ___className1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetRuntimeClassName_Invoke_m9946FF47CE3F2D3AFA6F64D44887C7B36C8ACD49_OpenInst(_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7* __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, ___className1, method);
}
int32_t _GetRuntimeClassName_Invoke_m9946FF47CE3F2D3AFA6F64D44887C7B36C8ACD49_OpenStatic(_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7* __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, ___className1, method);
}
int32_t _GetRuntimeClassName_Invoke_m9946FF47CE3F2D3AFA6F64D44887C7B36C8ACD49_OpenStaticInvoker(_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7* __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___pThis0, ___className1);
}
int32_t _GetRuntimeClassName_Invoke_m9946FF47CE3F2D3AFA6F64D44887C7B36C8ACD49_ClosedStaticInvoker(_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7* __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pThis0, ___className1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7 (_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7* __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___className1);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRuntimeClassName__ctor_m4CC39ACB99613F4E54E63C4482871190F990C609 (_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRuntimeClassName_Invoke_m9946FF47CE3F2D3AFA6F64D44887C7B36C8ACD49_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetRuntimeClassName_Invoke_m9946FF47CE3F2D3AFA6F64D44887C7B36C8ACD49_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRuntimeClassName_Invoke_m9946FF47CE3F2D3AFA6F64D44887C7B36C8ACD49_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetRuntimeClassName_Invoke_m9946FF47CE3F2D3AFA6F64D44887C7B36C8ACD49_Multicast;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRuntimeClassName_Invoke_m9946FF47CE3F2D3AFA6F64D44887C7B36C8ACD49 (_GetRuntimeClassName_t1D2C6BD93B8FABD1CB38E9A1827D0C63BA44A2A7* __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pThis0, ___className1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetTrustLevel_Invoke_m749CD703F8B8DF47D9A8E87E2C47C69216DB0A7C_Multicast(_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F* __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F* currentDelegate = reinterpret_cast<_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pThis0, ___trustLevel1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetTrustLevel_Invoke_m749CD703F8B8DF47D9A8E87E2C47C69216DB0A7C_OpenInst(_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F* __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, ___trustLevel1, method);
}
int32_t _GetTrustLevel_Invoke_m749CD703F8B8DF47D9A8E87E2C47C69216DB0A7C_OpenStatic(_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F* __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pThis0, ___trustLevel1, method);
}
int32_t _GetTrustLevel_Invoke_m749CD703F8B8DF47D9A8E87E2C47C69216DB0A7C_OpenStaticInvoker(_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F* __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___pThis0, ___trustLevel1);
}
int32_t _GetTrustLevel_Invoke_m749CD703F8B8DF47D9A8E87E2C47C69216DB0A7C_ClosedStaticInvoker(_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F* __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pThis0, ___trustLevel1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F (_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F* __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___trustLevel1);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetTrustLevel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTrustLevel__ctor_m54264C0AEFEF4748A11E9254CD81A7B3BFBD2C8A (_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTrustLevel_Invoke_m749CD703F8B8DF47D9A8E87E2C47C69216DB0A7C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetTrustLevel_Invoke_m749CD703F8B8DF47D9A8E87E2C47C69216DB0A7C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetTrustLevel_Invoke_m749CD703F8B8DF47D9A8E87E2C47C69216DB0A7C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetTrustLevel_Invoke_m749CD703F8B8DF47D9A8E87E2C47C69216DB0A7C_Multicast;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetTrustLevel::Invoke(System.IntPtr,WinRT.TrustLevel*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrustLevel_Invoke_m749CD703F8B8DF47D9A8E87E2C47C69216DB0A7C (_GetTrustLevel_t699D9EC7177F7013806BC4511805F91765BB876F* __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pThis0, ___trustLevel1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean WinRT.Interop._Bool::op_Implicit(WinRT.Interop._Bool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _Bool_op_Implicit_mE760B801F03894E5003D4C8377A7BC24459587E7 (_Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 ___value0, const RuntimeMethod* method) 
{
	{
		_Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 L_0 = ___value0;
		int32_t L_1 = L_0.___RawValue_0;
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_Multicast(_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* currentDelegate = reinterpret_cast<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_OpenInst(_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_OpenStatic(_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_OpenStaticInvoker(_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___value1);
}
int32_t _get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_ClosedStaticInvoker(_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___value1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7 (_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsUInt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsUInt__ctor_m90E6475A9CE2260ECF1A33BF1191D1FC90727639 (_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsUInt::Invoke(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49 (_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsBool_Invoke_m822290789525D65DE5422B8012F9213298C4373B_Multicast(_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* currentDelegate = reinterpret_cast<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsBool_Invoke_m822290789525D65DE5422B8012F9213298C4373B_OpenInst(_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _get_PropertyAsBool_Invoke_m822290789525D65DE5422B8012F9213298C4373B_OpenStatic(_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _get_PropertyAsBool_Invoke_m822290789525D65DE5422B8012F9213298C4373B_OpenStaticInvoker(_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___value1);
}
int32_t _get_PropertyAsBool_Invoke_m822290789525D65DE5422B8012F9213298C4373B_ClosedStaticInvoker(_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___value1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7 (_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsBool::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsBool__ctor_m7B3D9CBAD0BCDC8B65384A3EB6EB5C381FE8EBAA (_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsBool_Invoke_m822290789525D65DE5422B8012F9213298C4373B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsBool_Invoke_m822290789525D65DE5422B8012F9213298C4373B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsBool_Invoke_m822290789525D65DE5422B8012F9213298C4373B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsBool_Invoke_m822290789525D65DE5422B8012F9213298C4373B_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsBool::Invoke(System.IntPtr,WinRT.Interop._Bool*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsBool_Invoke_m822290789525D65DE5422B8012F9213298C4373B (_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _put_PropertyAsBool_Invoke_mBD71531436B8C9B7E945C8E13AEF8D1072E58EB8_Multicast(_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079* currentDelegate = reinterpret_cast<_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _put_PropertyAsBool_Invoke_mBD71531436B8C9B7E945C8E13AEF8D1072E58EB8_OpenInst(_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _put_PropertyAsBool_Invoke_mBD71531436B8C9B7E945C8E13AEF8D1072E58EB8_OpenStatic(_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _put_PropertyAsBool_Invoke_mBD71531436B8C9B7E945C8E13AEF8D1072E58EB8_OpenStaticInvoker(_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___value1);
}
int32_t _put_PropertyAsBool_Invoke_mBD71531436B8C9B7E945C8E13AEF8D1072E58EB8_ClosedStaticInvoker(_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___value1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079 (_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._put_PropertyAsBool::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _put_PropertyAsBool__ctor_m73E484F78B9918886E0BF193BDBC93ECF78C317E (_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_put_PropertyAsBool_Invoke_mBD71531436B8C9B7E945C8E13AEF8D1072E58EB8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_put_PropertyAsBool_Invoke_mBD71531436B8C9B7E945C8E13AEF8D1072E58EB8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_put_PropertyAsBool_Invoke_mBD71531436B8C9B7E945C8E13AEF8D1072E58EB8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_put_PropertyAsBool_Invoke_mBD71531436B8C9B7E945C8E13AEF8D1072E58EB8_Multicast;
}
// System.Int32 WinRT.Interop._put_PropertyAsBool::Invoke(System.IntPtr,WinRT.Interop._Bool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsBool_Invoke_mBD71531436B8C9B7E945C8E13AEF8D1072E58EB8 (_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59 ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsDouble_Invoke_m5F26F25E0087AA1F386489218FD5C204B552EEB0_Multicast(_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239* __this, intptr_t ___thisPtr0, double* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239* currentDelegate = reinterpret_cast<_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, double*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsDouble_Invoke_m5F26F25E0087AA1F386489218FD5C204B552EEB0_OpenInst(_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239* __this, intptr_t ___thisPtr0, double* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, double*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _get_PropertyAsDouble_Invoke_m5F26F25E0087AA1F386489218FD5C204B552EEB0_OpenStatic(_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239* __this, intptr_t ___thisPtr0, double* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, double*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _get_PropertyAsDouble_Invoke_m5F26F25E0087AA1F386489218FD5C204B552EEB0_OpenStaticInvoker(_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239* __this, intptr_t ___thisPtr0, double* ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, double* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___value1);
}
int32_t _get_PropertyAsDouble_Invoke_m5F26F25E0087AA1F386489218FD5C204B552EEB0_ClosedStaticInvoker(_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239* __this, intptr_t ___thisPtr0, double* ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, double* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___value1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239 (_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239* __this, intptr_t ___thisPtr0, double* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, double*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsDouble::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsDouble__ctor_mF3F90C10389A244309EE33EA6CD0ACF89953B5A7 (_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsDouble_Invoke_m5F26F25E0087AA1F386489218FD5C204B552EEB0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsDouble_Invoke_m5F26F25E0087AA1F386489218FD5C204B552EEB0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsDouble_Invoke_m5F26F25E0087AA1F386489218FD5C204B552EEB0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsDouble_Invoke_m5F26F25E0087AA1F386489218FD5C204B552EEB0_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsDouble::Invoke(System.IntPtr,System.Double*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsDouble_Invoke_m5F26F25E0087AA1F386489218FD5C204B552EEB0 (_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239* __this, intptr_t ___thisPtr0, double* ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, double*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_Multicast(_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* currentDelegate = reinterpret_cast<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_OpenInst(_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_OpenStatic(_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_OpenStaticInvoker(_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___value1);
}
int32_t _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_ClosedStaticInvoker(_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___value1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D (_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsObject__ctor_mC6ABB0909DE50305ED1BC29485FF004C7CF9A96D (_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9 (_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _get_PropertyAsEnum_Invoke_m18997D93983CB8694644B858D409F52C300482BD_Multicast(_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* currentDelegate = reinterpret_cast<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _get_PropertyAsEnum_Invoke_m18997D93983CB8694644B858D409F52C300482BD_OpenInst(_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _get_PropertyAsEnum_Invoke_m18997D93983CB8694644B858D409F52C300482BD_OpenStatic(_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _get_PropertyAsEnum_Invoke_m18997D93983CB8694644B858D409F52C300482BD_OpenStaticInvoker(_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___value1);
}
int32_t _get_PropertyAsEnum_Invoke_m18997D93983CB8694644B858D409F52C300482BD_ClosedStaticInvoker(_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___value1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1 (_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsEnum__ctor_m0354E2CBB3182C7A058FAE87CBED81DADA1AA17A (_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsEnum_Invoke_m18997D93983CB8694644B858D409F52C300482BD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsEnum_Invoke_m18997D93983CB8694644B858D409F52C300482BD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_get_PropertyAsEnum_Invoke_m18997D93983CB8694644B858D409F52C300482BD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_get_PropertyAsEnum_Invoke_m18997D93983CB8694644B858D409F52C300482BD_Multicast;
}
// System.Int32 WinRT.Interop._get_PropertyAsEnum::Invoke(System.IntPtr,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_Invoke_m18997D93983CB8694644B858D409F52C300482BD (_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1* __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_Multicast(_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* currentDelegate = reinterpret_cast<_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_OpenInst(_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_OpenStatic(_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, method);
}
int32_t _put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_OpenStaticInvoker(_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___value1);
}
int32_t _put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_ClosedStaticInvoker(_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___value1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4 (_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._put_PropertyAsEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _put_PropertyAsEnum__ctor_m5CE60BE7D05A2BD2AC666C31CF389FE363955569 (_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_Multicast;
}
// System.Int32 WinRT.Interop._put_PropertyAsEnum::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A (_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfObject
IL2CPP_EXTERN_C void IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshal_pinvoke(const IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF& unmarshaled, IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Current_1));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_HasCurrent_2));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___MoveNext_3));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetMany_4));
}
IL2CPP_EXTERN_C void IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshal_pinvoke_back(const IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshaled_pinvoke& marshaled, IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Current_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_Current_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Current_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_Current_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
	unmarshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_HasCurrent_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var));
	unmarshaled.___MoveNext_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF>(marshaled.___MoveNext_3, _MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___MoveNext_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF>(marshaled.___MoveNext_3, _MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF_il2cpp_TypeInfo_var));
	unmarshaled.___GetMany_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B>(marshaled.___GetMany_4, _GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetMany_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B>(marshaled.___GetMany_4, _GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfObject
IL2CPP_EXTERN_C void IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshal_pinvoke_cleanup(IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfObject
IL2CPP_EXTERN_C void IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshal_com(const IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF& unmarshaled, IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Current_1));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_HasCurrent_2));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___MoveNext_3));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetMany_4));
}
IL2CPP_EXTERN_C void IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshal_com_back(const IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshaled_com& marshaled, IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Current_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_Current_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Current_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_Current_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
	unmarshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_HasCurrent_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var));
	unmarshaled.___MoveNext_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF>(marshaled.___MoveNext_3, _MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___MoveNext_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF>(marshaled.___MoveNext_3, _MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF_il2cpp_TypeInfo_var));
	unmarshaled.___GetMany_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B>(marshaled.___GetMany_4, _GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetMany_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B>(marshaled.___GetMany_4, _GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfObject
IL2CPP_EXTERN_C void IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshal_com_cleanup(IIteratorOfObject_tC668A5691CFFE425F056F013AAF54C4C5E7E1BCF_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _MoveNext_Invoke_m5C8AB63F083FF3F51ECF8FA695ABE45C84D396E1_Multicast(_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF* currentDelegate = reinterpret_cast<_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___hasCurrent1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _MoveNext_Invoke_m5C8AB63F083FF3F51ECF8FA695ABE45C84D396E1_OpenInst(_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___hasCurrent1, method);
}
int32_t _MoveNext_Invoke_m5C8AB63F083FF3F51ECF8FA695ABE45C84D396E1_OpenStatic(_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___hasCurrent1, method);
}
int32_t _MoveNext_Invoke_m5C8AB63F083FF3F51ECF8FA695ABE45C84D396E1_OpenStaticInvoker(_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___hasCurrent1);
}
int32_t _MoveNext_Invoke_m5C8AB63F083FF3F51ECF8FA695ABE45C84D396E1_ClosedStaticInvoker(_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___hasCurrent1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF (_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___hasCurrent1);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfObject/_MoveNext::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MoveNext__ctor_mD1C3C7189446E2F6C79DA4F867E75E5EF6F3C2CB (_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_MoveNext_Invoke_m5C8AB63F083FF3F51ECF8FA695ABE45C84D396E1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_MoveNext_Invoke_m5C8AB63F083FF3F51ECF8FA695ABE45C84D396E1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_MoveNext_Invoke_m5C8AB63F083FF3F51ECF8FA695ABE45C84D396E1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_MoveNext_Invoke_m5C8AB63F083FF3F51ECF8FA695ABE45C84D396E1_Multicast;
}
// System.Int32 WinRT.Interop.IIteratorOfObject/_MoveNext::Invoke(System.IntPtr,WinRT.Interop._Bool*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _MoveNext_Invoke_m5C8AB63F083FF3F51ECF8FA695ABE45C84D396E1 (_MoveNext_tBA4451F8CE995AE5FD2C75C6DD5059E75AE53DBF* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___hasCurrent1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetMany_Invoke_m36F16CC223946679BCC3B9D20BC991E9DAFDE446_Multicast(_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B* currentDelegate = reinterpret_cast<_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___capacity1, ___values2, ___actual3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetMany_Invoke_m36F16CC223946679BCC3B9D20BC991E9DAFDE446_OpenInst(_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___capacity1, ___values2, ___actual3, method);
}
int32_t _GetMany_Invoke_m36F16CC223946679BCC3B9D20BC991E9DAFDE446_OpenStatic(_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___capacity1, ___values2, ___actual3, method);
}
int32_t _GetMany_Invoke_m36F16CC223946679BCC3B9D20BC991E9DAFDE446_OpenStaticInvoker(_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___capacity1, ___values2, ___actual3);
}
int32_t _GetMany_Invoke_m36F16CC223946679BCC3B9D20BC991E9DAFDE446_ClosedStaticInvoker(_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___capacity1, ___values2, ___actual3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B (_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, intptr_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___capacity1, ___values2, ___actual3);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfObject/_GetMany::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetMany__ctor_mFD0B398677E6A79900AA5BC53C9966D0269EF31B (_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_m36F16CC223946679BCC3B9D20BC991E9DAFDE446_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_m36F16CC223946679BCC3B9D20BC991E9DAFDE446_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_m36F16CC223946679BCC3B9D20BC991E9DAFDE446_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetMany_Invoke_m36F16CC223946679BCC3B9D20BC991E9DAFDE446_Multicast;
}
// System.Int32 WinRT.Interop.IIteratorOfObject/_GetMany::Invoke(System.IntPtr,System.UInt32,System.IntPtr*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_m36F16CC223946679BCC3B9D20BC991E9DAFDE446 (_GetMany_t444C47C87A46D3776845F768A1FEEDD4FF5C011B* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___capacity1, ___values2, ___actual3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfObject
IL2CPP_EXTERN_C void IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshal_pinvoke(const IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6& unmarshaled, IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_First_1));
}
IL2CPP_EXTERN_C void IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshal_pinvoke_back(const IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshaled_pinvoke& marshaled, IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_First_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_First_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_First_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_First_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfObject
IL2CPP_EXTERN_C void IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshal_pinvoke_cleanup(IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfObject
IL2CPP_EXTERN_C void IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshal_com(const IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6& unmarshaled, IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_First_1));
}
IL2CPP_EXTERN_C void IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshal_com_back(const IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshaled_com& marshaled, IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_First_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_First_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_First_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_First_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfObject
IL2CPP_EXTERN_C void IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshal_com_cleanup(IIterableOfObject_t428D27AE64870CC656B58BAEDD2D58F6DF6BC4A6_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfObject
IL2CPP_EXTERN_C void IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshal_pinvoke(const IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1& unmarshaled, IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetAt_1));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Size_2));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IndexOf_3));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetMany_4));
}
IL2CPP_EXTERN_C void IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshal_pinvoke_back(const IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshaled_pinvoke& marshaled, IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___GetAt_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06>(marshaled.___GetAt_1, _GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetAt_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06>(marshaled.___GetAt_1, _GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06_il2cpp_TypeInfo_var));
	unmarshaled.___get_Size_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Size_2, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Size_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Size_2, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var));
	unmarshaled.___IndexOf_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF>(marshaled.___IndexOf_3, _IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IndexOf_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF>(marshaled.___IndexOf_3, _IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF_il2cpp_TypeInfo_var));
	unmarshaled.___GetMany_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8>(marshaled.___GetMany_4, _GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetMany_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8>(marshaled.___GetMany_4, _GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfObject
IL2CPP_EXTERN_C void IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshal_pinvoke_cleanup(IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfObject
IL2CPP_EXTERN_C void IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshal_com(const IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1& unmarshaled, IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetAt_1));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Size_2));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IndexOf_3));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetMany_4));
}
IL2CPP_EXTERN_C void IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshal_com_back(const IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshaled_com& marshaled, IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___GetAt_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06>(marshaled.___GetAt_1, _GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetAt_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06>(marshaled.___GetAt_1, _GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06_il2cpp_TypeInfo_var));
	unmarshaled.___get_Size_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Size_2, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Size_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Size_2, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var));
	unmarshaled.___IndexOf_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF>(marshaled.___IndexOf_3, _IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IndexOf_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF>(marshaled.___IndexOf_3, _IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF_il2cpp_TypeInfo_var));
	unmarshaled.___GetMany_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8>(marshaled.___GetMany_4, _GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetMany_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8>(marshaled.___GetMany_4, _GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfObject
IL2CPP_EXTERN_C void IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshal_com_cleanup(IVectorViewOfObject_tB4083529BA35F0F9A7B03EA2D1EBF8FFCAFF9DB1_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetAt_Invoke_m95C81CA5091C89424966CE7B351C8A925AEDE3FF_Multicast(_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06* __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06* currentDelegate = reinterpret_cast<_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___index1, ___result2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetAt_Invoke_m95C81CA5091C89424966CE7B351C8A925AEDE3FF_OpenInst(_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06* __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___index1, ___result2, method);
}
int32_t _GetAt_Invoke_m95C81CA5091C89424966CE7B351C8A925AEDE3FF_OpenStatic(_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06* __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___index1, ___result2, method);
}
int32_t _GetAt_Invoke_m95C81CA5091C89424966CE7B351C8A925AEDE3FF_OpenStaticInvoker(_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06* __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___index1, ___result2);
}
int32_t _GetAt_Invoke_m95C81CA5091C89424966CE7B351C8A925AEDE3FF_ClosedStaticInvoker(_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06* __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, uint32_t, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___index1, ___result2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06 (_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06* __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___index1, ___result2);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfObject/_GetAt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetAt__ctor_m72C78B2243E510B7B05D229CE190FDAECED29C1F (_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetAt_Invoke_m95C81CA5091C89424966CE7B351C8A925AEDE3FF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetAt_Invoke_m95C81CA5091C89424966CE7B351C8A925AEDE3FF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetAt_Invoke_m95C81CA5091C89424966CE7B351C8A925AEDE3FF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetAt_Invoke_m95C81CA5091C89424966CE7B351C8A925AEDE3FF_Multicast;
}
// System.Int32 WinRT.Interop.IVectorViewOfObject/_GetAt::Invoke(System.IntPtr,System.UInt32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetAt_Invoke_m95C81CA5091C89424966CE7B351C8A925AEDE3FF (_GetAt_tD77AF57D4608E3BD891AADAF8727928D3EB77D06* __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___index1, ___result2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _IndexOf_Invoke_mE27B59F82BC557E427E456B70658EAE764CC36BB_Multicast(_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF* __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF* currentDelegate = reinterpret_cast<_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___value1, ___index2, ___found3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _IndexOf_Invoke_mE27B59F82BC557E427E456B70658EAE764CC36BB_OpenInst(_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF* __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, ___index2, ___found3, method);
}
int32_t _IndexOf_Invoke_mE27B59F82BC557E427E456B70658EAE764CC36BB_OpenStatic(_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF* __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, ___index2, ___found3, method);
}
int32_t _IndexOf_Invoke_mE27B59F82BC557E427E456B70658EAE764CC36BB_OpenStaticInvoker(_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF* __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___value1, ___index2, ___found3);
}
int32_t _IndexOf_Invoke_mE27B59F82BC557E427E456B70658EAE764CC36BB_ClosedStaticInvoker(_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF* __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, intptr_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___value1, ___index2, ___found3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF (_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF* __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1, ___index2, ___found3);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfObject/_IndexOf::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IndexOf__ctor_m6C76EDECF99FB9FC0B9F21C3A2CA9B9BA835C2E4 (_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_IndexOf_Invoke_mE27B59F82BC557E427E456B70658EAE764CC36BB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_IndexOf_Invoke_mE27B59F82BC557E427E456B70658EAE764CC36BB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_IndexOf_Invoke_mE27B59F82BC557E427E456B70658EAE764CC36BB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_IndexOf_Invoke_mE27B59F82BC557E427E456B70658EAE764CC36BB_Multicast;
}
// System.Int32 WinRT.Interop.IVectorViewOfObject/_IndexOf::Invoke(System.IntPtr,System.IntPtr,System.UInt32*,WinRT.Interop._Bool*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _IndexOf_Invoke_mE27B59F82BC557E427E456B70658EAE764CC36BB (_IndexOf_t78B23529EF32E169E7C455B1833323D655B4D0BF* __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, ___index2, ___found3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetMany_Invoke_m709CB71EAE74B282558FAFB6AA979B4A26D2A81E_Multicast(_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8* currentDelegate = reinterpret_cast<_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetMany_Invoke_m709CB71EAE74B282558FAFB6AA979B4A26D2A81E_OpenInst(_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, method);
}
int32_t _GetMany_Invoke_m709CB71EAE74B282558FAFB6AA979B4A26D2A81E_OpenStatic(_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, method);
}
int32_t _GetMany_Invoke_m709CB71EAE74B282558FAFB6AA979B4A26D2A81E_OpenStaticInvoker(_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
}
int32_t _GetMany_Invoke_m709CB71EAE74B282558FAFB6AA979B4A26D2A81E_ClosedStaticInvoker(_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, RuntimeObject*, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8 (_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfObject/_GetMany::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetMany__ctor_m55E1A6BA18F8B6DF4BAB7A0DA8B59820A25829A9 (_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_m709CB71EAE74B282558FAFB6AA979B4A26D2A81E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_m709CB71EAE74B282558FAFB6AA979B4A26D2A81E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_m709CB71EAE74B282558FAFB6AA979B4A26D2A81E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetMany_Invoke_m709CB71EAE74B282558FAFB6AA979B4A26D2A81E_Multicast;
}
// System.Int32 WinRT.Interop.IVectorViewOfObject/_GetMany::Invoke(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_m709CB71EAE74B282558FAFB6AA979B4A26D2A81E (_GetMany_tFA96CD87D295DFD4600CD4D35C0AB8C604EFA2F8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfEnum
IL2CPP_EXTERN_C void IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshal_pinvoke(const IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9& unmarshaled, IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Current_1));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_HasCurrent_2));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___MoveNext_3));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetMany_4));
}
IL2CPP_EXTERN_C void IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshal_pinvoke_back(const IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshaled_pinvoke& marshaled, IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Current_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_Current_1, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Current_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_Current_1, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var));
	unmarshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_HasCurrent_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var));
	unmarshaled.___MoveNext_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96>(marshaled.___MoveNext_3, _MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___MoveNext_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96>(marshaled.___MoveNext_3, _MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96_il2cpp_TypeInfo_var));
	unmarshaled.___GetMany_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534>(marshaled.___GetMany_4, _GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetMany_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534>(marshaled.___GetMany_4, _GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfEnum
IL2CPP_EXTERN_C void IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshal_pinvoke_cleanup(IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfEnum
IL2CPP_EXTERN_C void IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshal_com(const IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9& unmarshaled, IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Current_1));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_HasCurrent_2));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___MoveNext_3));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetMany_4));
}
IL2CPP_EXTERN_C void IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshal_com_back(const IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshaled_com& marshaled, IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_Current_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_Current_1, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Current_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_Current_1, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var));
	unmarshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_HasCurrent_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var));
	unmarshaled.___MoveNext_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96>(marshaled.___MoveNext_3, _MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___MoveNext_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96>(marshaled.___MoveNext_3, _MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96_il2cpp_TypeInfo_var));
	unmarshaled.___GetMany_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534>(marshaled.___GetMany_4, _GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetMany_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534>(marshaled.___GetMany_4, _GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfEnum
IL2CPP_EXTERN_C void IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshal_com_cleanup(IIteratorOfEnum_tF651A30FC434E0E585D2897345BE7388D6EDC3F9_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _MoveNext_Invoke_mC645BD0A654B94976717057674E55E82F67A8334_Multicast(_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96* currentDelegate = reinterpret_cast<_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___hasCurrent1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _MoveNext_Invoke_mC645BD0A654B94976717057674E55E82F67A8334_OpenInst(_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___hasCurrent1, method);
}
int32_t _MoveNext_Invoke_mC645BD0A654B94976717057674E55E82F67A8334_OpenStatic(_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___hasCurrent1, method);
}
int32_t _MoveNext_Invoke_mC645BD0A654B94976717057674E55E82F67A8334_OpenStaticInvoker(_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___hasCurrent1);
}
int32_t _MoveNext_Invoke_mC645BD0A654B94976717057674E55E82F67A8334_ClosedStaticInvoker(_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___hasCurrent1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96 (_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___hasCurrent1);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfEnum/_MoveNext::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _MoveNext__ctor_m7EE86AE2B483D4B6FB5C24C99BDBA59833FC65BD (_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_MoveNext_Invoke_mC645BD0A654B94976717057674E55E82F67A8334_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_MoveNext_Invoke_mC645BD0A654B94976717057674E55E82F67A8334_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_MoveNext_Invoke_mC645BD0A654B94976717057674E55E82F67A8334_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_MoveNext_Invoke_mC645BD0A654B94976717057674E55E82F67A8334_Multicast;
}
// System.Int32 WinRT.Interop.IIteratorOfEnum/_MoveNext::Invoke(System.IntPtr,WinRT.Interop._Bool*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _MoveNext_Invoke_mC645BD0A654B94976717057674E55E82F67A8334 (_MoveNext_t5477DE1BA51DF3131DF8B0A5E8807F400E2E0C96* __this, intptr_t ___thisPtr0, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___hasCurrent1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___hasCurrent1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetMany_Invoke_m2A44C6EF390F68AADCD040247E1BD304949BB6E4_Multicast(_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534* currentDelegate = reinterpret_cast<_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___capacity1, ___values2, ___actual3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetMany_Invoke_m2A44C6EF390F68AADCD040247E1BD304949BB6E4_OpenInst(_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___capacity1, ___values2, ___actual3, method);
}
int32_t _GetMany_Invoke_m2A44C6EF390F68AADCD040247E1BD304949BB6E4_OpenStatic(_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___capacity1, ___values2, ___actual3, method);
}
int32_t _GetMany_Invoke_m2A44C6EF390F68AADCD040247E1BD304949BB6E4_OpenStaticInvoker(_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___capacity1, ___values2, ___actual3);
}
int32_t _GetMany_Invoke_m2A44C6EF390F68AADCD040247E1BD304949BB6E4_ClosedStaticInvoker(_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___capacity1, ___values2, ___actual3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534 (_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, int32_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___capacity1, ___values2, ___actual3);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfEnum/_GetMany::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetMany__ctor_m06431591252F138851DAC1D63E2244107AB3B4AA (_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_m2A44C6EF390F68AADCD040247E1BD304949BB6E4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_m2A44C6EF390F68AADCD040247E1BD304949BB6E4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_m2A44C6EF390F68AADCD040247E1BD304949BB6E4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetMany_Invoke_m2A44C6EF390F68AADCD040247E1BD304949BB6E4_Multicast;
}
// System.Int32 WinRT.Interop.IIteratorOfEnum/_GetMany::Invoke(System.IntPtr,System.UInt32,System.Int32*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_m2A44C6EF390F68AADCD040247E1BD304949BB6E4 (_GetMany_t1D89B4A52EDF00926323A1854354F4E4DB10E534* __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___capacity1, ___values2, ___actual3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfEnum
IL2CPP_EXTERN_C void IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshal_pinvoke(const IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15& unmarshaled, IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_First_1));
}
IL2CPP_EXTERN_C void IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshal_pinvoke_back(const IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshaled_pinvoke& marshaled, IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_First_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_First_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_First_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_First_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfEnum
IL2CPP_EXTERN_C void IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshal_pinvoke_cleanup(IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfEnum
IL2CPP_EXTERN_C void IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshal_com(const IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15& unmarshaled, IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_First_1));
}
IL2CPP_EXTERN_C void IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshal_com_back(const IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshaled_com& marshaled, IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_First_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_First_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_First_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_First_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfEnum
IL2CPP_EXTERN_C void IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshal_com_cleanup(IIterableOfEnum_t700467020EBCBC7ED580398D2C89805B39CBDB15_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfEnum
IL2CPP_EXTERN_C void IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshal_pinvoke(const IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B& unmarshaled, IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetAt_1));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Size_2));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IndexOf_3));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetMany_4));
}
IL2CPP_EXTERN_C void IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshal_pinvoke_back(const IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshaled_pinvoke& marshaled, IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___GetAt_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7>(marshaled.___GetAt_1, _GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetAt_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7>(marshaled.___GetAt_1, _GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7_il2cpp_TypeInfo_var));
	unmarshaled.___get_Size_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Size_2, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Size_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Size_2, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var));
	unmarshaled.___IndexOf_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9>(marshaled.___IndexOf_3, _IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IndexOf_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9>(marshaled.___IndexOf_3, _IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9_il2cpp_TypeInfo_var));
	unmarshaled.___GetMany_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8>(marshaled.___GetMany_4, _GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetMany_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8>(marshaled.___GetMany_4, _GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfEnum
IL2CPP_EXTERN_C void IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshal_pinvoke_cleanup(IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfEnum
IL2CPP_EXTERN_C void IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshal_com(const IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B& unmarshaled, IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetAt_1));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Size_2));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___IndexOf_3));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetMany_4));
}
IL2CPP_EXTERN_C void IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshal_com_back(const IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshaled_com& marshaled, IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___GetAt_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7>(marshaled.___GetAt_1, _GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetAt_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7>(marshaled.___GetAt_1, _GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7_il2cpp_TypeInfo_var));
	unmarshaled.___get_Size_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Size_2, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Size_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Size_2, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var));
	unmarshaled.___IndexOf_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9>(marshaled.___IndexOf_3, _IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___IndexOf_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9>(marshaled.___IndexOf_3, _IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9_il2cpp_TypeInfo_var));
	unmarshaled.___GetMany_4 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8>(marshaled.___GetMany_4, _GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetMany_4), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8>(marshaled.___GetMany_4, _GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfEnum
IL2CPP_EXTERN_C void IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshal_com_cleanup(IVectorViewOfEnum_t2F895B8874083B57F8116C7B20C65594684DB61B_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetAt_Invoke_mE8B0BB239ED092B643ABCF90ABA0291014CF7045_Multicast(_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7* __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7* currentDelegate = reinterpret_cast<_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___index1, ___result2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetAt_Invoke_mE8B0BB239ED092B643ABCF90ABA0291014CF7045_OpenInst(_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7* __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___index1, ___result2, method);
}
int32_t _GetAt_Invoke_mE8B0BB239ED092B643ABCF90ABA0291014CF7045_OpenStatic(_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7* __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___index1, ___result2, method);
}
int32_t _GetAt_Invoke_mE8B0BB239ED092B643ABCF90ABA0291014CF7045_OpenStaticInvoker(_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7* __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___index1, ___result2);
}
int32_t _GetAt_Invoke_mE8B0BB239ED092B643ABCF90ABA0291014CF7045_ClosedStaticInvoker(_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7* __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, uint32_t, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___index1, ___result2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7 (_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7* __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___index1, ___result2);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfEnum/_GetAt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetAt__ctor_mA03258649757E90F1710D98BA67032F3A210491E (_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetAt_Invoke_mE8B0BB239ED092B643ABCF90ABA0291014CF7045_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetAt_Invoke_mE8B0BB239ED092B643ABCF90ABA0291014CF7045_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetAt_Invoke_mE8B0BB239ED092B643ABCF90ABA0291014CF7045_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetAt_Invoke_mE8B0BB239ED092B643ABCF90ABA0291014CF7045_Multicast;
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum/_GetAt::Invoke(System.IntPtr,System.UInt32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetAt_Invoke_mE8B0BB239ED092B643ABCF90ABA0291014CF7045 (_GetAt_t51F7DF15A5D4CB7E712AC0A2789D45DF6D2994C7* __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___index1, ___result2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _IndexOf_Invoke_m7B255747EEE53449AB69207B211655DF21C55B9F_Multicast(_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9* __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9* currentDelegate = reinterpret_cast<_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___value1, ___index2, ___found3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _IndexOf_Invoke_m7B255747EEE53449AB69207B211655DF21C55B9F_OpenInst(_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9* __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, ___index2, ___found3, method);
}
int32_t _IndexOf_Invoke_m7B255747EEE53449AB69207B211655DF21C55B9F_OpenStatic(_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9* __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___value1, ___index2, ___found3, method);
}
int32_t _IndexOf_Invoke_m7B255747EEE53449AB69207B211655DF21C55B9F_OpenStaticInvoker(_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9* __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___value1, ___index2, ___found3);
}
int32_t _IndexOf_Invoke_m7B255747EEE53449AB69207B211655DF21C55B9F_ClosedStaticInvoker(_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9* __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, RuntimeObject*, intptr_t, int32_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___value1, ___index2, ___found3);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9 (_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9* __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1, ___index2, ___found3);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfEnum/_IndexOf::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IndexOf__ctor_m333D754047A2AF63494D9424BC930CE435B69A48 (_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_IndexOf_Invoke_m7B255747EEE53449AB69207B211655DF21C55B9F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_IndexOf_Invoke_m7B255747EEE53449AB69207B211655DF21C55B9F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_IndexOf_Invoke_m7B255747EEE53449AB69207B211655DF21C55B9F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_IndexOf_Invoke_m7B255747EEE53449AB69207B211655DF21C55B9F_Multicast;
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum/_IndexOf::Invoke(System.IntPtr,System.Int32,System.UInt32*,WinRT.Interop._Bool*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _IndexOf_Invoke_m7B255747EEE53449AB69207B211655DF21C55B9F (_IndexOf_t54682284AD2B3976636E3CF5EF04E6095CDD39A9* __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59* ___found3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, uint32_t*, _Bool_t982382A9E5F9AD2196FEF4257659E7F22FA58E59*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, ___index2, ___found3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetMany_Invoke_mF4DAF7B874FEA4F6A0C833823EBD71882E4203C4_Multicast(_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8* currentDelegate = reinterpret_cast<_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetMany_Invoke_mF4DAF7B874FEA4F6A0C833823EBD71882E4203C4_OpenInst(_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, method);
}
int32_t _GetMany_Invoke_mF4DAF7B874FEA4F6A0C833823EBD71882E4203C4_OpenStatic(_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, method);
}
int32_t _GetMany_Invoke_mF4DAF7B874FEA4F6A0C833823EBD71882E4203C4_OpenStaticInvoker(_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
}
int32_t _GetMany_Invoke_mF4DAF7B874FEA4F6A0C833823EBD71882E4203C4_ClosedStaticInvoker(_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< int32_t, RuntimeObject*, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8 (_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfEnum/_GetMany::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetMany__ctor_m05F36BA30969187D32E315FC339687E47F44C9FE (_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_mF4DAF7B874FEA4F6A0C833823EBD71882E4203C4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_mF4DAF7B874FEA4F6A0C833823EBD71882E4203C4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetMany_Invoke_mF4DAF7B874FEA4F6A0C833823EBD71882E4203C4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetMany_Invoke_mF4DAF7B874FEA4F6A0C833823EBD71882E4203C4_Multicast;
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum/_GetMany::Invoke(System.IntPtr,System.UInt32,System.UInt32,System.Int32*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_mF4DAF7B874FEA4F6A0C833823EBD71882E4203C4 (_GetMany_tACB5FB832D0F319DA38EF369A21C895D248706C8* __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.IID::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IID__cctor_mBD14A67C04164E936B7F4327CAA37BBF3DC56E36 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73908C06C84C4BE07CC5E20FC2850C795792759B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB4CF09C157EFFADC79B7ADF5C0202D2B4C570CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t L_0;
		memset((&L_0), 0, sizeof(L_0));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_0), _stringLiteral73908C06C84C4BE07CC5E20FC2850C795792759B, /*hidden argument*/NULL);
		((IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_StaticFields*)il2cpp_codegen_static_fields_for(IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_il2cpp_TypeInfo_var))->___IIterableOfHolographicCameraPose_0 = L_0;
		Guid_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_1), _stringLiteralEB4CF09C157EFFADC79B7ADF5C0202D2B4C570CF, /*hidden argument*/NULL);
		((IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_StaticFields*)il2cpp_codegen_static_fields_for(IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_il2cpp_TypeInfo_var))->___IIterableOfHolographicDepthReprojectionMethod_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame Microsoft.Windows.Graphics.Holographic.IHolographicFrame::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* IHolographicFrame_op_Implicit_mD9710DDA9E0E249BEA071E61A62C0C29748C1D32 (ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* L_0 = ___obj0;
		IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* L_1 = (IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF*)il2cpp_codegen_object_new(IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IHolographicFrame__ctor_m8ACDA90ABAB9D72BFB7274FBC90D38785D842091(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFrame::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicFrame__ctor_m8ACDA90ABAB9D72BFB7274FBC90D38785D842091 (IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* __this, ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* ___obj0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* L_0 = ___obj0;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicFrame::GetRenderingParameters(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* IHolographicFrame_GetRenderingParameters_m1A3C28E5DC85046CA1076EC77084C036D247B417 (IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* __this, IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* ___cameraPose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_m9EBBE2A17BC45BA8BCB6E92781618230881BBF8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9* L_1 = (&L_0->___Vftbl_4);
		_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* L_2 = L_1->___GetRenderingParameters_3;
		ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_3)->___ThisPtr_0;
		IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* L_5 = ___cameraPose0;
		NullCheck(L_5);
		ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* L_6 = L_5->____obj_0;
		NullCheck(L_6);
		intptr_t L_7 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_6)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_8;
		L_8 = _GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_inline(L_2, L_4, L_7, (intptr_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E(L_8, NULL);
		ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* L_9 = __this->____obj_0;
		NullCheck(L_9);
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_10 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_9)->___Module_1;
		ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* L_11;
		L_11 = ObjectReference_1_Attach_m9EBBE2A17BC45BA8BCB6E92781618230881BBF8A(L_10, (&V_0), ObjectReference_1_Attach_m9EBBE2A17BC45BA8BCB6E92781618230881BBF8A_RuntimeMethod_var);
		IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* L_12;
		L_12 = IHolographicCameraRenderingParameters_op_Implicit_m609E27B63ECD6C92790ECDFAE4EAE13660D07935(L_11, NULL);
		return L_12;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFrame::get_CurrentPrediction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* IHolographicFrame_get_CurrentPrediction_m929D8A5A03EC055662ACF9F510EEC5544581905C (IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_m81FA317933C0923CD23630BB4BF60DB37607937C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9* L_1 = (&L_0->___Vftbl_4);
		_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* L_2 = L_1->___get_CurrentPrediction_5;
		ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_inline(L_2, L_4, (intptr_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E(L_5, NULL);
		ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* L_6 = __this->____obj_0;
		NullCheck(L_6);
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_7 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_6)->___Module_1;
		ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* L_8;
		L_8 = ObjectReference_1_Attach_m81FA317933C0923CD23630BB4BF60DB37607937C(L_7, (&V_0), ObjectReference_1_Attach_m81FA317933C0923CD23630BB4BF60DB37607937C_RuntimeMethod_var);
		IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* L_9;
		L_9 = IHolographicFramePrediction_op_Implicit_mB8A8C290A58FF65AF318F5A6350D2EF1D85062B3(L_8, NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshal_pinvoke(const Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9& unmarshaled, Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_AddedCameras_1 = unmarshaled.___get_AddedCameras_1;
	marshaled.___get_RemovedCameras_2 = unmarshaled.___get_RemovedCameras_2;
	marshaled.___GetRenderingParameters_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRenderingParameters_3));
	marshaled.___get_Duration_4 = unmarshaled.___get_Duration_4;
	marshaled.___get_CurrentPrediction_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_CurrentPrediction_5));
}
IL2CPP_EXTERN_C void Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshal_pinvoke_back(const Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshaled_pinvoke& marshaled, Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	intptr_t unmarshaledget_AddedCameras_temp_1;
	memset((&unmarshaledget_AddedCameras_temp_1), 0, sizeof(unmarshaledget_AddedCameras_temp_1));
	unmarshaledget_AddedCameras_temp_1 = marshaled.___get_AddedCameras_1;
	unmarshaled.___get_AddedCameras_1 = unmarshaledget_AddedCameras_temp_1;
	intptr_t unmarshaledget_RemovedCameras_temp_2;
	memset((&unmarshaledget_RemovedCameras_temp_2), 0, sizeof(unmarshaledget_RemovedCameras_temp_2));
	unmarshaledget_RemovedCameras_temp_2 = marshaled.___get_RemovedCameras_2;
	unmarshaled.___get_RemovedCameras_2 = unmarshaledget_RemovedCameras_temp_2;
	unmarshaled.___GetRenderingParameters_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022>(marshaled.___GetRenderingParameters_3, _GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRenderingParameters_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022>(marshaled.___GetRenderingParameters_3, _GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022_il2cpp_TypeInfo_var));
	intptr_t unmarshaledget_Duration_temp_4;
	memset((&unmarshaledget_Duration_temp_4), 0, sizeof(unmarshaledget_Duration_temp_4));
	unmarshaledget_Duration_temp_4 = marshaled.___get_Duration_4;
	unmarshaled.___get_Duration_4 = unmarshaledget_Duration_temp_4;
	unmarshaled.___get_CurrentPrediction_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_CurrentPrediction_5, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_CurrentPrediction_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_CurrentPrediction_5, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshal_pinvoke_cleanup(Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshal_com(const Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9& unmarshaled, Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_AddedCameras_1 = unmarshaled.___get_AddedCameras_1;
	marshaled.___get_RemovedCameras_2 = unmarshaled.___get_RemovedCameras_2;
	marshaled.___GetRenderingParameters_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___GetRenderingParameters_3));
	marshaled.___get_Duration_4 = unmarshaled.___get_Duration_4;
	marshaled.___get_CurrentPrediction_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_CurrentPrediction_5));
}
IL2CPP_EXTERN_C void Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshal_com_back(const Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshaled_com& marshaled, Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	intptr_t unmarshaledget_AddedCameras_temp_1;
	memset((&unmarshaledget_AddedCameras_temp_1), 0, sizeof(unmarshaledget_AddedCameras_temp_1));
	unmarshaledget_AddedCameras_temp_1 = marshaled.___get_AddedCameras_1;
	unmarshaled.___get_AddedCameras_1 = unmarshaledget_AddedCameras_temp_1;
	intptr_t unmarshaledget_RemovedCameras_temp_2;
	memset((&unmarshaledget_RemovedCameras_temp_2), 0, sizeof(unmarshaledget_RemovedCameras_temp_2));
	unmarshaledget_RemovedCameras_temp_2 = marshaled.___get_RemovedCameras_2;
	unmarshaled.___get_RemovedCameras_2 = unmarshaledget_RemovedCameras_temp_2;
	unmarshaled.___GetRenderingParameters_3 = il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022>(marshaled.___GetRenderingParameters_3, _GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___GetRenderingParameters_3), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022>(marshaled.___GetRenderingParameters_3, _GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022_il2cpp_TypeInfo_var));
	intptr_t unmarshaledget_Duration_temp_4;
	memset((&unmarshaledget_Duration_temp_4), 0, sizeof(unmarshaledget_Duration_temp_4));
	unmarshaledget_Duration_temp_4 = marshaled.___get_Duration_4;
	unmarshaled.___get_Duration_4 = unmarshaledget_Duration_temp_4;
	unmarshaled.___get_CurrentPrediction_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_CurrentPrediction_5, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_CurrentPrediction_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_CurrentPrediction_5, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshal_com_cleanup(Vftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t _GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_Multicast(_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* currentDelegate = reinterpret_cast<_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t _GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_OpenInst(_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___cameraPosePtr1, ___resultPtr2, method);
}
int32_t _GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_OpenStatic(_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___thisPtr0, ___cameraPosePtr1, ___resultPtr2, method);
}
int32_t _GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_OpenStaticInvoker(_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
}
int32_t _GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_ClosedStaticInvoker(_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, intptr_t, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022 (_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___cameraPosePtr1, ___resultPtr2);

	return returnValue;
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRenderingParameters__ctor_m78E88B6B1E158062B31B4F6504E9340C8AD16B86 (_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&_GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&_GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&_GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_Multicast;
}
// System.Int32 Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters::Invoke(System.IntPtr,System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5 (_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFrame::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicFrame__ctor_m345466F80A6EAE54A1EFB1526D343AA248DCC43D (HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF* __this, IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* ___interface0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* L_0 = ___interface0;
		__this->____interface_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interface_0), (void*)L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicFrame Microsoft.Windows.Graphics.Holographic.HolographicFrame::FromNativePtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF* HolographicFrame_FromNativePtr_m5933A256C6B6C7F2CE6487EC4F0962AAB6AB243B (intptr_t ___thisPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_m49002D8A977AFFC67D6261EB09FAACEB328E7323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_FromNativePtr_m543528DEFCE2A27B052EAE66B526895564A73007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WinrtModule_t60E422073093BD51F62229380BB5E6161746C587_il2cpp_TypeInfo_var);
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_0;
		L_0 = WinrtModule_get_Instance_mE625543305636C7438845256485038140A90E38C(NULL);
		intptr_t L_1 = ___thisPtr0;
		ObjectReference_1_t04E3072FFDD22A787A84F5DBBCA9FA30A64CE899* L_2;
		L_2 = ObjectReference_1_FromNativePtr_m543528DEFCE2A27B052EAE66B526895564A73007(L_0, L_1, ObjectReference_1_FromNativePtr_m543528DEFCE2A27B052EAE66B526895564A73007_RuntimeMethod_var);
		NullCheck(L_2);
		ObjectReference_1_t861E18B3D88F50D30854ED095F16DC606ABC01D2* L_3;
		L_3 = IObjectReference_As_TisVftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_m49002D8A977AFFC67D6261EB09FAACEB328E7323(L_2, IObjectReference_As_TisVftbl_t7B79D9ACDC5B3B8A77A6912EBA82DBBE0B8756E9_m49002D8A977AFFC67D6261EB09FAACEB328E7323_RuntimeMethod_var);
		IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* L_4;
		L_4 = IHolographicFrame_op_Implicit_mD9710DDA9E0E249BEA071E61A62C0C29748C1D32(L_3, NULL);
		HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF* L_5 = (HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF*)il2cpp_codegen_object_new(HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HolographicFrame__ctor_m345466F80A6EAE54A1EFB1526D343AA248DCC43D(L_5, L_4, NULL);
		return L_5;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.HolographicFrame::GetRenderingParameters(Microsoft.Windows.Graphics.Holographic.HolographicCameraPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443* HolographicFrame_GetRenderingParameters_m2C0069DB0D4529AB834C13389F69714082AA83D9 (HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF* __this, HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103* ___cameraPose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* L_0 = __this->____interface_0;
		HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103* L_1 = ___cameraPose0;
		NullCheck(L_1);
		IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* L_2 = L_1->____interface_0;
		NullCheck(L_0);
		IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* L_3;
		L_3 = IHolographicFrame_GetRenderingParameters_m1A3C28E5DC85046CA1076EC77084C036D247B417(L_0, L_2, NULL);
		HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443* L_4 = (HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443*)il2cpp_codegen_object_new(HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HolographicCameraRenderingParameters__ctor_m77E08C169EF37D22321691F6175950E15DE1B93B(L_4, L_3, NULL);
		return L_4;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction Microsoft.Windows.Graphics.Holographic.HolographicFrame::get_CurrentPrediction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicFramePrediction_tD69CDC6735F51F12E74AAB82631EDE4C64AB6997* HolographicFrame_get_CurrentPrediction_m9F8D7AF0F46BD95A916315227137EF8BBFEFBD18 (HolographicFrame_t659F0B5948BA70D392D44B2AE080A9CFD94FD8EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicFramePrediction_tD69CDC6735F51F12E74AAB82631EDE4C64AB6997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IHolographicFrame_tC26D56792C99C10EC974EC7DD8F19D5B27331DAF* L_0 = __this->____interface_0;
		NullCheck(L_0);
		IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* L_1;
		L_1 = IHolographicFrame_get_CurrentPrediction_m929D8A5A03EC055662ACF9F510EEC5544581905C(L_0, NULL);
		HolographicFramePrediction_tD69CDC6735F51F12E74AAB82631EDE4C64AB6997* L_2 = (HolographicFramePrediction_tD69CDC6735F51F12E74AAB82631EDE4C64AB6997*)il2cpp_codegen_object_new(HolographicFramePrediction_tD69CDC6735F51F12E74AAB82631EDE4C64AB6997_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HolographicFramePrediction__ctor_m73ACDC396D6A0B1FA4B02D37CC64D987611AD413(L_2, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCamera::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* IHolographicCamera_op_Implicit_m4BDC578C5767D388845126AB381A95D7E7E5D623 (ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* L_0 = ___obj0;
		IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* L_1 = (IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD*)il2cpp_codegen_object_new(IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IHolographicCamera__ctor_m28B43862984AE33D1949D37867972A8473EDF0E0(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCamera__ctor_m28B43862984AE33D1949D37867972A8473EDF0E0 (IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* __this, ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* ___obj0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* L_0 = ___obj0;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
// System.UInt32 Microsoft.Windows.Graphics.Holographic.IHolographicCamera::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IHolographicCamera_get_Id_mC10C1E23A01D14FE8A070CD87239080986DFC23A (IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D* L_1 = (&L_0->___Vftbl_4);
		_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* L_2 = L_1->___get_Id_5;
		ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_inline(L_2, L_4, (uint32_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E(L_5, NULL);
		uint32_t L_6 = V_0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
IL2CPP_EXTERN_C void Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshal_pinvoke(const Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D& unmarshaled, Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_RenderTargetSize_1 = unmarshaled.___get_RenderTargetSize_1;
	marshaled.___get_ViewportScaleFactor_2 = unmarshaled.___get_ViewportScaleFactor_2;
	marshaled.___put_ViewportScaleFactor_3 = unmarshaled.___put_ViewportScaleFactor_3;
	marshaled.___get_IsStereo_4 = unmarshaled.___get_IsStereo_4;
	marshaled.___get_Id_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Id_5));
	marshaled.___SetNearPlaneDistance_6 = unmarshaled.___SetNearPlaneDistance_6;
	marshaled.___SetFarPlaneDistance_7 = unmarshaled.___SetFarPlaneDistance_7;
}
IL2CPP_EXTERN_C void Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshal_pinvoke_back(const Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshaled_pinvoke& marshaled, Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	intptr_t unmarshaledget_RenderTargetSize_temp_1;
	memset((&unmarshaledget_RenderTargetSize_temp_1), 0, sizeof(unmarshaledget_RenderTargetSize_temp_1));
	unmarshaledget_RenderTargetSize_temp_1 = marshaled.___get_RenderTargetSize_1;
	unmarshaled.___get_RenderTargetSize_1 = unmarshaledget_RenderTargetSize_temp_1;
	intptr_t unmarshaledget_ViewportScaleFactor_temp_2;
	memset((&unmarshaledget_ViewportScaleFactor_temp_2), 0, sizeof(unmarshaledget_ViewportScaleFactor_temp_2));
	unmarshaledget_ViewportScaleFactor_temp_2 = marshaled.___get_ViewportScaleFactor_2;
	unmarshaled.___get_ViewportScaleFactor_2 = unmarshaledget_ViewportScaleFactor_temp_2;
	intptr_t unmarshaledput_ViewportScaleFactor_temp_3;
	memset((&unmarshaledput_ViewportScaleFactor_temp_3), 0, sizeof(unmarshaledput_ViewportScaleFactor_temp_3));
	unmarshaledput_ViewportScaleFactor_temp_3 = marshaled.___put_ViewportScaleFactor_3;
	unmarshaled.___put_ViewportScaleFactor_3 = unmarshaledput_ViewportScaleFactor_temp_3;
	intptr_t unmarshaledget_IsStereo_temp_4;
	memset((&unmarshaledget_IsStereo_temp_4), 0, sizeof(unmarshaledget_IsStereo_temp_4));
	unmarshaledget_IsStereo_temp_4 = marshaled.___get_IsStereo_4;
	unmarshaled.___get_IsStereo_4 = unmarshaledget_IsStereo_temp_4;
	unmarshaled.___get_Id_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Id_5, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Id_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Id_5, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var));
	intptr_t unmarshaledSetNearPlaneDistance_temp_6;
	memset((&unmarshaledSetNearPlaneDistance_temp_6), 0, sizeof(unmarshaledSetNearPlaneDistance_temp_6));
	unmarshaledSetNearPlaneDistance_temp_6 = marshaled.___SetNearPlaneDistance_6;
	unmarshaled.___SetNearPlaneDistance_6 = unmarshaledSetNearPlaneDistance_temp_6;
	intptr_t unmarshaledSetFarPlaneDistance_temp_7;
	memset((&unmarshaledSetFarPlaneDistance_temp_7), 0, sizeof(unmarshaledSetFarPlaneDistance_temp_7));
	unmarshaledSetFarPlaneDistance_temp_7 = marshaled.___SetFarPlaneDistance_7;
	unmarshaled.___SetFarPlaneDistance_7 = unmarshaledSetFarPlaneDistance_temp_7;
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
IL2CPP_EXTERN_C void Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshal_pinvoke_cleanup(Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
IL2CPP_EXTERN_C void Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshal_com(const Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D& unmarshaled, Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_RenderTargetSize_1 = unmarshaled.___get_RenderTargetSize_1;
	marshaled.___get_ViewportScaleFactor_2 = unmarshaled.___get_ViewportScaleFactor_2;
	marshaled.___put_ViewportScaleFactor_3 = unmarshaled.___put_ViewportScaleFactor_3;
	marshaled.___get_IsStereo_4 = unmarshaled.___get_IsStereo_4;
	marshaled.___get_Id_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Id_5));
	marshaled.___SetNearPlaneDistance_6 = unmarshaled.___SetNearPlaneDistance_6;
	marshaled.___SetFarPlaneDistance_7 = unmarshaled.___SetFarPlaneDistance_7;
}
IL2CPP_EXTERN_C void Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshal_com_back(const Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshaled_com& marshaled, Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	intptr_t unmarshaledget_RenderTargetSize_temp_1;
	memset((&unmarshaledget_RenderTargetSize_temp_1), 0, sizeof(unmarshaledget_RenderTargetSize_temp_1));
	unmarshaledget_RenderTargetSize_temp_1 = marshaled.___get_RenderTargetSize_1;
	unmarshaled.___get_RenderTargetSize_1 = unmarshaledget_RenderTargetSize_temp_1;
	intptr_t unmarshaledget_ViewportScaleFactor_temp_2;
	memset((&unmarshaledget_ViewportScaleFactor_temp_2), 0, sizeof(unmarshaledget_ViewportScaleFactor_temp_2));
	unmarshaledget_ViewportScaleFactor_temp_2 = marshaled.___get_ViewportScaleFactor_2;
	unmarshaled.___get_ViewportScaleFactor_2 = unmarshaledget_ViewportScaleFactor_temp_2;
	intptr_t unmarshaledput_ViewportScaleFactor_temp_3;
	memset((&unmarshaledput_ViewportScaleFactor_temp_3), 0, sizeof(unmarshaledput_ViewportScaleFactor_temp_3));
	unmarshaledput_ViewportScaleFactor_temp_3 = marshaled.___put_ViewportScaleFactor_3;
	unmarshaled.___put_ViewportScaleFactor_3 = unmarshaledput_ViewportScaleFactor_temp_3;
	intptr_t unmarshaledget_IsStereo_temp_4;
	memset((&unmarshaledget_IsStereo_temp_4), 0, sizeof(unmarshaledget_IsStereo_temp_4));
	unmarshaledget_IsStereo_temp_4 = marshaled.___get_IsStereo_4;
	unmarshaled.___get_IsStereo_4 = unmarshaledget_IsStereo_temp_4;
	unmarshaled.___get_Id_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Id_5, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Id_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7>(marshaled.___get_Id_5, _get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7_il2cpp_TypeInfo_var));
	intptr_t unmarshaledSetNearPlaneDistance_temp_6;
	memset((&unmarshaledSetNearPlaneDistance_temp_6), 0, sizeof(unmarshaledSetNearPlaneDistance_temp_6));
	unmarshaledSetNearPlaneDistance_temp_6 = marshaled.___SetNearPlaneDistance_6;
	unmarshaled.___SetNearPlaneDistance_6 = unmarshaledSetNearPlaneDistance_temp_6;
	intptr_t unmarshaledSetFarPlaneDistance_temp_7;
	memset((&unmarshaledSetFarPlaneDistance_temp_7), 0, sizeof(unmarshaledSetFarPlaneDistance_temp_7));
	unmarshaledSetFarPlaneDistance_temp_7 = marshaled.___SetFarPlaneDistance_7;
	unmarshaled.___SetFarPlaneDistance_7 = unmarshaledSetFarPlaneDistance_temp_7;
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
IL2CPP_EXTERN_C void Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshal_com_cleanup(Vftbl_t029BD504BF462384C705541025F6A0AD21FABF8D_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* IHolographicCamera6_op_Implicit_m7DCCC77DFCDBFCAF83F1B1ECF45A8689A0E916D3 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_mFAE7C81F1F3B4B247B9E8622DBA30132350F8B86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* L_1;
		L_1 = IObjectReference_As_TisVftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_mFAE7C81F1F3B4B247B9E8622DBA30132350F8B86(L_0, IObjectReference_As_TisVftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_mFAE7C81F1F3B4B247B9E8622DBA30132350F8B86_RuntimeMethod_var);
		IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* L_2;
		L_2 = IHolographicCamera6_op_Implicit_m308CA97E276892403287C842BD09253FCD1BC617(L_1, NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* IHolographicCamera6_op_Implicit_m308CA97E276892403287C842BD09253FCD1BC617 (ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* L_0 = ___obj0;
		IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* L_1 = (IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A*)il2cpp_codegen_object_new(IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IHolographicCamera6__ctor_m689548BEF952680395722F8DF5CBD24B8774EFA8(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCamera6__ctor_m689548BEF952680395722F8DF5CBD24B8774EFA8 (IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* __this, ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* ___obj0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* L_0 = ___obj0;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::get_ViewConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* IHolographicCamera6_get_ViewConfiguration_m57F9DDF897ADD544372792EDDA6369448FC87A57 (IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_mAD4FB43EF4F01699CD9F2513C5F4B952A9EFEF34_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3* L_1 = (&L_0->___Vftbl_4);
		_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* L_2 = L_1->___get_ViewConfiguration_1;
		ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_inline(L_2, L_4, (intptr_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E(L_5, NULL);
		ObjectReference_1_t5DFB67B061A08403F618724CE9E98277A10CEB29* L_6 = __this->____obj_0;
		NullCheck(L_6);
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_7 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_6)->___Module_1;
		ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* L_8;
		L_8 = ObjectReference_1_Attach_mAD4FB43EF4F01699CD9F2513C5F4B952A9EFEF34(L_7, (&V_0), ObjectReference_1_Attach_mAD4FB43EF4F01699CD9F2513C5F4B952A9EFEF34_RuntimeMethod_var);
		IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* L_9;
		L_9 = IHolographicViewConfiguration_op_Implicit_m993439ED4B0359C5BDE4C194D607FF7D0345F7AB(L_8, NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
IL2CPP_EXTERN_C void Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshal_pinvoke(const Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3& unmarshaled, Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_ViewConfiguration_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_ViewConfiguration_1));
}
IL2CPP_EXTERN_C void Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshal_pinvoke_back(const Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshaled_pinvoke& marshaled, Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_ViewConfiguration_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_ViewConfiguration_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_ViewConfiguration_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_ViewConfiguration_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
IL2CPP_EXTERN_C void Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshal_pinvoke_cleanup(Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
IL2CPP_EXTERN_C void Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshal_com(const Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3& unmarshaled, Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_ViewConfiguration_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_ViewConfiguration_1));
}
IL2CPP_EXTERN_C void Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshal_com_back(const Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshaled_com& marshaled, Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_ViewConfiguration_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_ViewConfiguration_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_ViewConfiguration_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_ViewConfiguration_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
IL2CPP_EXTERN_C void Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshal_com_cleanup(Vftbl_tAF569581A60AC52A0D27A7DF8B2BC1FFAF8F81E3_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCamera::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCamera__ctor_mACDEA1AFCDEB8444CFE0EA3556B72748D076A515 (HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D* __this, IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* ___interface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicCamera_U3C_ctorU3Eb__2_0_mA84A9964591C660458C1E9625711643CDBB2B18B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_m25E3F08F7070F779F6F9A998B386FFD3DF80DC2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* L_0 = ___interface0;
		__this->____interface_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interface_0), (void*)L_0);
		Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4* L_1 = (Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4*)il2cpp_codegen_object_new(Func_1_t15B08A3B540AD4AD83935B15E12DC324FDD73FC4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m0E7DEDADBE84DA12C37404FAA9587ADCAA5C3E71(L_1, __this, (intptr_t)((void*)HolographicCamera_U3C_ctorU3Eb__2_0_mA84A9964591C660458C1E9625711643CDBB2B18B_RuntimeMethod_var), NULL);
		Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE* L_2 = (Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE*)il2cpp_codegen_object_new(Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Lazy_1__ctor_m25E3F08F7070F779F6F9A998B386FFD3DF80DC2B(L_2, L_1, Lazy_1__ctor_m25E3F08F7070F779F6F9A998B386FFD3DF80DC2B_RuntimeMethod_var);
		__this->____interface6_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interface6_1), (void*)L_2);
		return;
	}
}
// System.UInt32 Microsoft.Windows.Graphics.Holographic.HolographicCamera::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HolographicCamera_get_Id_mFAECFC321D7CA1B52519B172970863F6005DFA88 (HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D* __this, const RuntimeMethod* method) 
{
	{
		IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* L_0 = __this->____interface_0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = IHolographicCamera_get_Id_mC10C1E23A01D14FE8A070CD87239080986DFC23A(L_0, NULL);
		return L_1;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.HolographicCamera::get_ViewConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2* HolographicCamera_get_ViewConfiguration_m995E7F32E4E6B3871DEE09C9159881225BDE0042 (HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_mA12CF582CEA0267DBDC7BE7190B7F128E71E32E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lazy_1_tCA21BD2C65F2D7B3F98CFF55ACF89DA81F5F1CEE* L_0 = __this->____interface6_1;
		NullCheck(L_0);
		IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* L_1;
		L_1 = Lazy_1_get_Value_mA12CF582CEA0267DBDC7BE7190B7F128E71E32E4(L_0, Lazy_1_get_Value_mA12CF582CEA0267DBDC7BE7190B7F128E71E32E4_RuntimeMethod_var);
		NullCheck(L_1);
		IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* L_2;
		L_2 = IHolographicCamera6_get_ViewConfiguration_m57F9DDF897ADD544372792EDDA6369448FC87A57(L_1, NULL);
		HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2* L_3 = (HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2*)il2cpp_codegen_object_new(HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HolographicViewConfiguration__ctor_m0C974A0982E6D3C9B9A105255298C2DE237C7666(L_3, L_2, NULL);
		return L_3;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.HolographicCamera::<.ctor>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* HolographicCamera_U3C_ctorU3Eb__2_0_mA84A9964591C660458C1E9625711643CDBB2B18B (HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D* __this, const RuntimeMethod* method) 
{
	{
		IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* L_0 = __this->____interface_0;
		NullCheck(L_0);
		ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* L_1 = L_0->____obj_0;
		IHolographicCamera6_t2844F038D26CE9FE2FE7730CB17404D48CD4488A* L_2;
		L_2 = IHolographicCamera6_op_Implicit_m7DCCC77DFCDBFCAF83F1B1ECF45A8689A0E916D3(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* IHolographicViewConfiguration_op_Implicit_m993439ED4B0359C5BDE4C194D607FF7D0345F7AB (ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* L_0 = ___obj0;
		IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* L_1 = (IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44*)il2cpp_codegen_object_new(IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IHolographicViewConfiguration__ctor_m6F4357ADBBC3184FAF075CD2767D8532DF6BE67B(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicViewConfiguration__ctor_m6F4357ADBBC3184FAF075CD2767D8532DF6BE67B (IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* __this, ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* ___obj0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* L_0 = ___obj0;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
IL2CPP_EXTERN_C void Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshal_pinvoke(const Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4& unmarshaled, Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_NativeRenderTargetSize_1 = unmarshaled.___get_NativeRenderTargetSize_1;
	marshaled.___get_RenderTargetSize_2 = unmarshaled.___get_RenderTargetSize_2;
	marshaled.___RequestRenderTargetSize_3 = unmarshaled.___RequestRenderTargetSize_3;
	marshaled.___get_SupportedPixelFormats_4 = unmarshaled.___get_SupportedPixelFormats_4;
	marshaled.___get_PixelFormat_5 = unmarshaled.___get_PixelFormat_5;
	marshaled.___put_PixelFormat_6 = unmarshaled.___put_PixelFormat_6;
	marshaled.___get_IsStereo_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_IsStereo_7));
	marshaled.___get_RefreshRate_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_RefreshRate_8));
	marshaled.___get_Kind_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Kind_9));
	marshaled.___get_Display_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Display_10));
	marshaled.___get_IsEnabled_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_IsEnabled_11));
	marshaled.___put_IsEnabled_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___put_IsEnabled_12));
}
IL2CPP_EXTERN_C void Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshal_pinvoke_back(const Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshaled_pinvoke& marshaled, Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	intptr_t unmarshaledget_NativeRenderTargetSize_temp_1;
	memset((&unmarshaledget_NativeRenderTargetSize_temp_1), 0, sizeof(unmarshaledget_NativeRenderTargetSize_temp_1));
	unmarshaledget_NativeRenderTargetSize_temp_1 = marshaled.___get_NativeRenderTargetSize_1;
	unmarshaled.___get_NativeRenderTargetSize_1 = unmarshaledget_NativeRenderTargetSize_temp_1;
	intptr_t unmarshaledget_RenderTargetSize_temp_2;
	memset((&unmarshaledget_RenderTargetSize_temp_2), 0, sizeof(unmarshaledget_RenderTargetSize_temp_2));
	unmarshaledget_RenderTargetSize_temp_2 = marshaled.___get_RenderTargetSize_2;
	unmarshaled.___get_RenderTargetSize_2 = unmarshaledget_RenderTargetSize_temp_2;
	intptr_t unmarshaledRequestRenderTargetSize_temp_3;
	memset((&unmarshaledRequestRenderTargetSize_temp_3), 0, sizeof(unmarshaledRequestRenderTargetSize_temp_3));
	unmarshaledRequestRenderTargetSize_temp_3 = marshaled.___RequestRenderTargetSize_3;
	unmarshaled.___RequestRenderTargetSize_3 = unmarshaledRequestRenderTargetSize_temp_3;
	intptr_t unmarshaledget_SupportedPixelFormats_temp_4;
	memset((&unmarshaledget_SupportedPixelFormats_temp_4), 0, sizeof(unmarshaledget_SupportedPixelFormats_temp_4));
	unmarshaledget_SupportedPixelFormats_temp_4 = marshaled.___get_SupportedPixelFormats_4;
	unmarshaled.___get_SupportedPixelFormats_4 = unmarshaledget_SupportedPixelFormats_temp_4;
	intptr_t unmarshaledget_PixelFormat_temp_5;
	memset((&unmarshaledget_PixelFormat_temp_5), 0, sizeof(unmarshaledget_PixelFormat_temp_5));
	unmarshaledget_PixelFormat_temp_5 = marshaled.___get_PixelFormat_5;
	unmarshaled.___get_PixelFormat_5 = unmarshaledget_PixelFormat_temp_5;
	intptr_t unmarshaledput_PixelFormat_temp_6;
	memset((&unmarshaledput_PixelFormat_temp_6), 0, sizeof(unmarshaledput_PixelFormat_temp_6));
	unmarshaledput_PixelFormat_temp_6 = marshaled.___put_PixelFormat_6;
	unmarshaled.___put_PixelFormat_6 = unmarshaledput_PixelFormat_temp_6;
	unmarshaled.___get_IsStereo_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_IsStereo_7, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_IsStereo_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_IsStereo_7, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var));
	unmarshaled.___get_RefreshRate_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239>(marshaled.___get_RefreshRate_8, _get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_RefreshRate_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239>(marshaled.___get_RefreshRate_8, _get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239_il2cpp_TypeInfo_var));
	unmarshaled.___get_Kind_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_Kind_9, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Kind_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_Kind_9, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var));
	unmarshaled.___get_Display_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_Display_10, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Display_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_Display_10, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
	unmarshaled.___get_IsEnabled_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_IsEnabled_11, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_IsEnabled_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_IsEnabled_11, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var));
	unmarshaled.___put_IsEnabled_12 = il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079>(marshaled.___put_IsEnabled_12, _put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___put_IsEnabled_12), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079>(marshaled.___put_IsEnabled_12, _put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
IL2CPP_EXTERN_C void Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshal_pinvoke_cleanup(Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
IL2CPP_EXTERN_C void Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshal_com(const Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4& unmarshaled, Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_NativeRenderTargetSize_1 = unmarshaled.___get_NativeRenderTargetSize_1;
	marshaled.___get_RenderTargetSize_2 = unmarshaled.___get_RenderTargetSize_2;
	marshaled.___RequestRenderTargetSize_3 = unmarshaled.___RequestRenderTargetSize_3;
	marshaled.___get_SupportedPixelFormats_4 = unmarshaled.___get_SupportedPixelFormats_4;
	marshaled.___get_PixelFormat_5 = unmarshaled.___get_PixelFormat_5;
	marshaled.___put_PixelFormat_6 = unmarshaled.___put_PixelFormat_6;
	marshaled.___get_IsStereo_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_IsStereo_7));
	marshaled.___get_RefreshRate_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_RefreshRate_8));
	marshaled.___get_Kind_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Kind_9));
	marshaled.___get_Display_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_Display_10));
	marshaled.___get_IsEnabled_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_IsEnabled_11));
	marshaled.___put_IsEnabled_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___put_IsEnabled_12));
}
IL2CPP_EXTERN_C void Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshal_com_back(const Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshaled_com& marshaled, Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	intptr_t unmarshaledget_NativeRenderTargetSize_temp_1;
	memset((&unmarshaledget_NativeRenderTargetSize_temp_1), 0, sizeof(unmarshaledget_NativeRenderTargetSize_temp_1));
	unmarshaledget_NativeRenderTargetSize_temp_1 = marshaled.___get_NativeRenderTargetSize_1;
	unmarshaled.___get_NativeRenderTargetSize_1 = unmarshaledget_NativeRenderTargetSize_temp_1;
	intptr_t unmarshaledget_RenderTargetSize_temp_2;
	memset((&unmarshaledget_RenderTargetSize_temp_2), 0, sizeof(unmarshaledget_RenderTargetSize_temp_2));
	unmarshaledget_RenderTargetSize_temp_2 = marshaled.___get_RenderTargetSize_2;
	unmarshaled.___get_RenderTargetSize_2 = unmarshaledget_RenderTargetSize_temp_2;
	intptr_t unmarshaledRequestRenderTargetSize_temp_3;
	memset((&unmarshaledRequestRenderTargetSize_temp_3), 0, sizeof(unmarshaledRequestRenderTargetSize_temp_3));
	unmarshaledRequestRenderTargetSize_temp_3 = marshaled.___RequestRenderTargetSize_3;
	unmarshaled.___RequestRenderTargetSize_3 = unmarshaledRequestRenderTargetSize_temp_3;
	intptr_t unmarshaledget_SupportedPixelFormats_temp_4;
	memset((&unmarshaledget_SupportedPixelFormats_temp_4), 0, sizeof(unmarshaledget_SupportedPixelFormats_temp_4));
	unmarshaledget_SupportedPixelFormats_temp_4 = marshaled.___get_SupportedPixelFormats_4;
	unmarshaled.___get_SupportedPixelFormats_4 = unmarshaledget_SupportedPixelFormats_temp_4;
	intptr_t unmarshaledget_PixelFormat_temp_5;
	memset((&unmarshaledget_PixelFormat_temp_5), 0, sizeof(unmarshaledget_PixelFormat_temp_5));
	unmarshaledget_PixelFormat_temp_5 = marshaled.___get_PixelFormat_5;
	unmarshaled.___get_PixelFormat_5 = unmarshaledget_PixelFormat_temp_5;
	intptr_t unmarshaledput_PixelFormat_temp_6;
	memset((&unmarshaledput_PixelFormat_temp_6), 0, sizeof(unmarshaledput_PixelFormat_temp_6));
	unmarshaledput_PixelFormat_temp_6 = marshaled.___put_PixelFormat_6;
	unmarshaled.___put_PixelFormat_6 = unmarshaledput_PixelFormat_temp_6;
	unmarshaled.___get_IsStereo_7 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_IsStereo_7, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_IsStereo_7), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_IsStereo_7, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var));
	unmarshaled.___get_RefreshRate_8 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239>(marshaled.___get_RefreshRate_8, _get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_RefreshRate_8), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239>(marshaled.___get_RefreshRate_8, _get_PropertyAsDouble_t12EB009A4DEABADA8B3CE83840EBBE27C5BD9239_il2cpp_TypeInfo_var));
	unmarshaled.___get_Kind_9 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_Kind_9, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Kind_9), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_Kind_9, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var));
	unmarshaled.___get_Display_10 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_Display_10, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_Display_10), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_Display_10, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
	unmarshaled.___get_IsEnabled_11 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_IsEnabled_11, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_IsEnabled_11), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7>(marshaled.___get_IsEnabled_11, _get_PropertyAsBool_t0D4A8FB8DB9C58CCE532122DCA2E3064BFBFCEF7_il2cpp_TypeInfo_var));
	unmarshaled.___put_IsEnabled_12 = il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079>(marshaled.___put_IsEnabled_12, _put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___put_IsEnabled_12), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079>(marshaled.___put_IsEnabled_12, _put_PropertyAsBool_tA64B84C208D206C586FC980F685152BE4CA10079_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
IL2CPP_EXTERN_C void Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshal_com_cleanup(Vftbl_t3022EB44F44C270E4D11BF6169AA88767739C0B4_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* IHolographicViewConfiguration2_op_Implicit_mF5DBC75C73CC64EF1FAB442A95C62E4EC3FD67BC (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_mE160549453670CBA61781BE6CB0B79C5892A38C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* L_1;
		L_1 = IObjectReference_As_TisVftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_mE160549453670CBA61781BE6CB0B79C5892A38C6(L_0, IObjectReference_As_TisVftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_mE160549453670CBA61781BE6CB0B79C5892A38C6_RuntimeMethod_var);
		IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* L_2;
		L_2 = IHolographicViewConfiguration2_op_Implicit_m3DAFE1B2B225AB857A7446CAE065FA0007059F76(L_1, NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* IHolographicViewConfiguration2_op_Implicit_m3DAFE1B2B225AB857A7446CAE065FA0007059F76 (ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* L_0 = ___obj0;
		IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* L_1 = (IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25*)il2cpp_codegen_object_new(IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IHolographicViewConfiguration2__ctor_m100EE93A9ECCEC634BCD359E6F99DA09C75CACCB(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicViewConfiguration2__ctor_m100EE93A9ECCEC634BCD359E6F99DA09C75CACCB (IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* __this, ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* ___obj0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* L_0 = ___obj0;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::get_SupportedDepthReprojectionMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IHolographicViewConfiguration2_get_SupportedDepthReprojectionMethods_m334751557EEB0D083FC867AE724159C80FB7C358 (IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_mB30E87AD7B9FEFC26064CFB4302F43FE1A143968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_SupportedDepthReprojectionMethodsU3Eb__6_0_m8861B611C7F52AD092DE3FC74BEF321AFC301E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorViewOfEnum_1__ctor_mCC11E662D49CFE05A0BF43043941C18283D73790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorViewOfEnum_1_tF7644CE935AF97047C0DC0237D4739C36457E71E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8* G_B2_0 = NULL;
	Guid_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0* G_B2_2 = NULL;
	Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8* G_B1_0 = NULL;
	Guid_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0* G_B1_2 = NULL;
	{
		ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693* L_1 = (&L_0->___Vftbl_4);
		_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* L_2 = L_1->___get_SupportedDepthReprojectionMethods_1;
		ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_inline(L_2, L_4, (intptr_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E(L_5, NULL);
		ObjectReference_1_t66E296AA17857D615BFC4FDD151BE0236BB2A2ED* L_6 = __this->____obj_0;
		NullCheck(L_6);
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_7 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_6)->___Module_1;
		ObjectReference_1_t2A27E776038C7096F834DD324AB665A8D1CFDCA0* L_8;
		L_8 = ObjectReference_1_Attach_mB30E87AD7B9FEFC26064CFB4302F43FE1A143968(L_7, (&V_0), ObjectReference_1_Attach_mB30E87AD7B9FEFC26064CFB4302F43FE1A143968_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_il2cpp_TypeInfo_var);
		Guid_t L_9 = ((IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_StaticFields*)il2cpp_codegen_static_fields_for(IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_il2cpp_TypeInfo_var))->___IIterableOfHolographicDepthReprojectionMethod_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var);
		Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8* L_10 = ((U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8* L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_9;
		G_B1_2 = L_8;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			G_B2_2 = L_8;
			goto IL_005e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var);
		U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93* L_12 = ((U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8* L_13 = (Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8*)il2cpp_codegen_object_new(Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m67C4BB45599DFBAE5935CB6263C0152FC9276F23(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3Cget_SupportedDepthReprojectionMethodsU3Eb__6_0_m8861B611C7F52AD092DE3FC74BEF321AFC301E67_RuntimeMethod_var), NULL);
		Func_2_t120523AF232EDE70ADEE2D68B289AAFD9918B0B8* L_14 = L_13;
		((U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_14);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_005e:
	{
		VectorViewOfEnum_1_tF7644CE935AF97047C0DC0237D4739C36457E71E* L_15 = (VectorViewOfEnum_1_tF7644CE935AF97047C0DC0237D4739C36457E71E*)il2cpp_codegen_object_new(VectorViewOfEnum_1_tF7644CE935AF97047C0DC0237D4739C36457E71E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		VectorViewOfEnum_1__ctor_mCC11E662D49CFE05A0BF43043941C18283D73790(L_15, G_B2_2, G_B2_1, G_B2_0, VectorViewOfEnum_1__ctor_mCC11E662D49CFE05A0BF43043941C18283D73790_RuntimeMethod_var);
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
IL2CPP_EXTERN_C void Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshal_pinvoke(const Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693& unmarshaled, Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_SupportedDepthReprojectionMethods_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_SupportedDepthReprojectionMethods_1));
}
IL2CPP_EXTERN_C void Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshal_pinvoke_back(const Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshaled_pinvoke& marshaled, Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_SupportedDepthReprojectionMethods_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_SupportedDepthReprojectionMethods_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_SupportedDepthReprojectionMethods_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_SupportedDepthReprojectionMethods_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
IL2CPP_EXTERN_C void Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshal_pinvoke_cleanup(Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
IL2CPP_EXTERN_C void Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshal_com(const Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693& unmarshaled, Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_SupportedDepthReprojectionMethods_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_SupportedDepthReprojectionMethods_1));
}
IL2CPP_EXTERN_C void Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshal_com_back(const Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshaled_com& marshaled, Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_SupportedDepthReprojectionMethods_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_SupportedDepthReprojectionMethods_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_SupportedDepthReprojectionMethods_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_SupportedDepthReprojectionMethods_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
IL2CPP_EXTERN_C void Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshal_com_cleanup(Vftbl_t0333DE5FF13B9E43D90A6572CBBBE2DA65EB4693_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBFD2A7BA44D939DBBCD8E6E31601211B3511C918 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93* L_0 = (U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93*)il2cpp_codegen_object_new(U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF8C043844304E060AF97B2EC3AD4469B6F10BE8E(L_0, NULL);
		((U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF8C043844304E060AF97B2EC3AD4469B6F10BE8E (U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::<get_SupportedDepthReprojectionMethods>b__6_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3Cget_SupportedDepthReprojectionMethodsU3Eb__6_0_m8861B611C7F52AD092DE3FC74BEF321AFC301E67 (U3CU3Ec_t83111B1319638F37238EAB801CC101C089ECDC93* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		return (int32_t)(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicViewConfiguration__ctor_m0C974A0982E6D3C9B9A105255298C2DE237C7666 (HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2* __this, IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* ___interface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicViewConfiguration_U3C_ctorU3Eb__2_0_m514198ACCE44789DBAAFC066245B58F486D25EB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_mD9AF2FC425B61DE0A37881BEE845FF09E1E772D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* L_0 = ___interface0;
		__this->____interface_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interface_0), (void*)L_0);
		Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB* L_1 = (Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB*)il2cpp_codegen_object_new(Func_1_t0367C280C16442C9CF5AC25E9FF9D7382B6D41BB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m6582917FE40A0F4B4BE9E16011D763BFD6E90E4F(L_1, __this, (intptr_t)((void*)HolographicViewConfiguration_U3C_ctorU3Eb__2_0_m514198ACCE44789DBAAFC066245B58F486D25EB2_RuntimeMethod_var), NULL);
		Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8* L_2 = (Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8*)il2cpp_codegen_object_new(Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Lazy_1__ctor_mD9AF2FC425B61DE0A37881BEE845FF09E1E772D6(L_2, L_1, Lazy_1__ctor_mD9AF2FC425B61DE0A37881BEE845FF09E1E772D6_RuntimeMethod_var);
		__this->____interface2_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interface2_1), (void*)L_2);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::get_SupportedDepthReprojectionMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HolographicViewConfiguration_get_SupportedDepthReprojectionMethods_mAF897EEB353A9A9B037B4B103631A9FF29A1F422 (HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m7C81996BE44A2D6D2EEF6090CC0FCED214B6BB98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lazy_1_t1E97A1F02C41B352285AFE32E7EC5CB7BCD126B8* L_0 = __this->____interface2_1;
		NullCheck(L_0);
		IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* L_1;
		L_1 = Lazy_1_get_Value_m7C81996BE44A2D6D2EEF6090CC0FCED214B6BB98(L_0, Lazy_1_get_Value_m7C81996BE44A2D6D2EEF6090CC0FCED214B6BB98_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = IHolographicViewConfiguration2_get_SupportedDepthReprojectionMethods_m334751557EEB0D083FC867AE724159C80FB7C358(L_1, NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::<.ctor>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* HolographicViewConfiguration_U3C_ctorU3Eb__2_0_m514198ACCE44789DBAAFC066245B58F486D25EB2 (HolographicViewConfiguration_tCE96BE61C8A45E6257DB0FE69546AE77A26B8AA2* __this, const RuntimeMethod* method) 
{
	{
		IHolographicViewConfiguration_tFA0167E482E032622A0A5B68D10A5C018F9A7B44* L_0 = __this->____interface_0;
		NullCheck(L_0);
		ObjectReference_1_t16B974D96376368AB8A5E82ECAB50F7582F379C2* L_1 = L_0->____obj_0;
		IHolographicViewConfiguration2_tD9E1149FA4EABFDDAFDF269F54315B713FC29C25* L_2;
		L_2 = IHolographicViewConfiguration2_op_Implicit_mF5DBC75C73CC64EF1FAB442A95C62E4EC3FD67BC(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* IHolographicFramePrediction_op_Implicit_mB8A8C290A58FF65AF318F5A6350D2EF1D85062B3 (ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* L_0 = ___obj0;
		IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* L_1 = (IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA*)il2cpp_codegen_object_new(IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IHolographicFramePrediction__ctor_m736B74B5ACC06F0573CC13FA3A34EF8C3245B696(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicFramePrediction__ctor_m736B74B5ACC06F0573CC13FA3A34EF8C3245B696 (IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* __this, ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* ___obj0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* L_0 = ___obj0;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::get_CameraPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IHolographicFramePrediction_get_CameraPoses_mFBAC32C8D84A31F586996B975F48C2A7D2C59264 (IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_m95494375A01D046A55417F2C7851906E3C3E79B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m884EB3BDE39F9CD41439A79CAA382D45679E2C5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorViewOfObject_1__ctor_m5BB6C758913ADC705E9AE23AC8405DF2D43206A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorViewOfObject_1_tFE46525328D955B072EB9635CA8747986E2119D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605* G_B2_0 = NULL;
	Guid_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420* G_B2_2 = NULL;
	CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605* G_B1_0 = NULL;
	Guid_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420* G_B1_2 = NULL;
	{
		ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E* L_1 = (&L_0->___Vftbl_4);
		_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* L_2 = L_1->___get_CameraPoses_1;
		ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_inline(L_2, L_4, (intptr_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E(L_5, NULL);
		ObjectReference_1_t08C5A561CB58E9B0CBF3FC8A4B2ADD121B23B770* L_6 = __this->____obj_0;
		NullCheck(L_6);
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_7 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_6)->___Module_1;
		ObjectReference_1_tD50B4FC890688012DCB7E9681FD557F270792420* L_8;
		L_8 = ObjectReference_1_Attach_m95494375A01D046A55417F2C7851906E3C3E79B1(L_7, (&V_0), ObjectReference_1_Attach_m95494375A01D046A55417F2C7851906E3C3E79B1_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_il2cpp_TypeInfo_var);
		Guid_t L_9 = ((IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_StaticFields*)il2cpp_codegen_static_fields_for(IID_tE2FEDF2D7903E38A22393C3A8673A874EDBF575C_il2cpp_TypeInfo_var))->___IIterableOfHolographicCameraPose_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var);
		CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605* L_10 = ((U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605* L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_9;
		G_B1_2 = L_8;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			G_B2_2 = L_8;
			goto IL_005e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var);
		U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00* L_12 = ((U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605* L_13 = (CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605*)il2cpp_codegen_object_new(CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		CreateT__ctor_m523ECA416632380B0A46D9418149B4713DBC74DD(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m884EB3BDE39F9CD41439A79CAA382D45679E2C5F_RuntimeMethod_var), NULL);
		CreateT_tC08B2E0703BB8234EFBFABB401FFDDEE2EF90605* L_14 = L_13;
		((U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_14);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_005e:
	{
		VectorViewOfObject_1_tFE46525328D955B072EB9635CA8747986E2119D2* L_15 = (VectorViewOfObject_1_tFE46525328D955B072EB9635CA8747986E2119D2*)il2cpp_codegen_object_new(VectorViewOfObject_1_tFE46525328D955B072EB9635CA8747986E2119D2_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		VectorViewOfObject_1__ctor_m5BB6C758913ADC705E9AE23AC8405DF2D43206A8(L_15, G_B2_2, G_B2_1, G_B2_0, VectorViewOfObject_1__ctor_m5BB6C758913ADC705E9AE23AC8405DF2D43206A8_RuntimeMethod_var);
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
IL2CPP_EXTERN_C void Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshal_pinvoke(const Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E& unmarshaled, Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_CameraPoses_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_CameraPoses_1));
}
IL2CPP_EXTERN_C void Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshal_pinvoke_back(const Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshaled_pinvoke& marshaled, Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_CameraPoses_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_CameraPoses_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_CameraPoses_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_CameraPoses_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
IL2CPP_EXTERN_C void Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshal_pinvoke_cleanup(Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
IL2CPP_EXTERN_C void Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshal_com(const Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E& unmarshaled, Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_CameraPoses_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_CameraPoses_1));
}
IL2CPP_EXTERN_C void Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshal_com_back(const Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshaled_com& marshaled, Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_CameraPoses_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_CameraPoses_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_CameraPoses_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_CameraPoses_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
IL2CPP_EXTERN_C void Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshal_com_cleanup(Vftbl_tB14715C13C66ADA6C2CDB8F57F0E51A0D6A8047E_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m724CB22A405E334D4307AE3B28D63FB7DED917D1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00* L_0 = (U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00*)il2cpp_codegen_object_new(U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6A374018D7BF48EF81A2D07FDFD6AE8C9A158239(L_0, NULL);
		((U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A374018D7BF48EF81A2D07FDFD6AE8C9A158239 (U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::<get_CameraPoses>b__6_0(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103* U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m884EB3BDE39F9CD41439A79CAA382D45679E2C5F (U3CU3Ec_t16439BB3EFEE5608833B8275F931B8F59D7A5F00* __this, IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* L_0 = ___obj0;
		IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* L_1;
		L_1 = IHolographicCameraPose_op_Implicit_m55529EF6194AB8A7DDF9E845900CF2373FC27890(L_0, NULL);
		HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103* L_2 = (HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103*)il2cpp_codegen_object_new(HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HolographicCameraPose__ctor_m7CA32445CEEAD6002E80CCFBE2614CB6A6939F3B(L_2, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicFramePrediction__ctor_m73ACDC396D6A0B1FA4B02D37CC64D987611AD413 (HolographicFramePrediction_tD69CDC6735F51F12E74AAB82631EDE4C64AB6997* __this, IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* ___interface0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* L_0 = ___interface0;
		__this->____interface_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interface_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose> Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::get_CameraPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HolographicFramePrediction_get_CameraPoses_m39AFEEBB1516F2A0BF75AA96838492562B215B91 (HolographicFramePrediction_tD69CDC6735F51F12E74AAB82631EDE4C64AB6997* __this, const RuntimeMethod* method) 
{
	{
		IHolographicFramePrediction_tA3EA8A106BF3992F5469786696E1574126E4F8EA* L_0 = __this->____interface_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = IHolographicFramePrediction_get_CameraPoses_mFBAC32C8D84A31F586996B975F48C2A7D2C59264(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* IHolographicCameraPose_op_Implicit_m55529EF6194AB8A7DDF9E845900CF2373FC27890 (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_m1534B60ADC2D3C5FD929E56A41059C79BFF00D90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* L_1;
		L_1 = IObjectReference_As_TisVftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_m1534B60ADC2D3C5FD929E56A41059C79BFF00D90(L_0, IObjectReference_As_TisVftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_m1534B60ADC2D3C5FD929E56A41059C79BFF00D90_RuntimeMethod_var);
		IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* L_2;
		L_2 = IHolographicCameraPose_op_Implicit_m2384DC86416726D0A9B8F05F757246016585C47A(L_1, NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* IHolographicCameraPose_op_Implicit_m2384DC86416726D0A9B8F05F757246016585C47A (ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* L_0 = ___obj0;
		IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* L_1 = (IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97*)il2cpp_codegen_object_new(IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IHolographicCameraPose__ctor_mE82A004514F7D3531C114D168F589DD7DF523C26(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraPose__ctor_mE82A004514F7D3531C114D168F589DD7DF523C26 (IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* __this, ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* ___obj0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* L_0 = ___obj0;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::get_HolographicCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* IHolographicCameraPose_get_HolographicCamera_mDBF06C0C6BBD100B296D24F204AB35654099F647 (IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_m4211059F0BE59EA50A1914AB81F08B280660F6A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774* L_1 = (&L_0->___Vftbl_4);
		_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* L_2 = L_1->___get_HolographicCamera_1;
		ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_3)->___ThisPtr_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_inline(L_2, L_4, (intptr_t*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E(L_5, NULL);
		ObjectReference_1_tB3E42304528CB59B2914DE33749CC35574B22030* L_6 = __this->____obj_0;
		NullCheck(L_6);
		ModuleReference_t7C2BBC4465DDFE0CCEFC212FFD7E7755676D4A19 L_7 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_6)->___Module_1;
		ObjectReference_1_t62A043060897783C73E6FFCB9AC74D84FBAA57AC* L_8;
		L_8 = ObjectReference_1_Attach_m4211059F0BE59EA50A1914AB81F08B280660F6A4(L_7, (&V_0), ObjectReference_1_Attach_m4211059F0BE59EA50A1914AB81F08B280660F6A4_RuntimeMethod_var);
		IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* L_9;
		L_9 = IHolographicCamera_op_Implicit_m4BDC578C5767D388845126AB381A95D7E7E5D623(L_8, NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
IL2CPP_EXTERN_C void Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshal_pinvoke(const Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774& unmarshaled, Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_HolographicCamera_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_HolographicCamera_1));
}
IL2CPP_EXTERN_C void Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshal_pinvoke_back(const Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshaled_pinvoke& marshaled, Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_HolographicCamera_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_HolographicCamera_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_HolographicCamera_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_HolographicCamera_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
IL2CPP_EXTERN_C void Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshal_pinvoke_cleanup(Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
IL2CPP_EXTERN_C void Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshal_com(const Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774& unmarshaled, Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_HolographicCamera_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_HolographicCamera_1));
}
IL2CPP_EXTERN_C void Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshal_com_back(const Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshaled_com& marshaled, Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_HolographicCamera_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_HolographicCamera_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_HolographicCamera_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D>(marshaled.___get_HolographicCamera_1, _get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
IL2CPP_EXTERN_C void Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshal_com_cleanup(Vftbl_t521059C6FA397DFF557D17ABEBF0B0B388F28774_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCameraPose__ctor_m7CA32445CEEAD6002E80CCFBE2614CB6A6939F3B (HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103* __this, IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* ___interface0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* L_0 = ___interface0;
		__this->____interface_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interface_0), (void*)L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicCamera Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::get_HolographicCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D* HolographicCameraPose_get_HolographicCamera_mB11278C135AD4CEE68FE01B37CC1DEA7AE8CCCB3 (HolographicCameraPose_t3D3092877BA2C1549AAFE745B5867257E73C4103* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IHolographicCameraPose_t2E2FFB8DF78448633F9F0B516D407975874E3F97* L_0 = __this->____interface_0;
		NullCheck(L_0);
		IHolographicCamera_tAF6438E20B07EEE20E764D1991CF2E04133D0BCD* L_1;
		L_1 = IHolographicCameraPose_get_HolographicCamera_mDBF06C0C6BBD100B296D24F204AB35654099F647(L_0, NULL);
		HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D* L_2 = (HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D*)il2cpp_codegen_object_new(HolographicCamera_t6FA7590D167A4F57303F4234A7683FE57013A28D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HolographicCamera__ctor_mACDEA1AFCDEB8444CFE0EA3556B72748D076A515(L_2, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* IHolographicCameraRenderingParameters_op_Implicit_m609E27B63ECD6C92790ECDFAE4EAE13660D07935 (ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* L_0 = ___obj0;
		IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* L_1 = (IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570*)il2cpp_codegen_object_new(IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IHolographicCameraRenderingParameters__ctor_m189865DF9B0559165B9665FFCE975446A9A511AB(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters__ctor_m189865DF9B0559165B9665FFCE975446A9A511AB (IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* __this, ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* ___obj0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* L_0 = ___obj0;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
IL2CPP_EXTERN_C void Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshal_pinvoke(const Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2& unmarshaled, Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
}
IL2CPP_EXTERN_C void Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshal_pinvoke_back(const Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshaled_pinvoke& marshaled, Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2& unmarshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
IL2CPP_EXTERN_C void Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshal_pinvoke_cleanup(Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
IL2CPP_EXTERN_C void Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshal_com(const Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2& unmarshaled, Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
}
IL2CPP_EXTERN_C void Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshal_com_back(const Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshaled_com& marshaled, Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2& unmarshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
IL2CPP_EXTERN_C void Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshal_com_cleanup(Vftbl_tE7527571ABF7BE2551BEFDF1D25DFD1035DEF7F2_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* IHolographicCameraRenderingParameters4_op_Implicit_m69F88EA74EA06425C79C30DE830E886798211D5A (IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_mD1C83FF1D34A2E1F35D7ABE0AF2664F0E26F93B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471* L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* L_1;
		L_1 = IObjectReference_As_TisVftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_mD1C83FF1D34A2E1F35D7ABE0AF2664F0E26F93B3(L_0, IObjectReference_As_TisVftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_mD1C83FF1D34A2E1F35D7ABE0AF2664F0E26F93B3_RuntimeMethod_var);
		IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* L_2;
		L_2 = IHolographicCameraRenderingParameters4_op_Implicit_mCEA7220A476A57D5066E0C33C52FC6029C130E14(L_1, NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* IHolographicCameraRenderingParameters4_op_Implicit_mCEA7220A476A57D5066E0C33C52FC6029C130E14 (ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* L_0 = ___obj0;
		IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* L_1 = (IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441*)il2cpp_codegen_object_new(IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IHolographicCameraRenderingParameters4__ctor_m1C7FADDD371B704FDD43A2C493B9E0CBC5A6E22E(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4__ctor_m1C7FADDD371B704FDD43A2C493B9E0CBC5A6E22E (IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* __this, ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* ___obj0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* L_0 = ___obj0;
		__this->____obj_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::set_DepthReprojectionMethod(Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4_set_DepthReprojectionMethod_mF6E8FCBCD555D5DDA84EABB6473EA75E46180599 (IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* L_0 = __this->____obj_0;
		NullCheck(L_0);
		Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496* L_1 = (&L_0->___Vftbl_4);
		_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* L_2 = L_1->___put_DepthReprojectionMethod_2;
		ObjectReference_1_tCF7BD1484CE56D09747459B5B8F9B47F3BC53740* L_3 = __this->____obj_0;
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tFC85BE828D29DF34A6E87A4AA8151D221DA8F471*)L_3)->___ThisPtr_0;
		int32_t L_5 = ___value0;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = _put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_inline(L_2, L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m41D24C44BB10EC2DE8C26F0BAB210E9A48657F6E(L_6, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
IL2CPP_EXTERN_C void Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshal_pinvoke(const Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496& unmarshaled, Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_DepthReprojectionMethod_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_DepthReprojectionMethod_1));
	marshaled.___put_DepthReprojectionMethod_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___put_DepthReprojectionMethod_2));
}
IL2CPP_EXTERN_C void Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshal_pinvoke_back(const Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshaled_pinvoke& marshaled, Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_DepthReprojectionMethod_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_DepthReprojectionMethod_1, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_DepthReprojectionMethod_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_DepthReprojectionMethod_1, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var));
	unmarshaled.___put_DepthReprojectionMethod_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4>(marshaled.___put_DepthReprojectionMethod_2, _put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___put_DepthReprojectionMethod_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4>(marshaled.___put_DepthReprojectionMethod_2, _put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
IL2CPP_EXTERN_C void Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshal_pinvoke_cleanup(Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
IL2CPP_EXTERN_C void Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshal_com(const Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496& unmarshaled, Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com(unmarshaled.___IInspectableVftbl_0, marshaled.___IInspectableVftbl_0);
	marshaled.___get_DepthReprojectionMethod_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___get_DepthReprojectionMethod_1));
	marshaled.___put_DepthReprojectionMethod_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___put_DepthReprojectionMethod_2));
}
IL2CPP_EXTERN_C void Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshal_com_back(const Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshaled_com& marshaled, Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1 unmarshaledIInspectableVftbl_temp_0;
	memset((&unmarshaledIInspectableVftbl_temp_0), 0, sizeof(unmarshaledIInspectableVftbl_temp_0));
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaledIInspectableVftbl_temp_0);
	unmarshaled.___IInspectableVftbl_0 = unmarshaledIInspectableVftbl_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((&(((&unmarshaled.___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
	#endif
	unmarshaled.___get_DepthReprojectionMethod_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_DepthReprojectionMethod_1, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___get_DepthReprojectionMethod_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1>(marshaled.___get_DepthReprojectionMethod_1, _get_PropertyAsEnum_t1918A7EDCBB8E6EFB184C252B07297FDAF5FA0F1_il2cpp_TypeInfo_var));
	unmarshaled.___put_DepthReprojectionMethod_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4>(marshaled.___put_DepthReprojectionMethod_2, _put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___put_DepthReprojectionMethod_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4>(marshaled.___put_DepthReprojectionMethod_2, _put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
IL2CPP_EXTERN_C void Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshal_com_cleanup(Vftbl_t72AFD5387F06F53C81AA7D281E8F2DB738F52496_marshaled_com& marshaled)
{
	IInspectableVftbl_t30D18E42FB76F72FBAAD16B12CCC766CB0B887E1_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCameraRenderingParameters__ctor_m77E08C169EF37D22321691F6175950E15DE1B93B (HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443* __this, IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* ___interface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicCameraRenderingParameters_U3C_ctorU3Eb__2_0_m5935E694FBDD6DFD4A7E4D1CCE5A3C370BB3495E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_m66C0DADD407FABCA4E65DE3DE449B00DFE138A96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* L_0 = ___interface0;
		__this->____interface_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interface_0), (void*)L_0);
		Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0* L_1 = (Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0*)il2cpp_codegen_object_new(Func_1_t6F3A3A3B5F4F8901343EA020153F461A367FAAF0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m72D0CF0E1272033DD92286BA3D7535080E2D553D(L_1, __this, (intptr_t)((void*)HolographicCameraRenderingParameters_U3C_ctorU3Eb__2_0_m5935E694FBDD6DFD4A7E4D1CCE5A3C370BB3495E_RuntimeMethod_var), NULL);
		Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4* L_2 = (Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4*)il2cpp_codegen_object_new(Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Lazy_1__ctor_m66C0DADD407FABCA4E65DE3DE449B00DFE138A96(L_2, L_1, Lazy_1__ctor_m66C0DADD407FABCA4E65DE3DE449B00DFE138A96_RuntimeMethod_var);
		__this->____interface4_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interface4_1), (void*)L_2);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::set_DepthReprojectionMethod(Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCameraRenderingParameters_set_DepthReprojectionMethod_m9E7131FBDCF3F63D89B039F17333C3A03A854B7E (HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m579487DDA2F2441B3151FADCB636975541F6829A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lazy_1_t01F2EE9DBA5D001B7B6B0EB626F7A9DA255066B4* L_0 = __this->____interface4_1;
		NullCheck(L_0);
		IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* L_1;
		L_1 = Lazy_1_get_Value_m579487DDA2F2441B3151FADCB636975541F6829A(L_0, Lazy_1_get_Value_m579487DDA2F2441B3151FADCB636975541F6829A_RuntimeMethod_var);
		int32_t L_2 = ___value0;
		NullCheck(L_1);
		IHolographicCameraRenderingParameters4_set_DepthReprojectionMethod_mF6E8FCBCD555D5DDA84EABB6473EA75E46180599(L_1, L_2, NULL);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::<.ctor>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* HolographicCameraRenderingParameters_U3C_ctorU3Eb__2_0_m5935E694FBDD6DFD4A7E4D1CCE5A3C370BB3495E (HolographicCameraRenderingParameters_t5C406F481D24EA5FDE0965E4E2364D7E787F2443* __this, const RuntimeMethod* method) 
{
	{
		IHolographicCameraRenderingParameters_t06FE27AACA716729962B21132D2A4FB13D43E570* L_0 = __this->____interface_0;
		NullCheck(L_0);
		ObjectReference_1_t763A6213704689E08D34295F8B65FAFE7B159868* L_1 = L_0->____obj_0;
		IHolographicCameraRenderingParameters4_t8F47F8086FB6ACAB60D4E19B506B8089CC632441* L_2;
		L_2 = IHolographicCameraRenderingParameters4_op_Implicit_m69F88EA74EA06425C79C30DE830E886798211D5A(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _GetRenderingParameters_Invoke_mEE65694C54E88EEB10EBC0E192C66A099A3079B5_inline (_GetRenderingParameters_t95A9ED0D9FF57562C2C7AAE6AA803B22D5CBF022* __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_m28AD107E08D607EC845DD4D10ECD9B4C465F14F9_inline (_get_PropertyAsObject_t40E4818556A45DA18F2CD8166164D634C390BA1D* __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_Invoke_m1E24280C5D1ED05244C8A8D278D514184CF83E49_inline (_get_PropertyAsUInt_t41F49845A35529376E63C5F63BD680D5524FCCC7* __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t _put_PropertyAsEnum_Invoke_mE981F602F34EF35CF2819AF15898CDDDD8EEEF5A_inline (_put_PropertyAsEnum_tD91E2511DA856A60A0AFEFC68629334763AC5FA4* __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___thisPtr0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
