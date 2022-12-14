#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityScreenNavigator.Runtime.Core.Shared.Views.Window>
struct Action_1_tF3A4D9C1EB5202EBEE6F15DF6B9D5BFE1AF2A9CB;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>
struct AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityScreenNavigator.Runtime.Foundation.AssetLoaders.AssetLoadHandle`1<UnityEngine.GameObject>>
struct Dictionary_2_t655DD9561EFFB0EE9C2ACEA65D318F9F9C4FCE13;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer>
struct Dictionary_2_t51F227D634D1E0F97B39690F3BFB27ACA188370A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityScreenNavigator.Runtime.Core.Modals.ModalContainer>
struct Dictionary_2_t1DE4380ADDEF716AFE4B75B0B5341A38EA5F3F0C;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer>
struct Dictionary_2_t403006678751EA4674021F23EB1FA29D583F4BC0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Foundation.AssetLoaders.AssetLoadHandle`1<UnityEngine.GameObject>>
struct Dictionary_2_t497E16E4D97FDF87E746A62B6D82CA21549DC395;
// System.Collections.Generic.Dictionary`2<System.String,System.Object[]>
struct Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8;
// System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/DataGroup[]>
struct Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31;
// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Core.Activities.Activity>
struct Dictionary_2_t16E28BC2240440C45C556862A51EE7456F8D4A28;
// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer>
struct Dictionary_2_tA4247293BA365B1DAB95E66D7C6497DE7BFCA827;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C;
// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Core.Modals.ModalContainer>
struct Dictionary_2_t5D6C3EC58822BA624FDD84A736973EDA1E92144F;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer>
struct Dictionary_2_t1422EA3A76056E8253AD33961A9B039A87148884;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityAction>
struct Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050;
// System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/SFilter>
struct Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<Game.Scripts.Config.MonsterAttribute,System.Single>
struct Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<Game.Scripts.Config.MonsterAttribute>
struct IEnumerable_1_t1A592C68BE6E97227C157836F9EC9939FCAA70D0;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Linq.IOrderedEnumerable`1<Game.Scripts.Config.MonsterAttribute>
struct IOrderedEnumerable_1_t0C89AD1521D8FC23706E3247DA5528FAF714E8BB;
// System.Linq.IOrderedEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IOrderedEnumerable_1_tEC69DE4EAD0C8A8943156A96E6B44A96825EBBB2;
// Cysharp.Threading.Tasks.IUniTaskSource`1<UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer>
struct IUniTaskSource_1_tD2400C7803FF966F7CDC3DFECAB1DA38103C1244;
// Cysharp.Threading.Tasks.IUniTaskSource`1<UnityScreenNavigator.Runtime.Core.Modals.ModalContainer>
struct IUniTaskSource_1_t39FC77C6798687D73AEBE0951849ADC7752076C7;
// Cysharp.Threading.Tasks.IUniTaskSource`1<UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer>
struct IUniTaskSource_1_t6F09E6AE2D040A1635449100DF98130CB0833121;
// Cysharp.Threading.Tasks.IUniTaskSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object[]>
struct KeyCollection_t2E675522FC0ABF744B4203A58E5ECB9CA459FA38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TigerForge.EventManager/DataGroup[]>
struct KeyCollection_tFC9A0E4859611D71323C7B5FE884478D353195DB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Events.UnityAction>
struct KeyCollection_tC0CC15C978AE70C5ABFF00B933E55FA6938E4352;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Events.UnityEvent>
struct KeyCollection_tA5D83626E94476B72233AEBF8B28119789B11BF5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TigerForge.EventManager/SFilter>
struct KeyCollection_t205327AC2A61DBD5A04A0D3FF6D9F1761361DB3E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Activities.IActivityContainerCallbackReceiver>
struct List_1_t823A01BD9681CA586DAE9C2BE93E28E0369D3F48;
// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Shared.Views.IContainerLayer>
struct List_1_t78E251C882DABA7A23F6B8F81609801E4FB7CE79;
// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Modals.IModalContainerCallbackReceiver>
struct List_1_t56294457397C071A0AFAD343B67BAC6C54CEAB53;
// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Screens.IScreenContainerCallbackReceiver>
struct List_1_t11AACFB108E1588740C886C734844BD58BE94E62;
// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Shared.Views.IView>
struct List_1_t00C4CF9492B656BEE6301DFB3959BDE88804891B;
// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Modals.Modal>
struct List_1_t9308F892E57E63D5813DED3E5801517489DC87A7;
// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Modals.ModalBackdrop>
struct List_1_t153F6D55FC221571F101C45464C60735EFD4776D;
// System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute>
struct List_1_t0242792AE569314A99F9D30F9639246F9878F1F5;
// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Screens.Screen>
struct List_1_tEB1AD633D39AA1864AC2311637F49ED7FAB6B89D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<TigerForge.EventsGroup/SEvent>
struct List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0;
// System.Predicate`1<Game.Scripts.Config.MonsterAttribute>
struct Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
// UnityScreenNavigator.Runtime.Foundation.PriorityCollection.PriorityList`1<UnityScreenNavigator.Runtime.Core.Modals.IModalLifecycleEvent>
struct PriorityList_1_tD0CAB01F9E3EF97F0CDB6E734709568931D98737;
// UnityScreenNavigator.Runtime.Foundation.PriorityCollection.PriorityList`1<UnityScreenNavigator.Runtime.Core.Screens.IScreenLifecycleEvent>
struct PriorityList_1_t5003A3E2AC9584264DD8625DFA8EB0D666FE479E;
// System.Progress`1<System.Single>
struct Progress_1_t8C9B7E58FF1DB1F905D4141ED777158D4BE3174F;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// Cysharp.Threading.Tasks.UniTaskCompletionSource`1<System.Object>
struct UniTaskCompletionSource_1_tF798BB54B71E6FCA5E6B54A5BC317A3CA1EAAB47;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object[]>
struct ValueCollection_t057762D3E56F5041D121903151280AB351DC3E8E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TigerForge.EventManager/DataGroup[]>
struct ValueCollection_tDDFBD6F1959F27085C6A42063020BFF62E7B2FE9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Events.UnityAction>
struct ValueCollection_tB3FD253A99FC5CDC4088F14C81C2E63304BB7CB1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Events.UnityEvent>
struct ValueCollection_t84AFA3A44C85FFD072F03475AD4B0D3807856675;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TigerForge.EventManager/SFilter>
struct ValueCollection_tCA83A82A05DFE0F0E8B885326FE087020D094ADB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object[]>[]
struct EntryU5BU5D_tD30E1DAF76201520E3ACEADB2F3D500F59F32854;
// System.Collections.Generic.Dictionary`2/Entry<System.String,TigerForge.EventManager/DataGroup[]>[]
struct EntryU5BU5D_t0CAB46F358A9F736757E9E52D0812BA00BE9585A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Boolean>[]
struct EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Events.UnityAction>[]
struct EntryU5BU5D_t06469409A2FF3AA2C73EC097B444376E7FDBD7D4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Events.UnityEvent>[]
struct EntryU5BU5D_tF1FC7CDF24F7984E8306D27CC309980FDD2E392B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,TigerForge.EventManager/SFilter>[]
struct EntryU5BU5D_tB1AEFFBEA3BABD9C0D12419A29A7766FE8ED935B;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig[]
struct ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// Game.Scripts.Config.MonsterAttribute[]
struct MonsterAttributeU5BU5D_t8BB9A728A86B5209F33ECDFCB5A23A020922894F;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// TigerForge.EventManager/DataGroup[]
struct DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D;
// TigerForge.EventsGroup/SEvent[]
struct SEventU5BU5D_tFCB7124BFAA6381CD4E413437AB46BAF1876898D;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer
struct ActivityContainer_tFBBBBCCDA7BA16F80545D9841E5863A3564F7F76;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle
struct AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F;
// Game.Scripts.Config.AttributeConfig
struct AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756;
// Game.Scripts.BattleHandler
struct BattleHandler_t268C8A69FDC7D0F2BFC3F91003557FD7E2FAF443;
// Game.Scripts.Screens.BattleScreen
struct BattleScreen_t59ABF8896117B14D82A1445B47B6C2A061C7F944;
// Game.Scripts.Config.BattleTeamConfig
struct BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Game.Scripts.CharacterPool
struct CharacterPool_tD56470CF619BA06B9CB53037583711046295300C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Game.Scripts.ContainerLauncher
struct ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5;
// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig
struct ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6;
// UnityScreenNavigator.Runtime.Core.Shared.Views.ContainerLayerManager
struct ContainerLayerManager_t1F25579783B89E08D4A7641A6FB131A40BCDC9BD;
// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerSettings
struct ContainerLayerSettings_tD51E21908432D9BB12B44ED5E392182317E373E6;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// DamageTextFloater
struct DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// EndGameModal
struct EndGameModal_tCBBF3C111B844F8F4DB0AEB5EF1CD215EE70C2F5;
// EnemyAI
struct EnemyAI_t062D6559860346BBF7415F088B566404469B3C50;
// TigerForge.EventManager
struct EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C;
// TigerForge.EventsGroup
struct EventsGroup_t5677B50916BF3A15DBC7D75494C3FC1D43FAE003;
// System.Exception
struct Exception_t;
// FloatText
struct FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15;
// FocusItem
struct FocusItem_tB93AD24E5C585BB732B5EA1EC480523D7B9AB901;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityScreenNavigator.Runtime.Core.Shared.Views.GlobalContainerLayerManager
struct GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityScreenNavigator.Runtime.Foundation.AssetLoaders.IAssetLoader
struct IAssetLoader_t35F91445A096AF535DDE0B7EA4165C05AB338E65;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// UnityScreenNavigator.Runtime.Core.Shared.Views.IContainerLayerManager
struct IContainerLayerManager_tFDA7D4D64C165EDF8D71CD81AEB307D2AF6B3133;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// Game.Scripts.Screens.LoadingScreen
struct LoadingScreen_t4E93231307D803C8ABB78BBE8644348E90192A1E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityScreenNavigator.Runtime.Core.Modals.Modal
struct Modal_tC1AB133578867A81B1F4E7C23341DC39B881C4CA;
// UnityScreenNavigator.Runtime.Core.Modals.ModalBackdrop
struct ModalBackdrop_t31BFB3EE2DFB4CB7DCB19AFDB1D7935C2EC717CD;
// UnityScreenNavigator.Runtime.Core.Modals.ModalContainer
struct ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5;
// UnityScreenNavigator.Runtime.Core.Modals.ModalTransitionAnimationContainer
struct ModalTransitionAnimationContainer_tC83AC6E6C35D8EF49BDB1E3D0CA4A8E27AA4FC40;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Game.Scripts.Config.MonsterAttribute
struct MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF;
// Game.Scripts.MonsterController
struct MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Game.Scripts.ParticlesObject
struct ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Game.Scripts.PlayBattleButton
struct PlayBattleButton_t83B1C7E2FD7D71131C02D22A68627EF7A33C1178;
// Game.Scripts.Config.PositionsConfig
struct PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityScreenNavigator.Runtime.Core.Screens.Screen
struct Screen_t2AE04C2000CD713680D85F7892FB6AA47BC8B0FD;
// UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer
struct ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020;
// UnityScreenNavigator.Runtime.Core.Screens.ScreenTransitionAnimationContainer
struct ScreenTransitionAnimationContainer_t3C0A3753FD65E3B8D2257BF8EE8E7ECC5C119908;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Game.Scripts.Screens.TeamSelectScreen
struct TeamSelectScreen_t3BE798311F87BF2F9C4BEAE0380E9625D5A186C0;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityScreenNavigator.Runtime.Core.Shared.Views.Window
struct Window_tD33C5252A720F1EB606A537CC386F8DFE7DBA8CD;
// csParticleEffectPackLightControl
struct csParticleEffectPackLightControl_t2EA83E3FD1F368990096E3A9BBBB6537754DA493;
// Game.Scripts.Config.AttributeConfig/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2;
// Game.Scripts.Config.BattleTeamConfig/<>c
struct U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// TigerForge.EventManager/DataGroup
struct DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ActivityContainer_tFBBBBCCDA7BA16F80545D9841E5863A3564F7F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0242792AE569314A99F9D30F9639246F9878F1F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral0E73A0D4483A9B8C5D46F576AD8AF2E16194D56D;
IL2CPP_EXTERN_C String_t* _stringLiteral1D5569AD1802A3D3E9D925CADEEC7C645EF46BA6;
IL2CPP_EXTERN_C String_t* _stringLiteral1E2C540B86F829A583DF6FB8E7045A8D5A78A684;
IL2CPP_EXTERN_C String_t* _stringLiteral38A9FD34017A8F9DE07E80AD287FFEE461399BE6;
IL2CPP_EXTERN_C String_t* _stringLiteral3905B990E856C096FE4CA5D65FA83700E2DFC4E5;
IL2CPP_EXTERN_C String_t* _stringLiteral3F663218A9C195AD5DCBCD18E387275165707E15;
IL2CPP_EXTERN_C String_t* _stringLiteral4263DAB6ABF2073113B702B65C2621AF7CCAAF2C;
IL2CPP_EXTERN_C String_t* _stringLiteral456938957FDC8D984928D3E1E0B13F0E9AD8477B;
IL2CPP_EXTERN_C String_t* _stringLiteral477B78D0470F7D963FE309268F75C407DE8C8BCA;
IL2CPP_EXTERN_C String_t* _stringLiteral4A51C1BA998D1C631A205D8C4E2C03B6D6528509;
IL2CPP_EXTERN_C String_t* _stringLiteral4F1DF035867781629562DEF30B42353D86D04D97;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral684EA51CBE70FF311998CEEAB615840A88831FC4;
IL2CPP_EXTERN_C String_t* _stringLiteral71D0FC39481D0916717CF6CDBA7E25AF075CB762;
IL2CPP_EXTERN_C String_t* _stringLiteral72A731D064EB75DC3D80E1718EA650C90C3D0EA9;
IL2CPP_EXTERN_C String_t* _stringLiteral76B90662FEDF137F8FDF5A0E0D6B503F010FAF94;
IL2CPP_EXTERN_C String_t* _stringLiteral785EAA1EFD7A7E66E864D6100A00DD45850E9400;
IL2CPP_EXTERN_C String_t* _stringLiteral78E0EB8CE240AD8239D26F174DBEFF00C4529892;
IL2CPP_EXTERN_C String_t* _stringLiteral790DD345EA62885BA235F3F5C54DB3ACA5C5BF53;
IL2CPP_EXTERN_C String_t* _stringLiteral7AE33691C19C0F66C1EF7288BFCD552C98DEB958;
IL2CPP_EXTERN_C String_t* _stringLiteral7D569DC9ABF8486FC40564ABA61F7F8C68A3566D;
IL2CPP_EXTERN_C String_t* _stringLiteral82645B897576CE368435E10E1894798BDE506E06;
IL2CPP_EXTERN_C String_t* _stringLiteral8ADA37BEA6AFB2EDCA9094443AE7419B09E74943;
IL2CPP_EXTERN_C String_t* _stringLiteral8C8B230A7CD5F4EA6505E6ECD46B926C4398B66B;
IL2CPP_EXTERN_C String_t* _stringLiteral9614A254DEFE3BB470A33BB1E086D0F43A712DC0;
IL2CPP_EXTERN_C String_t* _stringLiteral9FF7A8A0CF603B20A1F5510A7D95439FF5AF3A56;
IL2CPP_EXTERN_C String_t* _stringLiteralADA5D1678F32A09910940A4AF6C6E58B3E5E917F;
IL2CPP_EXTERN_C String_t* _stringLiteralADED28B4D652D0026C1649363C3597E9EA772245;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F0D0F19587B1955E3EB85BCFCCF052C6493AB6;
IL2CPP_EXTERN_C String_t* _stringLiteralBD29CECBBA27F42BA8F6D6E218F12D595E3BCBE3;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD2355F9176F36012A473D04B1DA959D6177F6595;
IL2CPP_EXTERN_C String_t* _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F;
IL2CPP_EXTERN_C String_t* _stringLiteralD6B6CAB5D3067AFF3E527288DD64C251EA40B843;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCEA1E06C436EF62439730A853F1E242DAB68E19;
IL2CPP_EXTERN_C String_t* _stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralEB5271B9603357DF8BA5C653DADA3929A39E918E;
IL2CPP_EXTERN_C String_t* _stringLiteralEB8D1A3352D0EE435150A49578688CB05DFD221F;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_m17F09531E019C2A2351E70CFCD8646F2D4B5C964_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mC28639A499F86F3D8158F086907C520B912C5362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mB2D61606B79873F0076E1C92F2161CA63FC9493D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF_m713DC09EE12FD0BA93CB80C20C74C5AB513DD83C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_m46993507A2A7E583D1EC864A2FA97C0650C89ADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776_mAA4558D05CB4411A03B961ACC072636FA28F5B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mE17C17A599F43D3AC948732A5052AA0E543BF622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483_m516FA81A6D3A39A6964D7736712C4DE8479D33BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF_mA844F2C299D2E61E2225A7316F2CF515A5750A09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483_m065D5BF9215F38E712700FD458BD2433D979FB24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_mFF05AA61F2495C0EED3B807B0CB1966382BD4E52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776_mDD0878A7818CA319FF9D1A5FA2BF689BA91D0EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_m2A1B907AA564EAFA11C5CECD0F215C624BC34D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m43D450EC49F01BA49EFBC0046545D9655F9FF112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m5E7DA1ABB29CF219205891BC1A15DBACCB9F8A49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mFC8DF53337A7B273D63BBFB74C357A1D10381F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m622AB9C88C797EFD8B93A2D42C9ABB01D9E9A205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m80F853A9DC02083B8B02B0AC9FC9D22AE8528DF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m97C5536A8D4091AB343BF29BCB091058668B4C22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BattleHandler_OnStartTurn_m952F3258B96A42EAAD4BF6FCA1715F50060EB165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BattleScreen_DoneTurn_mB02B11E61FAFE707ADF3C862CC79CE5878274D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BattleScreen_OnEndBattle_mD53CAD643D288CB72FECF79C75A201A4F4954759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BattleScreen_StartTurn_m09347CE406EA6D97BC2FB7FAF370158C3CE2A1CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CharacterPool_CreateMonsters_m14FE13B510055C4AD74AF73FB448693D4EFFC23F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CharacterPool_RemoveAllMonster_mD12D75A47684ABFFABD13C8BE7F8A7F5A092A72F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CharacterPool_SelectBattleTeam_m44A1A7E42CE5B43D6EB28296287AA72B4AD47CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CharacterPool_SelectMonsterTeam_m5E8DB3775B83624B98F1C1D7FC6BF9FBBCE2756F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentHolderProtocol_GetOrAddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mF0E99E2B9B6B2DBF2ADC259BDEC236D4F9625E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentHolderProtocol_GetOrAddComponent_TisEnemyAI_t062D6559860346BBF7415F088B566404469B3C50_m7B6663C6B49612845B72FBC5F10DAA640732A66A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentHolderProtocol_GetOrAddComponent_TisGlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190_mC2CDE076F9DD1D22FB2F2D6C4B75C539832C67F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentHolderProtocol_GetOrAddComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m5004249074CA66528824F0F9E4906F662EEB0952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContainerLauncher_Awake_m710ABC5DB8DD8C6E0915ADB7CD2D4AF6AC974D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ContainerLayerManager_Find_TisScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_m5D8DB71D18322BE0E0218300F324FDD16B7C29E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DamageTextFloater_OnStartTurn_m893871D5EC80E752037353C0BDDCC1244871E3D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DamageTextFloater_OnValueChanged_mCA07DFCE693FCF4E592F44EF3B069C2BA339063F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m288AFAD22BF5CBC69A2FBB873CA97CBCB182E31F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2E77CE5F37659706F26A886F903A6A1FE8A3C60B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m835B5E8BE87F04BEAB6C3B908DCF740EF6152156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m83AC9A82DBF6AFDAA1B00A27FA5668748E42A96F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB1FD95D53599F795E5926A332D5DE221F7963F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m30236686417F47FD494911E606478ECF15CA2D54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m51CC777C9E1845DFAF2D9E83F8716F06D74249FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m8B243A3A4E1E9A10EC4E7DE5898CAEA5CBDCBE98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA7C6448345C9DCA2174B3CB863E940B80C9BE0D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE040371FDA3F1E0F4D1B123A838C6F81F1223F58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m64190B380A145B8AB27A6AB837F24BF572A40AEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0DEC5CCE18195C4F3781C5FC11AD5595A6BDB5B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m2114FDE2525CF3B91B50AB1F5D5C28464EC55E3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mDBFE25FC0FF7963A964A4A2245535B70A2AC3573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m02F631C76B562E4106CA7DAA78F0D1464A6CA6D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3F82ECD1F2D37DC2E3468BCE63630BF541938FCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9493A128ED8728998985F634649EC7082B4E1FA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA03B9791BB3682B20E4044DCD46CAC0E7E8A379_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m9A6579F658F9BFCE99F50FBEE3FEA2B75E7DAF82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mB1058F0C9C7EDAB8C7527F5667B8274A3AA90D2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m27A75461F4E79D1B5927167B75F59E948428BF9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m2FA8759E6D40E1BEE381A5AEC1FE87ACD6644484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD02A1440C1186E58166E85A533C8CD45470E876A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE029B6A6F149DDDE86FCF5B3D2CA2EDDBC7F4A6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFDD8CA65E81A5F71ABA6FAEC4F48611B0D9B15D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m6E8FF6CE485A2DF87B7A73202FA124CD4B09CA78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m77238FB49980FDB19D8C00DFAF5101525704AC2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EndGameModal_HomeScreen_m48DF1CC89C675C57001F40A0432EC98C4D86A7FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderByDescending_TisMonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBC0EBAE189A31F8F38554E3C25B418C57A3F1227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisMonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF_m6B6ED55CD550DEAE63B7CA5257DE0C5D44E2C2A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumeratorAsyncExtensions_GetAwaiter_TisAsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F_m2156B0BB5715359142EC909A3FCFA7ECDF55F3FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA30D00C82F95861000D0B6DE1A0E774BD59F092A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE8CB03F28252733FB3090D0D4C11443FFE1D1CD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA55F1CB6D1BC74355EF2E2C07174A2678B3B727B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FocusItem_OnStartTurn_m478713C0382C6608BFE6FD9CC2B8327B9C6CC449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m0997E5A5B7B7695DCC795B99ECAE08C97166BC54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m6D93038D2CC3C058F24FDACFFF809C3AB0D024B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6DAED064DF26653B64B0ED6E33A90284C64D712F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD6814902859A771E33EF62D0829DC9F23F1D3A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m156D33C29D70F998AD5616DC81E70D2F0AA5BDDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m42D0BA4F00EE61A728D7D8FC8FF29427C1512A9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5A2D3C856CC3C8858EB64DDA6902B3A83B994040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB65C255893ADD35F8B206AB4CA300F1014963CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonsterController_AttackMonster_mC4F4D6317A3EF9066AF24810EFA0E1A64957CEE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonsterController_CanTouchAll_m3EEAF01F9374D1FCB1126C14BB1D16BD989A62B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonsterController_OnStartTurn_m991EFE59DE0E6CAAFB9039AF51ED49F61A2A8B43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonsterController_RemoveAllMonster_m0DCCF94AD1A3F1AA172BD508FAB809920A9C5EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonsterController_StartBattle_m31D8ADE9791E76EB75C5434F5AECB015C95197C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonsterController_U3CGetDamageU3Eb__13_0_mC3376BFBD70B21DAB9C1A6777332A7120101C395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisFloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15_mDAFA9DEB18146D696BFC6E0E02EFD58A6D3A7342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5_mCC41BE31A721A7C3A183A05E2793A031340F766A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayBattleButton_ChangeToBattle_m7F51B4429FD77C6DEBF4FD602B6380EA0DF9801C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayBattleButton_UpdateView_m9A7CDE75152E3F2CF5A1D5058D9FCA636EA1CE2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__4_MoveNext_mBFB8F319067F87D0DE99B7BFDFEE77386119C4B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBattleSortU3Eb__12_0_m462613E52CFB7C528BF274DBDA507046B45E794B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetMonsterU3Eb__0_m80C2B3397F28628D772641D112953D5D107BA9A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1BB240BEC508753F79B3A778004ACDFB48272506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m8945EB1621F1E6D092622DA427DDD7F81A865E47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mA0C819502D37B5F7526F96F66F42101D1E6BF5C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var;
struct DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0;;
struct DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_com;
struct DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_com;;
struct DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_pinvoke;
struct DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object[]>
struct Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD30E1DAF76201520E3ACEADB2F3D500F59F32854* ____entries_1;
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
	KeyCollection_t2E675522FC0ABF744B4203A58E5ECB9CA459FA38* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t057762D3E56F5041D121903151280AB351DC3E8E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/DataGroup[]>
struct Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0CAB46F358A9F736757E9E52D0812BA00BE9585A* ____entries_1;
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
	KeyCollection_tFC9A0E4859611D71323C7B5FE884478D353195DB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDDFBD6F1959F27085C6A42063020BFF62E7B2FE9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D* ____entries_1;
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
	KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityAction>
struct Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t06469409A2FF3AA2C73EC097B444376E7FDBD7D4* ____entries_1;
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
	KeyCollection_tC0CC15C978AE70C5ABFF00B933E55FA6938E4352* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB3FD253A99FC5CDC4088F14C81C2E63304BB7CB1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF1FC7CDF24F7984E8306D27CC309980FDD2E392B* ____entries_1;
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
	KeyCollection_tA5D83626E94476B72233AEBF8B28119789B11BF5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t84AFA3A44C85FFD072F03475AD4B0D3807856675* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/SFilter>
struct Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB1AEFFBEA3BABD9C0D12419A29A7766FE8ED935B* ____entries_1;
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
	KeyCollection_t205327AC2A61DBD5A04A0D3FF6D9F1761361DB3E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCA83A82A05DFE0F0E8B885326FE087020D094ADB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute>
struct List_1_t0242792AE569314A99F9D30F9639246F9878F1F5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MonsterAttributeU5BU5D_t8BB9A728A86B5209F33ECDFCB5A23A020922894F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0242792AE569314A99F9D30F9639246F9878F1F5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MonsterAttributeU5BU5D_t8BB9A728A86B5209F33ECDFCB5A23A020922894F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TigerForge.EventsGroup/SEvent>
struct List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SEventU5BU5D_tFCB7124BFAA6381CD4E413437AB46BAF1876898D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SEventU5BU5D_tFCB7124BFAA6381CD4E413437AB46BAF1876898D* ___s_emptyArray_5;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// TigerForge.EventManager
struct EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C  : public RuntimeObject
{
};

struct EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent> TigerForge.EventManager::eventDictionary
	Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* ___eventDictionary_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TigerForge.EventManager::sender
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___sender_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> TigerForge.EventManager::paused
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ___paused_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TigerForge.EventManager::storage
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___storage_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object[]> TigerForge.EventManager::storage2
	Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* ___storage2_4;
	// System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/DataGroup[]> TigerForge.EventManager::storage3
	Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* ___storage3_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityAction> TigerForge.EventManager::callBacks
	Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* ___callBacks_6;
};

// Game.Scripts.EventNameKeeper
struct EventNameKeeper_t2AB6627463D9EE1252D65C4940460DCA662F8471  : public RuntimeObject
{
};

// TigerForge.EventsGroup
struct EventsGroup_t5677B50916BF3A15DBC7D75494C3FC1D43FAE003  : public RuntimeObject
{
	// System.Collections.Generic.List`1<TigerForge.EventsGroup/SEvent> TigerForge.EventsGroup::group
	List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* ___group_0;
};

// Game.Scripts.Config.MonsterAttribute
struct MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF  : public RuntimeObject
{
	// System.String Game.Scripts.Config.MonsterAttribute::characterName
	String_t* ___characterName_0;
	// System.Int32 Game.Scripts.Config.MonsterAttribute::health
	int32_t ___health_1;
	// System.Int32 Game.Scripts.Config.MonsterAttribute::attackDamage
	int32_t ___attackDamage_2;
	// System.Single Game.Scripts.Config.MonsterAttribute::speed
	float ___speed_3;
	// System.Boolean Game.Scripts.Config.MonsterAttribute::isDie
	bool ___isDie_4;
	// Game.Scripts.ParticlesObject Game.Scripts.Config.MonsterAttribute::skillObject
	ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* ___skillObject_5;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Game.Scripts.Config.AttributeConfig/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2  : public RuntimeObject
{
	// System.String Game.Scripts.Config.AttributeConfig/<>c__DisplayClass2_0::nameMonster
	String_t* ___nameMonster_0;
};

// Game.Scripts.Config.BattleTeamConfig/<>c
struct U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9  : public RuntimeObject
{
};

struct U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_StaticFields
{
	// Game.Scripts.Config.BattleTeamConfig/<>c Game.Scripts.Config.BattleTeamConfig/<>c::<>9
	U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9* ___U3CU3E9_0;
	// System.Func`2<Game.Scripts.Config.MonsterAttribute,System.Single> Game.Scripts.Config.BattleTeamConfig/<>c::<>9__12_0
	Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B* ___U3CU3E9__12_0_1;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>
struct AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// System.Collections.Generic.List`1/Enumerator<Game.Scripts.Config.MonsterAttribute>
struct Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
struct KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Events.UnityEvent>
struct KeyValuePair_2_t2DC05A2DD885489EB51D5F0A99A9C8819AA0D5A5 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// System.Nullable`1<UnityScreenNavigator.Runtime.Core.Modals.ModalTransitionAnimationType>
struct Nullable_1_t1BC1D7EC413823F71FBC9EAE6342AC328A1369A6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<UnityScreenNavigator.Runtime.Core.Screens.ScreenTransitionAnimationType>
struct Nullable_1_tDC904B0DCEF140AE01BA854D2DD0EE6EB86DB4CA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Cysharp.Threading.Tasks.UniTask`1<UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer>
struct UniTask_1_t261AB7FF825980F6B5279AABE1C733CE3FAAC016 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ActivityContainer_tFBBBBCCDA7BA16F80545D9841E5863A3564F7F76* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<UnityScreenNavigator.Runtime.Core.Modals.ModalContainer>
struct UniTask_1_t74912DAA6AE9085FCB96ED547F96777F47A163C9 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer>
struct UniTask_1_t7B789002D096A0982E67D64CBFC1C25AF42F87ED 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483;

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle
struct AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// Cysharp.Threading.Tasks.UniTaskCompletionSource`1<System.Object> UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle::_tcs
	UniTaskCompletionSource_1_tF798BB54B71E6FCA5E6B54A5BC317A3CA1EAAB47* ____tcs_0;
	// System.UInt32 UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle::<Id>k__BackingField
	uint32_t ___U3CIdU3Ek__BackingField_1;
	// System.Object UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_2;
	// System.Boolean UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle::<IsTerminated>k__BackingField
	bool ___U3CIsTerminatedU3Ek__BackingField_3;
	// System.Exception UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle::<Exception>k__BackingField
	Exception_t* ___U3CExceptionU3Ek__BackingField_4;
	// System.Action UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle::OnTerminate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnTerminate_5;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 
{
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_com
{
	int32_t ___snapping_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityScreenNavigator.Runtime.Foundation.SortingLayerId
struct SortingLayerId_t0A7EF71BB2DE540E7EA13DC6A1559EF5C944429E 
{
	// System.Int32 UnityScreenNavigator.Runtime.Foundation.SortingLayerId::id
	int32_t ___id_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
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

// UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions
struct WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731 
{
	// System.Boolean UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions::loadAsync
	bool ___loadAsync_0;
	// System.Boolean UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions::playAnimation
	bool ___playAnimation_1;
	// System.String UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions::resourcePath
	String_t* ___resourcePath_2;
	// System.Action`1<UnityScreenNavigator.Runtime.Core.Shared.Views.Window> UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions::onLoaded
	Action_1_tF3A4D9C1EB5202EBEE6F15DF6B9D5BFE1AF2A9CB* ___onLoaded_3;
};
// Native definition for P/Invoke marshalling of UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions
struct WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731_marshaled_pinvoke
{
	int32_t ___loadAsync_0;
	int32_t ___playAnimation_1;
	char* ___resourcePath_2;
	Il2CppMethodPointer ___onLoaded_3;
};
// Native definition for COM marshalling of UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions
struct WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731_marshaled_com
{
	int32_t ___loadAsync_0;
	int32_t ___playAnimation_1;
	Il2CppChar* ___resourcePath_2;
	Il2CppMethodPointer ___onLoaded_3;
};

// TigerForge.EventManager/DataGroup
struct DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 
{
	// System.Object TigerForge.EventManager/DataGroup::data
	RuntimeObject* ___data_0;
	// System.String TigerForge.EventManager/DataGroup::id
	String_t* ___id_1;
};
// Native definition for P/Invoke marshalling of TigerForge.EventManager/DataGroup
struct DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_pinvoke
{
	Il2CppIUnknown* ___data_0;
	char* ___id_1;
};
// Native definition for COM marshalling of TigerForge.EventManager/DataGroup
struct DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_com
{
	Il2CppIUnknown* ___data_0;
	Il2CppChar* ___id_1;
};

// TigerForge.EventManager/IndexedDataGroup
struct IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0 
{
	// TigerForge.EventManager/DataGroup[] TigerForge.EventManager/IndexedDataGroup::data
	DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* ___data_0;
	// System.Object TigerForge.EventManager/IndexedDataGroup::objectData
	RuntimeObject* ___objectData_1;
};
// Native definition for P/Invoke marshalling of TigerForge.EventManager/IndexedDataGroup
struct IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshaled_pinvoke
{
	DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_pinvoke* ___data_0;
	Il2CppIUnknown* ___objectData_1;
};
// Native definition for COM marshalling of TigerForge.EventManager/IndexedDataGroup
struct IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshaled_com
{
	DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_com* ___data_0;
	Il2CppIUnknown* ___objectData_1;
};

// TigerForge.EventManager/SFilter
struct SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 
{
	// System.String TigerForge.EventManager/SFilter::value
	String_t* ___value_0;
	// System.Boolean TigerForge.EventManager/SFilter::starts
	bool ___starts_1;
	// System.Boolean TigerForge.EventManager/SFilter::ends
	bool ___ends_2;
	// System.Boolean TigerForge.EventManager/SFilter::contains
	bool ___contains_3;
	// System.Boolean TigerForge.EventManager/SFilter::exact
	bool ___exact_4;
};
// Native definition for P/Invoke marshalling of TigerForge.EventManager/SFilter
struct SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshaled_pinvoke
{
	char* ___value_0;
	int32_t ___starts_1;
	int32_t ___ends_2;
	int32_t ___contains_3;
	int32_t ___exact_4;
};
// Native definition for COM marshalling of TigerForge.EventManager/SFilter
struct SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshaled_com
{
	Il2CppChar* ___value_0;
	int32_t ___starts_1;
	int32_t ___ends_2;
	int32_t ___contains_3;
	int32_t ___exact_4;
};

// TigerForge.EventsGroup/SEvent
struct SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 
{
	// System.String TigerForge.EventsGroup/SEvent::name
	String_t* ___name_0;
	// UnityEngine.Events.UnityAction TigerForge.EventsGroup/SEvent::callBack
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callBack_1;
};
// Native definition for P/Invoke marshalling of TigerForge.EventsGroup/SEvent
struct SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshaled_pinvoke
{
	char* ___name_0;
	Il2CppMethodPointer ___callBack_1;
};
// Native definition for COM marshalling of TigerForge.EventsGroup/SEvent
struct SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppMethodPointer ___callBack_1;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer>
struct Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t261AB7FF825980F6B5279AABE1C733CE3FAAC016 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Modals.ModalContainer>
struct Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t74912DAA6AE9085FCB96ED547F96777F47A163C9 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer>
struct Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t7B789002D096A0982E67D64CBFC1C25AF42F87ED ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;

// System.Collections.Generic.List`1/Enumerator<TigerForge.EventsGroup/SEvent>
struct Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 ____current_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
struct Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.Events.UnityEvent>
struct Enumerator_t72F051E09659AAF09C2748EA97D8B30E9F30F20D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t2DC05A2DD885489EB51D5F0A99A9C8819AA0D5A5 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig
struct ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6  : public RuntimeObject
{
	// System.String UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig::name
	String_t* ___name_0;
	// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerType UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig::layerType
	int32_t ___layerType_1;
	// System.Boolean UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig::overrideSorting
	bool ___overrideSorting_2;
	// UnityScreenNavigator.Runtime.Foundation.SortingLayerId UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig::sortingLayer
	SortingLayerId_t0A7EF71BB2DE540E7EA13DC6A1559EF5C944429E ___sortingLayer_3;
	// System.Int32 UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig::orderInLayer
	int32_t ___orderInLayer_4;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityScreenNavigator.Runtime.Core.Screens.ScreenOptions
struct ScreenOptions_t3BC7FCCF3C5282AA0B74B9CCD8044EF3BE6FE8C3 
{
	// System.Boolean UnityScreenNavigator.Runtime.Core.Screens.ScreenOptions::stack
	bool ___stack_0;
	// UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions UnityScreenNavigator.Runtime.Core.Screens.ScreenOptions::options
	WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731 ___options_1;
};
// Native definition for P/Invoke marshalling of UnityScreenNavigator.Runtime.Core.Screens.ScreenOptions
struct ScreenOptions_t3BC7FCCF3C5282AA0B74B9CCD8044EF3BE6FE8C3_marshaled_pinvoke
{
	int32_t ___stack_0;
	WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731_marshaled_pinvoke ___options_1;
};
// Native definition for COM marshalling of UnityScreenNavigator.Runtime.Core.Screens.ScreenOptions
struct ScreenOptions_t3BC7FCCF3C5282AA0B74B9CCD8044EF3BE6FE8C3_marshaled_com
{
	int32_t ___stack_0;
	WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731_marshaled_com ___options_1;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// Game.Scripts.ContainerLauncher/<Start>d__4
struct U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC 
{
	// System.Int32 Game.Scripts.ContainerLauncher/<Start>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Game.Scripts.ContainerLauncher/<Start>d__4::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Game.Scripts.ContainerLauncher Game.Scripts.ContainerLauncher/<Start>d__4::<>4__this
	ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5* ___U3CU3E4__this_2;
	// UnityScreenNavigator.Runtime.Core.Shared.Views.GlobalContainerLayerManager Game.Scripts.ContainerLauncher/<Start>d__4::<manager>5__2
	GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190* ___U3CmanagerU3E5__2_3;
	// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig[] Game.Scripts.ContainerLauncher/<Start>d__4::<>7__wrap2
	ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752* ___U3CU3E7__wrap2_4;
	// System.Int32 Game.Scripts.ContainerLauncher/<Start>d__4::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Modals.ModalContainer> Game.Scripts.ContainerLauncher/<Start>d__4::<>u__1
	Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8 ___U3CU3Eu__1_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer> Game.Scripts.ContainerLauncher/<Start>d__4::<>u__2
	Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4 ___U3CU3Eu__2_7;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer> Game.Scripts.ContainerLauncher/<Start>d__4::<>u__3
	Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C ___U3CU3Eu__3_8;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Game.Scripts.ContainerLauncher/<Start>d__4::<>u__4
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__4_9;
};

// DamageTextFloater/<OnValueChanged>d__5
struct U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776 
{
	// System.Int32 DamageTextFloater/<OnValueChanged>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder DamageTextFloater/<OnValueChanged>d__5::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// DamageTextFloater DamageTextFloater/<OnValueChanged>d__5::<>4__this
	DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* ___U3CU3E4__this_2;
	// FloatText DamageTextFloater/<OnValueChanged>d__5::<text>5__2
	FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* ___U3CtextU3E5__2_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter DamageTextFloater/<OnValueChanged>d__5::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
};

// TigerForge.EventManager/<DelayedInvoke>d__20
struct U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483 
{
	// System.Int32 TigerForge.EventManager/<DelayedInvoke>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder TigerForge.EventManager/<DelayedInvoke>d__20::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// System.Int32 TigerForge.EventManager/<DelayedInvoke>d__20::delay
	int32_t ___delay_2;
	// UnityEngine.Events.UnityEvent TigerForge.EventManager/<DelayedInvoke>d__20::thisEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___thisEvent_3;
	// System.Runtime.CompilerServices.TaskAwaiter TigerForge.EventManager/<DelayedInvoke>d__20::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// Game.Scripts.MonsterController/<GetDamage>d__13
struct U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A 
{
	// System.Int32 Game.Scripts.MonsterController/<GetDamage>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Game.Scripts.MonsterController/<GetDamage>d__13::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Game.Scripts.MonsterController Game.Scripts.MonsterController/<GetDamage>d__13::<>4__this
	MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* ___U3CU3E4__this_2;
	// Game.Scripts.Config.MonsterAttribute Game.Scripts.MonsterController/<GetDamage>d__13::<attribute>5__2
	MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* ___U3CattributeU3E5__2_3;
	// System.Int32 Game.Scripts.MonsterController/<GetDamage>d__13::<delayTimer>5__3
	int32_t ___U3CdelayTimerU3E5__3_4;
	// System.Single Game.Scripts.MonsterController/<GetDamage>d__13::<speed>5__4
	float ___U3CspeedU3E5__4_5;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Game.Scripts.MonsterController/<GetDamage>d__13::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_6;
};

// Game.Scripts.ParticlesObject/<Active>d__4
struct U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF 
{
	// System.Int32 Game.Scripts.ParticlesObject/<Active>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Game.Scripts.ParticlesObject/<Active>d__4::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Game.Scripts.ParticlesObject Game.Scripts.ParticlesObject/<Active>d__4::<>4__this
	ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* ___U3CU3E4__this_2;
	// UnityEngine.Transform Game.Scripts.ParticlesObject/<Active>d__4::start
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___start_3;
	// UnityEngine.Transform Game.Scripts.ParticlesObject/<Active>d__4::end
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___end_4;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Game.Scripts.ParticlesObject/<Active>d__4::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_5;
};

// System.Action`1<UnityScreenNavigator.Runtime.Core.Shared.Views.Window>
struct Action_1_tF3A4D9C1EB5202EBEE6F15DF6B9D5BFE1AF2A9CB  : public MulticastDelegate_t
{
};

// System.Func`2<Game.Scripts.Config.MonsterAttribute,System.Single>
struct Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B  : public MulticastDelegate_t
{
};

// System.Predicate`1<Game.Scripts.Config.MonsterAttribute>
struct Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Game.Scripts.Config.AttributeConfig
struct AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute> Game.Scripts.Config.AttributeConfig::monsterAttributes
	List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* ___monsterAttributes_4;
};

// Game.Scripts.Config.BattleTeamConfig
struct BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Game.Scripts.Config.BattleTeamConfig::isBattle
	bool ___isBattle_4;
	// System.Int32 Game.Scripts.Config.BattleTeamConfig::teamMaxCount
	int32_t ___teamMaxCount_5;
	// System.Int32 Game.Scripts.Config.BattleTeamConfig::currentIndexPick
	int32_t ___currentIndexPick_6;
	// System.Collections.Generic.List`1<System.String> Game.Scripts.Config.BattleTeamConfig::teams
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___teams_7;
	// System.Collections.Generic.List`1<System.String> Game.Scripts.Config.BattleTeamConfig::enemies
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___enemies_8;
	// System.String Game.Scripts.Config.BattleTeamConfig::monsterNameGetTurn
	String_t* ___monsterNameGetTurn_9;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerSettings
struct ContainerLayerSettings_tD51E21908432D9BB12B44ED5E392182317E373E6  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig[] UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerSettings::containerLayers
	ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752* ___containerLayers_4;
};

// Game.Scripts.Config.PositionsConfig
struct PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Game.Scripts.Config.PositionsConfig::ownBattlePositions
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___ownBattlePositions_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Game.Scripts.Config.PositionsConfig::enemyBattlePositions
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___enemyBattlePositions_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Game.Scripts.Config.PositionsConfig::selectTeamPositions
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___selectTeamPositions_6;
	// System.Int32 Game.Scripts.Config.PositionsConfig::limit
	int32_t ___limit_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Game.Scripts.Config.PositionsConfig::tempPositions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___tempPositions_8;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Game.Scripts.BattleHandler
struct BattleHandler_t268C8A69FDC7D0F2BFC3F91003557FD7E2FAF443  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Game.Scripts.Config.AttributeConfig Game.Scripts.BattleHandler::config
	AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___config_4;
	// Game.Scripts.Config.BattleTeamConfig Game.Scripts.BattleHandler::teamConfig
	BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* ___teamConfig_5;
	// System.Int32 Game.Scripts.BattleHandler::turnCurrent
	int32_t ___turnCurrent_6;
	// TMPro.TMP_Text Game.Scripts.BattleHandler::text
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text_7;
	// System.String Game.Scripts.BattleHandler::format
	String_t* ___format_8;
	// System.Int32 Game.Scripts.BattleHandler::turnNumber
	int32_t ___turnNumber_9;
	// System.Boolean Game.Scripts.BattleHandler::_isWinGame
	bool ____isWinGame_10;
};

// Game.Scripts.CharacterPool
struct CharacterPool_tD56470CF619BA06B9CB53037583711046295300C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Game.Scripts.Config.AttributeConfig Game.Scripts.CharacterPool::configs
	AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___configs_4;
	// Game.Scripts.Config.BattleTeamConfig Game.Scripts.CharacterPool::teamConfig
	BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* ___teamConfig_5;
	// Game.Scripts.Config.PositionsConfig Game.Scripts.CharacterPool::positions
	PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* ___positions_6;
};

// Game.Scripts.ContainerLauncher
struct ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerSettings Game.Scripts.ContainerLauncher::containerLayerSettings
	ContainerLayerSettings_tD51E21908432D9BB12B44ED5E392182317E373E6* ___containerLayerSettings_4;
	// UnityEngine.GameObject Game.Scripts.ContainerLauncher::pooled
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pooled_5;
	// UnityScreenNavigator.Runtime.Core.Shared.Views.GlobalContainerLayerManager Game.Scripts.ContainerLauncher::_globalContainerLayerManager
	GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190* ____globalContainerLayerManager_6;
};

// DamageTextFloater
struct DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider DamageTextFloater::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// FloatText DamageTextFloater::textPrefabs
	FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* ___textPrefabs_5;
	// Game.Scripts.Config.BattleTeamConfig DamageTextFloater::teamConfig
	BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* ___teamConfig_6;
	// Game.Scripts.Config.AttributeConfig DamageTextFloater::config
	AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___config_7;
};

// EnemyAI
struct EnemyAI_t062D6559860346BBF7415F088B566404469B3C50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Game.Scripts.Config.BattleTeamConfig EnemyAI::teamConfig
	BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* ___teamConfig_4;
	// Game.Scripts.Config.AttributeConfig EnemyAI::config
	AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___config_5;
};

// FloatText
struct FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text FloatText::text
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text_4;
};

// FocusItem
struct FocusItem_tB93AD24E5C585BB732B5EA1EC480523D7B9AB901  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FocusItem::focusImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___focusImage_4;
	// UnityEngine.GameObject FocusItem::selectedImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectedImage_5;
	// Game.Scripts.Config.BattleTeamConfig FocusItem::teamConfig
	BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* ___teamConfig_6;
	// Game.Scripts.Config.AttributeConfig FocusItem::config
	AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___config_7;
};

// Game.Scripts.MonsterController
struct MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Game.Scripts.Config.BattleTeamConfig Game.Scripts.MonsterController::teamConfig
	BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* ___teamConfig_4;
	// Game.Scripts.Config.AttributeConfig Game.Scripts.MonsterController::config
	AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___config_5;
	// UnityEngine.UI.Slider Game.Scripts.MonsterController::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_6;
	// Game.Scripts.Config.MonsterAttribute Game.Scripts.MonsterController::_monsterAttribute
	MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* ____monsterAttribute_7;
	// System.Int32 Game.Scripts.MonsterController::_currentHealth
	int32_t ____currentHealth_8;
	// System.Boolean Game.Scripts.MonsterController::_isClocked
	bool ____isClocked_9;
	// System.Boolean Game.Scripts.MonsterController::_canTouchAll
	bool ____canTouchAll_10;
};

// Game.Scripts.ParticlesObject
struct ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Game.Scripts.ParticlesObject::speed
	float ___speed_4;
	// System.Int32 Game.Scripts.ParticlesObject::delayTime
	int32_t ___delayTime_5;
};

// Game.Scripts.PlayBattleButton
struct PlayBattleButton_t83B1C7E2FD7D71131C02D22A68627EF7A33C1178  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button Game.Scripts.PlayBattleButton::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_4;
	// Game.Scripts.Config.BattleTeamConfig Game.Scripts.PlayBattleButton::config
	BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* ___config_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// csParticleEffectPackLightControl
struct csParticleEffectPackLightControl_t2EA83E3FD1F368990096E3A9BBBB6537754DA493  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Light csParticleEffectPackLightControl::_light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ____light_4;
	// System.Single csParticleEffectPackLightControl::_time
	float ____time_5;
	// System.Single csParticleEffectPackLightControl::Delay
	float ___Delay_6;
	// System.Single csParticleEffectPackLightControl::Down
	float ___Down_7;
	// UnityEngine.Light csParticleEffectPackLightControl::_light2
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ____light2_8;
	// System.Single csParticleEffectPackLightControl::Delay2
	float ___Delay2_9;
	// System.Single csParticleEffectPackLightControl::Delay3
	float ___Delay3_10;
	// System.Single csParticleEffectPackLightControl::Maxintensity
	float ___Maxintensity_11;
	// System.Single csParticleEffectPackLightControl::Up
	float ___Up_12;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityScreenNavigator.Runtime.Core.Shared.Views.View
struct View_t149EF3CB1224BF247F6D418AA1B44A211102FB32  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityScreenNavigator.Runtime.Core.Shared.Views.View::_usePrefabNameAsIdentifier
	bool ____usePrefabNameAsIdentifier_4;
	// System.String UnityScreenNavigator.Runtime.Core.Shared.Views.View::_identifier
	String_t* ____identifier_5;
	// UnityEngine.RectTransform UnityScreenNavigator.Runtime.Core.Shared.Views.View::_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____rectTransform_6;
	// UnityEngine.Transform UnityScreenNavigator.Runtime.Core.Shared.Views.View::_parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____parent_7;
	// UnityEngine.CanvasGroup UnityScreenNavigator.Runtime.Core.Shared.Views.View::_canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ____canvasGroup_8;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityScreenNavigator.Runtime.Core.Shared.Views.ContainerLayerManager
struct ContainerLayerManager_t1F25579783B89E08D4A7641A6FB131A40BCDC9BD  : public View_t149EF3CB1224BF247F6D418AA1B44A211102FB32
{
	// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Shared.Views.IContainerLayer> UnityScreenNavigator.Runtime.Core.Shared.Views.ContainerLayerManager::_containerLayers
	List_1_t78E251C882DABA7A23F6B8F81609801E4FB7CE79* ____containerLayers_9;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityScreenNavigator.Runtime.Core.Shared.Views.Window
struct Window_tD33C5252A720F1EB606A537CC386F8DFE7DBA8CD  : public View_t149EF3CB1224BF247F6D418AA1B44A211102FB32
{
	// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Shared.Views.IView> UnityScreenNavigator.Runtime.Core.Shared.Views.Window::views
	List_1_t00C4CF9492B656BEE6301DFB3959BDE88804891B* ___views_9;
};

// UnityScreenNavigator.Runtime.Core.Shared.Views.ContainerLayer
struct ContainerLayer_t03CACEFE186C6A59A148C5EB415D3E701A25FEC0  : public Window_tD33C5252A720F1EB606A537CC386F8DFE7DBA8CD
{
	// System.String UnityScreenNavigator.Runtime.Core.Shared.Views.ContainerLayer::<LayerName>k__BackingField
	String_t* ___U3CLayerNameU3Ek__BackingField_10;
	// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerType UnityScreenNavigator.Runtime.Core.Shared.Views.ContainerLayer::<LayerType>k__BackingField
	int32_t ___U3CLayerTypeU3Ek__BackingField_11;
	// UnityScreenNavigator.Runtime.Core.Shared.Views.IContainerLayerManager UnityScreenNavigator.Runtime.Core.Shared.Views.ContainerLayer::<ContainerLayerManager>k__BackingField
	RuntimeObject* ___U3CContainerLayerManagerU3Ek__BackingField_12;
	// UnityEngine.Canvas UnityScreenNavigator.Runtime.Core.Shared.Views.ContainerLayer::<Canvas>k__BackingField
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___U3CCanvasU3Ek__BackingField_13;
};

// UnityScreenNavigator.Runtime.Core.Shared.Views.GlobalContainerLayerManager
struct GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190  : public ContainerLayerManager_t1F25579783B89E08D4A7641A6FB131A40BCDC9BD
{
};

struct GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190_StaticFields
{
	// UnityScreenNavigator.Runtime.Core.Shared.Views.GlobalContainerLayerManager UnityScreenNavigator.Runtime.Core.Shared.Views.GlobalContainerLayerManager::Root
	GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190* ___Root_10;
};

// UnityScreenNavigator.Runtime.Core.Modals.Modal
struct Modal_tC1AB133578867A81B1F4E7C23341DC39B881C4CA  : public Window_tD33C5252A720F1EB606A537CC386F8DFE7DBA8CD
{
	// UnityScreenNavigator.Runtime.Core.Modals.ModalTransitionAnimationContainer UnityScreenNavigator.Runtime.Core.Modals.Modal::_animationContainer
	ModalTransitionAnimationContainer_tC83AC6E6C35D8EF49BDB1E3D0CA4A8E27AA4FC40* ____animationContainer_10;
	// UnityScreenNavigator.Runtime.Foundation.PriorityCollection.PriorityList`1<UnityScreenNavigator.Runtime.Core.Modals.IModalLifecycleEvent> UnityScreenNavigator.Runtime.Core.Modals.Modal::_lifecycleEvents
	PriorityList_1_tD0CAB01F9E3EF97F0CDB6E734709568931D98737* ____lifecycleEvents_11;
	// System.Progress`1<System.Single> UnityScreenNavigator.Runtime.Core.Modals.Modal::_transitionProgressReporter
	Progress_1_t8C9B7E58FF1DB1F905D4141ED777158D4BE3174F* ____transitionProgressReporter_12;
	// System.Boolean UnityScreenNavigator.Runtime.Core.Modals.Modal::<IsTransitioning>k__BackingField
	bool ___U3CIsTransitioningU3Ek__BackingField_13;
	// System.Nullable`1<UnityScreenNavigator.Runtime.Core.Modals.ModalTransitionAnimationType> UnityScreenNavigator.Runtime.Core.Modals.Modal::<TransitionAnimationType>k__BackingField
	Nullable_1_t1BC1D7EC413823F71FBC9EAE6342AC328A1369A6 ___U3CTransitionAnimationTypeU3Ek__BackingField_14;
	// System.Single UnityScreenNavigator.Runtime.Core.Modals.Modal::<TransitionAnimationProgress>k__BackingField
	float ___U3CTransitionAnimationProgressU3Ek__BackingField_15;
	// System.Action`1<System.Single> UnityScreenNavigator.Runtime.Core.Modals.Modal::TransitionAnimationProgressChanged
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___TransitionAnimationProgressChanged_16;
};

// UnityScreenNavigator.Runtime.Core.Screens.Screen
struct Screen_t2AE04C2000CD713680D85F7892FB6AA47BC8B0FD  : public Window_tD33C5252A720F1EB606A537CC386F8DFE7DBA8CD
{
	// System.Int32 UnityScreenNavigator.Runtime.Core.Screens.Screen::_renderingOrder
	int32_t ____renderingOrder_10;
	// UnityScreenNavigator.Runtime.Core.Screens.ScreenTransitionAnimationContainer UnityScreenNavigator.Runtime.Core.Screens.Screen::_animationContainer
	ScreenTransitionAnimationContainer_t3C0A3753FD65E3B8D2257BF8EE8E7ECC5C119908* ____animationContainer_11;
	// UnityScreenNavigator.Runtime.Foundation.PriorityCollection.PriorityList`1<UnityScreenNavigator.Runtime.Core.Screens.IScreenLifecycleEvent> UnityScreenNavigator.Runtime.Core.Screens.Screen::_lifecycleEvents
	PriorityList_1_t5003A3E2AC9584264DD8625DFA8EB0D666FE479E* ____lifecycleEvents_12;
	// System.Progress`1<System.Single> UnityScreenNavigator.Runtime.Core.Screens.Screen::_transitionProgressReporter
	Progress_1_t8C9B7E58FF1DB1F905D4141ED777158D4BE3174F* ____transitionProgressReporter_13;
	// System.Boolean UnityScreenNavigator.Runtime.Core.Screens.Screen::<IsTransitioning>k__BackingField
	bool ___U3CIsTransitioningU3Ek__BackingField_14;
	// System.Nullable`1<UnityScreenNavigator.Runtime.Core.Screens.ScreenTransitionAnimationType> UnityScreenNavigator.Runtime.Core.Screens.Screen::<TransitionAnimationType>k__BackingField
	Nullable_1_tDC904B0DCEF140AE01BA854D2DD0EE6EB86DB4CA ___U3CTransitionAnimationTypeU3Ek__BackingField_15;
	// System.Single UnityScreenNavigator.Runtime.Core.Screens.Screen::<TransitionAnimationProgress>k__BackingField
	float ___U3CTransitionAnimationProgressU3Ek__BackingField_16;
	// System.Action`1<System.Single> UnityScreenNavigator.Runtime.Core.Screens.Screen::TransitionAnimationProgressChanged
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___TransitionAnimationProgressChanged_17;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer
struct ActivityContainer_tFBBBBCCDA7BA16F80545D9841E5863A3564F7F76  : public ContainerLayer_t03CACEFE186C6A59A148C5EB415D3E701A25FEC0
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Foundation.AssetLoaders.AssetLoadHandle`1<UnityEngine.GameObject>> UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer::_preloadedResourceHandles
	Dictionary_2_t497E16E4D97FDF87E746A62B6D82CA21549DC395* ____preloadedResourceHandles_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityScreenNavigator.Runtime.Foundation.AssetLoaders.AssetLoadHandle`1<UnityEngine.GameObject>> UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer::_assetLoadHandles
	Dictionary_2_t655DD9561EFFB0EE9C2ACEA65D318F9F9C4FCE13* ____assetLoadHandles_17;
	// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Activities.IActivityContainerCallbackReceiver> UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer::_callbackReceivers
	List_1_t823A01BD9681CA586DAE9C2BE93E28E0369D3F48* ____callbackReceivers_18;
	// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Core.Activities.Activity> UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer::_activities
	Dictionary_2_t16E28BC2240440C45C556862A51EE7456F8D4A28* ____activities_19;
	// UnityScreenNavigator.Runtime.Foundation.AssetLoaders.IAssetLoader UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer::_assetLoader
	RuntimeObject* ____assetLoader_20;
};

struct ActivityContainer_tFBBBBCCDA7BA16F80545D9841E5863A3564F7F76_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer> UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer::InstanceCacheByTransform
	Dictionary_2_t51F227D634D1E0F97B39690F3BFB27ACA188370A* ___InstanceCacheByTransform_14;
	// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer> UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer::InstanceCacheByName
	Dictionary_2_tA4247293BA365B1DAB95E66D7C6497DE7BFCA827* ___InstanceCacheByName_15;
};

// Game.Scripts.Screens.BattleScreen
struct BattleScreen_t59ABF8896117B14D82A1445B47B6C2A061C7F944  : public Screen_t2AE04C2000CD713680D85F7892FB6AA47BC8B0FD
{
	// Game.Scripts.Config.BattleTeamConfig Game.Scripts.Screens.BattleScreen::teamConfig
	BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* ___teamConfig_18;
	// TMPro.TMP_Text Game.Scripts.Screens.BattleScreen::text
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text_19;
	// System.String Game.Scripts.Screens.BattleScreen::format
	String_t* ___format_20;
	// System.Int32 Game.Scripts.Screens.BattleScreen::countdown
	int32_t ___countdown_21;
	// System.Int32 Game.Scripts.Screens.BattleScreen::_currentCountdown
	int32_t ____currentCountdown_22;
};

// EndGameModal
struct EndGameModal_tCBBF3C111B844F8F4DB0AEB5EF1CD215EE70C2F5  : public Modal_tC1AB133578867A81B1F4E7C23341DC39B881C4CA
{
	// TMPro.TMP_Text EndGameModal::text
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text_17;
	// System.String EndGameModal::win
	String_t* ___win_18;
	// System.String EndGameModal::defeat
	String_t* ___defeat_19;
	// UnityEngine.UI.Button EndGameModal::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_20;
};

// Game.Scripts.Screens.LoadingScreen
struct LoadingScreen_t4E93231307D803C8ABB78BBE8644348E90192A1E  : public Screen_t2AE04C2000CD713680D85F7892FB6AA47BC8B0FD
{
	// UnityEngine.UI.Slider Game.Scripts.Screens.LoadingScreen::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_18;
	// TMPro.TMP_Text Game.Scripts.Screens.LoadingScreen::text
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text_19;
	// System.String Game.Scripts.Screens.LoadingScreen::textFormat
	String_t* ___textFormat_20;
	// System.Int32 Game.Scripts.Screens.LoadingScreen::loadingTime
	int32_t ___loadingTime_21;
	// System.Single Game.Scripts.Screens.LoadingScreen::_timer
	float ____timer_22;
};

// UnityScreenNavigator.Runtime.Core.Modals.ModalContainer
struct ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5  : public ContainerLayer_t03CACEFE186C6A59A148C5EB415D3E701A25FEC0
{
	// UnityScreenNavigator.Runtime.Core.Modals.ModalBackdrop UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::_overrideBackdropPrefab
	ModalBackdrop_t31BFB3EE2DFB4CB7DCB19AFDB1D7935C2EC717CD* ____overrideBackdropPrefab_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityScreenNavigator.Runtime.Foundation.AssetLoaders.AssetLoadHandle`1<UnityEngine.GameObject>> UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::_assetLoadHandles
	Dictionary_2_t655DD9561EFFB0EE9C2ACEA65D318F9F9C4FCE13* ____assetLoadHandles_17;
	// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Modals.ModalBackdrop> UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::_backdrops
	List_1_t153F6D55FC221571F101C45464C60735EFD4776D* ____backdrops_18;
	// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Modals.IModalContainerCallbackReceiver> UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::_callbackReceivers
	List_1_t56294457397C071A0AFAD343B67BAC6C54CEAB53* ____callbackReceivers_19;
	// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Modals.Modal> UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::_modals
	List_1_t9308F892E57E63D5813DED3E5801517489DC87A7* ____modals_20;
	// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Foundation.AssetLoaders.AssetLoadHandle`1<UnityEngine.GameObject>> UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::_preloadedResourceHandles
	Dictionary_2_t497E16E4D97FDF87E746A62B6D82CA21549DC395* ____preloadedResourceHandles_21;
	// UnityScreenNavigator.Runtime.Core.Modals.ModalBackdrop UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::_backdropPrefab
	ModalBackdrop_t31BFB3EE2DFB4CB7DCB19AFDB1D7935C2EC717CD* ____backdropPrefab_22;
	// UnityScreenNavigator.Runtime.Foundation.AssetLoaders.IAssetLoader UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::_assetLoader
	RuntimeObject* ____assetLoader_23;
	// System.Boolean UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::<IsInTransition>k__BackingField
	bool ___U3CIsInTransitionU3Ek__BackingField_24;
};

struct ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityScreenNavigator.Runtime.Core.Modals.ModalContainer> UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::InstanceCacheByTransform
	Dictionary_2_t1DE4380ADDEF716AFE4B75B0B5341A38EA5F3F0C* ___InstanceCacheByTransform_15;
	// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Core.Modals.ModalContainer> UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::InstanceCacheByName
	Dictionary_2_t5D6C3EC58822BA624FDD84A736973EDA1E92144F* ___InstanceCacheByName_16;
};

// UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer
struct ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020  : public ContainerLayer_t03CACEFE186C6A59A148C5EB415D3E701A25FEC0
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityScreenNavigator.Runtime.Foundation.AssetLoaders.AssetLoadHandle`1<UnityEngine.GameObject>> UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::_assetLoadHandles
	Dictionary_2_t655DD9561EFFB0EE9C2ACEA65D318F9F9C4FCE13* ____assetLoadHandles_16;
	// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Screens.IScreenContainerCallbackReceiver> UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::_callbackReceivers
	List_1_t11AACFB108E1588740C886C734844BD58BE94E62* ____callbackReceivers_17;
	// System.Collections.Generic.List`1<UnityScreenNavigator.Runtime.Core.Screens.Screen> UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::_screens
	List_1_tEB1AD633D39AA1864AC2311637F49ED7FAB6B89D* ____screens_18;
	// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Foundation.AssetLoaders.AssetLoadHandle`1<UnityEngine.GameObject>> UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::_preloadedResourceHandles
	Dictionary_2_t497E16E4D97FDF87E746A62B6D82CA21549DC395* ____preloadedResourceHandles_19;
	// System.Boolean UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::_isActiveScreenStacked
	bool ____isActiveScreenStacked_20;
	// UnityScreenNavigator.Runtime.Foundation.AssetLoaders.IAssetLoader UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::_assetLoader
	RuntimeObject* ____assetLoader_21;
	// System.Boolean UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::<IsInTransition>k__BackingField
	bool ___U3CIsInTransitionU3Ek__BackingField_22;
};

struct ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer> UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::InstanceCacheByTransform
	Dictionary_2_t403006678751EA4674021F23EB1FA29D583F4BC0* ___InstanceCacheByTransform_14;
	// System.Collections.Generic.Dictionary`2<System.String,UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer> UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::InstanceCacheByName
	Dictionary_2_t1422EA3A76056E8253AD33961A9B039A87148884* ___InstanceCacheByName_15;
};

// Game.Scripts.Screens.TeamSelectScreen
struct TeamSelectScreen_t3BE798311F87BF2F9C4BEAE0380E9625D5A186C0  : public Screen_t2AE04C2000CD713680D85F7892FB6AA47BC8B0FD
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// TigerForge.EventManager/DataGroup[]
struct DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D  : public RuntimeArray
{
	ALIGN_FIELD (8) DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 m_Items[1];

	inline DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___id_1), (void*)NULL);
		#endif
	}
	inline DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___id_1), (void*)NULL);
		#endif
	}
};
// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig[]
struct ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752  : public RuntimeArray
{
	ALIGN_FIELD (8) ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* m_Items[1];

	inline ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};

IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_pinvoke(const DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0& unmarshaled, DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_pinvoke_back(const DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_pinvoke& marshaled, DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0& unmarshaled);
IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_pinvoke_cleanup(DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_com(const DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0& unmarshaled, DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_com_back(const DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_com& marshaled, DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0& unmarshaled);
IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_com_cleanup(DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_com& marshaled);

// System.Void UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* __this, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* ___call0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisIl2CppFullySharedGenericAny_mF2CE0E0265F13C43AAB330B33509540A399C62A2_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m3E97180D9D50BF43BC80B709B867B052DF0BDEDD_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* __this, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* ___call0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___awaiter0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___stateMachine1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisIl2CppFullySharedGenericAny_m3499AC108A84D818DD8C221F8E60145246FC8A09_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.ComponentHolderProtocol::GetOrAddComponent<System.Object>(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentHolderProtocol_GetOrAddComponent_TisRuntimeObject_m704256156B26233D6D886A34394EF6CC8883A771_gshared (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___uo0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared (RuntimeObject* ___t0, int32_t ___ease1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1_GetAwaiter_mEC480E8F8586214E6ECD880FBFAA9C8CB1C963ED_gshared_inline (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* __this, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m22B365903CC1BE835CA1126FE3BD3E71156DDFA8_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mFF0CF33768E54ACB5D4D4F47A4A6FE3DB29EE6D8_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityScreenNavigator.Runtime.Core.Shared.Views.ContainerLayerManager::Find<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerLayerManager_Find_TisIl2CppFullySharedGenericAny_m3610240E946F15E8BE1EBEDF4575CE4099318BA8_gshared (ContainerLayerManager_t1F25579783B89E08D4A7641A6FB131A40BCDC9BD* __this, String_t* ___layerName0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisIl2CppFullySharedGenericAny_m71C8FD5A1D2A80DF660393A4F38332023A5F4BBC_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___enumerator0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Find_m25CD37B5BB59793EBDF3A50F8B982947F7D84B11_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___match0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderByDescending_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m91F716024CC434AC7C368AB42238BCE6B4F10C77_gshared (RuntimeObject* ___source0, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___keySelector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* Enumerable_ToList_TisIl2CppFullySharedGenericAny_m191EA129E511F9B8304FF8826A2DA645E06CCBF0_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* ___task0, const RuntimeMethod* method) ;

// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<DamageTextFloater/<OnValueChanged>d__5>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776_mDD0878A7818CA319FF9D1A5FA2BF689BA91D0EBB (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisIl2CppFullySharedGenericAny_mF2CE0E0265F13C43AAB330B33509540A399C62A2_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___stateMachine0, method);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void TigerForge.EventManager::StopListening(System.String,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_StopListening_m657F5E3D56D13E7A361D075B5DE3EDF6B8617BAD (String_t* ___eventName0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callBack1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m3E97180D9D50BF43BC80B709B867B052DF0BDEDD_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___call0, method);
}
// System.Object TigerForge.EventManager::GetData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventManager_GetData_m9769A8C0D0394B0BBB58A8C89B9A056B0F10419A (String_t* ___eventName0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute> Game.Scripts.Config.BattleTeamConfig::BattleSort(Game.Scripts.Config.AttributeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* BattleTeamConfig_BattleSort_mF45139FCA71762C4B8EC9FC4B1817255DBFE438D (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___config0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute>::get_Item(System.Int32)
inline MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010 (List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* __this, int32_t ___index0, const RuntimeMethod* method)
{
	MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<FloatText>(T,UnityEngine.Transform)
inline FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* Object_Instantiate_TisFloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15_mDAFA9DEB18146D696BFC6E0E02EFD58A6D3A7342 (FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* (*) (FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void FloatText::Active(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatText_Active_mFC19F376F0DE9DF9C1B997C902B7095926338AF4 (FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* __this, String_t* ___content0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::Delay(System.Int32,System.Boolean,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_Delay_m3D58C4E2738CAD61F29C9292DADAFAFB5DAC5C2A (int32_t ___millisecondsDelay0, bool ___ignoreTimeScale1, int32_t ___delayTiming2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTask::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask/Awaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,DamageTextFloater/<OnValueChanged>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776_mAA4558D05CB4411A03B961ACC072636FA28F5B8E (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___awaiter0, (Il2CppFullySharedGenericAny*)___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void TigerForge.EventManager::StartListening(System.String,UnityEngine.Events.UnityAction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8 (String_t* ___eventName0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callBack1, String_t* ___callBackID2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void DamageTextFloater/<OnValueChanged>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedU3Ed__5_MoveNext_m6CDA352C4B8811A20F2EB3A3B9FFCB5C1D26755D (U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void DamageTextFloater/<OnValueChanged>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedU3Ed__5_SetStateMachine_m92D084FAE0DD452BC09AFA5497B2FF54171805EE (U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::SetText(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, String_t* ___sourceText0, bool ___syncTextInputBox1, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void TigerForge.EventManager::EmitEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_EmitEvent_m7FA138F58500BF74EF72A857ABF7C0EDE60BB414 (String_t* ___eventName0, const RuntimeMethod* method) ;
// UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* ScreenContainer_Find_m0D44D21BF045BCF038D3F64FD90A17C01AA937A5 (String_t* ___containerName0, const RuntimeMethod* method) ;
// UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::Pop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* ScreenContainer_Pop_mDAA724C5E1F56E702EE1B06D9447E77DB218482A (ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* __this, bool ___playAnimation0, const RuntimeMethod* method) ;
// UnityScreenNavigator.Runtime.Core.Modals.ModalContainer UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::Of(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5* ModalContainer_Of_m115B3BF6001B4B61EB7520BF5A68E213877D40B9 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, bool ___useCache1, const RuntimeMethod* method) ;
// UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::Pop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* ModalContainer_Pop_m08289E1805DF3E00C537E63FDA1010E46CA08D4D (ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5* __this, bool ___playAnimation0, const RuntimeMethod* method) ;
// System.Void UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions::.ctor(System.String,System.Boolean,System.Action`1<UnityScreenNavigator.Runtime.Core.Shared.Views.Window>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowOptions__ctor_m772514999A01EB661B0EEC5F229A24BA4264F670 (WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731* __this, String_t* ___resourcePath0, bool ___playAnimation1, Action_1_tF3A4D9C1EB5202EBEE6F15DF6B9D5BFE1AF2A9CB* ___onLoaded2, bool ___loadAsync3, const RuntimeMethod* method) ;
// UnityScreenNavigator.Runtime.Core.Screens.ScreenOptions UnityScreenNavigator.Runtime.Core.Screens.ScreenOptions::op_Implicit(UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScreenOptions_t3BC7FCCF3C5282AA0B74B9CCD8044EF3BE6FE8C3 ScreenOptions_op_Implicit_mD306180F4CFED0CBA28BB21FACB10E174C0B228F (WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731* ___options0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
	return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)il2cppRetVal;
}
// UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::Push(UnityScreenNavigator.Runtime.Core.Screens.ScreenOptions,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* ScreenContainer_Push_mB3DC09084C1E3CE85748509105090A5CC420B091 (ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* __this, ScreenOptions_t3BC7FCCF3C5282AA0B74B9CCD8044EF3BE6FE8C3 ___options0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityScreenNavigator.Runtime.Core.Modals.Modal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Modal__ctor_m19EA3362D7B3CB88FD7A51D3B30D39CED1981CF2 (Modal_tC1AB133578867A81B1F4E7C23341DC39B881C4CA* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> EnemyAI::OwnAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* EnemyAI_OwnAlive_m25FE7654F147A28600D563B1CDEDC4F6586B6094 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisIl2CppFullySharedGenericAny_m3499AC108A84D818DD8C221F8E60145246FC8A09_gshared)((RuntimeObject*)___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void TigerForge.EventManager::EmitEventData(System.String,System.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_EmitEventData_m6C4A0B52957ABDB53988073B38AAC1857F510660 (String_t* ___eventName0, RuntimeObject* ___data1, float ___delay2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1<System.String> Game.Scripts.Config.BattleTeamConfig::GetTeam()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* BattleTeamConfig_GetTeam_mC05839126BCC7BC44482B55F17B2C71475AC1231_inline (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// Game.Scripts.Config.MonsterAttribute Game.Scripts.Config.AttributeConfig::GetMonster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* AttributeConfig_GetMonster_mBAB7AD752F65D23A369E5BDD0B49D591B788E07C (AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* __this, String_t* ___nameMonster0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T Unity.VisualScripting.ComponentHolderProtocol::GetOrAddComponent<TMPro.TMP_Text>(UnityEngine.Object)
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ComponentHolderProtocol_GetOrAddComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m5004249074CA66528824F0F9E4906F662EEB0952 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___uo0, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))ComponentHolderProtocol_GetOrAddComponent_TisRuntimeObject_m704256156B26233D6D886A34394EF6CC8883A771_gshared)(___uo0, method);
}
// UnityEngine.Transform TMPro.TMP_Text::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TMP_Text_get_transform_m6BD41E08BFCFCE722DFCE4627626AD60CA99CCA8 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOMove_m82274FDC0216A91A1FAF16844805D06BF9A287FF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___t0, ___ease1, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Collections.Generic.List`1<System.String> Game.Scripts.Config.BattleTeamConfig::GetEnemyTeam(Game.Scripts.Config.AttributeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* BattleTeamConfig_GetEnemyTeam_m66A6F406F367601C6B9179D74FF3E24F35E7F94B (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___config0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* __this, String_t* ___key0, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)___value1, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>::Add(TKey,TValue)
inline void Dictionary_2_Add_m835B5E8BE87F04BEAB6C3B908DCF740EF6152156 (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* __this, String_t* ___key0, UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
inline void Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292 (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)&___value1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityAction>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB1FD95D53599F795E5926A332D5DE221F7963F2F (Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* __this, String_t* ___key0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityAction>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mA7C6448345C9DCA2174B3CB863E940B80C9BE0D8 (Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityAction>::get_Item(TKey)
inline UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* Dictionary_2_get_Item_m27A75461F4E79D1B5927167B75F59E948428BF9B (Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* __this, String_t* ___key0, const RuntimeMethod* method)
{
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean TigerForge.EventManager::isPaused(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventManager_isPaused_m38ACD1AB01ED7E4A1FF32CCE7F0366563C47ABCA (String_t* ___eventName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void TigerForge.EventManager::DelayedInvoke(UnityEngine.Events.UnityEvent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_DelayedInvoke_m752F796FB7063347D2E0FC2BFB5A5E3BA21F47E6 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___thisEvent0, int32_t ___delay1, const RuntimeMethod* method) ;
// System.Void TigerForge.EventManager::EmitEvent(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_EmitEvent_mB395E25864278454ACFFED1D2582EB72D842AB17 (String_t* ___eventName0, float ___delay1, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/SFilter>::.ctor()
inline void Dictionary_2__ctor_m3F82ECD1F2D37DC2E3468BCE63630BF541938FCF (Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/SFilter>::Add(TKey,TValue)
inline void Dictionary_2_Add_m83AC9A82DBF6AFDAA1B00A27FA5668748E42A96F (Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* __this, String_t* ___key0, SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)&___value1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/SFilter>::get_Count()
inline int32_t Dictionary_2_get_Count_mB1058F0C9C7EDAB8C7527F5667B8274A3AA90D2A (Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>::GetEnumerator()
inline Enumerator_t72F051E09659AAF09C2748EA97D8B30E9F30F20D Dictionary_2_GetEnumerator_m64190B380A145B8AB27A6AB837F24BF572A40AEC (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* __this, const RuntimeMethod* method)
{
	Enumerator_t72F051E09659AAF09C2748EA97D8B30E9F30F20D il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.Events.UnityEvent>::Dispose()
inline void Enumerator_Dispose_mA30D00C82F95861000D0B6DE1A0E774BD59F092A (Enumerator_t72F051E09659AAF09C2748EA97D8B30E9F30F20D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.Events.UnityEvent>::get_Current()
inline KeyValuePair_2_t2DC05A2DD885489EB51D5F0A99A9C8819AA0D5A5 Enumerator_get_Current_mA55F1CB6D1BC74355EF2E2C07174A2678B3B727B_inline (Enumerator_t72F051E09659AAF09C2748EA97D8B30E9F30F20D* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2DC05A2DD885489EB51D5F0A99A9C8819AA0D5A5 il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Events.UnityEvent>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m0997E5A5B7B7695DCC795B99ECAE08C97166BC54_inline (KeyValuePair_2_t2DC05A2DD885489EB51D5F0A99A9C8819AA0D5A5* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/SFilter>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mE040371FDA3F1E0F4D1B123A838C6F81F1223F58 (Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/SFilter>::get_Item(TKey)
inline SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 Dictionary_2_get_Item_m2FA8759E6D40E1BEE381A5AEC1FE87ACD6644484 (Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* __this, String_t* ___key0, const RuntimeMethod* method)
{
	SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean TigerForge.EventManager::FilterIsValidated(System.String,TigerForge.EventManager/SFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventManager_FilterIsValidated_m2C13C04049A3E31B07779EEC1131F1D840EAF368 (String_t* ___value0, SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 ___rules1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.Events.UnityEvent>::MoveNext()
inline bool Enumerator_MoveNext_mE8CB03F28252733FB3090D0D4C11443FFE1D1CD0 (Enumerator_t72F051E09659AAF09C2748EA97D8B30E9F30F20D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Void TigerForge.EventManager::SetData(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_SetData_mE3ADF59635C806E5364C2ED369CDA76AEC8141F0 (String_t* ___eventName0, RuntimeObject* ___data1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Events.UnityEvent>::get_Value()
inline UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* KeyValuePair_2_get_Value_m6D93038D2CC3C058F24FDACFFF809C3AB0D024B8_inline (KeyValuePair_2_t2DC05A2DD885489EB51D5F0A99A9C8819AA0D5A5* __this, const RuntimeMethod* method)
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>::.ctor()
inline void Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<TigerForge.EventManager/<DelayedInvoke>d__20>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483_m065D5BF9215F38E712700FD458BD2433D979FB24 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisIl2CppFullySharedGenericAny_mF2CE0E0265F13C43AAB330B33509540A399C62A2_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___stateMachine0, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>::get_Count()
inline int32_t Dictionary_2_get_Count_m9A6579F658F9BFCE99F50FBEE3FEA2B75E7DAF82 (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void TigerForge.EventManager::SetPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_SetPaused_m987FBED6FB639BFCD7CB098F62C774570A1AB955 (bool ___value0, const RuntimeMethod* method) ;
// System.Void TigerForge.EventManager::SetPaused(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_SetPaused_m8F4AC0535271A538D531680B269E5DCDC5CB5E55 (String_t* ___eventName0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6 (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
inline bool Dictionary_2_get_Item_mE029B6A6F149DDDE86FCF5B3D2CA2EDDBC7F4A6F (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, String_t* ___key0, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
inline Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22 (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, const RuntimeMethod* method)
{
	Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::Dispose()
inline void Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14 (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_Current()
inline KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_inline (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_inline (KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::MoveNext()
inline bool Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2 (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_inline (KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C* __this, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m8B243A3A4E1E9A10EC4E7DE5898CAEA5CBDCBE98 (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
inline bool Dictionary_2_Remove_m2114FDE2525CF3B91B50AB1F5D5C28464EC55E3C (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object[]>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3 (Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object[]>::Remove(TKey)
inline bool Dictionary_2_Remove_mDBFE25FC0FF7963A964A4A2245535B70A2AC3573 (Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/DataGroup[]>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E (Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/DataGroup[]>::Remove(TKey)
inline bool Dictionary_2_Remove_m0DEC5CCE18195C4F3781C5FC11AD5595A6BDB5B0 (Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
inline void Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object[]>::Clear()
inline void Dictionary_2_Clear_m30236686417F47FD494911E606478ECF15CA2D54 (Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/DataGroup[]>::Clear()
inline void Dictionary_2_Clear_m51CC777C9E1845DFAF2D9E83F8716F06D74249FC (Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object[]>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m77238FB49980FDB19D8C00DFAF5101525704AC2E (Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* __this, String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object[]>::Add(TKey,TValue)
inline void Dictionary_2_Add_m288AFAD22BF5CBC69A2FBB873CA97CBCB182E31F (Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* __this, String_t* ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object[]>::get_Item(TKey)
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Dictionary_2_get_Item_mFDD8CA65E81A5F71ABA6FAEC4F48611B0D9B15D0 (Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* __this, String_t* ___key0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/DataGroup[]>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m6E8FF6CE485A2DF87B7A73202FA124CD4B09CA78 (Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* __this, String_t* ___key0, DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/DataGroup[]>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2E77CE5F37659706F26A886F903A6A1FE8A3C60B (Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* __this, String_t* ___key0, DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/DataGroup[]>::get_Item(TKey)
inline DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* Dictionary_2_get_Item_mD02A1440C1186E58166E85A533C8CD45470E876A (Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* __this, String_t* ___key0, const RuntimeMethod* method)
{
	DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object[]>::.ctor()
inline void Dictionary_2__ctor_m02F631C76B562E4106CA7DAA78F0D1464A6CA6D7 (Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,TigerForge.EventManager/DataGroup[]>::.ctor()
inline void Dictionary_2__ctor_mCA03B9791BB3682B20E4044DCD46CAC0E7E8A379 (Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityAction>::.ctor()
inline void Dictionary_2__ctor_m9493A128ED8728998985F634649EC7082B4E1FA3 (Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// UnityEngine.GameObject TigerForge.EventManager/DataGroup::ToGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DataGroup_ToGameObject_mD73EB8C7269DF2A402594E9CD0622E9B7EFFECEF (DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* __this, const RuntimeMethod* method) ;
// System.Int32 TigerForge.EventManager/DataGroup::ToInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataGroup_ToInt_mDE1E1B78B567E281FED78FB5AE1CF0AFDC2D48AD (DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* __this, const RuntimeMethod* method) ;
// System.Single TigerForge.EventManager/DataGroup::ToFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DataGroup_ToFloat_m85B1184DD5C225B193E3B7D7004E51489F70AC50 (DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* __this, const RuntimeMethod* method) ;
// System.String TigerForge.EventManager/DataGroup::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataGroup_ToString_m52893B7A19664ED905C99F59AB97B78CAF8FE71E (DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* __this, const RuntimeMethod* method) ;
// System.Boolean TigerForge.EventManager/DataGroup::ToBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataGroup_ToBool_m8ED428F5D774C3A5361060EB7A0E337956B6EA32 (DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* __this, const RuntimeMethod* method) ;
// System.Object TigerForge.EventManager/IndexedDataGroup::GetObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedDataGroup_GetObject_m7D153C46236410AA006E287007BFBA92F28AD89C (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Object TigerForge.EventManager/IndexedDataGroup::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedDataGroup_Find_m085900BD563CD6316781D7768ED871851C404D09 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) ;
// UnityEngine.GameObject TigerForge.EventManager/IndexedDataGroup::ToGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* IndexedDataGroup_ToGameObject_m9B4BC97F10B456E108FCE901BEBB260B15D15B4C (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Int32 TigerForge.EventManager/IndexedDataGroup::ToInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedDataGroup_ToInt_m5A53D3C942361756C4684BE5DE054C0D495F6400 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Single TigerForge.EventManager/IndexedDataGroup::ToFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IndexedDataGroup_ToFloat_m4A07C9469811D778E22414A262D4076E6D5562A2 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.String TigerForge.EventManager/IndexedDataGroup::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IndexedDataGroup_ToString_m51D58DAEEE128D819CA53D807CA92AB595C0DC65 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Boolean TigerForge.EventManager/IndexedDataGroup::ToBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedDataGroup_ToBool_m64F9A8393B21D7BEDF8B71E2A512BF3A691C7B40 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Boolean TigerForge.EventManager/IndexedDataGroup::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedDataGroup_IsEmpty_mD70FD0609934B8C4901B2A5406509DF41448BB65 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48 (int32_t ___millisecondsDelay0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,TigerForge.EventManager/<DelayedInvoke>d__20>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483_m516FA81A6D3A39A6964D7736712C4DE8479D33BF (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___awaiter0, (Il2CppFullySharedGenericAny*)___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void TigerForge.EventManager/<DelayedInvoke>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedInvokeU3Ed__20_MoveNext_mC0B538CD13462825514D9B7E733BBBDA1F8F2B10 (U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483* __this, const RuntimeMethod* method) ;
// System.Void TigerForge.EventManager/<DelayedInvoke>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedInvokeU3Ed__20_SetStateMachine_mC143BBBC675AE1CE0758DD69DC9CE36FC7352D85 (U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TigerForge.EventsGroup/SEvent>::Add(T)
inline void List_1_Add_mD6814902859A771E33EF62D0829DC9F23F1D3A58_inline (List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* __this, SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TigerForge.EventsGroup/SEvent>::GetEnumerator()
inline Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974 List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D (List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* __this, const RuntimeMethod* method)
{
	Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<TigerForge.EventsGroup/SEvent>::Dispose()
inline void Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10 (Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<TigerForge.EventsGroup/SEvent>::get_Current()
inline SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_inline (Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974* __this, const RuntimeMethod* method)
{
	SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<TigerForge.EventsGroup/SEvent>::MoveNext()
inline bool Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C (Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void System.Collections.Generic.List`1<TigerForge.EventsGroup/SEvent>::.ctor()
inline void List_1__ctor_m42D0BA4F00EE61A728D7D8FC8FF29427C1512A9A (List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void Game.Scripts.BattleHandler::OnStartTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleHandler_OnStartTurn_m952F3258B96A42EAAD4BF6FCA1715F50060EB165 (BattleHandler_t268C8A69FDC7D0F2BFC3F91003557FD7E2FAF443* __this, const RuntimeMethod* method) ;
// System.Boolean Game.Scripts.BattleHandler::IsBattleEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleHandler_IsBattleEnd_m76447F30FDF3C258D591988452DF1443AD64612B (BattleHandler_t268C8A69FDC7D0F2BFC3F91003557FD7E2FAF443* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::SetText(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_mC6973FFC60DB6A96B0C4253CD2FD9D0789ECC533 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, String_t* ___sourceText0, float ___arg01, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute>::get_Count()
inline int32_t List_1_get_Count_mB65C255893ADD35F8B206AB4CA300F1014963CE5_inline (List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1<System.String> Game.Scripts.Config.BattleTeamConfig::GetUnusedMonsters(Game.Scripts.Config.AttributeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* BattleTeamConfig_GetUnusedMonsters_m1DD7E432C7886A3D009F726213E7B31DF6334E39 (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___config0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean Game.Scripts.Config.BattleTeamConfig::PickMonster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleTeamConfig_PickMonster_m04494EBC5C5AD77C57A5C82E00E2BD570F61E7D8 (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, String_t* ___nameMonster0, const RuntimeMethod* method) ;
// System.Boolean Game.Scripts.Config.BattleTeamConfig::RemoveMonster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleTeamConfig_RemoveMonster_m1C18251D12A538344309BE33CD1D9DC11242B41E (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, String_t* ___nameMonster0, const RuntimeMethod* method) ;
// System.Int32 Game.Scripts.Config.BattleTeamConfig::CurrentIndexPick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BattleTeamConfig_CurrentIndexPick_mF864670D7DAFD43470FB0046363216A29F7030C2_inline (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Game.Scripts.Config.PositionsConfig::GetTempPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PositionsConfig_GetTempPosition_mA63E43F0DC09587CB10B545F8EAC234695AEDE0B (PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Game.Scripts.Config.PositionsConfig::SetTempPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionsConfig_SetTempPosition_mE5ABA5FABC21589900E9A5B54D2B7D0B14C10D53 (PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute> Game.Scripts.Config.AttributeConfig::MonsterAttributes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* AttributeConfig_MonsterAttributes_mAAAA2917F1A11CE1BB3572FD4D33C3B2A4DED2D5_inline (AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute>::GetEnumerator()
inline Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601 (List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* __this, const RuntimeMethod* method)
{
	Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<Game.Scripts.Config.MonsterAttribute>::Dispose()
inline void Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38 (Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Game.Scripts.Config.MonsterAttribute>::get_Current()
inline MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_inline (Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E* __this, const RuntimeMethod* method)
{
	MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.AddressableAssets.Addressables::InstantiateAsync(System.Object,UnityEngine.Transform,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA Addressables_InstantiateAsync_mD10FF052D569CA9E7027857932564E8630F9574E (RuntimeObject* ___key0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___instantiateInWorldSpace2, bool ___trackHandle3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Game.Scripts.Config.MonsterAttribute>::MoveNext()
inline bool Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762 (Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void Game.Scripts.Config.BattleTeamConfig::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleTeamConfig_Release_m7D7707FFC5A6E45ABDED1E9802739D1DDA64062E (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) ;
// System.Void Game.Scripts.Config.AttributeConfig::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeConfig_Release_m5FC441DB12A52823E6863C4C9E85DFF12DE8C787 (AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* __this, const RuntimeMethod* method) ;
// System.Void Game.Scripts.Config.PositionsConfig::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionsConfig_Release_m9678B9D3ED35825CF3B91B82159F61A3033D873A (PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// T Unity.VisualScripting.ComponentHolderProtocol::GetOrAddComponent<UnityScreenNavigator.Runtime.Core.Shared.Views.GlobalContainerLayerManager>(UnityEngine.Object)
inline GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190* ComponentHolderProtocol_GetOrAddComponent_TisGlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190_mC2CDE076F9DD1D22FB2F2D6C4B75C539832C67F1 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___uo0, const RuntimeMethod* method)
{
	return ((  GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190* (*) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))ComponentHolderProtocol_GetOrAddComponent_TisRuntimeObject_m704256156B26233D6D886A34394EF6CC8883A771_gshared)(___uo0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Game.Scripts.ContainerLauncher/<Start>d__4>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_m2A1B907AA564EAFA11C5CECD0F215C624BC34D4E (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisIl2CppFullySharedGenericAny_mF2CE0E0265F13C43AAB330B33509540A399C62A2_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___stateMachine0, method);
}
// UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig[] UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerSettings::GetContainerLayers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752* ContainerLayerSettings_GetContainerLayers_mAD7CB0E903623F6E55010AF68EE3C89593796BD6_inline (ContainerLayerSettings_tD51E21908432D9BB12B44ED5E392182317E373E6* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<UnityScreenNavigator.Runtime.Core.Modals.ModalContainer> UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::CreateAsync(UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig,UnityScreenNavigator.Runtime.Core.Shared.Views.IContainerLayerManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_t74912DAA6AE9085FCB96ED547F96777F47A163C9 ModalContainer_CreateAsync_mEE360B629E72C2A9803142969F0320B07675C3C0 (ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* ___layerConfig0, RuntimeObject* ___manager1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<UnityScreenNavigator.Runtime.Core.Modals.ModalContainer>::GetAwaiter()
inline Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8 UniTask_1_GetAwaiter_m1BB240BEC508753F79B3A778004ACDFB48272506_inline (UniTask_1_t74912DAA6AE9085FCB96ED547F96777F47A163C9* __this, const RuntimeMethod* method)
{
	Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8 il2cppRetVal;
	((  void (*) (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))UniTask_1_GetAwaiter_mEC480E8F8586214E6ECD880FBFAA9C8CB1C963ED_gshared_inline)((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)__this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Modals.ModalContainer>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m80F853A9DC02083B8B02B0AC9FC9D22AE8528DF8_inline (Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))Awaiter_get_IsCompleted_m22B365903CC1BE835CA1126FE3BD3E71156DDFA8_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Modals.ModalContainer>,Game.Scripts.ContainerLauncher/<Start>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_m17F09531E019C2A2351E70CFCD8646F2D4B5C964 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8* ___awaiter0, U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___awaiter0, (Il2CppFullySharedGenericAny*)___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Modals.ModalContainer>::GetResult()
inline ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5* Awaiter_GetResult_mFC8DF53337A7B273D63BBFB74C357A1D10381F49_inline (Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8* __this, const RuntimeMethod* method)
{
	ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5* il2cppRetVal;
	((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Awaiter_GetResult_mFF0CF33768E54ACB5D4D4F47A4A6FE3DB29EE6D8_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// Cysharp.Threading.Tasks.UniTask`1<UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer> UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::CreateAsync(UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig,UnityScreenNavigator.Runtime.Core.Shared.Views.IContainerLayerManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_t7B789002D096A0982E67D64CBFC1C25AF42F87ED ScreenContainer_CreateAsync_m6F581BCDD2AFBE49FD8AAE389B3DE9591894A557 (ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* ___layerConfig0, RuntimeObject* ___manager1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer>::GetAwaiter()
inline Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4 UniTask_1_GetAwaiter_m8945EB1621F1E6D092622DA427DDD7F81A865E47_inline (UniTask_1_t7B789002D096A0982E67D64CBFC1C25AF42F87ED* __this, const RuntimeMethod* method)
{
	Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4 il2cppRetVal;
	((  void (*) (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))UniTask_1_GetAwaiter_mEC480E8F8586214E6ECD880FBFAA9C8CB1C963ED_gshared_inline)((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)__this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m622AB9C88C797EFD8B93A2D42C9ABB01D9E9A205_inline (Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))Awaiter_get_IsCompleted_m22B365903CC1BE835CA1126FE3BD3E71156DDFA8_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer>,Game.Scripts.ContainerLauncher/<Start>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mC28639A499F86F3D8158F086907C520B912C5362 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4* ___awaiter0, U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___awaiter0, (Il2CppFullySharedGenericAny*)___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer>::GetResult()
inline ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* Awaiter_GetResult_m43D450EC49F01BA49EFBC0046545D9655F9FF112_inline (Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4* __this, const RuntimeMethod* method)
{
	ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* il2cppRetVal;
	((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Awaiter_GetResult_mFF0CF33768E54ACB5D4D4F47A4A6FE3DB29EE6D8_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer> UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer::CreateAsync(UnityScreenNavigator.Runtime.Core.Shared.ContainerLayerConfig,UnityScreenNavigator.Runtime.Core.Shared.Views.IContainerLayerManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_t261AB7FF825980F6B5279AABE1C733CE3FAAC016 ActivityContainer_CreateAsync_m8279071A14E3AB3359BB9BFC471AA7D29C60A4E6 (ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* ___layerConfig0, RuntimeObject* ___manager1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer>::GetAwaiter()
inline Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C UniTask_1_GetAwaiter_mA0C819502D37B5F7526F96F66F42101D1E6BF5C3_inline (UniTask_1_t261AB7FF825980F6B5279AABE1C733CE3FAAC016* __this, const RuntimeMethod* method)
{
	Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C il2cppRetVal;
	((  void (*) (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))UniTask_1_GetAwaiter_mEC480E8F8586214E6ECD880FBFAA9C8CB1C963ED_gshared_inline)((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)__this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m97C5536A8D4091AB343BF29BCB091058668B4C22_inline (Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))Awaiter_get_IsCompleted_m22B365903CC1BE835CA1126FE3BD3E71156DDFA8_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer>,Game.Scripts.ContainerLauncher/<Start>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mB2D61606B79873F0076E1C92F2161CA63FC9493D (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C* ___awaiter0, U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___awaiter0, (Il2CppFullySharedGenericAny*)___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityScreenNavigator.Runtime.Core.Activities.ActivityContainer>::GetResult()
inline ActivityContainer_tFBBBBCCDA7BA16F80545D9841E5863A3564F7F76* Awaiter_GetResult_m5E7DA1ABB29CF219205891BC1A15DBACCB9F8A49_inline (Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C* __this, const RuntimeMethod* method)
{
	ActivityContainer_tFBBBBCCDA7BA16F80545D9841E5863A3564F7F76* il2cppRetVal;
	((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Awaiter_GetResult_mFF0CF33768E54ACB5D4D4F47A4A6FE3DB29EE6D8_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// T UnityScreenNavigator.Runtime.Core.Shared.Views.ContainerLayerManager::Find<UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer>(System.String)
inline ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* ContainerLayerManager_Find_TisScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_m5D8DB71D18322BE0E0218300F324FDD16B7C29E9 (ContainerLayerManager_t1F25579783B89E08D4A7641A6FB131A40BCDC9BD* __this, String_t* ___layerName0, const RuntimeMethod* method)
{
	ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* il2cppRetVal;
	((  void (*) (ContainerLayerManager_t1F25579783B89E08D4A7641A6FB131A40BCDC9BD*, String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ContainerLayerManager_Find_TisIl2CppFullySharedGenericAny_m3610240E946F15E8BE1EBEDF4575CE4099318BA8_gshared)((ContainerLayerManager_t1F25579783B89E08D4A7641A6FB131A40BCDC9BD*)__this, ___layerName0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle>(T)
inline Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisAsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F_m2156B0BB5715359142EC909A3FCFA7ECDF55F3FF (AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* ___enumerator0, const RuntimeMethod* method)
{
	return ((  Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EnumeratorAsyncExtensions_GetAwaiter_TisIl2CppFullySharedGenericAny_m71C8FD5A1D2A80DF660393A4F38332023A5F4BBC_gshared)((Il2CppFullySharedGenericAny)___enumerator0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Game.Scripts.ContainerLauncher/<Start>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mE17C17A599F43D3AC948732A5052AA0E543BF622 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___awaiter0, (Il2CppFullySharedGenericAny*)___stateMachine1, method);
}
// System.Void Game.Scripts.ContainerLauncher/<Start>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_MoveNext_mBFB8F319067F87D0DE99B7BFDFEE77386119C4B2 (U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC* __this, const RuntimeMethod* method) ;
// System.Void Game.Scripts.ContainerLauncher/<Start>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_SetStateMachine_m03A4109D691CE33D5A826E93C57A26C9824EC563 (U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Game.Scripts.MonsterController::CanTouchAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_CanTouchAll_m3EEAF01F9374D1FCB1126C14BB1D16BD989A62B0 (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, const RuntimeMethod* method) ;
// System.Void Game.Scripts.MonsterController::GetDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_GetDamage_m241B5EB171262F1BA0300B00EEBA9794C3015DB4 (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.ComponentHolderProtocol::GetOrAddComponent<EnemyAI>(UnityEngine.Object)
inline EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* ComponentHolderProtocol_GetOrAddComponent_TisEnemyAI_t062D6559860346BBF7415F088B566404469B3C50_m7B6663C6B49612845B72FBC5F10DAA640732A66A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___uo0, const RuntimeMethod* method)
{
	return ((  EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* (*) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))ComponentHolderProtocol_GetOrAddComponent_TisRuntimeObject_m704256156B26233D6D886A34394EF6CC8883A771_gshared)(___uo0, method);
}
// System.Void EnemyAI::SetConfig(Game.Scripts.Config.BattleTeamConfig,Game.Scripts.Config.AttributeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_SetConfig_m9AB12F5A69354AA76AFB1FC9E54BEFE2144364B3 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* ___team0, AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___attribute1, const RuntimeMethod* method) ;
// System.Void EnemyAI::Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Active_m1867D2C4656C24D7F93B42A2A728BB1022A3F378 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Game.Scripts.MonsterController/<GetDamage>d__13>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_mFF05AA61F2495C0EED3B807B0CB1966382BD4E52 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisIl2CppFullySharedGenericAny_mF2CE0E0265F13C43AAB330B33509540A399C62A2_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___stateMachine0, method);
}
// T UnityEngine.Object::Instantiate<Game.Scripts.ParticlesObject>(T,UnityEngine.Transform)
inline ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* Object_Instantiate_TisParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5_mCC41BE31A721A7C3A183A05E2793A031340F766A (ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* (*) (ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Int32 Game.Scripts.ParticlesObject::GetDelayTimer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParticlesObject_GetDelayTimer_m189E65B62E10915B4570B5C10F4B0BB03E3A8CE2_inline (ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* __this, const RuntimeMethod* method) ;
// System.Single Game.Scripts.ParticlesObject::GetSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ParticlesObject_GetSpeed_m8AD56D126A94881120DD1FFA0A844B43907418E8_inline (ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* __this, const RuntimeMethod* method) ;
// System.Void Game.Scripts.ParticlesObject::Active(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticlesObject_Active_m5C19CDC000351483DCC85B46F434B9CC7576CEFD (ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___start0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___end1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Game.Scripts.MonsterController/<GetDamage>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_m46993507A2A7E583D1EC864A2FA97C0650C89ADC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___awaiter0, (Il2CppFullySharedGenericAny*)___stateMachine1, method);
}
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOValue(UnityEngine.UI.Slider,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* DOTweenModuleUI_DOValue_m38DB0CB09A73E2DDC33B3EEE49D74944FBA82A38 (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___target0, float ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* (*) (TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___t0, ___ease1, method);
}
// System.Void System.Predicate`1<Game.Scripts.Config.MonsterAttribute>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m4DE0016A3D050E0976ACCBBCB9104D38CD721937 (Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute>::Find(System.Predicate`1<T>)
inline MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* List_1_Find_m156D33C29D70F998AD5616DC81E70D2F0AA5BDDB (List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* __this, Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A* ___match0, const RuntimeMethod* method)
{
	MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_Find_m25CD37B5BB59793EBDF3A50F8B982947F7D84B11_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)___match0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Game.Scripts.MonsterController/<GetDamage>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDamageU3Ed__13_MoveNext_m3443165DEFEB1EDB18FD3ECB0A73D0383B0AC887 (U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A* __this, const RuntimeMethod* method) ;
// System.Void Game.Scripts.MonsterController/<GetDamage>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDamageU3Ed__13_SetStateMachine_m623B649601C63DBACE0C6111160BCEFAEBC3ED33 (U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Game.Scripts.ParticlesObject/<Active>d__4>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF_mA844F2C299D2E61E2225A7316F2CF515A5750A09 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisIl2CppFullySharedGenericAny_mF2CE0E0265F13C43AAB330B33509540A399C62A2_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Game.Scripts.ParticlesObject/<Active>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF_m713DC09EE12FD0BA93CB80C20C74C5AB513DD83C (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___awaiter0, (Il2CppFullySharedGenericAny*)___stateMachine1, method);
}
// System.Void Game.Scripts.ParticlesObject/<Active>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActiveU3Ed__4_MoveNext_mB9ED6A46B4FFDE10F5558267B48C7FD37D6E49C9 (U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF* __this, const RuntimeMethod* method) ;
// System.Void Game.Scripts.ParticlesObject/<Active>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActiveU3Ed__4_SetStateMachine_m082710A1800B19F493E5AED385CA58F401DA9756 (U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// T Unity.VisualScripting.ComponentHolderProtocol::GetOrAddComponent<UnityEngine.UI.Button>(UnityEngine.Object)
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ComponentHolderProtocol_GetOrAddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mF0E99E2B9B6B2DBF2ADC259BDEC236D4F9625E68 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___uo0, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))ComponentHolderProtocol_GetOrAddComponent_TisRuntimeObject_m704256156B26233D6D886A34394EF6CC8883A771_gshared)(___uo0, method);
}
// System.Void Game.Scripts.PlayBattleButton::UpdateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBattleButton_UpdateView_m9A7CDE75152E3F2CF5A1D5058D9FCA636EA1CE2F (PlayBattleButton_t83B1C7E2FD7D71131C02D22A68627EF7A33C1178* __this, const RuntimeMethod* method) ;
// System.Boolean Game.Scripts.Config.BattleTeamConfig::IsFullTeam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleTeamConfig_IsFullTeam_mA63272785284E137DB6A075FC28D2397BABDAA0C (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityScreenNavigator.Runtime.Core.Modals.ModalContainer UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5* ModalContainer_Find_m34161F0DBACB25AEDBABEB3F863B0154FE7EFE52 (String_t* ___containerName0, const RuntimeMethod* method) ;
// UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731 WindowOptions_op_Implicit_m44CC47CB09FD7903374E011CDB46DD003C4CC1E8 (String_t* ___resourcePath0, const RuntimeMethod* method) ;
// UnityScreenNavigator.Runtime.Foundation.Coroutine.AsyncProcessHandle UnityScreenNavigator.Runtime.Core.Modals.ModalContainer::Push(UnityScreenNavigator.Runtime.Core.Shared.Views.WindowOptions,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* ModalContainer_Push_m05E970F790DF676FB7626533C31372C0324EA1B0 (ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5* __this, WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731 ___options0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.MonoBehaviour::IsInvoking(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoBehaviour_IsInvoking_m9CD08C2F7F5E83660FFE3B5A373B202CCBDB3708 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityScreenNavigator.Runtime.Core.Screens.Screen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen__ctor_mAD5A0755153C62FB93CA875C4642E2974D4A94EF (Screen_t2AE04C2000CD713680D85F7892FB6AA47BC8B0FD* __this, const RuntimeMethod* method) ;
// UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer UnityScreenNavigator.Runtime.Core.Screens.ScreenContainer::Of(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* ScreenContainer_Of_m9130EB3462D09D37ECB3123B44356653BF180529 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, bool ___useCache1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Game.Scripts.Config.AttributeConfig/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mE92F77065813BC933223B10C0F36AAA099A2E442 (U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
inline void List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute>::.ctor()
inline void List_1__ctor_m5A2D3C856CC3C8858EB64DDA6902B3A83B994040 (List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute>::Add(T)
inline void List_1_Add_m6DAED064DF26653B64B0ED6E33A90284C64D712F_inline (List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* __this, MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Func`2<Game.Scripts.Config.MonsterAttribute,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m436C192D0DCE90CDCCB0B290AD4092A3796CDD3F (Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending<Game.Scripts.Config.MonsterAttribute,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderByDescending_TisMonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBC0EBAE189A31F8F38554E3C25B418C57A3F1227 (RuntimeObject* ___source0, Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B* ___keySelector1, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))Enumerable_OrderByDescending_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m91F716024CC434AC7C368AB42238BCE6B4F10C77_gshared)((RuntimeObject*)___source0, (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)___keySelector1, method);
	return (RuntimeObject*)il2cppRetVal;
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Game.Scripts.Config.MonsterAttribute>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* Enumerable_ToList_TisMonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF_m6B6ED55CD550DEAE63B7CA5257DE0C5D44E2C2A3 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* il2cppRetVal = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisIl2CppFullySharedGenericAny_m191EA129E511F9B8304FF8826A2DA645E06CCBF0_gshared)((RuntimeObject*)___source0, method);
	return (List_1_t0242792AE569314A99F9D30F9639246F9878F1F5*)il2cppRetVal;
}
// System.Void Game.Scripts.Config.BattleTeamConfig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD5ECD037CC9339EFA0E7D80B613E073A1C5C049E (U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
inline void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny)&___value1, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___status0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*, const RuntimeMethod*))Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, ___task0, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void DamageTextFloater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextFloater_Start_mEF0B814F838D6CD59EFCF14EAC406EC35EAD0591 (DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageTextFloater_OnValueChanged_mCA07DFCE693FCF4E592F44EF3B069C2BA339063F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider.onValueChanged.AddListener(OnValueChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)DamageTextFloater_OnValueChanged_mCA07DFCE693FCF4E592F44EF3B069C2BA339063F_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_1, L_2, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DamageTextFloater::OnValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextFloater_OnValueChanged_mCA07DFCE693FCF4E592F44EF3B069C2BA339063F (DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* __this, float ___arg00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776_mDD0878A7818CA319FF9D1A5FA2BF689BA91D0EBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776_mDD0878A7818CA319FF9D1A5FA2BF689BA91D0EBB(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776_mDD0878A7818CA319FF9D1A5FA2BF689BA91D0EBB_RuntimeMethod_var);
		return;
	}
}
// System.Void DamageTextFloater::OnStartTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextFloater_OnStartTurn_m893871D5EC80E752037353C0BDDCC1244871E3D5 (DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageTextFloater_OnStartTurn_m893871D5EC80E752037353C0BDDCC1244871E3D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageTextFloater_OnValueChanged_mCA07DFCE693FCF4E592F44EF3B069C2BA339063F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.StopListening(EventNameKeeper.StartTurn, OnStartTurn);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)DamageTextFloater_OnStartTurn_m893871D5EC80E752037353C0BDDCC1244871E3D5_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_StopListening_m657F5E3D56D13E7A361D075B5DE3EDF6B8617BAD(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, L_0, NULL);
		// slider.onValueChanged.AddListener(OnValueChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_4;
		NullCheck(L_1);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_2;
		L_2 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_1, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_3 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_3, __this, (intptr_t)((void*)DamageTextFloater_OnValueChanged_mCA07DFCE693FCF4E592F44EF3B069C2BA339063F_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_2, L_3, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DamageTextFloater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextFloater__ctor_m98913E14E5AF7F7A26962888D9C10159E10BDE7F (DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DamageTextFloater/<OnValueChanged>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedU3Ed__5_MoveNext_m6CDA352C4B8811A20F2EB3A3B9FFCB5C1D26755D (U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776_mAA4558D05CB4411A03B961ACC072636FA28F5B8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageTextFloater_OnStartTurn_m893871D5EC80E752037353C0BDDCC1244871E3D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageTextFloater_OnValueChanged_mCA07DFCE693FCF4E592F44EF3B069C2BA339063F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisFloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15_mDAFA9DEB18146D696BFC6E0E02EFD58A6D3A7342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* V_1 = NULL;
	int32_t V_2 = 0;
	MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* V_3 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_4;
	memset((&V_4), 0, sizeof(V_4));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00f3_1;
			}
		}
		{
			// slider.onValueChanged.RemoveListener(OnValueChanged);
			DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* L_3 = V_1;
			NullCheck(L_3);
			Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = L_3->___slider_4;
			NullCheck(L_4);
			SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_5;
			L_5 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_4, NULL);
			DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* L_6 = V_1;
			UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_7 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_7, L_6, (intptr_t)((void*)DamageTextFloater_OnValueChanged_mCA07DFCE693FCF4E592F44EF3B069C2BA339063F_RuntimeMethod_var), NULL);
			NullCheck(L_5);
			UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_5, L_7, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
			// var index = (int) EventManager.GetData(EventNameKeeper.StartTurn);
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			RuntimeObject* L_8;
			L_8 = EventManager_GetData_m9769A8C0D0394B0BBB58A8C89B9A056B0F10419A(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, NULL);
			V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_8, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
			// var attribute = teamConfig.BattleSort(config)[index];
			DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* L_9 = V_1;
			NullCheck(L_9);
			BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_10 = L_9->___teamConfig_6;
			DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* L_11 = V_1;
			NullCheck(L_11);
			AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_12 = L_11->___config_7;
			NullCheck(L_10);
			List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_13;
			L_13 = BattleTeamConfig_BattleSort_mF45139FCA71762C4B8EC9FC4B1817255DBFE438D(L_10, L_12, NULL);
			int32_t L_14 = V_2;
			NullCheck(L_13);
			MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_15;
			L_15 = List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010(L_13, L_14, List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
			V_3 = L_15;
			// var text = Instantiate(textPrefabs, transform);
			DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* L_16 = V_1;
			NullCheck(L_16);
			FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* L_17 = L_16->___textPrefabs_5;
			DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* L_18 = V_1;
			NullCheck(L_18);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
			L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* L_20;
			L_20 = Object_Instantiate_TisFloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15_mDAFA9DEB18146D696BFC6E0E02EFD58A6D3A7342(L_17, L_19, Object_Instantiate_TisFloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15_mDAFA9DEB18146D696BFC6E0E02EFD58A6D3A7342_RuntimeMethod_var);
			__this->___U3CtextU3E5__2_3 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextU3E5__2_3), (void*)L_20);
			// text.transform.localScale = transform.parent.localScale;
			FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* L_21 = __this->___U3CtextU3E5__2_3;
			NullCheck(L_21);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
			L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
			DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* L_23 = V_1;
			NullCheck(L_23);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
			L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
			NullCheck(L_24);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
			L_25 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_24, NULL);
			NullCheck(L_25);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
			L_26 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_25, NULL);
			NullCheck(L_22);
			Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_26, NULL);
			// text.Active(attribute.attackDamage.ToString());
			FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* L_27 = __this->___U3CtextU3E5__2_3;
			MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_28 = V_3;
			NullCheck(L_28);
			int32_t* L_29 = (&L_28->___attackDamage_2);
			String_t* L_30;
			L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_29, NULL);
			NullCheck(L_27);
			FloatText_Active_mFC19F376F0DE9DF9C1B997C902B7095926338AF4(L_27, L_30, NULL);
			// await UniTask.Delay(500);
			il2cpp_codegen_initobj((&V_5), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_31 = V_5;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_32;
			L_32 = UniTask_Delay_m3D58C4E2738CAD61F29C9292DADAFAFB5DAC5C2A(((int32_t)500), (bool)0, 8, L_31, NULL);
			V_6 = L_32;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33;
			L_33 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_6), NULL);
			V_4 = L_33;
			bool L_34;
			L_34 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_4), NULL);
			if (L_34)
			{
				goto IL_0110_1;
			}
		}
		{
			int32_t L_35 = 0;
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = V_4;
			__this->___U3CU3Eu__1_4 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_37 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776_mAA4558D05CB4411A03B961ACC072636FA28F5B8E(L_37, (&V_4), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776_mAA4558D05CB4411A03B961ACC072636FA28F5B8E_RuntimeMethod_var);
			goto IL_017e;
		}

IL_00f3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = __this->___U3CU3Eu__1_4;
			V_4 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_39 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_39, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
		}

IL_0110_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_4), NULL);
			// Destroy(text.gameObject);
			FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* L_41 = __this->___U3CtextU3E5__2_3;
			NullCheck(L_41);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
			L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_41, NULL);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_42, NULL);
			// EventManager.StartListening(EventNameKeeper.StartTurn, OnStartTurn);
			DamageTextFloater_t2C370E6C4E4DAB84AF04C907CB82ED593D7FF4AA* L_43 = V_1;
			UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_44 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
			NullCheck(L_44);
			UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_44, L_43, (intptr_t)((void*)DamageTextFloater_OnStartTurn_m893871D5EC80E752037353C0BDDCC1244871E3D5_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, L_44, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			goto IL_0164;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0144;
		}
		throw e;
	}

CATCH_0144:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CtextU3E5__2_3 = (FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextU3E5__2_3), (void*)(FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_45 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_46 = V_7;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_45, L_46, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_017e;
	}// end catch (depth: 1)

IL_0164:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CtextU3E5__2_3 = (FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextU3E5__2_3), (void*)(FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_47 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_47, NULL);
	}

IL_017e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnValueChangedU3Ed__5_MoveNext_m6CDA352C4B8811A20F2EB3A3B9FFCB5C1D26755D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776*>(__this + _offset);
	U3COnValueChangedU3Ed__5_MoveNext_m6CDA352C4B8811A20F2EB3A3B9FFCB5C1D26755D(_thisAdjusted, method);
}
// System.Void DamageTextFloater/<OnValueChanged>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedU3Ed__5_SetStateMachine_m92D084FAE0DD452BC09AFA5497B2FF54171805EE (U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnValueChangedU3Ed__5_SetStateMachine_m92D084FAE0DD452BC09AFA5497B2FF54171805EE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COnValueChangedU3Ed__5_t231A1207F7E4FE4C8F3BFDCE8C9E40B486F1B776*>(__this + _offset);
	U3COnValueChangedU3Ed__5_SetStateMachine_m92D084FAE0DD452BC09AFA5497B2FF54171805EE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EndGameModal::DidPushEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGameModal_DidPushEnter_m9938CC49A6CFCE031BC4EBED1A0F9CCD194DB8A5 (EndGameModal_tCBBF3C111B844F8F4DB0AEB5EF1CD215EE70C2F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndGameModal_HomeScreen_m48DF1CC89C675C57001F40A0432EC98C4D86A7FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9614A254DEFE3BB470A33BB1E086D0F43A712DC0);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* G_B2_0 = NULL;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* G_B3_1 = NULL;
	{
		// var data = EventManager.GetData(EventNameKeeper.EndBattle);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = EventManager_GetData_m9769A8C0D0394B0BBB58A8C89B9A056B0F10419A(_stringLiteral9614A254DEFE3BB470A33BB1E086D0F43A712DC0, NULL);
		V_0 = L_0;
		// text.SetText((bool) data ? win : defeat);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___text_17;
		RuntimeObject* L_2 = V_0;
		G_B1_0 = L_1;
		if (((*(bool*)((bool*)(bool*)UnBox(L_2, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = __this->___defeat_19;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0027;
	}

IL_0021:
	{
		String_t* L_4 = __this->___win_18;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0027:
	{
		NullCheck(G_B3_1);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(G_B3_1, G_B3_0, (bool)1, NULL);
		// button.onClick.AddListener(HomeScreen);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___button_20;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)EndGameModal_HomeScreen_m48DF1CC89C675C57001F40A0432EC98C4D86A7FA_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void EndGameModal::DidPopEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGameModal_DidPopEnter_mBB6A88DB5B8F9499136F67183BE9F31D42C941CB (EndGameModal_tCBBF3C111B844F8F4DB0AEB5EF1CD215EE70C2F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndGameModal_HomeScreen_m48DF1CC89C675C57001F40A0432EC98C4D86A7FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button.onClick.RemoveListener(HomeScreen);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___button_20;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)EndGameModal_HomeScreen_m48DF1CC89C675C57001F40A0432EC98C4D86A7FA_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void EndGameModal::HomeScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGameModal_HomeScreen_m48DF1CC89C675C57001F40A0432EC98C4D86A7FA (EndGameModal_tCBBF3C111B844F8F4DB0AEB5EF1CD215EE70C2F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E73A0D4483A9B8C5D46F576AD8AF2E16194D56D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4263DAB6ABF2073113B702B65C2621AF7CCAAF2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ADA37BEA6AFB2EDCA9094443AE7419B09E74943);
		s_Il2CppMethodInitialized = true;
	}
	WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// EventManager.EmitEvent(EventNameKeeper.RemoveAllMonster);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEvent_m7FA138F58500BF74EF72A857ABF7C0EDE60BB414(_stringLiteral0E73A0D4483A9B8C5D46F576AD8AF2E16194D56D, NULL);
		// ScreenContainer.Find(EventNameKeeper.ScreenContainer).Pop(false);
		il2cpp_codegen_runtime_class_init_inline(ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_il2cpp_TypeInfo_var);
		ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* L_0;
		L_0 = ScreenContainer_Find_m0D44D21BF045BCF038D3F64FD90A17C01AA937A5(_stringLiteral8ADA37BEA6AFB2EDCA9094443AE7419B09E74943, NULL);
		NullCheck(L_0);
		AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* L_1;
		L_1 = ScreenContainer_Pop_mDAA724C5E1F56E702EE1B06D9447E77DB218482A(L_0, (bool)0, NULL);
		// ModalContainer.Of(transform).Pop(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5_il2cpp_TypeInfo_var);
		ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5* L_3;
		L_3 = ModalContainer_Of_m115B3BF6001B4B61EB7520BF5A68E213877D40B9(L_2, (bool)1, NULL);
		NullCheck(L_3);
		AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* L_4;
		L_4 = ModalContainer_Pop_m08289E1805DF3E00C537E63FDA1010E46CA08D4D(L_3, (bool)1, NULL);
		// var options = new WindowOptions(EventNameKeeper.TeamSelectScreen, false, loadAsync: false);
		WindowOptions__ctor_m772514999A01EB661B0EEC5F229A24BA4264F670((&V_0), _stringLiteral4263DAB6ABF2073113B702B65C2621AF7CCAAF2C, (bool)0, (Action_1_tF3A4D9C1EB5202EBEE6F15DF6B9D5BFE1AF2A9CB*)NULL, (bool)0, NULL);
		// ScreenContainer.Find(EventNameKeeper.ScreenContainer).Push(options);
		ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* L_5;
		L_5 = ScreenContainer_Find_m0D44D21BF045BCF038D3F64FD90A17C01AA937A5(_stringLiteral8ADA37BEA6AFB2EDCA9094443AE7419B09E74943, NULL);
		ScreenOptions_t3BC7FCCF3C5282AA0B74B9CCD8044EF3BE6FE8C3 L_6;
		L_6 = ScreenOptions_op_Implicit_mD306180F4CFED0CBA28BB21FACB10E174C0B228F((&V_0), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_5);
		AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* L_8;
		L_8 = ScreenContainer_Push_mB3DC09084C1E3CE85748509105090A5CC420B091(L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void EndGameModal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndGameModal__ctor_m023292D3125EAF7A1DA6FD3D47FD7310576AB49A (EndGameModal_tCBBF3C111B844F8F4DB0AEB5EF1CD215EE70C2F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E0EB8CE240AD8239D26F174DBEFF00C4529892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2355F9176F36012A473D04B1DA959D6177F6595);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string win = "WIN";
		__this->___win_18 = _stringLiteral78E0EB8CE240AD8239D26F174DBEFF00C4529892;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___win_18), (void*)_stringLiteral78E0EB8CE240AD8239D26F174DBEFF00C4529892);
		// [SerializeField] private string defeat = "DEFEAT";
		__this->___defeat_19 = _stringLiteralD2355F9176F36012A473D04B1DA959D6177F6595;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defeat_19), (void*)_stringLiteralD2355F9176F36012A473D04B1DA959D6177F6595);
		Modal__ctor_m19EA3362D7B3CB88FD7A51D3B30D39CED1981CF2(__this, NULL);
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
// System.Void EnemyAI::SetConfig(Game.Scripts.Config.BattleTeamConfig,Game.Scripts.Config.AttributeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_SetConfig_m9AB12F5A69354AA76AFB1FC9E54BEFE2144364B3 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* ___team0, AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___attribute1, const RuntimeMethod* method) 
{
	{
		// teamConfig = team;
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_0 = ___team0;
		__this->___teamConfig_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___teamConfig_4), (void*)L_0);
		// config = attribute;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_1 = ___attribute1;
		__this->___config_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___config_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void EnemyAI::Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI_Active_m1867D2C4656C24D7F93B42A2A728BB1022A3F378 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D569DC9ABF8486FC40564ABA61F7F8C68A3566D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var index = (int) EventManager.GetData(EventNameKeeper.StartTurn);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = EventManager_GetData_m9769A8C0D0394B0BBB58A8C89B9A056B0F10419A(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, NULL);
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// var attribute = teamConfig.BattleSort(config)[index];
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_1 = __this->___teamConfig_4;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_2 = __this->___config_5;
		NullCheck(L_1);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_3;
		L_3 = BattleTeamConfig_BattleSort_mF45139FCA71762C4B8EC9FC4B1817255DBFE438D(L_1, L_2, NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_5;
		L_5 = List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010(L_3, L_4, List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		// if(attribute.characterName != gameObject.name)
		NullCheck(L_5);
		String_t* L_6 = L_5->___characterName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		bool L_9;
		L_9 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		// return;
		return;
	}

IL_003f:
	{
		// if (OwnAlive().Any() is false)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
		L_10 = EnemyAI_OwnAlive_m25FE7654F147A28600D563B1CDEDC4F6586B6094(__this, NULL);
		bool L_11;
		L_11 = Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D(L_10, Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_004d;
		}
	}
	{
		// return;
		return;
	}

IL_004d:
	{
		// var rand = Random.Range(default, OwnAlive().Count - 1);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12;
		L_12 = EnemyAI_OwnAlive_m25FE7654F147A28600D563B1CDEDC4F6586B6094(__this, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_12, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_14;
		L_14 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), NULL);
		V_1 = L_14;
		// EventManager.EmitEventData(EventNameKeeper.AttackMonster, OwnAlive()[rand]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15;
		L_15 = EnemyAI_OwnAlive_m25FE7654F147A28600D563B1CDEDC4F6586B6094(__this, NULL);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_15, L_16, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEventData_m6C4A0B52957ABDB53988073B38AAC1857F510660(_stringLiteral7D569DC9ABF8486FC40564ABA61F7F8C68A3566D, L_17, (0.0f), NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> EnemyAI::OwnAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* EnemyAI_OwnAlive_m25FE7654F147A28600D563B1CDEDC4F6586B6094 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// var newList = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var value in teamConfig.GetTeam())
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_1 = __this->___teamConfig_4;
		NullCheck(L_1);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = BattleTeamConfig_GetTeam_mC05839126BCC7BC44482B55F17B2C71475AC1231_inline(L_1, NULL);
		NullCheck(L_2);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_3;
		L_3 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_2, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_1), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_0019_1:
			{
				// foreach (var value in teamConfig.GetTeam())
				String_t* L_4;
				L_4 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_1), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_2 = L_4;
				// if (config.GetMonster(value).isDie is false)
				AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_5 = __this->___config_5;
				String_t* L_6 = V_2;
				NullCheck(L_5);
				MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_7;
				L_7 = AttributeConfig_GetMonster_mBAB7AD752F65D23A369E5BDD0B49D591B788E07C(L_5, L_6, NULL);
				NullCheck(L_7);
				bool L_8 = L_7->___isDie_4;
				if (L_8)
				{
					goto IL_003b_1;
				}
			}
			{
				// newList.Add(value);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = V_0;
				String_t* L_10 = V_2;
				NullCheck(L_9);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, L_10, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_003b_1:
			{
				// foreach (var value in teamConfig.GetTeam())
				bool L_11;
				L_11 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_1), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// return newList;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		return L_12;
	}
}
// System.Void EnemyAI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyAI__ctor_m6C8AF5E69E44D32D35FC23F33F01C77FC89ACAE2 (EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FloatText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatText_Awake_mB7E5EF7586314F56A894C55AD3C686C9F886AF79 (FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentHolderProtocol_GetOrAddComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m5004249074CA66528824F0F9E4906F662EEB0952_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text ??= gameObject.GetOrAddComponent<TMP_Text>();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___text_4;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2;
		L_2 = ComponentHolderProtocol_GetOrAddComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m5004249074CA66528824F0F9E4906F662EEB0952(L_1, ComponentHolderProtocol_GetOrAddComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m5004249074CA66528824F0F9E4906F662EEB0952_RuntimeMethod_var);
		__this->___text_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_4), (void*)L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void FloatText::Active(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatText_Active_mFC19F376F0DE9DF9C1B997C902B7095926338AF4 (FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* __this, String_t* ___content0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// text.SetText(content);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___text_4;
		String_t* L_1 = ___content0;
		NullCheck(L_0);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_0, L_1, (bool)1, NULL);
		// var position = text.transform.position;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___text_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = TMP_Text_get_transform_m6BD41E08BFCFCE722DFCE4627626AD60CA99CCA8(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_0 = L_4;
		// var endPosition = new Vector3(position.x + 0.5f, position.y + 0.5f, position.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((float)il2cpp_codegen_add(L_6, (0.5f))), ((float)il2cpp_codegen_add(L_8, (0.5f))), L_10, NULL);
		// text.transform.DOMove(endPosition, 0.5f).SetEase(Ease.Linear);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = __this->___text_4;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = TMP_Text_get_transform_m6BD41E08BFCFCE722DFCE4627626AD60CA99CCA8(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_14;
		L_14 = ShortcutExtensions_DOMove_m82274FDC0216A91A1FAF16844805D06BF9A287FF(L_12, L_13, (0.5f), (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_15;
		L_15 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_14, 1, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FloatText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatText__ctor_mB228CDF91325DD7534E29FF8F30388AAB01F0C56 (FloatText_tEFD0EB9AD1AF75427ED696DDC3BD314BDFEE5D15* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FocusItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusItem_Start_m18BD4F2796EF08C0007AEA33AD24DD0097F00246 (FocusItem_tB93AD24E5C585BB732B5EA1EC480523D7B9AB901* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FocusItem_OnStartTurn_m478713C0382C6608BFE6FD9CC2B8327B9C6CC449_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251);
		s_Il2CppMethodInitialized = true;
	}
	{
		// focusImage.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___focusImage_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// selectedImage.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___selectedImage_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// EventManager.StartListening(EventNameKeeper.StartTurn, OnStartTurn);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)FocusItem_OnStartTurn_m478713C0382C6608BFE6FD9CC2B8327B9C6CC449_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// }
		return;
	}
}
// System.Void FocusItem::OnStartTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusItem_OnStartTurn_m478713C0382C6608BFE6FD9CC2B8327B9C6CC449 (FocusItem_tB93AD24E5C585BB732B5EA1EC480523D7B9AB901* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// var index = (int) EventManager.GetData(EventNameKeeper.StartTurn);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = EventManager_GetData_m9769A8C0D0394B0BBB58A8C89B9A056B0F10419A(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, NULL);
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// var attribute = teamConfig.BattleSort(config)[index];
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_1 = __this->___teamConfig_6;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_2 = __this->___config_7;
		NullCheck(L_1);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_3;
		L_3 = BattleTeamConfig_BattleSort_mF45139FCA71762C4B8EC9FC4B1817255DBFE438D(L_1, L_2, NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_5;
		L_5 = List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010(L_3, L_4, List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		V_1 = L_5;
		// if (attribute.characterName != gameObject.name)
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->___characterName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		bool L_10;
		L_10 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_00d4;
		}
	}
	{
		// selectedImage.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___selectedImage_5;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// if (teamConfig.GetTeam().Contains(attribute.characterName))
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_13 = __this->___teamConfig_6;
		NullCheck(L_13);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = BattleTeamConfig_GetTeam_mC05839126BCC7BC44482B55F17B2C71475AC1231_inline(L_13, NULL);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16 = L_15->___characterName_0;
		NullCheck(L_14);
		bool L_17;
		L_17 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_14, L_16, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_009d;
		}
	}
	{
		// var isClocked = teamConfig.GetTeam().Contains(gameObject.name);
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_18 = __this->___teamConfig_6;
		NullCheck(L_18);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19;
		L_19 = BattleTeamConfig_GetTeam_mC05839126BCC7BC44482B55F17B2C71475AC1231_inline(L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_19, L_21, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		V_2 = L_22;
		// focusImage.gameObject.SetActive(isClocked is false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___focusImage_4;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_23, NULL);
		bool L_25 = V_2;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}

IL_009d:
	{
		// var isClocked = teamConfig.GetEnemyTeam(config).Contains(gameObject.name);
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_26 = __this->___teamConfig_6;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_27 = __this->___config_7;
		NullCheck(L_26);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28;
		L_28 = BattleTeamConfig_GetEnemyTeam_m66A6F406F367601C6B9179D74FF3E24F35E7F94B(L_26, L_27, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_29, NULL);
		NullCheck(L_28);
		bool L_31;
		L_31 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_28, L_30, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		V_3 = L_31;
		// focusImage.gameObject.SetActive(isClocked is false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___focusImage_4;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_32, NULL);
		bool L_34 = V_3;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}

IL_00d4:
	{
		// selectedImage.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___selectedImage_5;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_35, NULL);
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
		// focusImage.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___focusImage_4;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_37, NULL);
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FocusItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusItem__ctor_m042E64C1F989583427EA411CCF6D3AE23FBD36B0 (FocusItem_tB93AD24E5C585BB732B5EA1EC480523D7B9AB901* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void csParticleEffectPackLightControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csParticleEffectPackLightControl_Update_mF30C1D565609A7F255C92DDC699A12F8FDBBF5BC (csParticleEffectPackLightControl_t2EA83E3FD1F368990096E3A9BBBB6537754DA493* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _time += Time.deltaTime;
		float L_0 = __this->____time_5;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____time_5 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if(_light)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = __this->____light_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_007f;
		}
	}
	{
		// if(_time > Delay)
		float L_4 = __this->____time_5;
		float L_5 = __this->___Delay_6;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_007f;
		}
	}
	{
		// if(_light.intensity > 0)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_6 = __this->____light_4;
		NullCheck(L_6);
		float L_7;
		L_7 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_6, NULL);
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// _light.intensity -= Time.deltaTime*Down;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = __this->____light_4;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = L_8;
		NullCheck(L_9);
		float L_10;
		L_10 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_9, NULL);
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12 = __this->___Down_7;
		NullCheck(L_9);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_9, ((float)il2cpp_codegen_subtract(L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)))), NULL);
	}

IL_005d:
	{
		// if(_light.intensity <= 0)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13 = __this->____light_4;
		NullCheck(L_13);
		float L_14;
		L_14 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_13, NULL);
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		// _light.intensity = 0;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = __this->____light_4;
		NullCheck(L_15);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_15, (0.0f), NULL);
	}

IL_007f:
	{
		// if(_light2)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = __this->____light2_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_16, NULL);
		if (!L_17)
		{
			goto IL_016e;
		}
	}
	{
		// if(_time > Delay2 && _time < Delay2+Delay3)
		float L_18 = __this->____time_5;
		float L_19 = __this->___Delay2_9;
		if ((!(((float)L_18) > ((float)L_19))))
		{
			goto IL_0107;
		}
	}
	{
		float L_20 = __this->____time_5;
		float L_21 = __this->___Delay2_9;
		float L_22 = __this->___Delay3_10;
		if ((!(((float)L_20) < ((float)((float)il2cpp_codegen_add(L_21, L_22))))))
		{
			goto IL_0107;
		}
	}
	{
		// if(_light2.intensity <= Maxintensity)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = __this->____light2_8;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		float L_25 = __this->___Maxintensity_11;
		if ((!(((float)L_24) <= ((float)L_25))))
		{
			goto IL_00e3;
		}
	}
	{
		// _light2.intensity += Time.deltaTime*Up;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = __this->____light2_8;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_27 = L_26;
		NullCheck(L_27);
		float L_28;
		L_28 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_27, NULL);
		float L_29;
		L_29 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_30 = __this->___Up_12;
		NullCheck(L_27);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_27, ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(L_29, L_30)))), NULL);
	}

IL_00e3:
	{
		// if(_light2.intensity > Maxintensity)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_31 = __this->____light2_8;
		NullCheck(L_31);
		float L_32;
		L_32 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_31, NULL);
		float L_33 = __this->___Maxintensity_11;
		if ((!(((float)L_32) > ((float)L_33))))
		{
			goto IL_0107;
		}
	}
	{
		// _light2.intensity = Maxintensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_34 = __this->____light2_8;
		float L_35 = __this->___Maxintensity_11;
		NullCheck(L_34);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_34, L_35, NULL);
	}

IL_0107:
	{
		// if(_time > Delay2+Delay3)
		float L_36 = __this->____time_5;
		float L_37 = __this->___Delay2_9;
		float L_38 = __this->___Delay3_10;
		if ((!(((float)L_36) > ((float)((float)il2cpp_codegen_add(L_37, L_38))))))
		{
			goto IL_016e;
		}
	}
	{
		// if(_light2.intensity > 0)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_39 = __this->____light2_8;
		NullCheck(L_39);
		float L_40;
		L_40 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_39, NULL);
		if ((!(((float)L_40) > ((float)(0.0f)))))
		{
			goto IL_014c;
		}
	}
	{
		// _light2.intensity -= Time.deltaTime*Down;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_41 = __this->____light2_8;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_42 = L_41;
		NullCheck(L_42);
		float L_43;
		L_43 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_42, NULL);
		float L_44;
		L_44 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_45 = __this->___Down_7;
		NullCheck(L_42);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_42, ((float)il2cpp_codegen_subtract(L_43, ((float)il2cpp_codegen_multiply(L_44, L_45)))), NULL);
	}

IL_014c:
	{
		// if(_light2.intensity <= 0)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_46 = __this->____light2_8;
		NullCheck(L_46);
		float L_47;
		L_47 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_46, NULL);
		if ((!(((float)L_47) <= ((float)(0.0f)))))
		{
			goto IL_016e;
		}
	}
	{
		// _light2.intensity = 0;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_48 = __this->____light2_8;
		NullCheck(L_48);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_48, (0.0f), NULL);
	}

IL_016e:
	{
		// }
		return;
	}
}
// System.Void csParticleEffectPackLightControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csParticleEffectPackLightControl__ctor_mE8992ADF394ED6BD8A4837A1104C2AA7DF9ED06A (csParticleEffectPackLightControl_t2EA83E3FD1F368990096E3A9BBBB6537754DA493* __this, const RuntimeMethod* method) 
{
	{
		// public float Delay = 0.5f;
		__this->___Delay_6 = (0.5f);
		// public float Down = 1;
		__this->___Down_7 = (1.0f);
		// public float Up = 1;
		__this->___Up_12 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TigerForge.EventManager::StartListening(System.String,UnityEngine.Events.UnityAction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8 (String_t* ___eventName0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callBack1, String_t* ___callBackID2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m835B5E8BE87F04BEAB6C3B908DCF740EF6152156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB1FD95D53599F795E5926A332D5DE221F7963F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* V_0 = NULL;
	{
		// if (eventDictionary.TryGetValue(eventName, out UnityEvent thisEvent))
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0;
		String_t* L_1 = ___eventName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// thisEvent.AddListener(callBack);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = ___callBack1;
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		goto IL_003d;
	}

IL_0018:
	{
		// thisEvent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_5, NULL);
		V_0 = L_5;
		// thisEvent.AddListener(callBack);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = ___callBack1;
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// eventDictionary.Add(eventName, thisEvent);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_8 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0;
		String_t* L_9 = ___eventName0;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = V_0;
		NullCheck(L_8);
		Dictionary_2_Add_m835B5E8BE87F04BEAB6C3B908DCF740EF6152156(L_8, L_9, L_10, Dictionary_2_Add_m835B5E8BE87F04BEAB6C3B908DCF740EF6152156_RuntimeMethod_var);
		// paused.Add(eventName, false);
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_11 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___paused_2;
		String_t* L_12 = ___eventName0;
		NullCheck(L_11);
		Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292(L_11, L_12, (bool)0, Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var);
	}

IL_003d:
	{
		// if (callBackID != "") callBacks.Add(eventName + "_" + callBackID, callBack);
		String_t* L_13 = ___callBackID2;
		bool L_14;
		L_14 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_14)
		{
			goto IL_0061;
		}
	}
	{
		// if (callBackID != "") callBacks.Add(eventName + "_" + callBackID, callBack);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* L_15 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___callBacks_6;
		String_t* L_16 = ___eventName0;
		String_t* L_17 = ___callBackID2;
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_16, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_17, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_19 = ___callBack1;
		NullCheck(L_15);
		Dictionary_2_Add_mB1FD95D53599F795E5926A332D5DE221F7963F2F(L_15, L_18, L_19, Dictionary_2_Add_mB1FD95D53599F795E5926A332D5DE221F7963F2F_RuntimeMethod_var);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::StartListening(System.String,UnityEngine.GameObject,UnityEngine.Events.UnityAction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_StartListening_m0973C0DD13413193E48DD5F3F31FCED2C3C5A8E2 (String_t* ___eventName0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target1, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callBack2, String_t* ___callBackID3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB1FD95D53599F795E5926A332D5DE221F7963F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F663218A9C195AD5DCBCD18E387275165707E15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F1DF035867781629562DEF30B42353D86D04D97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785EAA1EFD7A7E66E864D6100A00DD45850E9400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD29CECBBA27F42BA8F6D6E218F12D595E3BCBE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCEA1E06C436EF62439730A853F1E242DAB68E19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB8D1A3352D0EE435150A49578688CB05DFD221F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___target1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("The specified target is not a valid GameObject.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralDCEA1E06C436EF62439730A853F1E242DAB68E19, NULL);
		// return;
		return;
	}

IL_0014:
	{
		// StartListening(eventName, callBack);
		String_t* L_2 = ___eventName0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = ___callBack2;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(L_2, L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// if (callBackID != "") callBacks.Add(eventName + "_" + callBackID, callBack);
		String_t* L_4 = ___callBackID3;
		bool L_5;
		L_5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// if (callBackID != "") callBacks.Add(eventName + "_" + callBackID, callBack);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* L_6 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___callBacks_6;
		String_t* L_7 = ___eventName0;
		String_t* L_8 = ___callBackID3;
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_7, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_8, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = ___callBack2;
		NullCheck(L_6);
		Dictionary_2_Add_mB1FD95D53599F795E5926A332D5DE221F7963F2F(L_6, L_9, L_10, Dictionary_2_Add_mB1FD95D53599F795E5926A332D5DE221F7963F2F_RuntimeMethod_var);
	}

IL_0044:
	{
		// string newName = eventName + "__##name##" + target.name + "##" + "__##tag##" + target.tag + "##" + "__##layer##" + target.layer + "##";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13 = ___eventName0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral785EAA1EFD7A7E66E864D6100A00DD45850E9400);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral785EAA1EFD7A7E66E864D6100A00DD45850E9400);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = ___target1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralBD29CECBBA27F42BA8F6D6E218F12D595E3BCBE3);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralBD29CECBBA27F42BA8F6D6E218F12D595E3BCBE3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = ___target1;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_20, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_19;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral4F1DF035867781629562DEF30B42353D86D04D97);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral4F1DF035867781629562DEF30B42353D86D04D97);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = ___target1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_24, NULL);
		V_0 = L_25;
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_23;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralEB8D1A3352D0EE435150A49578688CB05DFD221F);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralEB8D1A3352D0EE435150A49578688CB05DFD221F);
		String_t* L_28;
		L_28 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_27, NULL);
		// StartListening(newName, callBack);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_29 = ___callBack2;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(L_28, L_29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// if (callBackID != "") callBacks.Add(eventName + "_" + callBackID + "_EXTRA", callBack);
		String_t* L_30 = ___callBackID3;
		bool L_31;
		L_31 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_30, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_31)
		{
			goto IL_00ca;
		}
	}
	{
		// if (callBackID != "") callBacks.Add(eventName + "_" + callBackID + "_EXTRA", callBack);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* L_32 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___callBacks_6;
		String_t* L_33 = ___eventName0;
		String_t* L_34 = ___callBackID3;
		String_t* L_35;
		L_35 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_33, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_34, _stringLiteral3F663218A9C195AD5DCBCD18E387275165707E15, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_36 = ___callBack2;
		NullCheck(L_32);
		Dictionary_2_Add_mB1FD95D53599F795E5926A332D5DE221F7963F2F(L_32, L_35, L_36, Dictionary_2_Add_mB1FD95D53599F795E5926A332D5DE221F7963F2F_RuntimeMethod_var);
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::StopListening(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_StopListening_m373E128F734D6B72B208FC329A127533358CCD01 (String_t* ___eventName0, String_t* ___callBackID1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA7C6448345C9DCA2174B3CB863E940B80C9BE0D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m27A75461F4E79D1B5927167B75F59E948428BF9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F663218A9C195AD5DCBCD18E387275165707E15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* V_0 = NULL;
	{
		// if (eventDictionary.TryGetValue(eventName, out UnityEvent thisEvent))
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0;
		String_t* L_1 = ___eventName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_008e;
		}
	}
	{
		// if (callBackID != "")
		String_t* L_3 = ___callBackID1;
		bool L_4;
		L_4 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (callBacks.ContainsKey(eventName + "_" + callBackID))
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* L_5 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___callBacks_6;
		String_t* L_6 = ___eventName0;
		String_t* L_7 = ___callBackID1;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_7, NULL);
		NullCheck(L_5);
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_mA7C6448345C9DCA2174B3CB863E940B80C9BE0D8(L_5, L_8, Dictionary_2_ContainsKey_mA7C6448345C9DCA2174B3CB863E940B80C9BE0D8_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		// thisEvent.RemoveListener(callBacks[eventName + "_" + callBackID]);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* L_11 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___callBacks_6;
		String_t* L_12 = ___eventName0;
		String_t* L_13 = ___callBackID1;
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_12, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_13, NULL);
		NullCheck(L_11);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_15;
		L_15 = Dictionary_2_get_Item_m27A75461F4E79D1B5927167B75F59E948428BF9B(L_11, L_14, Dictionary_2_get_Item_m27A75461F4E79D1B5927167B75F59E948428BF9B_RuntimeMethod_var);
		NullCheck(L_10);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_10, L_15, NULL);
	}

IL_0050:
	{
		// if (callBacks.ContainsKey(eventName + "_" + callBackID + "_EXTRA"))
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* L_16 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___callBacks_6;
		String_t* L_17 = ___eventName0;
		String_t* L_18 = ___callBackID1;
		String_t* L_19;
		L_19 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_17, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_18, _stringLiteral3F663218A9C195AD5DCBCD18E387275165707E15, NULL);
		NullCheck(L_16);
		bool L_20;
		L_20 = Dictionary_2_ContainsKey_mA7C6448345C9DCA2174B3CB863E940B80C9BE0D8(L_16, L_19, Dictionary_2_ContainsKey_mA7C6448345C9DCA2174B3CB863E940B80C9BE0D8_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_008e;
		}
	}
	{
		// thisEvent.RemoveListener(callBacks[eventName + "_" + callBackID + "_EXTRA"]);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* L_22 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___callBacks_6;
		String_t* L_23 = ___eventName0;
		String_t* L_24 = ___callBackID1;
		String_t* L_25;
		L_25 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_23, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_24, _stringLiteral3F663218A9C195AD5DCBCD18E387275165707E15, NULL);
		NullCheck(L_22);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_26;
		L_26 = Dictionary_2_get_Item_m27A75461F4E79D1B5927167B75F59E948428BF9B(L_22, L_25, Dictionary_2_get_Item_m27A75461F4E79D1B5927167B75F59E948428BF9B_RuntimeMethod_var);
		NullCheck(L_21);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_21, L_26, NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::StopListening(System.String,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_StopListening_m657F5E3D56D13E7A361D075B5DE3EDF6B8617BAD (String_t* ___eventName0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callBack1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* V_0 = NULL;
	{
		// if (eventDictionary.TryGetValue(eventName, out UnityEvent thisEvent))
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0;
		String_t* L_1 = ___eventName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// thisEvent.RemoveListener(callBack);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = ___callBack1;
		NullCheck(L_3);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_3, L_4, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::EmitEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_EmitEvent_m7FA138F58500BF74EF72A857ABF7C0EDE60BB414 (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* V_0 = NULL;
	{
		// if (isPaused(eventName)) return;
		String_t* L_0 = ___eventName0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = EventManager_isPaused_m38ACD1AB01ED7E4A1FF32CCE7F0366563C47ABCA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (isPaused(eventName)) return;
		return;
	}

IL_0009:
	{
		// if (eventDictionary.TryGetValue(eventName, out UnityEvent thisEvent))
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_2 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0;
		String_t* L_3 = ___eventName0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// thisEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = V_0;
		NullCheck(L_5);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_5, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::EmitEvent(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_EmitEvent_mABD2ED7FA685AD7A1F51772D04E98CE5F13DBC03 (String_t* ___eventName0, RuntimeObject* ___sender1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isPaused(eventName)) return;
		String_t* L_0 = ___eventName0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = EventManager_isPaused_m38ACD1AB01ED7E4A1FF32CCE7F0366563C47ABCA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (isPaused(eventName)) return;
		return;
	}

IL_0009:
	{
		// if (EventManager.sender.ContainsKey(eventName)) EventManager.sender[eventName] = sender; else EventManager.sender.Add(eventName, sender);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
		String_t* L_3 = ___eventName0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_2, L_3, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// if (EventManager.sender.ContainsKey(eventName)) EventManager.sender[eventName] = sender; else EventManager.sender.Add(eventName, sender);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
		String_t* L_6 = ___eventName0;
		RuntimeObject* L_7 = ___sender1;
		NullCheck(L_5);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_5, L_6, L_7, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		goto IL_0030;
	}

IL_0024:
	{
		// if (EventManager.sender.ContainsKey(eventName)) EventManager.sender[eventName] = sender; else EventManager.sender.Add(eventName, sender);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
		String_t* L_9 = ___eventName0;
		RuntimeObject* L_10 = ___sender1;
		NullCheck(L_8);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_8, L_9, L_10, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
	}

IL_0030:
	{
		// EmitEvent(eventName);
		String_t* L_11 = ___eventName0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEvent_m7FA138F58500BF74EF72A857ABF7C0EDE60BB414(L_11, NULL);
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::EmitEvent(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_EmitEvent_mB395E25864278454ACFFED1D2582EB72D842AB17 (String_t* ___eventName0, float ___delay1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (isPaused(eventName)) return;
		String_t* L_0 = ___eventName0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = EventManager_isPaused_m38ACD1AB01ED7E4A1FF32CCE7F0366563C47ABCA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (isPaused(eventName)) return;
		return;
	}

IL_0009:
	{
		// if (eventDictionary.TryGetValue(eventName, out UnityEvent thisEvent))
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_2 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0;
		String_t* L_3 = ___eventName0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m1DE14584FBBE51CD2AF66C9B476D75DB783ED0DA_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// if (delay <= 0)
		float L_5 = ___delay1;
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// thisEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = V_0;
		NullCheck(L_6);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_6, NULL);
		return;
	}

IL_0027:
	{
		// int d = (int)(delay * 1000);
		float L_7 = ___delay1;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_7, (1000.0f))));
		// DelayedInvoke(thisEvent, d);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = V_0;
		int32_t L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_DelayedInvoke_m752F796FB7063347D2E0FC2BFB5A5E3BA21F47E6(L_8, L_9, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::EmitEvent(System.String,System.Single,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_EmitEvent_m08793970F6D8339EFD5E588FEEE61E5E6E2F8AB6 (String_t* ___eventName0, float ___delay1, RuntimeObject* ___sender2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isPaused(eventName)) return;
		String_t* L_0 = ___eventName0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = EventManager_isPaused_m38ACD1AB01ED7E4A1FF32CCE7F0366563C47ABCA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (isPaused(eventName)) return;
		return;
	}

IL_0009:
	{
		// if (EventManager.sender.ContainsKey(eventName)) EventManager.sender[eventName] = sender; else EventManager.sender.Add(eventName, sender);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
		String_t* L_3 = ___eventName0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_2, L_3, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// if (EventManager.sender.ContainsKey(eventName)) EventManager.sender[eventName] = sender; else EventManager.sender.Add(eventName, sender);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
		String_t* L_6 = ___eventName0;
		RuntimeObject* L_7 = ___sender2;
		NullCheck(L_5);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_5, L_6, L_7, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		goto IL_0030;
	}

IL_0024:
	{
		// if (EventManager.sender.ContainsKey(eventName)) EventManager.sender[eventName] = sender; else EventManager.sender.Add(eventName, sender);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
		String_t* L_9 = ___eventName0;
		RuntimeObject* L_10 = ___sender2;
		NullCheck(L_8);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_8, L_9, L_10, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
	}

IL_0030:
	{
		// EmitEvent(eventName, delay);
		String_t* L_11 = ___eventName0;
		float L_12 = ___delay1;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEvent_mB395E25864278454ACFFED1D2582EB72D842AB17(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::EmitEvent(System.String,System.String,System.Single,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_EmitEvent_mAB4854AEAB597CC2E7EB73363D833A216FA0A28F (String_t* ___eventName0, String_t* ___filter1, float ___delay2, RuntimeObject* ___sender3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m83AC9A82DBF6AFDAA1B00A27FA5668748E42A96F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE040371FDA3F1E0F4D1B123A838C6F81F1223F58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m64190B380A145B8AB27A6AB837F24BF572A40AEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3F82ECD1F2D37DC2E3468BCE63630BF541938FCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mB1058F0C9C7EDAB8C7527F5667B8274A3AA90D2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m2FA8759E6D40E1BEE381A5AEC1FE87ACD6644484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA30D00C82F95861000D0B6DE1A0E774BD59F092A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8CB03F28252733FB3090D0D4C11443FFE1D1CD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA55F1CB6D1BC74355EF2E2C07174A2678B3B727B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m0997E5A5B7B7695DCC795B99ECAE08C97166BC54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684EA51CBE70FF311998CEEAB615840A88831FC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72A731D064EB75DC3D80E1718EA650C90C3D0EA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76B90662FEDF137F8FDF5A0E0D6B503F010FAF94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FF7A8A0CF603B20A1F5510A7D95439FF5AF3A56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB5271B9603357DF8BA5C653DADA3929A39E918E);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_t72F051E09659AAF09C2748EA97D8B30E9F30F20D V_7;
	memset((&V_7), 0, sizeof(V_7));
	KeyValuePair_2_t2DC05A2DD885489EB51D5F0A99A9C8819AA0D5A5 V_8;
	memset((&V_8), 0, sizeof(V_8));
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	String_t* V_13 = NULL;
	SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* G_B8_2 = NULL;
	SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3* G_B9_1 = NULL;
	String_t* G_B9_2 = NULL;
	Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* G_B9_3 = NULL;
	SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* G_B13_2 = NULL;
	SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* G_B12_2 = NULL;
	int32_t G_B14_0 = 0;
	SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3* G_B14_1 = NULL;
	String_t* G_B14_2 = NULL;
	Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* G_B14_3 = NULL;
	SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* G_B18_2 = NULL;
	SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* G_B17_2 = NULL;
	int32_t G_B19_0 = 0;
	SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3* G_B19_1 = NULL;
	String_t* G_B19_2 = NULL;
	Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* G_B19_3 = NULL;
	{
		// if (sender != null)
		RuntimeObject* L_0 = ___sender3;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// if (EventManager.sender.ContainsKey(eventName)) EventManager.sender[eventName] = sender; else EventManager.sender.Add(eventName, sender);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
		String_t* L_2 = ___eventName0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_1, L_2, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// if (EventManager.sender.ContainsKey(eventName)) EventManager.sender[eventName] = sender; else EventManager.sender.Add(eventName, sender);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
		String_t* L_5 = ___eventName0;
		RuntimeObject* L_6 = ___sender3;
		NullCheck(L_4);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_4, L_5, L_6, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		goto IL_002a;
	}

IL_001e:
	{
		// if (EventManager.sender.ContainsKey(eventName)) EventManager.sender[eventName] = sender; else EventManager.sender.Add(eventName, sender);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
		String_t* L_8 = ___eventName0;
		RuntimeObject* L_9 = ___sender3;
		NullCheck(L_7);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_7, L_8, L_9, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
	}

IL_002a:
	{
		// var data = filter.Split(';');
		String_t* L_10 = ___filter1;
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_10, ((int32_t)59), 0, NULL);
		// var filters = new Dictionary<string, SFilter>();
		Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* L_12 = (Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698*)il2cpp_codegen_object_new(Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Dictionary_2__ctor_m3F82ECD1F2D37DC2E3468BCE63630BF541938FCF(L_12, Dictionary_2__ctor_m3F82ECD1F2D37DC2E3468BCE63630BF541938FCF_RuntimeMethod_var);
		V_0 = L_12;
		// foreach (string s in data)
		V_3 = L_11;
		V_4 = 0;
		goto IL_025a;
	}

IL_0042:
	{
		// foreach (string s in data)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		// var tmp = s.Split(':');
		NullCheck(L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17;
		L_17 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_16, ((int32_t)58), 0, NULL);
		V_5 = L_17;
		// if (tmp[0] == "name") filters.Add("name", new SFilter { value = tmp[1].Replace("*", ""), contains = tmp[1].StartsWith("*") && tmp[1].EndsWith("*"), starts = tmp[1].EndsWith("*"), ends = tmp[1].StartsWith("*"), exact = !tmp[1].Contains("*") });
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_5;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
		if (!L_21)
		{
			goto IL_00fc;
		}
	}
	{
		// if (tmp[0] == "name") filters.Add("name", new SFilter { value = tmp[1].Replace("*", ""), contains = tmp[1].StartsWith("*") && tmp[1].EndsWith("*"), starts = tmp[1].EndsWith("*"), ends = tmp[1].StartsWith("*"), exact = !tmp[1].Contains("*") });
		Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* L_22 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_25, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		(&V_6)->___value_0 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___value_0), (void*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_5;
		NullCheck(L_27);
		int32_t L_28 = 1;
		String_t* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		bool L_30;
		L_30 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_29, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		G_B7_0 = (&V_6);
		G_B7_1 = _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
		G_B7_2 = L_22;
		if (!L_30)
		{
			G_B8_0 = (&V_6);
			G_B8_1 = _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
			G_B8_2 = L_22;
			goto IL_00ad;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_5;
		NullCheck(L_31);
		int32_t L_32 = 1;
		String_t* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		bool L_34;
		L_34 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_33, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		G_B9_0 = ((int32_t)(L_34));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_00ae:
	{
		G_B9_1->___contains_3 = (bool)G_B9_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = V_5;
		NullCheck(L_35);
		int32_t L_36 = 1;
		String_t* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		bool L_38;
		L_38 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_37, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		(&V_6)->___starts_1 = L_38;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_5;
		NullCheck(L_39);
		int32_t L_40 = 1;
		String_t* L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		bool L_42;
		L_42 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_41, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		(&V_6)->___ends_2 = L_42;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = V_5;
		NullCheck(L_43);
		int32_t L_44 = 1;
		String_t* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		bool L_46;
		L_46 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_45, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		(&V_6)->___exact_4 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_47 = V_6;
		NullCheck(G_B9_3);
		Dictionary_2_Add_m83AC9A82DBF6AFDAA1B00A27FA5668748E42A96F(G_B9_3, G_B9_2, L_47, Dictionary_2_Add_m83AC9A82DBF6AFDAA1B00A27FA5668748E42A96F_RuntimeMethod_var);
	}

IL_00fc:
	{
		// if (tmp[0] == "tag") filters.Add("tag", new SFilter { value = tmp[1].Replace("*", ""), contains = tmp[1].StartsWith("*") && tmp[1].EndsWith("*"), starts = tmp[1].EndsWith("*"), ends = tmp[1].StartsWith("*"), exact = !tmp[1].Contains("*") });
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = V_5;
		NullCheck(L_48);
		int32_t L_49 = 0;
		String_t* L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral9FF7A8A0CF603B20A1F5510A7D95439FF5AF3A56, NULL);
		if (!L_51)
		{
			goto IL_01a8;
		}
	}
	{
		// if (tmp[0] == "tag") filters.Add("tag", new SFilter { value = tmp[1].Replace("*", ""), contains = tmp[1].StartsWith("*") && tmp[1].EndsWith("*"), starts = tmp[1].EndsWith("*"), ends = tmp[1].StartsWith("*"), exact = !tmp[1].Contains("*") });
		Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* L_52 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = V_5;
		NullCheck(L_53);
		int32_t L_54 = 1;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		String_t* L_56;
		L_56 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_55, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		(&V_6)->___value_0 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___value_0), (void*)L_56);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = V_5;
		NullCheck(L_57);
		int32_t L_58 = 1;
		String_t* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		bool L_60;
		L_60 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_59, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		G_B12_0 = (&V_6);
		G_B12_1 = _stringLiteral9FF7A8A0CF603B20A1F5510A7D95439FF5AF3A56;
		G_B12_2 = L_52;
		if (!L_60)
		{
			G_B13_0 = (&V_6);
			G_B13_1 = _stringLiteral9FF7A8A0CF603B20A1F5510A7D95439FF5AF3A56;
			G_B13_2 = L_52;
			goto IL_0159;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = V_5;
		NullCheck(L_61);
		int32_t L_62 = 1;
		String_t* L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		bool L_64;
		L_64 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_63, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		G_B14_0 = ((int32_t)(L_64));
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		goto IL_015a;
	}

IL_0159:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
	}

IL_015a:
	{
		G_B14_1->___contains_3 = (bool)G_B14_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = V_5;
		NullCheck(L_65);
		int32_t L_66 = 1;
		String_t* L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		bool L_68;
		L_68 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_67, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		(&V_6)->___starts_1 = L_68;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = V_5;
		NullCheck(L_69);
		int32_t L_70 = 1;
		String_t* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		bool L_72;
		L_72 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_71, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		(&V_6)->___ends_2 = L_72;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = V_5;
		NullCheck(L_73);
		int32_t L_74 = 1;
		String_t* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		bool L_76;
		L_76 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_75, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		(&V_6)->___exact_4 = (bool)((((int32_t)L_76) == ((int32_t)0))? 1 : 0);
		SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_77 = V_6;
		NullCheck(G_B14_3);
		Dictionary_2_Add_m83AC9A82DBF6AFDAA1B00A27FA5668748E42A96F(G_B14_3, G_B14_2, L_77, Dictionary_2_Add_m83AC9A82DBF6AFDAA1B00A27FA5668748E42A96F_RuntimeMethod_var);
	}

IL_01a8:
	{
		// if (tmp[0] == "layer") filters.Add("layer", new SFilter { value = tmp[1].Replace("*", ""), contains = tmp[1].StartsWith("*") && tmp[1].EndsWith("*"), starts = tmp[1].EndsWith("*"), ends = tmp[1].StartsWith("*"), exact = !tmp[1].Contains("*") });
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = V_5;
		NullCheck(L_78);
		int32_t L_79 = 0;
		String_t* L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		bool L_81;
		L_81 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_80, _stringLiteral72A731D064EB75DC3D80E1718EA650C90C3D0EA9, NULL);
		if (!L_81)
		{
			goto IL_0254;
		}
	}
	{
		// if (tmp[0] == "layer") filters.Add("layer", new SFilter { value = tmp[1].Replace("*", ""), contains = tmp[1].StartsWith("*") && tmp[1].EndsWith("*"), starts = tmp[1].EndsWith("*"), ends = tmp[1].StartsWith("*"), exact = !tmp[1].Contains("*") });
		Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* L_82 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = V_5;
		NullCheck(L_83);
		int32_t L_84 = 1;
		String_t* L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		String_t* L_86;
		L_86 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_85, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		(&V_6)->___value_0 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___value_0), (void*)L_86);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = V_5;
		NullCheck(L_87);
		int32_t L_88 = 1;
		String_t* L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_89);
		bool L_90;
		L_90 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_89, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		G_B17_0 = (&V_6);
		G_B17_1 = _stringLiteral72A731D064EB75DC3D80E1718EA650C90C3D0EA9;
		G_B17_2 = L_82;
		if (!L_90)
		{
			G_B18_0 = (&V_6);
			G_B18_1 = _stringLiteral72A731D064EB75DC3D80E1718EA650C90C3D0EA9;
			G_B18_2 = L_82;
			goto IL_0205;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = V_5;
		NullCheck(L_91);
		int32_t L_92 = 1;
		String_t* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		bool L_94;
		L_94 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_93, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		G_B19_0 = ((int32_t)(L_94));
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		G_B19_3 = G_B17_2;
		goto IL_0206;
	}

IL_0205:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
		G_B19_3 = G_B18_2;
	}

IL_0206:
	{
		G_B19_1->___contains_3 = (bool)G_B19_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_95 = V_5;
		NullCheck(L_95);
		int32_t L_96 = 1;
		String_t* L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		bool L_98;
		L_98 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_97, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		(&V_6)->___starts_1 = L_98;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_99 = V_5;
		NullCheck(L_99);
		int32_t L_100 = 1;
		String_t* L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		bool L_102;
		L_102 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_101, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		(&V_6)->___ends_2 = L_102;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_103 = V_5;
		NullCheck(L_103);
		int32_t L_104 = 1;
		String_t* L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_105);
		bool L_106;
		L_106 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_105, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		(&V_6)->___exact_4 = (bool)((((int32_t)L_106) == ((int32_t)0))? 1 : 0);
		SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_107 = V_6;
		NullCheck(G_B19_3);
		Dictionary_2_Add_m83AC9A82DBF6AFDAA1B00A27FA5668748E42A96F(G_B19_3, G_B19_2, L_107, Dictionary_2_Add_m83AC9A82DBF6AFDAA1B00A27FA5668748E42A96F_RuntimeMethod_var);
	}

IL_0254:
	{
		int32_t L_108 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_108, 1));
	}

IL_025a:
	{
		// foreach (string s in data)
		int32_t L_109 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_110 = V_3;
		NullCheck(L_110);
		if ((((int32_t)L_109) < ((int32_t)((int32_t)(((RuntimeArray*)L_110)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		// int counter = filters.Count;
		Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* L_111 = V_0;
		NullCheck(L_111);
		int32_t L_112;
		L_112 = Dictionary_2_get_Count_mB1058F0C9C7EDAB8C7527F5667B8274A3AA90D2A(L_111, Dictionary_2_get_Count_mB1058F0C9C7EDAB8C7527F5667B8274A3AA90D2A_RuntimeMethod_var);
		V_1 = L_112;
		// int found = 0;
		V_2 = 0;
		// foreach (KeyValuePair<string, UnityEvent> evnt in eventDictionary)
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_113 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0;
		NullCheck(L_113);
		Enumerator_t72F051E09659AAF09C2748EA97D8B30E9F30F20D L_114;
		L_114 = Dictionary_2_GetEnumerator_m64190B380A145B8AB27A6AB837F24BF572A40AEC(L_113, Dictionary_2_GetEnumerator_m64190B380A145B8AB27A6AB837F24BF572A40AEC_RuntimeMethod_var);
		V_7 = L_114;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0431:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA30D00C82F95861000D0B6DE1A0E774BD59F092A((&V_7), Enumerator_Dispose_mA30D00C82F95861000D0B6DE1A0E774BD59F092A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0423_1;
			}

IL_027e_1:
			{
				// foreach (KeyValuePair<string, UnityEvent> evnt in eventDictionary)
				KeyValuePair_2_t2DC05A2DD885489EB51D5F0A99A9C8819AA0D5A5 L_115;
				L_115 = Enumerator_get_Current_mA55F1CB6D1BC74355EF2E2C07174A2678B3B727B_inline((&V_7), Enumerator_get_Current_mA55F1CB6D1BC74355EF2E2C07174A2678B3B727B_RuntimeMethod_var);
				V_8 = L_115;
				// var key = evnt.Key;
				String_t* L_116;
				L_116 = KeyValuePair_2_get_Key_m0997E5A5B7B7695DCC795B99ECAE08C97166BC54_inline((&V_8), KeyValuePair_2_get_Key_m0997E5A5B7B7695DCC795B99ECAE08C97166BC54_RuntimeMethod_var);
				V_9 = L_116;
				// if (key.Contains("_") && key.StartsWith(eventName))
				String_t* L_117 = V_9;
				NullCheck(L_117);
				bool L_118;
				L_118 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_117, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, NULL);
				if (!L_118)
				{
					goto IL_0423_1;
				}
			}
			{
				String_t* L_119 = V_9;
				String_t* L_120 = ___eventName0;
				NullCheck(L_119);
				bool L_121;
				L_121 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_119, L_120, NULL);
				if (!L_121)
				{
					goto IL_0423_1;
				}
			}
			{
				// data = key.Split('_');
				String_t* L_122 = V_9;
				NullCheck(L_122);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_123;
				L_123 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_122, ((int32_t)95), 0, NULL);
				// var name = "";
				V_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				// var tag = "";
				V_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				// var layer = "";
				V_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				// found = 0;
				V_2 = 0;
				// foreach (string s in data)
				V_3 = L_123;
				V_4 = 0;
				goto IL_0374_1;
			}

IL_02d8_1:
			{
				// foreach (string s in data)
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_124 = V_3;
				int32_t L_125 = V_4;
				NullCheck(L_124);
				int32_t L_126 = L_125;
				String_t* L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
				V_13 = L_127;
				// if (s.Contains("##name##")) name = s.Replace("##name##", "").Replace("#", "");
				String_t* L_128 = V_13;
				NullCheck(L_128);
				bool L_129;
				L_129 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_128, _stringLiteralEB5271B9603357DF8BA5C653DADA3929A39E918E, NULL);
				if (!L_129)
				{
					goto IL_030e_1;
				}
			}
			{
				// if (s.Contains("##name##")) name = s.Replace("##name##", "").Replace("#", "");
				String_t* L_130 = V_13;
				NullCheck(L_130);
				String_t* L_131;
				L_131 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_130, _stringLiteralEB5271B9603357DF8BA5C653DADA3929A39E918E, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				NullCheck(L_131);
				String_t* L_132;
				L_132 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_131, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				V_10 = L_132;
			}

IL_030e_1:
			{
				// if (s.Contains("##tag##")) tag = s.Replace("##tag##", "").Replace("#", "");
				String_t* L_133 = V_13;
				NullCheck(L_133);
				bool L_134;
				L_134 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_133, _stringLiteral684EA51CBE70FF311998CEEAB615840A88831FC4, NULL);
				if (!L_134)
				{
					goto IL_033e_1;
				}
			}
			{
				// if (s.Contains("##tag##")) tag = s.Replace("##tag##", "").Replace("#", "");
				String_t* L_135 = V_13;
				NullCheck(L_135);
				String_t* L_136;
				L_136 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_135, _stringLiteral684EA51CBE70FF311998CEEAB615840A88831FC4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				NullCheck(L_136);
				String_t* L_137;
				L_137 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_136, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				V_11 = L_137;
			}

IL_033e_1:
			{
				// if (s.Contains("##layer##")) layer = s.Replace("##layer##", "").Replace("#", "");
				String_t* L_138 = V_13;
				NullCheck(L_138);
				bool L_139;
				L_139 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_138, _stringLiteral76B90662FEDF137F8FDF5A0E0D6B503F010FAF94, NULL);
				if (!L_139)
				{
					goto IL_036e_1;
				}
			}
			{
				// if (s.Contains("##layer##")) layer = s.Replace("##layer##", "").Replace("#", "");
				String_t* L_140 = V_13;
				NullCheck(L_140);
				String_t* L_141;
				L_141 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_140, _stringLiteral76B90662FEDF137F8FDF5A0E0D6B503F010FAF94, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				NullCheck(L_141);
				String_t* L_142;
				L_142 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_141, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				V_12 = L_142;
			}

IL_036e_1:
			{
				int32_t L_143 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_143, 1));
			}

IL_0374_1:
			{
				// foreach (string s in data)
				int32_t L_144 = V_4;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_145 = V_3;
				NullCheck(L_145);
				if ((((int32_t)L_144) < ((int32_t)((int32_t)(((RuntimeArray*)L_145)->max_length)))))
				{
					goto IL_02d8_1;
				}
			}
			{
				// if (filters.ContainsKey("name") && name != "")
				Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* L_146 = V_0;
				NullCheck(L_146);
				bool L_147;
				L_147 = Dictionary_2_ContainsKey_mE040371FDA3F1E0F4D1B123A838C6F81F1223F58(L_146, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, Dictionary_2_ContainsKey_mE040371FDA3F1E0F4D1B123A838C6F81F1223F58_RuntimeMethod_var);
				if (!L_147)
				{
					goto IL_03b1_1;
				}
			}
			{
				String_t* L_148 = V_10;
				bool L_149;
				L_149 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_148, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				if (!L_149)
				{
					goto IL_03b1_1;
				}
			}
			{
				// if (FilterIsValidated(name, filters["name"])) found++;
				String_t* L_150 = V_10;
				Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* L_151 = V_0;
				NullCheck(L_151);
				SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_152;
				L_152 = Dictionary_2_get_Item_m2FA8759E6D40E1BEE381A5AEC1FE87ACD6644484(L_151, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, Dictionary_2_get_Item_m2FA8759E6D40E1BEE381A5AEC1FE87ACD6644484_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
				bool L_153;
				L_153 = EventManager_FilterIsValidated_m2C13C04049A3E31B07779EEC1131F1D840EAF368(L_150, L_152, NULL);
				if (!L_153)
				{
					goto IL_03b1_1;
				}
			}
			{
				// if (FilterIsValidated(name, filters["name"])) found++;
				int32_t L_154 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_154, 1));
			}

IL_03b1_1:
			{
				// if (filters.ContainsKey("tag") && tag != "")
				Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* L_155 = V_0;
				NullCheck(L_155);
				bool L_156;
				L_156 = Dictionary_2_ContainsKey_mE040371FDA3F1E0F4D1B123A838C6F81F1223F58(L_155, _stringLiteral9FF7A8A0CF603B20A1F5510A7D95439FF5AF3A56, Dictionary_2_ContainsKey_mE040371FDA3F1E0F4D1B123A838C6F81F1223F58_RuntimeMethod_var);
				if (!L_156)
				{
					goto IL_03e4_1;
				}
			}
			{
				String_t* L_157 = V_11;
				bool L_158;
				L_158 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_157, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				if (!L_158)
				{
					goto IL_03e4_1;
				}
			}
			{
				// if (FilterIsValidated(tag, filters["tag"])) found++;
				String_t* L_159 = V_11;
				Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* L_160 = V_0;
				NullCheck(L_160);
				SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_161;
				L_161 = Dictionary_2_get_Item_m2FA8759E6D40E1BEE381A5AEC1FE87ACD6644484(L_160, _stringLiteral9FF7A8A0CF603B20A1F5510A7D95439FF5AF3A56, Dictionary_2_get_Item_m2FA8759E6D40E1BEE381A5AEC1FE87ACD6644484_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
				bool L_162;
				L_162 = EventManager_FilterIsValidated_m2C13C04049A3E31B07779EEC1131F1D840EAF368(L_159, L_161, NULL);
				if (!L_162)
				{
					goto IL_03e4_1;
				}
			}
			{
				// if (FilterIsValidated(tag, filters["tag"])) found++;
				int32_t L_163 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_163, 1));
			}

IL_03e4_1:
			{
				// if (filters.ContainsKey("layer") && layer != "")
				Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* L_164 = V_0;
				NullCheck(L_164);
				bool L_165;
				L_165 = Dictionary_2_ContainsKey_mE040371FDA3F1E0F4D1B123A838C6F81F1223F58(L_164, _stringLiteral72A731D064EB75DC3D80E1718EA650C90C3D0EA9, Dictionary_2_ContainsKey_mE040371FDA3F1E0F4D1B123A838C6F81F1223F58_RuntimeMethod_var);
				if (!L_165)
				{
					goto IL_0417_1;
				}
			}
			{
				String_t* L_166 = V_12;
				bool L_167;
				L_167 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_166, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
				if (!L_167)
				{
					goto IL_0417_1;
				}
			}
			{
				// if (FilterIsValidated(layer, filters["layer"])) found++;
				String_t* L_168 = V_12;
				Dictionary_2_tF7361AB06B197D6F07D367116111F64D30F04698* L_169 = V_0;
				NullCheck(L_169);
				SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_170;
				L_170 = Dictionary_2_get_Item_m2FA8759E6D40E1BEE381A5AEC1FE87ACD6644484(L_169, _stringLiteral72A731D064EB75DC3D80E1718EA650C90C3D0EA9, Dictionary_2_get_Item_m2FA8759E6D40E1BEE381A5AEC1FE87ACD6644484_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
				bool L_171;
				L_171 = EventManager_FilterIsValidated_m2C13C04049A3E31B07779EEC1131F1D840EAF368(L_168, L_170, NULL);
				if (!L_171)
				{
					goto IL_0417_1;
				}
			}
			{
				// if (FilterIsValidated(layer, filters["layer"])) found++;
				int32_t L_172 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_172, 1));
			}

IL_0417_1:
			{
				// if (found == counter) { EmitEvent(key, delay); }
				int32_t L_173 = V_2;
				int32_t L_174 = V_1;
				if ((!(((uint32_t)L_173) == ((uint32_t)L_174))))
				{
					goto IL_0423_1;
				}
			}
			{
				// if (found == counter) { EmitEvent(key, delay); }
				String_t* L_175 = V_9;
				float L_176 = ___delay2;
				il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
				EventManager_EmitEvent_mB395E25864278454ACFFED1D2582EB72D842AB17(L_175, L_176, NULL);
			}

IL_0423_1:
			{
				// foreach (KeyValuePair<string, UnityEvent> evnt in eventDictionary)
				bool L_177;
				L_177 = Enumerator_MoveNext_mE8CB03F28252733FB3090D0D4C11443FFE1D1CD0((&V_7), Enumerator_MoveNext_mE8CB03F28252733FB3090D0D4C11443FFE1D1CD0_RuntimeMethod_var);
				if (L_177)
				{
					goto IL_027e_1;
				}
			}
			{
				goto IL_043f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_043f:
	{
		// }
		return;
	}
}
// System.Boolean TigerForge.EventManager::FilterIsValidated(System.String,TigerForge.EventManager/SFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventManager_FilterIsValidated_m2C13C04049A3E31B07779EEC1131F1D840EAF368 (String_t* ___value0, SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 ___rules1, const RuntimeMethod* method) 
{
	{
		// if (rules.exact)
		SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_0 = ___rules1;
		bool L_1 = L_0.___exact_4;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return value == rules.value;
		String_t* L_2 = ___value0;
		SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_3 = ___rules1;
		String_t* L_4 = L_3.___value_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_4, NULL);
		return L_5;
	}

IL_0015:
	{
		// else if (rules.contains)
		SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_6 = ___rules1;
		bool L_7 = L_6.___contains_3;
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// return value.Contains(rules.value);
		String_t* L_8 = ___value0;
		SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_9 = ___rules1;
		String_t* L_10 = L_9.___value_0;
		NullCheck(L_8);
		bool L_11;
		L_11 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_8, L_10, NULL);
		return L_11;
	}

IL_002a:
	{
		// else if (rules.starts)
		SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_12 = ___rules1;
		bool L_13 = L_12.___starts_1;
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		// return value.StartsWith(rules.value);
		String_t* L_14 = ___value0;
		SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_15 = ___rules1;
		String_t* L_16 = L_15.___value_0;
		NullCheck(L_14);
		bool L_17;
		L_17 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_14, L_16, NULL);
		return L_17;
	}

IL_003f:
	{
		// else if (rules.ends)
		SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_18 = ___rules1;
		bool L_19 = L_18.___ends_2;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		// return value.EndsWith(rules.value);
		String_t* L_20 = ___value0;
		SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3 L_21 = ___rules1;
		String_t* L_22 = L_21.___value_0;
		NullCheck(L_20);
		bool L_23;
		L_23 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_20, L_22, NULL);
		return L_23;
	}

IL_0054:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void TigerForge.EventManager::EmitEventData(System.String,System.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_EmitEventData_m6C4A0B52957ABDB53988073B38AAC1857F510660 (String_t* ___eventName0, RuntimeObject* ___data1, float ___delay2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetData(eventName, data);
		String_t* L_0 = ___eventName0;
		RuntimeObject* L_1 = ___data1;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_SetData_mE3ADF59635C806E5364C2ED369CDA76AEC8141F0(L_0, L_1, NULL);
		// EmitEvent(eventName, delay);
		String_t* L_2 = ___eventName0;
		float L_3 = ___delay2;
		EventManager_EmitEvent_mB395E25864278454ACFFED1D2582EB72D842AB17(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::StopAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_StopAll_mCE86E5C68636B2503C3E7F0C2CC57397CCA282F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m64190B380A145B8AB27A6AB837F24BF572A40AEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA30D00C82F95861000D0B6DE1A0E774BD59F092A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8CB03F28252733FB3090D0D4C11443FFE1D1CD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA55F1CB6D1BC74355EF2E2C07174A2678B3B727B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m6D93038D2CC3C058F24FDACFFF809C3AB0D024B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t72F051E09659AAF09C2748EA97D8B30E9F30F20D V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2DC05A2DD885489EB51D5F0A99A9C8819AA0D5A5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (KeyValuePair<string, UnityEvent> evnt in eventDictionary)
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0;
		NullCheck(L_0);
		Enumerator_t72F051E09659AAF09C2748EA97D8B30E9F30F20D L_1;
		L_1 = Dictionary_2_GetEnumerator_m64190B380A145B8AB27A6AB837F24BF572A40AEC(L_0, Dictionary_2_GetEnumerator_m64190B380A145B8AB27A6AB837F24BF572A40AEC_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA30D00C82F95861000D0B6DE1A0E774BD59F092A((&V_0), Enumerator_Dispose_mA30D00C82F95861000D0B6DE1A0E774BD59F092A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_000d_1:
			{
				// foreach (KeyValuePair<string, UnityEvent> evnt in eventDictionary)
				KeyValuePair_2_t2DC05A2DD885489EB51D5F0A99A9C8819AA0D5A5 L_2;
				L_2 = Enumerator_get_Current_mA55F1CB6D1BC74355EF2E2C07174A2678B3B727B_inline((&V_0), Enumerator_get_Current_mA55F1CB6D1BC74355EF2E2C07174A2678B3B727B_RuntimeMethod_var);
				V_1 = L_2;
				// evnt.Value.RemoveAllListeners();
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3;
				L_3 = KeyValuePair_2_get_Value_m6D93038D2CC3C058F24FDACFFF809C3AB0D024B8_inline((&V_1), KeyValuePair_2_get_Value_m6D93038D2CC3C058F24FDACFFF809C3AB0D024B8_RuntimeMethod_var);
				NullCheck(L_3);
				UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_3, NULL);
			}

IL_0021_1:
			{
				// foreach (KeyValuePair<string, UnityEvent> evnt in eventDictionary)
				bool L_4;
				L_4 = Enumerator_MoveNext_mE8CB03F28252733FB3090D0D4C11443FFE1D1CD0((&V_0), Enumerator_MoveNext_mE8CB03F28252733FB3090D0D4C11443FFE1D1CD0_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// eventDictionary = new Dictionary<string, UnityEvent>();
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_5 = (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050*)il2cpp_codegen_object_new(Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E(L_5, Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0), (void*)L_5);
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::DelayedInvoke(UnityEngine.Events.UnityEvent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_DelayedInvoke_m752F796FB7063347D2E0FC2BFB5A5E3BA21F47E6 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___thisEvent0, int32_t ___delay1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483_m065D5BF9215F38E712700FD458BD2433D979FB24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = ___thisEvent0;
		(&V_0)->___thisEvent_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___thisEvent_3), (void*)L_1);
		int32_t L_2 = ___delay1;
		(&V_0)->___delay_2 = L_2;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483_m065D5BF9215F38E712700FD458BD2433D979FB24(L_3, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483_m065D5BF9215F38E712700FD458BD2433D979FB24_RuntimeMethod_var);
		return;
	}
}
// System.Boolean TigerForge.EventManager::IsListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventManager_IsListening_mC966BF993F0E45DD5365D047E366C6449E7E6F61 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m9A6579F658F9BFCE99F50FBEE3FEA2B75E7DAF82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return eventDictionary.Count > 0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m9A6579F658F9BFCE99F50FBEE3FEA2B75E7DAF82(L_0, Dictionary_2_get_Count_m9A6579F658F9BFCE99F50FBEE3FEA2B75E7DAF82_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void TigerForge.EventManager::PauseListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_PauseListening_mB1DCCD733D54780A3E5EB16A6110728367A81EAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetPaused(true);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_SetPaused_m987FBED6FB639BFCD7CB098F62C774570A1AB955((bool)1, NULL);
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::PauseListening(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_PauseListening_mF556216D2F449DD2CF86FB642EDC0BF0E64E5783 (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetPaused(eventName, true);
		String_t* L_0 = ___eventName0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_SetPaused_m8F4AC0535271A538D531680B269E5DCDC5CB5E55(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::RestartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_RestartListening_mDB37D1566EFD06D19FB18F249D818BD4F028C7C8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetPaused(false);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_SetPaused_m987FBED6FB639BFCD7CB098F62C774570A1AB955((bool)0, NULL);
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::RestartListening(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_RestartListening_m073D87E5B9DF8F941C98413DBA92D96B790ECA7C (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetPaused(eventName, false);
		String_t* L_0 = ___eventName0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_SetPaused_m8F4AC0535271A538D531680B269E5DCDC5CB5E55(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean TigerForge.EventManager::isPaused(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventManager_isPaused_m38ACD1AB01ED7E4A1FF32CCE7F0366563C47ABCA (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE029B6A6F149DDDE86FCF5B3D2CA2EDDBC7F4A6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (paused.ContainsKey(eventName)) return paused[eventName]; else return true;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___paused_2;
		String_t* L_1 = ___eventName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6(L_0, L_1, Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// if (paused.ContainsKey(eventName)) return paused[eventName]; else return true;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___paused_2;
		String_t* L_4 = ___eventName0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_get_Item_mE029B6A6F149DDDE86FCF5B3D2CA2EDDBC7F4A6F(L_3, L_4, Dictionary_2_get_Item_mE029B6A6F149DDDE86FCF5B3D2CA2EDDBC7F4A6F_RuntimeMethod_var);
		return L_5;
	}

IL_0019:
	{
		// if (paused.ContainsKey(eventName)) return paused[eventName]; else return true;
		return (bool)1;
	}
}
// System.Void TigerForge.EventManager::SetPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_SetPaused_m987FBED6FB639BFCD7CB098F62C774570A1AB955 (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* V_0 = NULL;
	Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Dictionary<string, bool> copy = new Dictionary<string, bool>();
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_0 = (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C*)il2cpp_codegen_object_new(Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D(L_0, Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (KeyValuePair<string, bool> eName in paused)
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_1 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___paused_2;
		NullCheck(L_1);
		Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C L_2;
		L_2 = Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22(L_1, Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14((&V_1), Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_0013_1:
			{
				// foreach (KeyValuePair<string, bool> eName in paused)
				KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C L_3;
				L_3 = Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_inline((&V_1), Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_RuntimeMethod_var);
				V_2 = L_3;
				// copy.Add(eName.Key, value);
				Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_4 = V_0;
				String_t* L_5;
				L_5 = KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_inline((&V_2), KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
				bool L_6 = ___value0;
				NullCheck(L_4);
				Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292(L_4, L_5, L_6, Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var);
			}

IL_0029_1:
			{
				// foreach (KeyValuePair<string, bool> eName in paused)
				bool L_7;
				L_7 = Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2((&V_1), Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// paused = copy;
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___paused_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___paused_2), (void*)L_8);
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::SetPaused(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_SetPaused_m8F4AC0535271A538D531680B269E5DCDC5CB5E55 (String_t* ___eventName0, bool ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* V_0 = NULL;
	Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Dictionary<string, bool> copy = new Dictionary<string, bool>();
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_0 = (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C*)il2cpp_codegen_object_new(Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D(L_0, Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (KeyValuePair<string, bool> eName in paused)
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_1 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___paused_2;
		NullCheck(L_1);
		Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C L_2;
		L_2 = Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22(L_1, Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14((&V_1), Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004e_1;
			}

IL_0013_1:
			{
				// foreach (KeyValuePair<string, bool> eName in paused)
				KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C L_3;
				L_3 = Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_inline((&V_1), Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_RuntimeMethod_var);
				V_2 = L_3;
				// if (eName.Key == eventName) copy.Add(eName.Key, value); else copy.Add(eName.Key, eName.Value);
				String_t* L_4;
				L_4 = KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_inline((&V_2), KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
				String_t* L_5 = ___eventName0;
				bool L_6;
				L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_003a_1;
				}
			}
			{
				// if (eName.Key == eventName) copy.Add(eName.Key, value); else copy.Add(eName.Key, eName.Value);
				Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_7 = V_0;
				String_t* L_8;
				L_8 = KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_inline((&V_2), KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
				bool L_9 = ___value1;
				NullCheck(L_7);
				Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292(L_7, L_8, L_9, Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var);
				goto IL_004e_1;
			}

IL_003a_1:
			{
				// if (eName.Key == eventName) copy.Add(eName.Key, value); else copy.Add(eName.Key, eName.Value);
				Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_10 = V_0;
				String_t* L_11;
				L_11 = KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_inline((&V_2), KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
				bool L_12;
				L_12 = KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_inline((&V_2), KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var);
				NullCheck(L_10);
				Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292(L_10, L_11, L_12, Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var);
			}

IL_004e_1:
			{
				// foreach (KeyValuePair<string, bool> eName in paused)
				bool L_13;
				L_13 = Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2((&V_1), Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		// paused = copy;
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___paused_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___paused_2), (void*)L_14);
		// }
		return;
	}
}
// System.Boolean TigerForge.EventManager::EventExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventManager_EventExists_m39DEA086A77874ADDDC8265FDE58978326E7013B (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8B243A3A4E1E9A10EC4E7DE5898CAEA5CBDCBE98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return eventDictionary.ContainsKey(eventName);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0;
		String_t* L_1 = ___eventName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m8B243A3A4E1E9A10EC4E7DE5898CAEA5CBDCBE98(L_0, L_1, Dictionary_2_ContainsKey_m8B243A3A4E1E9A10EC4E7DE5898CAEA5CBDCBE98_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void TigerForge.EventManager::ClearData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_ClearData_mF5F1FB80F47593434767C3C331E920F947977A8A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// storage = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3), (void*)L_0);
		// sender = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_1, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::Dispose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Dispose_mA4E0FCEBA8A007ECD0EAD6FB35DAD1D8ACBBCE9F (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0DEC5CCE18195C4F3781C5FC11AD5595A6BDB5B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m2114FDE2525CF3B91B50AB1F5D5C28464EC55E3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDBFE25FC0FF7963A964A4A2245535B70A2AC3573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (storage.ContainsKey(eventName)) storage.Remove(eventName);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
		String_t* L_1 = ___eventName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// if (storage.ContainsKey(eventName)) storage.Remove(eventName);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
		String_t* L_4 = ___eventName0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m2114FDE2525CF3B91B50AB1F5D5C28464EC55E3C(L_3, L_4, Dictionary_2_Remove_m2114FDE2525CF3B91B50AB1F5D5C28464EC55E3C_RuntimeMethod_var);
	}

IL_0019:
	{
		// if (storage2.ContainsKey(eventName)) storage2.Remove(eventName);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* L_6 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage2_4;
		String_t* L_7 = ___eventName0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3(L_6, L_7, Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		// if (storage2.ContainsKey(eventName)) storage2.Remove(eventName);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* L_9 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage2_4;
		String_t* L_10 = ___eventName0;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_Remove_mDBFE25FC0FF7963A964A4A2245535B70A2AC3573(L_9, L_10, Dictionary_2_Remove_mDBFE25FC0FF7963A964A4A2245535B70A2AC3573_RuntimeMethod_var);
	}

IL_0032:
	{
		// if (storage3.ContainsKey(eventName)) storage3.Remove(eventName);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* L_12 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage3_5;
		String_t* L_13 = ___eventName0;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E(L_12, L_13, Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_004b;
		}
	}
	{
		// if (storage3.ContainsKey(eventName)) storage3.Remove(eventName);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* L_15 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage3_5;
		String_t* L_16 = ___eventName0;
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_Remove_m0DEC5CCE18195C4F3781C5FC11AD5595A6BDB5B0(L_15, L_16, Dictionary_2_Remove_m0DEC5CCE18195C4F3781C5FC11AD5595A6BDB5B0_RuntimeMethod_var);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::DisposeAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_DisposeAll_mC6A1A0F866C60DDF5666A45A9A1C4A3FA864755B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m30236686417F47FD494911E606478ECF15CA2D54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m51CC777C9E1845DFAF2D9E83F8716F06D74249FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// storage.Clear();
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
		NullCheck(L_0);
		Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB(L_0, Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		// storage2.Clear();
		Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* L_1 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage2_4;
		NullCheck(L_1);
		Dictionary_2_Clear_m30236686417F47FD494911E606478ECF15CA2D54(L_1, Dictionary_2_Clear_m30236686417F47FD494911E606478ECF15CA2D54_RuntimeMethod_var);
		// storage3.Clear();
		Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* L_2 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage3_5;
		NullCheck(L_2);
		Dictionary_2_Clear_m51CC777C9E1845DFAF2D9E83F8716F06D74249FC(L_2, Dictionary_2_Clear_m51CC777C9E1845DFAF2D9E83F8716F06D74249FC_RuntimeMethod_var);
		// sender.Clear();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
		NullCheck(L_3);
		Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB(L_3, Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TigerForge.EventManager::SetData(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_SetData_mE3ADF59635C806E5364C2ED369CDA76AEC8141F0 (String_t* ___eventName0, RuntimeObject* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (storage.ContainsKey(eventName)) storage[eventName] = data; else storage.Add(eventName, data);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
		String_t* L_1 = ___eventName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if (storage.ContainsKey(eventName)) storage[eventName] = data; else storage.Add(eventName, data);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
		String_t* L_4 = ___eventName0;
		RuntimeObject* L_5 = ___data1;
		NullCheck(L_3);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_3, L_4, L_5, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		return;
	}

IL_001a:
	{
		// if (storage.ContainsKey(eventName)) storage[eventName] = data; else storage.Add(eventName, data);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
		String_t* L_7 = ___eventName0;
		RuntimeObject* L_8 = ___data1;
		NullCheck(L_6);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_6, L_7, L_8, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Object TigerForge.EventManager::GetData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventManager_GetData_m9769A8C0D0394B0BBB58A8C89B9A056B0F10419A (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (storage.ContainsKey(eventName)) return storage[eventName]; else return null;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_1 = ___eventName0;
			NullCheck(L_0);
			bool L_2;
			L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
			if (!L_2)
			{
				goto IL_001b_1;
			}
		}
		{
			// if (storage.ContainsKey(eventName)) return storage[eventName]; else return null;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_4 = ___eventName0;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_3, L_4, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			V_0 = L_5;
			goto IL_0024;
		}

IL_001b_1:
		{
			// if (storage.ContainsKey(eventName)) return storage[eventName]; else return null;
			V_0 = NULL;
			goto IL_0024;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001f;
		}
		throw e;
	}

CATCH_001f:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return null;
		V_0 = NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0024;
	}// end catch (depth: 1)

IL_0024:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.GameObject TigerForge.EventManager::GetGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventManager_GetGameObject_mE91F663E0D461E43232D9CA6AADBEDBFE3945ACF (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (storage.ContainsKey(eventName)) return (GameObject)storage[eventName]; else return null;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_1 = ___eventName0;
			NullCheck(L_0);
			bool L_2;
			L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
			if (!L_2)
			{
				goto IL_0020_1;
			}
		}
		{
			// if (storage.ContainsKey(eventName)) return (GameObject)storage[eventName]; else return null;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_4 = ___eventName0;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_3, L_4, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			V_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_5, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
			goto IL_0029;
		}

IL_0020_1:
		{
			// if (storage.ContainsKey(eventName)) return (GameObject)storage[eventName]; else return null;
			V_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
			goto IL_0029;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return null;
		V_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		return L_6;
	}
}
// System.Int32 TigerForge.EventManager::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventManager_GetInt_mB20105D5DE424FC868C687A153621F9B9747191B (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (storage.ContainsKey(eventName)) return (int)storage[eventName]; else return 0;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_1 = ___eventName0;
			NullCheck(L_0);
			bool L_2;
			L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
			if (!L_2)
			{
				goto IL_0020_1;
			}
		}
		{
			// if (storage.ContainsKey(eventName)) return (int)storage[eventName]; else return 0;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_4 = ___eventName0;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_3, L_4, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_5, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
			goto IL_0029;
		}

IL_0020_1:
		{
			// if (storage.ContainsKey(eventName)) return (int)storage[eventName]; else return 0;
			V_0 = 0;
			goto IL_0029;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return 0;
		V_0 = 0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		// }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean TigerForge.EventManager::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventManager_GetBool_m7168388401DB0F3FF5B9337B79463123EC8D5593 (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (storage.ContainsKey(eventName)) return (bool)storage[eventName]; else return false;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_1 = ___eventName0;
			NullCheck(L_0);
			bool L_2;
			L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
			if (!L_2)
			{
				goto IL_0020_1;
			}
		}
		{
			// if (storage.ContainsKey(eventName)) return (bool)storage[eventName]; else return false;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_4 = ___eventName0;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_3, L_4, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			V_0 = ((*(bool*)((bool*)(bool*)UnBox(L_5, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
			goto IL_0029;
		}

IL_0020_1:
		{
			// if (storage.ContainsKey(eventName)) return (bool)storage[eventName]; else return false;
			V_0 = (bool)0;
			goto IL_0029;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Single TigerForge.EventManager::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EventManager_GetFloat_m540972BF349DC7A6C5CBF52A89C2DC756373FD3B (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (storage.ContainsKey(eventName)) return (float)storage[eventName]; else return 0f;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_1 = ___eventName0;
			NullCheck(L_0);
			bool L_2;
			L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
			if (!L_2)
			{
				goto IL_0020_1;
			}
		}
		{
			// if (storage.ContainsKey(eventName)) return (float)storage[eventName]; else return 0f;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_4 = ___eventName0;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_3, L_4, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			V_0 = ((*(float*)((float*)(float*)UnBox(L_5, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
			goto IL_0031;
		}

IL_0020_1:
		{
			// if (storage.ContainsKey(eventName)) return (float)storage[eventName]; else return 0f;
			V_0 = (0.0f);
			goto IL_0031;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return 0f;
		V_0 = (0.0f);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}// end catch (depth: 1)

IL_0031:
	{
		// }
		float L_6 = V_0;
		return L_6;
	}
}
// System.String TigerForge.EventManager::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventManager_GetString_m4C8E4A2A0524F570155BAA51225191D11E1D848F (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (storage.ContainsKey(eventName)) return (string)storage[eventName]; else return "";
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_1 = ___eventName0;
			NullCheck(L_0);
			bool L_2;
			L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
			if (!L_2)
			{
				goto IL_0020_1;
			}
		}
		{
			// if (storage.ContainsKey(eventName)) return (string)storage[eventName]; else return "";
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3;
			String_t* L_4 = ___eventName0;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_3, L_4, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
			goto IL_0031;
		}

IL_0020_1:
		{
			// if (storage.ContainsKey(eventName)) return (string)storage[eventName]; else return "";
			V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			goto IL_0031;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return "";
		V_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}// end catch (depth: 1)

IL_0031:
	{
		// }
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Object TigerForge.EventManager::GetSender(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventManager_GetSender_m1B7A41AFA541BE2221708AE104624F52072828F8 (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (sender.ContainsKey(eventName)) return sender[eventName]; else return null;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
			String_t* L_1 = ___eventName0;
			NullCheck(L_0);
			bool L_2;
			L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
			if (!L_2)
			{
				goto IL_001b_1;
			}
		}
		{
			// if (sender.ContainsKey(eventName)) return sender[eventName]; else return null;
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1;
			String_t* L_4 = ___eventName0;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_3, L_4, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
			V_0 = L_5;
			goto IL_0024;
		}

IL_001b_1:
		{
			// if (sender.ContainsKey(eventName)) return sender[eventName]; else return null;
			V_0 = NULL;
			goto IL_0024;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001f;
		}
		throw e;
	}

CATCH_001f:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return null;
		V_0 = NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0024;
	}// end catch (depth: 1)

IL_0024:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// System.Void TigerForge.EventManager::SetDataGroup(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_SetDataGroup_m6CA20F0891096EAC9704013DDD52F2D074E1CD3B (String_t* ___eventName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m288AFAD22BF5CBC69A2FBB873CA97CBCB182E31F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m77238FB49980FDB19D8C00DFAF5101525704AC2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C8B230A7CD5F4EA6505E6ECD46B926C4398B66B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (storage3.ContainsKey(eventName)) { Debug.LogWarning(eventName + " Event name is already in use with DataGroup."); return; }
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage3_5;
		String_t* L_1 = ___eventName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E(L_0, L_1, Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (storage3.ContainsKey(eventName)) { Debug.LogWarning(eventName + " Event name is already in use with DataGroup."); return; }
		String_t* L_3 = ___eventName0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral8C8B230A7CD5F4EA6505E6ECD46B926C4398B66B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_4, NULL);
		// if (storage3.ContainsKey(eventName)) { Debug.LogWarning(eventName + " Event name is already in use with DataGroup."); return; }
		return;
	}

IL_001e:
	{
		// if (storage2.ContainsKey(eventName)) storage2[eventName] = data; else storage2.Add(eventName, data);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* L_5 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage2_4;
		String_t* L_6 = ___eventName0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3(L_5, L_6, Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// if (storage2.ContainsKey(eventName)) storage2[eventName] = data; else storage2.Add(eventName, data);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* L_8 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage2_4;
		String_t* L_9 = ___eventName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___data1;
		NullCheck(L_8);
		Dictionary_2_set_Item_m77238FB49980FDB19D8C00DFAF5101525704AC2E(L_8, L_9, L_10, Dictionary_2_set_Item_m77238FB49980FDB19D8C00DFAF5101525704AC2E_RuntimeMethod_var);
		return;
	}

IL_0038:
	{
		// if (storage2.ContainsKey(eventName)) storage2[eventName] = data; else storage2.Add(eventName, data);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* L_11 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage2_4;
		String_t* L_12 = ___eventName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___data1;
		NullCheck(L_11);
		Dictionary_2_Add_m288AFAD22BF5CBC69A2FBB873CA97CBCB182E31F(L_11, L_12, L_13, Dictionary_2_Add_m288AFAD22BF5CBC69A2FBB873CA97CBCB182E31F_RuntimeMethod_var);
		// }
		return;
	}
}
// TigerForge.EventManager/DataGroup[] TigerForge.EventManager::GetDataGroup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* EventManager_GetDataGroup_m653F862214A47A7FA934640047E1B1B4E5DBB41B (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFDD8CA65E81A5F71ABA6FAEC4F48611B0D9B15D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* V_1 = NULL;
	int32_t V_2 = 0;
	DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (storage2.ContainsKey(eventName))
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage2_4;
		String_t* L_1 = ___eventName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3(L_0, L_1, Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		// var strg = storage2[eventName];
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage2_4;
		String_t* L_4 = ___eventName0;
		NullCheck(L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Dictionary_2_get_Item_mFDD8CA65E81A5F71ABA6FAEC4F48611B0D9B15D0(L_3, L_4, Dictionary_2_get_Item_mFDD8CA65E81A5F71ABA6FAEC4F48611B0D9B15D0_RuntimeMethod_var);
		V_0 = L_5;
		// DataGroup[] objList = new DataGroup[strg.Length];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		NullCheck(L_6);
		DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* L_7 = (DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D*)(DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D*)SZArrayNew(DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		V_1 = L_7;
		// for (var i = 0; i < strg.Length; i++)
		V_2 = 0;
		goto IL_0044;
	}

IL_0026:
	{
		// objList[i] = new DataGroup { data = strg[i] };
		DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* L_8 = V_1;
		int32_t L_9 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		(&V_3)->___data_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___data_0), (void*)L_13);
		DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 L_14 = V_3;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0)L_14);
		// for (var i = 0; i < strg.Length; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0044:
	{
		// for (var i = 0; i < strg.Length; i++)
		int32_t L_16 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		// return objList;
		DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* L_18 = V_1;
		return L_18;
	}

IL_004c:
	{
		// return null;
		return (DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D*)NULL;
	}
}
// System.Void TigerForge.EventManager::SetIndexedDataGroup(System.String,TigerForge.EventManager/DataGroup[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_SetIndexedDataGroup_m9FE3E424687255AEB578DC1A53237408A6966C35 (String_t* ___eventName0, DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2E77CE5F37659706F26A886F903A6A1FE8A3C60B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m6E8FF6CE485A2DF87B7A73202FA124CD4B09CA78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C8B230A7CD5F4EA6505E6ECD46B926C4398B66B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (storage2.ContainsKey(eventName)) { Debug.LogWarning(eventName + " Event name is already in use with DataGroup."); return; }
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage2_4;
		String_t* L_1 = ___eventName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3(L_0, L_1, Dictionary_2_ContainsKey_m1BA7DB31438265424F70B68695C27BE9C74296F3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (storage2.ContainsKey(eventName)) { Debug.LogWarning(eventName + " Event name is already in use with DataGroup."); return; }
		String_t* L_3 = ___eventName0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral8C8B230A7CD5F4EA6505E6ECD46B926C4398B66B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_4, NULL);
		// if (storage2.ContainsKey(eventName)) { Debug.LogWarning(eventName + " Event name is already in use with DataGroup."); return; }
		return;
	}

IL_001e:
	{
		// if (storage3.ContainsKey(eventName)) storage3[eventName] = data; else storage3.Add(eventName, data);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* L_5 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage3_5;
		String_t* L_6 = ___eventName0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E(L_5, L_6, Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// if (storage3.ContainsKey(eventName)) storage3[eventName] = data; else storage3.Add(eventName, data);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* L_8 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage3_5;
		String_t* L_9 = ___eventName0;
		DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* L_10 = ___data1;
		NullCheck(L_8);
		Dictionary_2_set_Item_m6E8FF6CE485A2DF87B7A73202FA124CD4B09CA78(L_8, L_9, L_10, Dictionary_2_set_Item_m6E8FF6CE485A2DF87B7A73202FA124CD4B09CA78_RuntimeMethod_var);
		return;
	}

IL_0038:
	{
		// if (storage3.ContainsKey(eventName)) storage3[eventName] = data; else storage3.Add(eventName, data);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* L_11 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage3_5;
		String_t* L_12 = ___eventName0;
		DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* L_13 = ___data1;
		NullCheck(L_11);
		Dictionary_2_Add_m2E77CE5F37659706F26A886F903A6A1FE8A3C60B(L_11, L_12, L_13, Dictionary_2_Add_m2E77CE5F37659706F26A886F903A6A1FE8A3C60B_RuntimeMethod_var);
		// }
		return;
	}
}
// TigerForge.EventManager/IndexedDataGroup TigerForge.EventManager::GetIndexedDataGroup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0 EventManager_GetIndexedDataGroup_mE3F36005DAAA1416C32B1DA80A7211A522F5DCAD (String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD02A1440C1186E58166E85A533C8CD45470E876A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* V_0 = NULL;
	IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (storage3.ContainsKey(eventName))
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* L_0 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage3_5;
		String_t* L_1 = ___eventName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E(L_0, L_1, Dictionary_2_ContainsKey_m2773D0EBC1C7C5F685287A27894562908B1EE70E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// var strg = storage3[eventName];
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* L_3 = ((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage3_5;
		String_t* L_4 = ___eventName0;
		NullCheck(L_3);
		DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* L_5;
		L_5 = Dictionary_2_get_Item_mD02A1440C1186E58166E85A533C8CD45470E876A(L_3, L_4, Dictionary_2_get_Item_mD02A1440C1186E58166E85A533C8CD45470E876A_RuntimeMethod_var);
		V_0 = L_5;
		// IndexedDataGroup data = new IndexedDataGroup();
		il2cpp_codegen_initobj((&V_1), sizeof(IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0));
		// data.data = strg;
		DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* L_6 = V_0;
		(&V_1)->___data_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___data_0), (void*)L_6);
		// return data;
		IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0 L_7 = V_1;
		return L_7;
	}

IL_002b:
	{
		// return new IndexedDataGroup();
		il2cpp_codegen_initobj((&V_2), sizeof(IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0));
		IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0 L_8 = V_2;
		return L_8;
	}
}
// System.Void TigerForge.EventManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager__ctor_m34D08FE62F82C1FEE2ED76C2F0A44B81CCD18D32 (EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void TigerForge.EventManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager__cctor_m9E1A5D4D5ABC48DD06A3EE9490AFB63B80664A22 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m02F631C76B562E4106CA7DAA78F0D1464A6CA6D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9493A128ED8728998985F634649EC7082B4E1FA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCA03B9791BB3682B20E4044DCD46CAC0E7E8A379_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<string, UnityEvent> eventDictionary = new Dictionary<string, UnityEvent>();
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_0 = (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050*)il2cpp_codegen_object_new(Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E(L_0, Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___eventDictionary_0), (void*)L_0);
		// private static Dictionary<string, object> sender = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_1, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___sender_1), (void*)L_1);
		// private static Dictionary<string, bool> paused = new Dictionary<string, bool>();
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_2 = (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C*)il2cpp_codegen_object_new(Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D(L_2, Dictionary_2__ctor_mB1DEDB98863C609565E181823298E467E110B43D_RuntimeMethod_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___paused_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___paused_2), (void*)L_2);
		// private static Dictionary<string, object> storage = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_3, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage_3), (void*)L_3);
		// private static Dictionary<string, object[]> storage2 = new Dictionary<string, object[]>();
		Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8* L_4 = (Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8*)il2cpp_codegen_object_new(Dictionary_2_tA41DD29071799B26DD0BAFB1713D5C83DC2851C8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m02F631C76B562E4106CA7DAA78F0D1464A6CA6D7(L_4, Dictionary_2__ctor_m02F631C76B562E4106CA7DAA78F0D1464A6CA6D7_RuntimeMethod_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage2_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage2_4), (void*)L_4);
		// private static Dictionary<string, DataGroup[]> storage3 = new Dictionary<string, DataGroup[]>();
		Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31* L_5 = (Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31*)il2cpp_codegen_object_new(Dictionary_2_tADF464ACC149FC5869E8FD7CCBF2BE859A87DA31_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_mCA03B9791BB3682B20E4044DCD46CAC0E7E8A379(L_5, Dictionary_2__ctor_mCA03B9791BB3682B20E4044DCD46CAC0E7E8A379_RuntimeMethod_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage3_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___storage3_5), (void*)L_5);
		// private static Dictionary<string, UnityAction> callBacks = new Dictionary<string, UnityAction>();
		Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1* L_6 = (Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1*)il2cpp_codegen_object_new(Dictionary_2_tBC931C2A0E456639158BC8EF57AF362CA5DA8DB1_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m9493A128ED8728998985F634649EC7082B4E1FA3(L_6, Dictionary_2__ctor_m9493A128ED8728998985F634649EC7082B4E1FA3_RuntimeMethod_var);
		((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___callBacks_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_StaticFields*)il2cpp_codegen_static_fields_for(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var))->___callBacks_6), (void*)L_6);
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
// Conversion methods for marshalling of: TigerForge.EventManager/SFilter
IL2CPP_EXTERN_C void SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshal_pinvoke(const SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3& unmarshaled, SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshaled_pinvoke& marshaled)
{
	marshaled.___value_0 = il2cpp_codegen_marshal_string(unmarshaled.___value_0);
	marshaled.___starts_1 = static_cast<int32_t>(unmarshaled.___starts_1);
	marshaled.___ends_2 = static_cast<int32_t>(unmarshaled.___ends_2);
	marshaled.___contains_3 = static_cast<int32_t>(unmarshaled.___contains_3);
	marshaled.___exact_4 = static_cast<int32_t>(unmarshaled.___exact_4);
}
IL2CPP_EXTERN_C void SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshal_pinvoke_back(const SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshaled_pinvoke& marshaled, SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3& unmarshaled)
{
	unmarshaled.___value_0 = il2cpp_codegen_marshal_string_result(marshaled.___value_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___value_0));
	bool unmarshaledstarts_temp_1 = false;
	unmarshaledstarts_temp_1 = static_cast<bool>(marshaled.___starts_1);
	unmarshaled.___starts_1 = unmarshaledstarts_temp_1;
	bool unmarshaledends_temp_2 = false;
	unmarshaledends_temp_2 = static_cast<bool>(marshaled.___ends_2);
	unmarshaled.___ends_2 = unmarshaledends_temp_2;
	bool unmarshaledcontains_temp_3 = false;
	unmarshaledcontains_temp_3 = static_cast<bool>(marshaled.___contains_3);
	unmarshaled.___contains_3 = unmarshaledcontains_temp_3;
	bool unmarshaledexact_temp_4 = false;
	unmarshaledexact_temp_4 = static_cast<bool>(marshaled.___exact_4);
	unmarshaled.___exact_4 = unmarshaledexact_temp_4;
}
// Conversion method for clean up from marshalling of: TigerForge.EventManager/SFilter
IL2CPP_EXTERN_C void SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshal_pinvoke_cleanup(SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___value_0);
	marshaled.___value_0 = NULL;
}
// Conversion methods for marshalling of: TigerForge.EventManager/SFilter
IL2CPP_EXTERN_C void SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshal_com(const SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3& unmarshaled, SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshaled_com& marshaled)
{
	marshaled.___value_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___value_0);
	marshaled.___starts_1 = static_cast<int32_t>(unmarshaled.___starts_1);
	marshaled.___ends_2 = static_cast<int32_t>(unmarshaled.___ends_2);
	marshaled.___contains_3 = static_cast<int32_t>(unmarshaled.___contains_3);
	marshaled.___exact_4 = static_cast<int32_t>(unmarshaled.___exact_4);
}
IL2CPP_EXTERN_C void SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshal_com_back(const SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshaled_com& marshaled, SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3& unmarshaled)
{
	unmarshaled.___value_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___value_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___value_0));
	bool unmarshaledstarts_temp_1 = false;
	unmarshaledstarts_temp_1 = static_cast<bool>(marshaled.___starts_1);
	unmarshaled.___starts_1 = unmarshaledstarts_temp_1;
	bool unmarshaledends_temp_2 = false;
	unmarshaledends_temp_2 = static_cast<bool>(marshaled.___ends_2);
	unmarshaled.___ends_2 = unmarshaledends_temp_2;
	bool unmarshaledcontains_temp_3 = false;
	unmarshaledcontains_temp_3 = static_cast<bool>(marshaled.___contains_3);
	unmarshaled.___contains_3 = unmarshaledcontains_temp_3;
	bool unmarshaledexact_temp_4 = false;
	unmarshaledexact_temp_4 = static_cast<bool>(marshaled.___exact_4);
	unmarshaled.___exact_4 = unmarshaledexact_temp_4;
}
// Conversion method for clean up from marshalling of: TigerForge.EventManager/SFilter
IL2CPP_EXTERN_C void SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshal_com_cleanup(SFilter_t872D08F415A731268D6B017EB96EEBAE5D5D34D3_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___value_0);
	marshaled.___value_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TigerForge.EventManager/DataGroup
IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_pinvoke(const DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0& unmarshaled, DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___data_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___data_0))
		{
			marshaled.___data_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___data_0));
			(marshaled.___data_0)->AddRef();
		}
		else
		{
			marshaled.___data_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___data_0);
		}
	}
	else
	{
		marshaled.___data_0 = NULL;
	}
	marshaled.___id_1 = il2cpp_codegen_marshal_string(unmarshaled.___id_1);
}
IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_pinvoke_back(const DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_pinvoke& marshaled, DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___data_0 != NULL)
	{
		unmarshaled.___data_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___data_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___data_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___data_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___data_0), Il2CppIUnknown::IID, marshaled.___data_0);
		}
	}
	else
	{
		unmarshaled.___data_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_0), (void*)NULL);
	}
	unmarshaled.___id_1 = il2cpp_codegen_marshal_string_result(marshaled.___id_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___id_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___id_1));
}
// Conversion method for clean up from marshalling of: TigerForge.EventManager/DataGroup
IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_pinvoke_cleanup(DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_pinvoke& marshaled)
{
	if (marshaled.___data_0 != NULL)
	{
		(marshaled.___data_0)->Release();
		marshaled.___data_0 = NULL;
	}
	il2cpp_codegen_marshal_free(marshaled.___id_1);
	marshaled.___id_1 = NULL;
}
// Conversion methods for marshalling of: TigerForge.EventManager/DataGroup
IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_com(const DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0& unmarshaled, DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_com& marshaled)
{
	if (unmarshaled.___data_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___data_0))
		{
			marshaled.___data_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___data_0));
			(marshaled.___data_0)->AddRef();
		}
		else
		{
			marshaled.___data_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___data_0);
		}
	}
	else
	{
		marshaled.___data_0 = NULL;
	}
	marshaled.___id_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___id_1);
}
IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_com_back(const DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_com& marshaled, DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___data_0 != NULL)
	{
		unmarshaled.___data_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___data_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___data_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___data_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___data_0), Il2CppIUnknown::IID, marshaled.___data_0);
		}
	}
	else
	{
		unmarshaled.___data_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_0), (void*)NULL);
	}
	unmarshaled.___id_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___id_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___id_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___id_1));
}
// Conversion method for clean up from marshalling of: TigerForge.EventManager/DataGroup
IL2CPP_EXTERN_C void DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_com_cleanup(DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_com& marshaled)
{
	if (marshaled.___data_0 != NULL)
	{
		(marshaled.___data_0)->Release();
		marshaled.___data_0 = NULL;
	}
	il2cpp_codegen_marshal_free_bstring(marshaled.___id_1);
	marshaled.___id_1 = NULL;
}
// UnityEngine.GameObject TigerForge.EventManager/DataGroup::ToGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DataGroup_ToGameObject_mD73EB8C7269DF2A402594E9CD0622E9B7EFFECEF (DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return (GameObject)data;
		RuntimeObject* L_0 = __this->___data_0;
		V_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		goto IL_0013;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return null;
		V_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0013;
	}// end catch (depth: 1)

IL_0013:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DataGroup_ToGameObject_mD73EB8C7269DF2A402594E9CD0622E9B7EFFECEF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0*>(__this + _offset);
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* _returnValue;
	_returnValue = DataGroup_ToGameObject_mD73EB8C7269DF2A402594E9CD0622E9B7EFFECEF(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 TigerForge.EventManager/DataGroup::ToInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataGroup_ToInt_mDE1E1B78B567E281FED78FB5AE1CF0AFDC2D48AD (DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return (int)data;
		RuntimeObject* L_0 = __this->___data_0;
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_0013;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return 0;
		V_0 = 0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0013;
	}// end catch (depth: 1)

IL_0013:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t DataGroup_ToInt_mDE1E1B78B567E281FED78FB5AE1CF0AFDC2D48AD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DataGroup_ToInt_mDE1E1B78B567E281FED78FB5AE1CF0AFDC2D48AD(_thisAdjusted, method);
	return _returnValue;
}
// System.Single TigerForge.EventManager/DataGroup::ToFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DataGroup_ToFloat_m85B1184DD5C225B193E3B7D7004E51489F70AC50 (DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return (float)data;
		RuntimeObject* L_0 = __this->___data_0;
		V_0 = ((*(float*)((float*)(float*)UnBox(L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		goto IL_0017;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return 0f;
		V_0 = (0.0f);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0017;
	}// end catch (depth: 1)

IL_0017:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float DataGroup_ToFloat_m85B1184DD5C225B193E3B7D7004E51489F70AC50_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0*>(__this + _offset);
	float _returnValue;
	_returnValue = DataGroup_ToFloat_m85B1184DD5C225B193E3B7D7004E51489F70AC50(_thisAdjusted, method);
	return _returnValue;
}
// System.String TigerForge.EventManager/DataGroup::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataGroup_ToString_m52893B7A19664ED905C99F59AB97B78CAF8FE71E (DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return (string)data;
		RuntimeObject* L_0 = __this->___data_0;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		goto IL_0017;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return "";
		V_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0017;
	}// end catch (depth: 1)

IL_0017:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* DataGroup_ToString_m52893B7A19664ED905C99F59AB97B78CAF8FE71E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = DataGroup_ToString_m52893B7A19664ED905C99F59AB97B78CAF8FE71E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean TigerForge.EventManager/DataGroup::ToBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataGroup_ToBool_m8ED428F5D774C3A5361060EB7A0E337956B6EA32 (DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return (bool)data;
		RuntimeObject* L_0 = __this->___data_0;
		V_0 = ((*(bool*)((bool*)(bool*)UnBox(L_0, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		goto IL_0013;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0013;
	}// end catch (depth: 1)

IL_0013:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool DataGroup_ToBool_m8ED428F5D774C3A5361060EB7A0E337956B6EA32_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0*>(__this + _offset);
	bool _returnValue;
	_returnValue = DataGroup_ToBool_m8ED428F5D774C3A5361060EB7A0E337956B6EA32(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: TigerForge.EventManager/IndexedDataGroup
IL2CPP_EXTERN_C void IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshal_pinvoke(const IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0& unmarshaled, IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___data_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaleddata_Length = (unmarshaled.___data_0)->max_length;
		marshaled.___data_0 = il2cpp_codegen_marshal_allocate_array<DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_pinvoke>(_unmarshaleddata_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaleddata_Length); i++)
		{
			DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_pinvoke((unmarshaled.___data_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___data_0)[i]);
		}
	}
	else
	{
		marshaled.___data_0 = NULL;
	}
	if (unmarshaled.___objectData_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___objectData_1))
		{
			marshaled.___objectData_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___objectData_1));
			(marshaled.___objectData_1)->AddRef();
		}
		else
		{
			marshaled.___objectData_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___objectData_1);
		}
	}
	else
	{
		marshaled.___objectData_1 = NULL;
	}
}
IL2CPP_EXTERN_C void IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshal_pinvoke_back(const IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshaled_pinvoke& marshaled, IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___data_0 != NULL)
	{
		if (unmarshaled.___data_0 == NULL)
		{
			unmarshaled.___data_0 = reinterpret_cast<DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D*>((DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D*)SZArrayNew(DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_0), (void*)reinterpret_cast<DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D*>((DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D*)SZArrayNew(DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___data_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 _marshaled____data_0_i__unmarshaled;
			memset((&_marshaled____data_0_i__unmarshaled), 0, sizeof(_marshaled____data_0_i__unmarshaled));
			DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_pinvoke_back((marshaled.___data_0)[i], _marshaled____data_0_i__unmarshaled);
			(unmarshaled.___data_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____data_0_i__unmarshaled);
		}
	}
	if (marshaled.___objectData_1 != NULL)
	{
		unmarshaled.___objectData_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___objectData_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___objectData_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___objectData_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___objectData_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___objectData_1), Il2CppIUnknown::IID, marshaled.___objectData_1);
		}
	}
	else
	{
		unmarshaled.___objectData_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___objectData_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: TigerForge.EventManager/IndexedDataGroup
IL2CPP_EXTERN_C void IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshal_pinvoke_cleanup(IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshaled_pinvoke& marshaled)
{
	if (marshaled.___data_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____data_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____data_0_CleanupLoopCount); i++)
		{
			DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_pinvoke_cleanup((marshaled.___data_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___data_0);
		marshaled.___data_0 = NULL;
	}
	if (marshaled.___objectData_1 != NULL)
	{
		(marshaled.___objectData_1)->Release();
		marshaled.___objectData_1 = NULL;
	}
}


// Conversion methods for marshalling of: TigerForge.EventManager/IndexedDataGroup
IL2CPP_EXTERN_C void IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshal_com(const IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0& unmarshaled, IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshaled_com& marshaled)
{
	if (unmarshaled.___data_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaleddata_Length = (unmarshaled.___data_0)->max_length;
		marshaled.___data_0 = il2cpp_codegen_marshal_allocate_array<DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshaled_com>(_unmarshaleddata_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaleddata_Length); i++)
		{
			DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_com((unmarshaled.___data_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___data_0)[i]);
		}
	}
	else
	{
		marshaled.___data_0 = NULL;
	}
	if (unmarshaled.___objectData_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___objectData_1))
		{
			marshaled.___objectData_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___objectData_1));
			(marshaled.___objectData_1)->AddRef();
		}
		else
		{
			marshaled.___objectData_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___objectData_1);
		}
	}
	else
	{
		marshaled.___objectData_1 = NULL;
	}
}
IL2CPP_EXTERN_C void IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshal_com_back(const IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshaled_com& marshaled, IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___data_0 != NULL)
	{
		if (unmarshaled.___data_0 == NULL)
		{
			unmarshaled.___data_0 = reinterpret_cast<DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D*>((DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D*)SZArrayNew(DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_0), (void*)reinterpret_cast<DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D*>((DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D*)SZArrayNew(DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___data_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 _marshaled____data_0_i__unmarshaled;
			memset((&_marshaled____data_0_i__unmarshaled), 0, sizeof(_marshaled____data_0_i__unmarshaled));
			DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_com_back((marshaled.___data_0)[i], _marshaled____data_0_i__unmarshaled);
			(unmarshaled.___data_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____data_0_i__unmarshaled);
		}
	}
	if (marshaled.___objectData_1 != NULL)
	{
		unmarshaled.___objectData_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___objectData_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___objectData_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___objectData_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___objectData_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___objectData_1), Il2CppIUnknown::IID, marshaled.___objectData_1);
		}
	}
	else
	{
		unmarshaled.___objectData_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___objectData_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: TigerForge.EventManager/IndexedDataGroup
IL2CPP_EXTERN_C void IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshal_com_cleanup(IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0_marshaled_com& marshaled)
{
	if (marshaled.___data_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____data_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____data_0_CleanupLoopCount); i++)
		{
			DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0_marshal_com_cleanup((marshaled.___data_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___data_0);
		marshaled.___data_0 = NULL;
	}
	if (marshaled.___objectData_1 != NULL)
	{
		(marshaled.___objectData_1)->Release();
		marshaled.___objectData_1 = NULL;
	}
}
// System.Object TigerForge.EventManager/IndexedDataGroup::GetObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedDataGroup_GetObject_m7D153C46236410AA006E287007BFBA92F28AD89C (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	{
		// return null;
		return NULL;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* IndexedDataGroup_GetObject_m7D153C46236410AA006E287007BFBA92F28AD89C_AdjustorThunk (RuntimeObject* __this, String_t* ___id0, const RuntimeMethod* method)
{
	IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = IndexedDataGroup_GetObject_m7D153C46236410AA006E287007BFBA92F28AD89C(_thisAdjusted, ___id0, method);
	return _returnValue;
}
// UnityEngine.GameObject TigerForge.EventManager/IndexedDataGroup::ToGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* IndexedDataGroup_ToGameObject_m9B4BC97F10B456E108FCE901BEBB260B15D15B4C (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// objectData = Find(id);
		String_t* L_0 = ___id0;
		RuntimeObject* L_1;
		L_1 = IndexedDataGroup_Find_m085900BD563CD6316781D7768ED871851C404D09(__this, L_0, NULL);
		__this->___objectData_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectData_1), (void*)L_1);
	}
	try
	{// begin try (depth: 1)
		// return (GameObject)objectData;
		RuntimeObject* L_2 = __this->___objectData_1;
		V_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		throw e;
	}

CATCH_001b:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return null;
		V_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0020;
	}// end catch (depth: 1)

IL_0020:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* IndexedDataGroup_ToGameObject_m9B4BC97F10B456E108FCE901BEBB260B15D15B4C_AdjustorThunk (RuntimeObject* __this, String_t* ___id0, const RuntimeMethod* method)
{
	IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0*>(__this + _offset);
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* _returnValue;
	_returnValue = IndexedDataGroup_ToGameObject_m9B4BC97F10B456E108FCE901BEBB260B15D15B4C(_thisAdjusted, ___id0, method);
	return _returnValue;
}
// System.Int32 TigerForge.EventManager/IndexedDataGroup::ToInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedDataGroup_ToInt_m5A53D3C942361756C4684BE5DE054C0D495F6400 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// objectData = Find(id);
		String_t* L_0 = ___id0;
		RuntimeObject* L_1;
		L_1 = IndexedDataGroup_Find_m085900BD563CD6316781D7768ED871851C404D09(__this, L_0, NULL);
		__this->___objectData_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectData_1), (void*)L_1);
	}
	try
	{// begin try (depth: 1)
		// return (int)objectData;
		RuntimeObject* L_2 = __this->___objectData_1;
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		throw e;
	}

CATCH_001b:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return 0;
		V_0 = 0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0020;
	}// end catch (depth: 1)

IL_0020:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t IndexedDataGroup_ToInt_m5A53D3C942361756C4684BE5DE054C0D495F6400_AdjustorThunk (RuntimeObject* __this, String_t* ___id0, const RuntimeMethod* method)
{
	IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = IndexedDataGroup_ToInt_m5A53D3C942361756C4684BE5DE054C0D495F6400(_thisAdjusted, ___id0, method);
	return _returnValue;
}
// System.Single TigerForge.EventManager/IndexedDataGroup::ToFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IndexedDataGroup_ToFloat_m4A07C9469811D778E22414A262D4076E6D5562A2 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// objectData = Find(id);
		String_t* L_0 = ___id0;
		RuntimeObject* L_1;
		L_1 = IndexedDataGroup_Find_m085900BD563CD6316781D7768ED871851C404D09(__this, L_0, NULL);
		__this->___objectData_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectData_1), (void*)L_1);
	}
	try
	{// begin try (depth: 1)
		// return (float)objectData;
		RuntimeObject* L_2 = __this->___objectData_1;
		V_0 = ((*(float*)((float*)(float*)UnBox(L_2, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		goto IL_0024;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		throw e;
	}

CATCH_001b:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return 0f;
		V_0 = (0.0f);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0024;
	}// end catch (depth: 1)

IL_0024:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  float IndexedDataGroup_ToFloat_m4A07C9469811D778E22414A262D4076E6D5562A2_AdjustorThunk (RuntimeObject* __this, String_t* ___id0, const RuntimeMethod* method)
{
	IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0*>(__this + _offset);
	float _returnValue;
	_returnValue = IndexedDataGroup_ToFloat_m4A07C9469811D778E22414A262D4076E6D5562A2(_thisAdjusted, ___id0, method);
	return _returnValue;
}
// System.String TigerForge.EventManager/IndexedDataGroup::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IndexedDataGroup_ToString_m51D58DAEEE128D819CA53D807CA92AB595C0DC65 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// objectData = Find(id);
		String_t* L_0 = ___id0;
		RuntimeObject* L_1;
		L_1 = IndexedDataGroup_Find_m085900BD563CD6316781D7768ED871851C404D09(__this, L_0, NULL);
		__this->___objectData_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectData_1), (void*)L_1);
	}
	try
	{// begin try (depth: 1)
		// return (string)objectData;
		RuntimeObject* L_2 = __this->___objectData_1;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		goto IL_0024;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		throw e;
	}

CATCH_001b:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return "";
		V_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0024;
	}// end catch (depth: 1)

IL_0024:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* IndexedDataGroup_ToString_m51D58DAEEE128D819CA53D807CA92AB595C0DC65_AdjustorThunk (RuntimeObject* __this, String_t* ___id0, const RuntimeMethod* method)
{
	IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = IndexedDataGroup_ToString_m51D58DAEEE128D819CA53D807CA92AB595C0DC65(_thisAdjusted, ___id0, method);
	return _returnValue;
}
// System.Boolean TigerForge.EventManager/IndexedDataGroup::ToBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedDataGroup_ToBool_m64F9A8393B21D7BEDF8B71E2A512BF3A691C7B40 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// objectData = Find(id);
		String_t* L_0 = ___id0;
		RuntimeObject* L_1;
		L_1 = IndexedDataGroup_Find_m085900BD563CD6316781D7768ED871851C404D09(__this, L_0, NULL);
		__this->___objectData_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectData_1), (void*)L_1);
	}
	try
	{// begin try (depth: 1)
		// return (bool)objectData;
		RuntimeObject* L_2 = __this->___objectData_1;
		V_0 = ((*(bool*)((bool*)(bool*)UnBox(L_2, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		throw e;
	}

CATCH_001b:
	{// begin catch(System.Exception)
		// catch (System.Exception)
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0020;
	}// end catch (depth: 1)

IL_0020:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool IndexedDataGroup_ToBool_m64F9A8393B21D7BEDF8B71E2A512BF3A691C7B40_AdjustorThunk (RuntimeObject* __this, String_t* ___id0, const RuntimeMethod* method)
{
	IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0*>(__this + _offset);
	bool _returnValue;
	_returnValue = IndexedDataGroup_ToBool_m64F9A8393B21D7BEDF8B71E2A512BF3A691C7B40(_thisAdjusted, ___id0, method);
	return _returnValue;
}
// System.Boolean TigerForge.EventManager/IndexedDataGroup::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedDataGroup_IsEmpty_mD70FD0609934B8C4901B2A5406509DF41448BB65 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, const RuntimeMethod* method) 
{
	{
		// return data.Length == 0;
		DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* L_0 = __this->___data_0;
		NullCheck(L_0);
		return (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool IndexedDataGroup_IsEmpty_mD70FD0609934B8C4901B2A5406509DF41448BB65_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0*>(__this + _offset);
	bool _returnValue;
	_returnValue = IndexedDataGroup_IsEmpty_mD70FD0609934B8C4901B2A5406509DF41448BB65(_thisAdjusted, method);
	return _returnValue;
}
// System.Object TigerForge.EventManager/IndexedDataGroup::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedDataGroup_Find_m085900BD563CD6316781D7768ED871851C404D09 (IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* V_0 = NULL;
	int32_t V_1 = 0;
	DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// foreach (var obj in data) if (obj.id == id) return obj.data;
		DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* L_0 = __this->___data_0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_000b:
	{
		// foreach (var obj in data) if (obj.id == id) return obj.data;
		DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// foreach (var obj in data) if (obj.id == id) return obj.data;
		DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 L_5 = V_2;
		String_t* L_6 = L_5.___id_1;
		String_t* L_7 = ___id0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0028;
		}
	}
	{
		// foreach (var obj in data) if (obj.id == id) return obj.data;
		DataGroup_tF6CCDE2C50B3C0E2810318F11AA011DAF87C55E0 L_9 = V_2;
		RuntimeObject* L_10 = L_9.___data_0;
		return L_10;
	}

IL_0028:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002c:
	{
		// foreach (var obj in data) if (obj.id == id) return obj.data;
		int32_t L_12 = V_1;
		DataGroupU5BU5D_tF63649EF4F2A5EED960074CBD62E2F3E5CA1013D* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return NULL;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* IndexedDataGroup_Find_m085900BD563CD6316781D7768ED871851C404D09_AdjustorThunk (RuntimeObject* __this, String_t* ___id0, const RuntimeMethod* method)
{
	IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IndexedDataGroup_t8030D5E94CC89A06335158FECED8A6C0A65767F0*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = IndexedDataGroup_Find_m085900BD563CD6316781D7768ED871851C404D09(_thisAdjusted, ___id0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TigerForge.EventManager/<DelayedInvoke>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedInvokeU3Ed__20_MoveNext_mC0B538CD13462825514D9B7E733BBBDA1F8F2B10 (U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483_m516FA81A6D3A39A6964D7736712C4DE8479D33BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0044_1;
			}
		}
		{
			// await Task.Delay(delay);
			int32_t L_2 = __this->___delay_2;
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
			L_3 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(L_2, NULL);
			NullCheck(L_3);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_4;
			L_4 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_3, NULL);
			V_1 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_5)
			{
				goto IL_0060_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___U3CU3E1__state_0 = L_6;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_7 = V_1;
			__this->___U3CU3Eu__1_4 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_8 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483_m516FA81A6D3A39A6964D7736712C4DE8479D33BF(L_8, (&V_1), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483_m516FA81A6D3A39A6964D7736712C4DE8479D33BF_RuntimeMethod_var);
			goto IL_009e;
		}

IL_0044_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = __this->___U3CU3Eu__1_4;
			V_1 = L_9;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_10 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0060_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			// thisEvent.Invoke();
			UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = __this->___thisEvent_3;
			NullCheck(L_12);
			UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_12, NULL);
			goto IL_008b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0074;
		}
		throw e;
	}

CATCH_0074:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_13 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_14 = V_2;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_13, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009e;
	}// end catch (depth: 1)

IL_008b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_15 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_15, NULL);
	}

IL_009e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDelayedInvokeU3Ed__20_MoveNext_mC0B538CD13462825514D9B7E733BBBDA1F8F2B10_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483*>(__this + _offset);
	U3CDelayedInvokeU3Ed__20_MoveNext_mC0B538CD13462825514D9B7E733BBBDA1F8F2B10(_thisAdjusted, method);
}
// System.Void TigerForge.EventManager/<DelayedInvoke>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedInvokeU3Ed__20_SetStateMachine_mC143BBBC675AE1CE0758DD69DC9CE36FC7352D85 (U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDelayedInvokeU3Ed__20_SetStateMachine_mC143BBBC675AE1CE0758DD69DC9CE36FC7352D85_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDelayedInvokeU3Ed__20_t2301DF58C62F88E0F972D75D9E1D0FFA331B7483*>(__this + _offset);
	U3CDelayedInvokeU3Ed__20_SetStateMachine_mC143BBBC675AE1CE0758DD69DC9CE36FC7352D85(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TigerForge.EventsGroup::Add(System.String,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsGroup_Add_m637D6164BBEAFDF545E8EFE000D405557D5B2464 (EventsGroup_t5677B50916BF3A15DBC7D75494C3FC1D43FAE003* __this, String_t* ___eventName0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callBack1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD6814902859A771E33EF62D0829DC9F23F1D3A58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// group.Add(new SEvent { name = eventName, callBack = callBack });
		List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* L_0 = __this->___group_0;
		il2cpp_codegen_initobj((&V_0), sizeof(SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2));
		String_t* L_1 = ___eventName0;
		(&V_0)->___name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___name_0), (void*)L_1);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = ___callBack1;
		(&V_0)->___callBack_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___callBack_1), (void*)L_2);
		SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_3 = V_0;
		NullCheck(L_0);
		List_1_Add_mD6814902859A771E33EF62D0829DC9F23F1D3A58_inline(L_0, L_3, List_1_Add_mD6814902859A771E33EF62D0829DC9F23F1D3A58_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TigerForge.EventsGroup::StartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsGroup_StartListening_m072F12B817D4B733A2A65786A404B48C5E3A19A8 (EventsGroup_t5677B50916BF3A15DBC7D75494C3FC1D43FAE003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (SEvent g in group)
		List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* L_0 = __this->___group_0;
		NullCheck(L_0);
		Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974 L_1;
		L_1 = List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D(L_0, List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10((&V_0), Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002c_1;
			}

IL_000e_1:
			{
				// foreach (SEvent g in group)
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_2;
				L_2 = Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_inline((&V_0), Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_RuntimeMethod_var);
				V_1 = L_2;
				// EventManager.StartListening(g.name, g.callBack);
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_3 = V_1;
				String_t* L_4 = L_3.___name_0;
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_5 = V_1;
				UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5.___callBack_1;
				il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
				EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(L_4, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			}

IL_002c_1:
			{
				// foreach (SEvent g in group)
				bool L_7;
				L_7 = Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C((&V_0), Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0045;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void TigerForge.EventsGroup::StopListening(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsGroup_StopListening_m28F2D99A1732986274D731B431C862331AF5C550 (EventsGroup_t5677B50916BF3A15DBC7D75494C3FC1D43FAE003* __this, String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD6814902859A771E33EF62D0829DC9F23F1D3A58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42D0BA4F00EE61A728D7D8FC8FF29427C1512A9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* V_2 = NULL;
	SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (eventName == "")
		String_t* L_0 = ___eventName0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// foreach (SEvent g in group)
		List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* L_2 = __this->___group_0;
		NullCheck(L_2);
		Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974 L_3;
		L_3 = List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D(L_2, List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10((&V_0), Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0034_1;
			}

IL_001b_1:
			{
				// foreach (SEvent g in group)
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_4;
				L_4 = Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_inline((&V_0), Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_RuntimeMethod_var);
				V_1 = L_4;
				// EventManager.StopListening(g.name, g.callBack);
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_5 = V_1;
				String_t* L_6 = L_5.___name_0;
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_7 = V_1;
				UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = L_7.___callBack_1;
				il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
				EventManager_StopListening_m657F5E3D56D13E7A361D075B5DE3EDF6B8617BAD(L_6, L_8, NULL);
			}

IL_0034_1:
			{
				// foreach (SEvent g in group)
				bool L_9;
				L_9 = Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C((&V_0), Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_00b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		// List<SEvent> newGroup = new List<SEvent>();
		List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* L_10 = (List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0*)il2cpp_codegen_object_new(List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_m42D0BA4F00EE61A728D7D8FC8FF29427C1512A9A(L_10, List_1__ctor_m42D0BA4F00EE61A728D7D8FC8FF29427C1512A9A_RuntimeMethod_var);
		V_2 = L_10;
		// foreach (SEvent g in group)
		List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* L_11 = __this->___group_0;
		NullCheck(L_11);
		Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974 L_12;
		L_12 = List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D(L_11, List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D_RuntimeMethod_var);
		V_0 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10((&V_0), Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0091_1;
			}

IL_0061_1:
			{
				// foreach (SEvent g in group)
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_13;
				L_13 = Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_inline((&V_0), Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_RuntimeMethod_var);
				V_3 = L_13;
				// if (g.name != eventName) newGroup.Add(g); else EventManager.StopListening(g.name, g.callBack);
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_14 = V_3;
				String_t* L_15 = L_14.___name_0;
				String_t* L_16 = ___eventName0;
				bool L_17;
				L_17 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_15, L_16, NULL);
				if (!L_17)
				{
					goto IL_0080_1;
				}
			}
			{
				// if (g.name != eventName) newGroup.Add(g); else EventManager.StopListening(g.name, g.callBack);
				List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* L_18 = V_2;
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_19 = V_3;
				NullCheck(L_18);
				List_1_Add_mD6814902859A771E33EF62D0829DC9F23F1D3A58_inline(L_18, L_19, List_1_Add_mD6814902859A771E33EF62D0829DC9F23F1D3A58_RuntimeMethod_var);
				goto IL_0091_1;
			}

IL_0080_1:
			{
				// if (g.name != eventName) newGroup.Add(g); else EventManager.StopListening(g.name, g.callBack);
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_20 = V_3;
				String_t* L_21 = L_20.___name_0;
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_22 = V_3;
				UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_23 = L_22.___callBack_1;
				il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
				EventManager_StopListening_m657F5E3D56D13E7A361D075B5DE3EDF6B8617BAD(L_21, L_23, NULL);
			}

IL_0091_1:
			{
				// foreach (SEvent g in group)
				bool L_24;
				L_24 = Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C((&V_0), Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0061_1;
				}
			}
			{
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// group = newGroup;
		List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* L_25 = V_2;
		__this->___group_0 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___group_0), (void*)L_25);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Boolean TigerForge.EventsGroup::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventsGroup_Contains_mCCFF0FB3940986A6898602DB2C4124A08AE6A89C (EventsGroup_t5677B50916BF3A15DBC7D75494C3FC1D43FAE003* __this, String_t* ___eventName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// foreach (SEvent g in group)
		List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* L_0 = __this->___group_0;
		NullCheck(L_0);
		Enumerator_t2D6F8BA6931C57C086D0B7970BC23DF2D7ABB974 L_1;
		L_1 = List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D(L_0, List_1_GetEnumerator_m42C594F3A579F11E749E138620EDE217576D3D8D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10((&V_0), Enumerator_Dispose_m03A211DE7B570AA43D3825140CE55582E5115B10_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_000e_1:
			{
				// foreach (SEvent g in group)
				SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2 L_2;
				L_2 = Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_inline((&V_0), Enumerator_get_Current_m4ADDA83C9CDB8CE6FFFF5BE7517EDC8305A51331_RuntimeMethod_var);
				// if (g.name == eventName) return true;
				String_t* L_3 = L_2.___name_0;
				String_t* L_4 = ___eventName0;
				bool L_5;
				L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
				if (!L_5)
				{
					goto IL_0026_1;
				}
			}
			{
				// if (g.name == eventName) return true;
				V_1 = (bool)1;
				goto IL_0041;
			}

IL_0026_1:
			{
				// foreach (SEvent g in group)
				bool L_6;
				L_6 = Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C((&V_0), Enumerator_MoveNext_m99B91295987FA07F05E3CD3B1470722FB94E227C_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// return false;
		return (bool)0;
	}

IL_0041:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void TigerForge.EventsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventsGroup__ctor_m1681FD714B55FC4A659A33D4B7546B95AA9A01BC (EventsGroup_t5677B50916BF3A15DBC7D75494C3FC1D43FAE003* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42D0BA4F00EE61A728D7D8FC8FF29427C1512A9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<SEvent> group = new List<SEvent>();
		List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0* L_0 = (List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0*)il2cpp_codegen_object_new(List_1_t54C48CCDCF2BF1BDFDE47A905CD3A37F1BFD75C0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m42D0BA4F00EE61A728D7D8FC8FF29427C1512A9A(L_0, List_1__ctor_m42D0BA4F00EE61A728D7D8FC8FF29427C1512A9A_RuntimeMethod_var);
		__this->___group_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___group_0), (void*)L_0);
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
// Conversion methods for marshalling of: TigerForge.EventsGroup/SEvent
IL2CPP_EXTERN_C void SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshal_pinvoke(const SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2& unmarshaled, SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___callBack_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___callBack_1));
}
IL2CPP_EXTERN_C void SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshal_pinvoke_back(const SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshaled_pinvoke& marshaled, SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.___callBack_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7>(marshaled.___callBack_1, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___callBack_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7>(marshaled.___callBack_1, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: TigerForge.EventsGroup/SEvent
IL2CPP_EXTERN_C void SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshal_pinvoke_cleanup(SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// Conversion methods for marshalling of: TigerForge.EventsGroup/SEvent
IL2CPP_EXTERN_C void SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshal_com(const SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2& unmarshaled, SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___callBack_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___callBack_1));
}
IL2CPP_EXTERN_C void SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshal_com_back(const SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshaled_com& marshaled, SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.___callBack_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7>(marshaled.___callBack_1, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___callBack_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7>(marshaled.___callBack_1, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: TigerForge.EventsGroup/SEvent
IL2CPP_EXTERN_C void SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshal_com_cleanup(SEvent_t8F9C6A8D1E434632B7661B89BFAA0D62D48EC7C2_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Game.Scripts.BattleHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleHandler_Awake_mDA45F37132BEC3904DFE67D3D9932D70F3DC6D12 (BattleHandler_t268C8A69FDC7D0F2BFC3F91003557FD7E2FAF443* __this, const RuntimeMethod* method) 
{
	{
		// turnCurrent = default;
		__this->___turnCurrent_6 = 0;
		// turnNumber = -1;
		__this->___turnNumber_9 = (-1);
		// }
		return;
	}
}
// System.Void Game.Scripts.BattleHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleHandler_Start_mB158927C0EDBE04BAFB90B37589B97A400F17F8C (BattleHandler_t268C8A69FDC7D0F2BFC3F91003557FD7E2FAF443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleHandler_OnStartTurn_m952F3258B96A42EAAD4BF6FCA1715F50060EB165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A51C1BA998D1C631A205D8C4E2C03B6D6528509);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnStartTurn();
		BattleHandler_OnStartTurn_m952F3258B96A42EAAD4BF6FCA1715F50060EB165(__this, NULL);
		// EventManager.StartListening(EventNameKeeper.DoneTurn, OnStartTurn);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)BattleHandler_OnStartTurn_m952F3258B96A42EAAD4BF6FCA1715F50060EB165_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral4A51C1BA998D1C631A205D8C4E2C03B6D6528509, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.BattleHandler::OnStartTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleHandler_OnStartTurn_m952F3258B96A42EAAD4BF6FCA1715F50060EB165 (BattleHandler_t268C8A69FDC7D0F2BFC3F91003557FD7E2FAF443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB65C255893ADD35F8B206AB4CA300F1014963CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9614A254DEFE3BB470A33BB1E086D0F43A712DC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (IsBattleEnd())
		bool L_0;
		L_0 = BattleHandler_IsBattleEnd_m76447F30FDF3C258D591988452DF1443AD64612B(__this, NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// EventManager.EmitEventData(EventNameKeeper.EndBattle, _isWinGame);
		bool L_1 = __this->____isWinGame_10;
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEventData_m6C4A0B52957ABDB53988073B38AAC1857F510660(_stringLiteral9614A254DEFE3BB470A33BB1E086D0F43A712DC0, L_3, (0.0f), NULL);
		// return;
		return;
	}

IL_0023:
	{
		// turnCurrent++;
		int32_t L_4 = __this->___turnCurrent_6;
		__this->___turnCurrent_6 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// text.SetText(format, turnCurrent);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___text_7;
		String_t* L_6 = __this->___format_8;
		int32_t L_7 = __this->___turnCurrent_6;
		NullCheck(L_5);
		TMP_Text_SetText_mC6973FFC60DB6A96B0C4253CD2FD9D0789ECC533(L_5, L_6, ((float)L_7), NULL);
		// turnNumber++;
		int32_t L_8 = __this->___turnNumber_9;
		__this->___turnNumber_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// if (turnNumber >= teamConfig.BattleSort(config).Count)
		int32_t L_9 = __this->___turnNumber_9;
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_10 = __this->___teamConfig_5;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_11 = __this->___config_4;
		NullCheck(L_10);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_12;
		L_12 = BattleTeamConfig_BattleSort_mF45139FCA71762C4B8EC9FC4B1817255DBFE438D(L_10, L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mB65C255893ADD35F8B206AB4CA300F1014963CE5_inline(L_12, List_1_get_Count_mB65C255893ADD35F8B206AB4CA300F1014963CE5_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_13)))
		{
			goto IL_007c;
		}
	}
	{
		// turnNumber = default;
		__this->___turnNumber_9 = 0;
	}

IL_007c:
	{
		// if (teamConfig.BattleSort(config)[turnNumber].isDie)
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_14 = __this->___teamConfig_5;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_15 = __this->___config_4;
		NullCheck(L_14);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_16;
		L_16 = BattleTeamConfig_BattleSort_mF45139FCA71762C4B8EC9FC4B1817255DBFE438D(L_14, L_15, NULL);
		int32_t L_17 = __this->___turnNumber_9;
		NullCheck(L_16);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_18;
		L_18 = List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010(L_16, L_17, List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		NullCheck(L_18);
		bool L_19 = L_18->___isDie_4;
		if (!L_19)
		{
			goto IL_0100;
		}
	}
	{
		// for (int i = 0; i < teamConfig.BattleSort(config).Count; i++)
		V_0 = 0;
		goto IL_00e7;
	}

IL_00a3:
	{
		// if (teamConfig.BattleSort(config)[i].isDie is false)
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_20 = __this->___teamConfig_5;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_21 = __this->___config_4;
		NullCheck(L_20);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_22;
		L_22 = BattleTeamConfig_BattleSort_mF45139FCA71762C4B8EC9FC4B1817255DBFE438D(L_20, L_21, NULL);
		int32_t L_23 = V_0;
		NullCheck(L_22);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_24;
		L_24 = List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010(L_22, L_23, List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		NullCheck(L_24);
		bool L_25 = L_24->___isDie_4;
		if (L_25)
		{
			goto IL_00e3;
		}
	}
	{
		// turnNumber = i;
		int32_t L_26 = V_0;
		__this->___turnNumber_9 = L_26;
		// EventManager.EmitEventData(EventNameKeeper.StartTurn, turnNumber);
		int32_t L_27 = __this->___turnNumber_9;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEventData_m6C4A0B52957ABDB53988073B38AAC1857F510660(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, L_29, (0.0f), NULL);
		// return;
		return;
	}

IL_00e3:
	{
		// for (int i = 0; i < teamConfig.BattleSort(config).Count; i++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00e7:
	{
		// for (int i = 0; i < teamConfig.BattleSort(config).Count; i++)
		int32_t L_31 = V_0;
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_32 = __this->___teamConfig_5;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_33 = __this->___config_4;
		NullCheck(L_32);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_34;
		L_34 = BattleTeamConfig_BattleSort_mF45139FCA71762C4B8EC9FC4B1817255DBFE438D(L_32, L_33, NULL);
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_mB65C255893ADD35F8B206AB4CA300F1014963CE5_inline(L_34, List_1_get_Count_mB65C255893ADD35F8B206AB4CA300F1014963CE5_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_35)))
		{
			goto IL_00a3;
		}
	}

IL_0100:
	{
		// EventManager.EmitEventData(EventNameKeeper.StartTurn, turnNumber);
		int32_t L_36 = __this->___turnNumber_9;
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_37);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEventData_m6C4A0B52957ABDB53988073B38AAC1857F510660(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, L_38, (0.0f), NULL);
		// }
		return;
	}
}
// System.Boolean Game.Scripts.BattleHandler::IsBattleEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleHandler_IsBattleEnd_m76447F30FDF3C258D591988452DF1443AD64612B (BattleHandler_t268C8A69FDC7D0F2BFC3F91003557FD7E2FAF443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// var ownNumber = teamConfig.GetTeam().Count;
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_0 = __this->___teamConfig_5;
		NullCheck(L_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1;
		L_1 = BattleTeamConfig_GetTeam_mC05839126BCC7BC44482B55F17B2C71475AC1231_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_1, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = L_2;
		// var enemyNumber = teamConfig.GetEnemyTeam(config).Count;
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_3 = __this->___teamConfig_5;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_4 = __this->___config_4;
		NullCheck(L_3);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5;
		L_5 = BattleTeamConfig_GetEnemyTeam_m66A6F406F367601C6B9179D74FF3E24F35E7F94B(L_3, L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_5, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_1 = L_6;
		// foreach (var monsterName in teamConfig.GetTeam())
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_7 = __this->___teamConfig_5;
		NullCheck(L_7);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8;
		L_8 = BattleTeamConfig_GetTeam_mC05839126BCC7BC44482B55F17B2C71475AC1231_inline(L_7, NULL);
		NullCheck(L_8);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_9;
		L_9 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_8, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_2), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005d_1;
			}

IL_003b_1:
			{
				// foreach (var monsterName in teamConfig.GetTeam())
				String_t* L_10;
				L_10 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_2), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_3 = L_10;
				// ownNumber = config.GetMonster(monsterName).isDie ? ownNumber - 1 : ownNumber;
				AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_11 = __this->___config_4;
				String_t* L_12 = V_3;
				NullCheck(L_11);
				MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_13;
				L_13 = AttributeConfig_GetMonster_mBAB7AD752F65D23A369E5BDD0B49D591B788E07C(L_11, L_12, NULL);
				NullCheck(L_13);
				bool L_14 = L_13->___isDie_4;
				if (L_14)
				{
					goto IL_0059_1;
				}
			}
			{
				int32_t L_15 = V_0;
				G_B5_0 = L_15;
				goto IL_005c_1;
			}

IL_0059_1:
			{
				int32_t L_16 = V_0;
				G_B5_0 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
			}

IL_005c_1:
			{
				V_0 = G_B5_0;
			}

IL_005d_1:
			{
				// foreach (var monsterName in teamConfig.GetTeam())
				bool L_17;
				L_17 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_2), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_0076;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0076:
	{
		// if (ownNumber <= (int) default)
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_007c:
	{
		// foreach (var monsterName in teamConfig.GetEnemyTeam(config))
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_19 = __this->___teamConfig_5;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_20 = __this->___config_4;
		NullCheck(L_19);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21;
		L_21 = BattleTeamConfig_GetEnemyTeam_m66A6F406F367601C6B9179D74FF3E24F35E7F94B(L_19, L_20, NULL);
		NullCheck(L_21);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_22;
		L_22 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_21, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_2 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_2), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b9_1;
			}

IL_0095_1:
			{
				// foreach (var monsterName in teamConfig.GetEnemyTeam(config))
				String_t* L_23;
				L_23 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_2), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_4 = L_23;
				// enemyNumber = config.GetMonster(monsterName).isDie ? enemyNumber -1 : enemyNumber;
				AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_24 = __this->___config_4;
				String_t* L_25 = V_4;
				NullCheck(L_24);
				MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_26;
				L_26 = AttributeConfig_GetMonster_mBAB7AD752F65D23A369E5BDD0B49D591B788E07C(L_24, L_25, NULL);
				NullCheck(L_26);
				bool L_27 = L_26->___isDie_4;
				if (L_27)
				{
					goto IL_00b5_1;
				}
			}
			{
				int32_t L_28 = V_1;
				G_B16_0 = L_28;
				goto IL_00b8_1;
			}

IL_00b5_1:
			{
				int32_t L_29 = V_1;
				G_B16_0 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
			}

IL_00b8_1:
			{
				V_1 = G_B16_0;
			}

IL_00b9_1:
			{
				// foreach (var monsterName in teamConfig.GetEnemyTeam(config))
				bool L_30;
				L_30 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_2), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0095_1;
				}
			}
			{
				goto IL_00d2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d2:
	{
		// if (enemyNumber <= (int) default)
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_00df;
		}
	}
	{
		// _isWinGame = true;
		__this->____isWinGame_10 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_00df:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Game.Scripts.BattleHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleHandler__ctor_mAD5BF4BEA42C9732D8D9A91E70072983000A3856 (BattleHandler_t268C8A69FDC7D0F2BFC3F91003557FD7E2FAF443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral477B78D0470F7D963FE309268F75C407DE8C8BCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string format = "Turn {0}";
		__this->___format_8 = _stringLiteral477B78D0470F7D963FE309268F75C407DE8C8BCA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___format_8), (void*)_stringLiteral477B78D0470F7D963FE309268F75C407DE8C8BCA);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Game.Scripts.CharacterPool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterPool_Awake_mAA99C9172DF557F14491AAA100AD347BBA41029B (CharacterPool_tD56470CF619BA06B9CB53037583711046295300C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterPool_CreateMonsters_m14FE13B510055C4AD74AF73FB448693D4EFFC23F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterPool_RemoveAllMonster_mD12D75A47684ABFFABD13C8BE7F8A7F5A092A72F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterPool_SelectBattleTeam_m44A1A7E42CE5B43D6EB28296287AA72B4AD47CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterPool_SelectMonsterTeam_m5E8DB3775B83624B98F1C1D7FC6BF9FBBCE2756F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E73A0D4483A9B8C5D46F576AD8AF2E16194D56D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D5569AD1802A3D3E9D925CADEEC7C645EF46BA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71D0FC39481D0916717CF6CDBA7E25AF075CB762);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADED28B4D652D0026C1649363C3597E9EA772245);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.StartListening(EventNameKeeper.InstantiateAsyncMonsters, CreateMonsters);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)CharacterPool_CreateMonsters_m14FE13B510055C4AD74AF73FB448693D4EFFC23F_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral71D0FC39481D0916717CF6CDBA7E25AF075CB762, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// EventManager.StartListening(EventNameKeeper.SelectMonsterTeam, SelectMonsterTeam);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_1, __this, (intptr_t)((void*)CharacterPool_SelectMonsterTeam_m5E8DB3775B83624B98F1C1D7FC6BF9FBBCE2756F_RuntimeMethod_var), NULL);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteralADED28B4D652D0026C1649363C3597E9EA772245, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// EventManager.StartListening(EventNameKeeper.StartBattle, SelectBattleTeam);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)CharacterPool_SelectBattleTeam_m44A1A7E42CE5B43D6EB28296287AA72B4AD47CF6_RuntimeMethod_var), NULL);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral1D5569AD1802A3D3E9D925CADEEC7C645EF46BA6, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// EventManager.StartListening(EventNameKeeper.RemoveAllMonster, RemoveAllMonster);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)CharacterPool_RemoveAllMonster_mD12D75A47684ABFFABD13C8BE7F8A7F5A092A72F_RuntimeMethod_var), NULL);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral0E73A0D4483A9B8C5D46F576AD8AF2E16194D56D, L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.CharacterPool::SelectBattleTeam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterPool_SelectBattleTeam_m44A1A7E42CE5B43D6EB28296287AA72B4AD47CF6 (CharacterPool_tD56470CF619BA06B9CB53037583711046295300C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	int32_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_7;
	memset((&V_7), 0, sizeof(V_7));
	String_t* V_8 = NULL;
	{
		// var owns = teamConfig.GetTeam();
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_0 = __this->___teamConfig_5;
		NullCheck(L_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1;
		L_1 = BattleTeamConfig_GetTeam_mC05839126BCC7BC44482B55F17B2C71475AC1231_inline(L_0, NULL);
		V_0 = L_1;
		// var enemies = teamConfig.GetEnemyTeam(configs);
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_2 = __this->___teamConfig_5;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_3 = __this->___configs_4;
		NullCheck(L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4;
		L_4 = BattleTeamConfig_GetEnemyTeam_m66A6F406F367601C6B9179D74FF3E24F35E7F94B(L_2, L_3, NULL);
		V_1 = L_4;
		// var unuseds = teamConfig.GetUnusedMonsters(configs);
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_5 = __this->___teamConfig_5;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_6 = __this->___configs_4;
		NullCheck(L_5);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7;
		L_7 = BattleTeamConfig_GetUnusedMonsters_m1DD7E432C7886A3D009F726213E7B31DF6334E39(L_5, L_6, NULL);
		V_2 = L_7;
		// for (int i = 0; i < positions.ownBattlePositions.Count; i++)
		V_3 = 0;
		goto IL_0099;
	}

IL_0034:
	{
		// var position = positions.ownBattlePositions[i];
		PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* L_8 = __this->___positions_6;
		NullCheck(L_8);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_9 = L_8->___ownBattlePositions_4;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_9, L_10, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_4 = L_11;
		// var monster = transform.Find(owns[i]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = V_0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_13, L_14, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, L_15, NULL);
		// monster.transform.localScale = new Vector3(-1, 1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = L_16;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_19, NULL);
		// monster.position = new Vector3(position.x, position.y, default);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_4;
		float L_21 = L_20.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_4;
		float L_23 = L_22.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_21, L_23, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_24, NULL);
		// for (int i = 0; i < positions.ownBattlePositions.Count; i++)
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0099:
	{
		// for (int i = 0; i < positions.ownBattlePositions.Count; i++)
		int32_t L_26 = V_3;
		PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* L_27 = __this->___positions_6;
		NullCheck(L_27);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_28 = L_27->___ownBattlePositions_4;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_28, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_29)))
		{
			goto IL_0034;
		}
	}
	{
		// for (int i = 0; i < positions.enemyBattlePositions.Count; i++)
		V_5 = 0;
		goto IL_00fb;
	}

IL_00b1:
	{
		// var position = positions.enemyBattlePositions[i];
		PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* L_30 = __this->___positions_6;
		NullCheck(L_30);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_31 = L_30->___enemyBattlePositions_5;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_31, L_32, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_6 = L_33;
		// var monster = transform.Find(enemies[i]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		String_t* L_37;
		L_37 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_35, L_36, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_34, L_37, NULL);
		// monster.position = new Vector3(position.x, position.y, default);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_6;
		float L_40 = L_39.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_6;
		float L_42 = L_41.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), L_40, L_42, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_38, L_43, NULL);
		// for (int i = 0; i < positions.enemyBattlePositions.Count; i++)
		int32_t L_44 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00fb:
	{
		// for (int i = 0; i < positions.enemyBattlePositions.Count; i++)
		int32_t L_45 = V_5;
		PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* L_46 = __this->___positions_6;
		NullCheck(L_46);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_47 = L_46->___enemyBattlePositions_5;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_47, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((((int32_t)L_45) < ((int32_t)L_48)))
		{
			goto IL_00b1;
		}
	}
	{
		// foreach (var monsterName in unuseds)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_49 = V_2;
		NullCheck(L_49);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_50;
		L_50 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_49, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_7 = L_50;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_7), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0134_1;
			}

IL_0119_1:
			{
				// foreach (var monsterName in unuseds)
				String_t* L_51;
				L_51 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_7), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_8 = L_51;
				// var monster = transform.Find(monsterName);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
				L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				String_t* L_53 = V_8;
				NullCheck(L_52);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
				L_54 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_52, L_53, NULL);
				// Destroy(monster);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_54, NULL);
			}

IL_0134_1:
			{
				// foreach (var monsterName in unuseds)
				bool L_55;
				L_55 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_7), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_55)
				{
					goto IL_0119_1;
				}
			}
			{
				goto IL_014d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014d:
	{
		// }
		return;
	}
}
// System.Void Game.Scripts.CharacterPool::SelectMonsterTeam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterPool_SelectMonsterTeam_m5E8DB3775B83624B98F1C1D7FC6BF9FBBCE2756F (CharacterPool_tD56470CF619BA06B9CB53037583711046295300C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38A9FD34017A8F9DE07E80AD287FFEE461399BE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADED28B4D652D0026C1649363C3597E9EA772245);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var data = EventManager.GetData(EventNameKeeper.SelectMonsterTeam);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = EventManager_GetData_m9769A8C0D0394B0BBB58A8C89B9A056B0F10419A(_stringLiteralADED28B4D652D0026C1649363C3597E9EA772245, NULL);
		// var monsterName = (string) data;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		// if (teamConfig.PickMonster(monsterName) is false)
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_1 = __this->___teamConfig_5;
		String_t* L_2 = V_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = BattleTeamConfig_PickMonster_m04494EBC5C5AD77C57A5C82E00E2BD570F61E7D8(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0067;
		}
	}
	{
		// if(teamConfig.RemoveMonster(monsterName) is false)
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_4 = __this->___teamConfig_5;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = BattleTeamConfig_RemoveMonster_m1C18251D12A538344309BE33CD1D9DC11242B41E(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		// return;
		return;
	}

IL_002d:
	{
		// var removeIndex = teamConfig.CurrentIndexPick();
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_7 = __this->___teamConfig_5;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = BattleTeamConfig_CurrentIndexPick_mF864670D7DAFD43470FB0046363216A29F7030C2_inline(L_7, NULL);
		V_4 = L_8;
		// var removePosition = positions.GetTempPosition(removeIndex);
		PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* L_9 = __this->___positions_6;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = PositionsConfig_GetTempPosition_mA63E43F0DC09587CB10B545F8EAC234695AEDE0B(L_9, L_10, NULL);
		V_5 = L_11;
		// var reMonster = transform.Find(monsterName);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		String_t* L_13 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, L_13, NULL);
		// reMonster.position = removePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_5;
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
		// EventManager.EmitEvent(EventNameKeeper.DoneSelectMonsterTeam);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEvent_m7FA138F58500BF74EF72A857ABF7C0EDE60BB414(_stringLiteral38A9FD34017A8F9DE07E80AD287FFEE461399BE6, NULL);
		// return;
		return;
	}

IL_0067:
	{
		// var currentIndex = teamConfig.CurrentIndexPick();
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_16 = __this->___teamConfig_5;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = BattleTeamConfig_CurrentIndexPick_mF864670D7DAFD43470FB0046363216A29F7030C2_inline(L_16, NULL);
		V_1 = L_17;
		// var position = positions.selectTeamPositions[currentIndex];
		PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* L_18 = __this->___positions_6;
		NullCheck(L_18);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_19 = L_18->___selectTeamPositions_6;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_19, L_20, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_2 = L_21;
		// var monster = transform.Find(monsterName);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		String_t* L_23 = V_0;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_22, L_23, NULL);
		V_3 = L_24;
		// positions.SetTempPosition(currentIndex, monster.position);
		PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* L_25 = __this->___positions_6;
		int32_t L_26 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_3;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		NullCheck(L_25);
		PositionsConfig_SetTempPosition_mE5ABA5FABC21589900E9A5B54D2B7D0B14C10D53(L_25, L_26, L_28, NULL);
		// monster.position = new Vector3(position.x, position.y, default);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_2;
		float L_31 = L_30.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_2;
		float L_33 = L_32.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), L_31, L_33, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_34, NULL);
		// EventManager.EmitEvent(EventNameKeeper.DoneSelectMonsterTeam);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEvent_m7FA138F58500BF74EF72A857ABF7C0EDE60BB414(_stringLiteral38A9FD34017A8F9DE07E80AD287FFEE461399BE6, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.CharacterPool::CreateMonsters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterPool_CreateMonsters_m14FE13B510055C4AD74AF73FB448693D4EFFC23F (CharacterPool_tD56470CF619BA06B9CB53037583711046295300C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var monsterAttribute in configs.MonsterAttributes())
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_0 = __this->___configs_4;
		NullCheck(L_0);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_1;
		L_1 = AttributeConfig_MonsterAttributes_mAAAA2917F1A11CE1BB3572FD4D33C3B2A4DED2D5_inline(L_0, NULL);
		NullCheck(L_1);
		Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E L_2;
		L_2 = List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601(L_1, List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38((&V_0), Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0013_1:
			{
				// foreach (var monsterAttribute in configs.MonsterAttributes())
				MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_3;
				L_3 = Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_inline((&V_0), Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_RuntimeMethod_var);
				// Addressables.InstantiateAsync(monsterAttribute.characterName, transform);
				NullCheck(L_3);
				String_t* L_4 = L_3->___characterName_0;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Addressables_tB93529ED0B034BF1A8C7830710BAA45C20A0F7D6_il2cpp_TypeInfo_var);
				AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_6;
				L_6 = Addressables_InstantiateAsync_mD10FF052D569CA9E7027857932564E8630F9574E(L_4, L_5, (bool)0, (bool)1, NULL);
			}

IL_002d_1:
			{
				// foreach (var monsterAttribute in configs.MonsterAttributes())
				bool L_7;
				L_7 = Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762((&V_0), Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Game.Scripts.CharacterPool::RemoveAllMonster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterPool_RemoveAllMonster_mD12D75A47684ABFFABD13C8BE7F8A7F5A092A72F (CharacterPool_tD56470CF619BA06B9CB53037583711046295300C* __this, const RuntimeMethod* method) 
{
	{
		// teamConfig.Release();
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_0 = __this->___teamConfig_5;
		NullCheck(L_0);
		BattleTeamConfig_Release_m7D7707FFC5A6E45ABDED1E9802739D1DDA64062E(L_0, NULL);
		// configs.Release();
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_1 = __this->___configs_4;
		NullCheck(L_1);
		AttributeConfig_Release_m5FC441DB12A52823E6863C4C9E85DFF12DE8C787(L_1, NULL);
		// positions.Release();
		PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* L_2 = __this->___positions_6;
		NullCheck(L_2);
		PositionsConfig_Release_m9678B9D3ED35825CF3B91B82159F61A3033D873A(L_2, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.CharacterPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterPool__ctor_mB490C1AF2302FC4C9F0863D19835679E5F74996A (CharacterPool_tD56470CF619BA06B9CB53037583711046295300C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Game.Scripts.ContainerLauncher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerLauncher_Awake_m710ABC5DB8DD8C6E0915ADB7CD2D4AF6AC974D98 (ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentHolderProtocol_GetOrAddComponent_TisGlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190_mC2CDE076F9DD1D22FB2F2D6C4B75C539832C67F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (containerLayerSettings == null)
		ContainerLayerSettings_tD51E21908432D9BB12B44ED5E392182317E373E6* L_0 = __this->___containerLayerSettings_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException(nameof(containerLayerSettings));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6B6CAB5D3067AFF3E527288DD64C251EA40B843)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ContainerLauncher_Awake_m710ABC5DB8DD8C6E0915ADB7CD2D4AF6AC974D98_RuntimeMethod_var)));
	}

IL_0019:
	{
		// _globalContainerLayerManager = this.GetOrAddComponent<GlobalContainerLayerManager>();
		GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190* L_3;
		L_3 = ComponentHolderProtocol_GetOrAddComponent_TisGlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190_mC2CDE076F9DD1D22FB2F2D6C4B75C539832C67F1(__this, ComponentHolderProtocol_GetOrAddComponent_TisGlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190_mC2CDE076F9DD1D22FB2F2D6C4B75C539832C67F1_RuntimeMethod_var);
		__this->____globalContainerLayerManager_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____globalContainerLayerManager_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void Game.Scripts.ContainerLauncher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerLauncher_Start_m649D488B0DC980839CABA201DD0B310FC40DA313 (ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_m2A1B907AA564EAFA11C5CECD0F215C624BC34D4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_m2A1B907AA564EAFA11C5CECD0F215C624BC34D4E(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_m2A1B907AA564EAFA11C5CECD0F215C624BC34D4E_RuntimeMethod_var);
		return;
	}
}
// System.Void Game.Scripts.ContainerLauncher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerLauncher__ctor_m9449216C82EC57115124AFD1D4257745D8FC46F8 (ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Game.Scripts.ContainerLauncher/<Start>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_MoveNext_mBFB8F319067F87D0DE99B7BFDFEE77386119C4B2 (U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivityContainer_tFBBBBCCDA7BA16F80545D9841E5863A3564F7F76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_m17F09531E019C2A2351E70CFCD8646F2D4B5C964_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mC28639A499F86F3D8158F086907C520B912C5362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mB2D61606B79873F0076E1C92F2161CA63FC9493D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mE17C17A599F43D3AC948732A5052AA0E543BF622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m43D450EC49F01BA49EFBC0046545D9655F9FF112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m5E7DA1ABB29CF219205891BC1A15DBACCB9F8A49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mFC8DF53337A7B273D63BBFB74C357A1D10381F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m622AB9C88C797EFD8B93A2D42C9ABB01D9E9A205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m80F853A9DC02083B8B02B0AC9FC9D22AE8528DF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m97C5536A8D4091AB343BF29BCB091058668B4C22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerLayerManager_Find_TisScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_m5D8DB71D18322BE0E0218300F324FDD16B7C29E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumeratorAsyncExtensions_GetAwaiter_TisAsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F_m2156B0BB5715359142EC909A3FCFA7ECDF55F3FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1BB240BEC508753F79B3A778004ACDFB48272506_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m8945EB1621F1E6D092622DA427DDD7F81A865E47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mA0C819502D37B5F7526F96F66F42101D1E6BF5C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ADA37BEA6AFB2EDCA9094443AE7419B09E74943);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F0D0F19587B1955E3EB85BCFCCF052C6493AB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5* V_1 = NULL;
	ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752* V_2 = NULL;
	WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* V_4 = NULL;
	int32_t V_5 = 0;
	Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_t74912DAA6AE9085FCB96ED547F96777F47A163C9 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_1_t7B789002D096A0982E67D64CBFC1C25AF42F87ED V_9;
	memset((&V_9), 0, sizeof(V_9));
	Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_1_t261AB7FF825980F6B5279AABE1C733CE3FAAC016 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_00c4_1;
				}
				case 1:
				{
					goto IL_0133_1;
				}
				case 2:
				{
					goto IL_01b5_1;
				}
				case 3:
				{
					goto IL_026b_1;
				}
			}
		}
		{
			// var layers = containerLayerSettings.GetContainerLayers();
			ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5* L_3 = V_1;
			NullCheck(L_3);
			ContainerLayerSettings_tD51E21908432D9BB12B44ED5E392182317E373E6* L_4 = L_3->___containerLayerSettings_4;
			NullCheck(L_4);
			ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752* L_5;
			L_5 = ContainerLayerSettings_GetContainerLayers_mAD7CB0E903623F6E55010AF68EE3C89593796BD6_inline(L_4, NULL);
			V_2 = L_5;
			// var manager = _globalContainerLayerManager;
			ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5* L_6 = V_1;
			NullCheck(L_6);
			GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190* L_7 = L_6->____globalContainerLayerManager_6;
			__this->___U3CmanagerU3E5__2_3 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmanagerU3E5__2_3), (void*)L_7);
			// foreach (var layer in layers)
			ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752* L_8 = V_2;
			__this->___U3CU3E7__wrap2_4 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_4), (void*)L_8);
			__this->___U3CU3E7__wrap3_5 = 0;
			goto IL_01f0_1;
		}

IL_004f_1:
		{
			// foreach (var layer in layers)
			ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752* L_9 = __this->___U3CU3E7__wrap2_4;
			int32_t L_10 = __this->___U3CU3E7__wrap3_5;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_4 = L_12;
			// switch (layer.layerType)
			ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* L_13 = V_4;
			NullCheck(L_13);
			int32_t L_14 = L_13->___layerType_1;
			V_5 = L_14;
			int32_t L_15 = V_5;
			switch (L_15)
			{
				case 0:
				{
					goto IL_007f_1;
				}
				case 1:
				{
					goto IL_00ee_1;
				}
				case 2:
				{
					goto IL_0170_1;
				}
			}
		}
		{
			goto IL_01dc_1;
		}

IL_007f_1:
		{
			// await ModalContainer.CreateAsync(layer, manager);
			ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* L_16 = V_4;
			GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190* L_17 = __this->___U3CmanagerU3E5__2_3;
			il2cpp_codegen_runtime_class_init_inline(ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5_il2cpp_TypeInfo_var);
			UniTask_1_t74912DAA6AE9085FCB96ED547F96777F47A163C9 L_18;
			L_18 = ModalContainer_CreateAsync_mEE360B629E72C2A9803142969F0320B07675C3C0(L_16, L_17, NULL);
			V_7 = L_18;
			Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8 L_19;
			L_19 = UniTask_1_GetAwaiter_m1BB240BEC508753F79B3A778004ACDFB48272506_inline((&V_7), UniTask_1_GetAwaiter_m1BB240BEC508753F79B3A778004ACDFB48272506_RuntimeMethod_var);
			V_6 = L_19;
			bool L_20;
			L_20 = Awaiter_get_IsCompleted_m80F853A9DC02083B8B02B0AC9FC9D22AE8528DF8_inline((&V_6), Awaiter_get_IsCompleted_m80F853A9DC02083B8B02B0AC9FC9D22AE8528DF8_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00e1_1;
			}
		}
		{
			int32_t L_21 = 0;
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
			Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8 L_22 = V_6;
			__this->___U3CU3Eu__1_6 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_6))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_6))->___task_0))->___result_1), (void*)NULL);
			#endif
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_23 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_m17F09531E019C2A2351E70CFCD8646F2D4B5C964(L_23, (&V_6), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_m17F09531E019C2A2351E70CFCD8646F2D4B5C964_RuntimeMethod_var);
			goto IL_02cb;
		}

IL_00c4_1:
		{
			Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8 L_24 = __this->___U3CU3Eu__1_6;
			V_6 = L_24;
			Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8* L_25 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_25, sizeof(Awaiter_t495CE1B4E1540B3DF926EB5711061F033ED2FDE8));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
		}

IL_00e1_1:
		{
			ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5* L_27;
			L_27 = Awaiter_GetResult_mFC8DF53337A7B273D63BBFB74C357A1D10381F49_inline((&V_6), Awaiter_GetResult_mFC8DF53337A7B273D63BBFB74C357A1D10381F49_RuntimeMethod_var);
			// break;
			goto IL_01e2_1;
		}

IL_00ee_1:
		{
			// await ScreenContainer.CreateAsync(layer, manager);
			ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* L_28 = V_4;
			GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190* L_29 = __this->___U3CmanagerU3E5__2_3;
			il2cpp_codegen_runtime_class_init_inline(ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_il2cpp_TypeInfo_var);
			UniTask_1_t7B789002D096A0982E67D64CBFC1C25AF42F87ED L_30;
			L_30 = ScreenContainer_CreateAsync_m6F581BCDD2AFBE49FD8AAE389B3DE9591894A557(L_28, L_29, NULL);
			V_9 = L_30;
			Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4 L_31;
			L_31 = UniTask_1_GetAwaiter_m8945EB1621F1E6D092622DA427DDD7F81A865E47_inline((&V_9), UniTask_1_GetAwaiter_m8945EB1621F1E6D092622DA427DDD7F81A865E47_RuntimeMethod_var);
			V_8 = L_31;
			bool L_32;
			L_32 = Awaiter_get_IsCompleted_m622AB9C88C797EFD8B93A2D42C9ABB01D9E9A205_inline((&V_8), Awaiter_get_IsCompleted_m622AB9C88C797EFD8B93A2D42C9ABB01D9E9A205_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_0150_1;
			}
		}
		{
			int32_t L_33 = 1;
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
			Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4 L_34 = V_8;
			__this->___U3CU3Eu__2_7 = L_34;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_7))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_7))->___task_0))->___result_1), (void*)NULL);
			#endif
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_35 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mC28639A499F86F3D8158F086907C520B912C5362(L_35, (&V_8), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mC28639A499F86F3D8158F086907C520B912C5362_RuntimeMethod_var);
			goto IL_02cb;
		}

IL_0133_1:
		{
			Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4 L_36 = __this->___U3CU3Eu__2_7;
			V_8 = L_36;
			Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4* L_37 = (&__this->___U3CU3Eu__2_7);
			il2cpp_codegen_initobj(L_37, sizeof(Awaiter_t77CB4A91521560975D166F5C33DE6D1F2AC4DCC4));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
		}

IL_0150_1:
		{
			ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* L_39;
			L_39 = Awaiter_GetResult_m43D450EC49F01BA49EFBC0046545D9655F9FF112_inline((&V_8), Awaiter_GetResult_m43D450EC49F01BA49EFBC0046545D9655F9FF112_RuntimeMethod_var);
			// pooled.transform.SetParent(transform);
			ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5* L_40 = V_1;
			NullCheck(L_40);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = L_40->___pooled_5;
			NullCheck(L_41);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
			L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
			ContainerLauncher_t90BB67FE541449E27CC4BC37ABA9D81EC519E5B5* L_43 = V_1;
			NullCheck(L_43);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
			L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_43, NULL);
			NullCheck(L_42);
			Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_42, L_44, NULL);
			// break;
			goto IL_01e2_1;
		}

IL_0170_1:
		{
			// await ActivityContainer.CreateAsync(layer, manager);
			ContainerLayerConfig_t79317859E34D5B662467DDAB19893CD4DBA27DE6* L_45 = V_4;
			GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190* L_46 = __this->___U3CmanagerU3E5__2_3;
			il2cpp_codegen_runtime_class_init_inline(ActivityContainer_tFBBBBCCDA7BA16F80545D9841E5863A3564F7F76_il2cpp_TypeInfo_var);
			UniTask_1_t261AB7FF825980F6B5279AABE1C733CE3FAAC016 L_47;
			L_47 = ActivityContainer_CreateAsync_m8279071A14E3AB3359BB9BFC471AA7D29C60A4E6(L_45, L_46, NULL);
			V_11 = L_47;
			Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C L_48;
			L_48 = UniTask_1_GetAwaiter_mA0C819502D37B5F7526F96F66F42101D1E6BF5C3_inline((&V_11), UniTask_1_GetAwaiter_mA0C819502D37B5F7526F96F66F42101D1E6BF5C3_RuntimeMethod_var);
			V_10 = L_48;
			bool L_49;
			L_49 = Awaiter_get_IsCompleted_m97C5536A8D4091AB343BF29BCB091058668B4C22_inline((&V_10), Awaiter_get_IsCompleted_m97C5536A8D4091AB343BF29BCB091058668B4C22_RuntimeMethod_var);
			if (L_49)
			{
				goto IL_01d2_1;
			}
		}
		{
			int32_t L_50 = 2;
			V_0 = L_50;
			__this->___U3CU3E1__state_0 = L_50;
			Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C L_51 = V_10;
			__this->___U3CU3Eu__3_8 = L_51;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_8))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_8))->___task_0))->___result_1), (void*)NULL);
			#endif
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_52 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mB2D61606B79873F0076E1C92F2161CA63FC9493D(L_52, (&V_10), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mB2D61606B79873F0076E1C92F2161CA63FC9493D_RuntimeMethod_var);
			goto IL_02cb;
		}

IL_01b5_1:
		{
			Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C L_53 = __this->___U3CU3Eu__3_8;
			V_10 = L_53;
			Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C* L_54 = (&__this->___U3CU3Eu__3_8);
			il2cpp_codegen_initobj(L_54, sizeof(Awaiter_tD1C0DBF892A2D18BA5CE9DBAD713BA0FA3DD229C));
			int32_t L_55 = (-1);
			V_0 = L_55;
			__this->___U3CU3E1__state_0 = L_55;
		}

IL_01d2_1:
		{
			ActivityContainer_tFBBBBCCDA7BA16F80545D9841E5863A3564F7F76* L_56;
			L_56 = Awaiter_GetResult_m5E7DA1ABB29CF219205891BC1A15DBACCB9F8A49_inline((&V_10), Awaiter_GetResult_m5E7DA1ABB29CF219205891BC1A15DBACCB9F8A49_RuntimeMethod_var);
			// break;
			goto IL_01e2_1;
		}

IL_01dc_1:
		{
			// throw new ArgumentOutOfRangeException();
			ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_57 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
			NullCheck(L_57);
			ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_57, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__4_MoveNext_mBFB8F319067F87D0DE99B7BFDFEE77386119C4B2_RuntimeMethod_var)));
		}

IL_01e2_1:
		{
			int32_t L_58 = __this->___U3CU3E7__wrap3_5;
			__this->___U3CU3E7__wrap3_5 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_01f0_1:
		{
			// foreach (var layer in layers)
			int32_t L_59 = __this->___U3CU3E7__wrap3_5;
			ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752* L_60 = __this->___U3CU3E7__wrap2_4;
			NullCheck(L_60);
			if ((((int32_t)L_59) < ((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length)))))
			{
				goto IL_004f_1;
			}
		}
		{
			__this->___U3CU3E7__wrap2_4 = (ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_4), (void*)(ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752*)NULL);
			// var options = new WindowOptions(EventNameKeeper.LoadingScreen, false, loadAsync: false);
			WindowOptions__ctor_m772514999A01EB661B0EEC5F229A24BA4264F670((&V_3), _stringLiteralB3F0D0F19587B1955E3EB85BCFCCF052C6493AB6, (bool)0, (Action_1_tF3A4D9C1EB5202EBEE6F15DF6B9D5BFE1AF2A9CB*)NULL, (bool)0, NULL);
			// await manager.Find<ScreenContainer>(EventNameKeeper.ScreenContainer).Push(options);
			GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190* L_61 = __this->___U3CmanagerU3E5__2_3;
			NullCheck(L_61);
			ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* L_62;
			L_62 = ContainerLayerManager_Find_TisScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_m5D8DB71D18322BE0E0218300F324FDD16B7C29E9(L_61, _stringLiteral8ADA37BEA6AFB2EDCA9094443AE7419B09E74943, ContainerLayerManager_Find_TisScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_m5D8DB71D18322BE0E0218300F324FDD16B7C29E9_RuntimeMethod_var);
			ScreenOptions_t3BC7FCCF3C5282AA0B74B9CCD8044EF3BE6FE8C3 L_63;
			L_63 = ScreenOptions_op_Implicit_mD306180F4CFED0CBA28BB21FACB10E174C0B228F((&V_3), NULL);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64;
			L_64 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_62);
			AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* L_65;
			L_65 = ScreenContainer_Push_mB3DC09084C1E3CE85748509105090A5CC420B091(L_62, L_63, L_64, NULL);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_66;
			L_66 = EnumeratorAsyncExtensions_GetAwaiter_TisAsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F_m2156B0BB5715359142EC909A3FCFA7ECDF55F3FF(L_65, EnumeratorAsyncExtensions_GetAwaiter_TisAsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F_m2156B0BB5715359142EC909A3FCFA7ECDF55F3FF_RuntimeMethod_var);
			V_12 = L_66;
			bool L_67;
			L_67 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_67)
			{
				goto IL_0288_1;
			}
		}
		{
			int32_t L_68 = 3;
			V_0 = L_68;
			__this->___U3CU3E1__state_0 = L_68;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = V_12;
			__this->___U3CU3Eu__4_9 = L_69;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__4_9))->___task_0))->___source_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_70 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mE17C17A599F43D3AC948732A5052AA0E543BF622(L_70, (&V_12), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC_mE17C17A599F43D3AC948732A5052AA0E543BF622_RuntimeMethod_var);
			goto IL_02cb;
		}

IL_026b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_71 = __this->___U3CU3Eu__4_9;
			V_12 = L_71;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_72 = (&__this->___U3CU3Eu__4_9);
			il2cpp_codegen_initobj(L_72, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_73 = (-1);
			V_0 = L_73;
			__this->___U3CU3E1__state_0 = L_73;
		}

IL_0288_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
			goto IL_02b1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0291;
		}
		throw e;
	}

CATCH_0291:
	{// begin catch(System.Exception)
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CmanagerU3E5__2_3 = (GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmanagerU3E5__2_3), (void*)(GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_74 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_75 = V_13;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_74, L_75, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02cb;
	}// end catch (depth: 1)

IL_02b1:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CmanagerU3E5__2_3 = (GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmanagerU3E5__2_3), (void*)(GlobalContainerLayerManager_t03EA658AAB6C2E742111E49854578BCC6773F190*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_76 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_76, NULL);
	}

IL_02cb:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__4_MoveNext_mBFB8F319067F87D0DE99B7BFDFEE77386119C4B2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC*>(__this + _offset);
	U3CStartU3Ed__4_MoveNext_mBFB8F319067F87D0DE99B7BFDFEE77386119C4B2(_thisAdjusted, method);
}
// System.Void Game.Scripts.ContainerLauncher/<Start>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_SetStateMachine_m03A4109D691CE33D5A826E93C57A26C9824EC563 (U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__4_SetStateMachine_m03A4109D691CE33D5A826E93C57A26C9824EC563_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__4_t263A5BBF4C2B4758A3487B476E50EBAF56D651CC*>(__this + _offset);
	U3CStartU3Ed__4_SetStateMachine_m03A4109D691CE33D5A826E93C57A26C9824EC563(_thisAdjusted, ___stateMachine0, method);
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
// System.Void Game.Scripts.MonsterController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_Awake_m66700259FC1543CE23AB2D3BE4BB7B6F69381CBF (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterController_AttackMonster_mC4F4D6317A3EF9066AF24810EFA0E1A64957CEE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterController_CanTouchAll_m3EEAF01F9374D1FCB1126C14BB1D16BD989A62B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterController_OnStartTurn_m991EFE59DE0E6CAAFB9039AF51ED49F61A2A8B43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterController_RemoveAllMonster_m0DCCF94AD1A3F1AA172BD508FAB809920A9C5EF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterController_StartBattle_m31D8ADE9791E76EB75C5434F5AECB015C95197C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E73A0D4483A9B8C5D46F576AD8AF2E16194D56D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D5569AD1802A3D3E9D925CADEEC7C645EF46BA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D569DC9ABF8486FC40564ABA61F7F8C68A3566D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82645B897576CE368435E10E1894798BDE506E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.name = gameObject.name.Replace("(Clone)", "");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_0);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_0, L_3, NULL);
		// if (_monsterAttribute is null)
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_4 = __this->____monsterAttribute_7;
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		// _monsterAttribute = config.GetMonster(gameObject.name);
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_5 = __this->___config_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		NullCheck(L_5);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_8;
		L_8 = AttributeConfig_GetMonster_mBAB7AD752F65D23A369E5BDD0B49D591B788E07C(L_5, L_7, NULL);
		__this->____monsterAttribute_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____monsterAttribute_7), (void*)L_8);
	}

IL_0049:
	{
		// _currentHealth = _monsterAttribute.health;
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_9 = __this->____monsterAttribute_7;
		NullCheck(L_9);
		int32_t L_10 = L_9->___health_1;
		__this->____currentHealth_8 = L_10;
		// _isClocked = false;
		__this->____isClocked_9 = (bool)0;
		// slider.value = (float)_currentHealth / _monsterAttribute.health;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_11 = __this->___slider_6;
		int32_t L_12 = __this->____currentHealth_8;
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_13 = __this->____monsterAttribute_7;
		NullCheck(L_13);
		int32_t L_14 = L_13->___health_1;
		NullCheck(L_11);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_11, ((float)(((float)L_12)/((float)L_14))));
		// slider.gameObject.SetActive(false);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_15 = __this->___slider_6;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// CanTouchAll();
		MonsterController_CanTouchAll_m3EEAF01F9374D1FCB1126C14BB1D16BD989A62B0(__this, NULL);
		// EventManager.StartListening(EventNameKeeper.StartTurn, OnStartTurn);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_17 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_17, __this, (intptr_t)((void*)MonsterController_OnStartTurn_m991EFE59DE0E6CAAFB9039AF51ED49F61A2A8B43_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, L_17, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// EventManager.StartListening(EventNameKeeper.CanTouchAll, CanTouchAll);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_18 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_18, __this, (intptr_t)((void*)MonsterController_CanTouchAll_m3EEAF01F9374D1FCB1126C14BB1D16BD989A62B0_RuntimeMethod_var), NULL);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral82645B897576CE368435E10E1894798BDE506E06, L_18, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// EventManager.StartListening(EventNameKeeper.StartBattle, StartBattle);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_19 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_19, __this, (intptr_t)((void*)MonsterController_StartBattle_m31D8ADE9791E76EB75C5434F5AECB015C95197C5_RuntimeMethod_var), NULL);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral1D5569AD1802A3D3E9D925CADEEC7C645EF46BA6, L_19, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// EventManager.StartListening(EventNameKeeper.AttackMonster, AttackMonster);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_20 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_20, __this, (intptr_t)((void*)MonsterController_AttackMonster_mC4F4D6317A3EF9066AF24810EFA0E1A64957CEE3_RuntimeMethod_var), NULL);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral7D569DC9ABF8486FC40564ABA61F7F8C68A3566D, L_20, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// EventManager.StartListening(EventNameKeeper.RemoveAllMonster, RemoveAllMonster);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_21 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_21, __this, (intptr_t)((void*)MonsterController_RemoveAllMonster_m0DCCF94AD1A3F1AA172BD508FAB809920A9C5EF8_RuntimeMethod_var), NULL);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral0E73A0D4483A9B8C5D46F576AD8AF2E16194D56D, L_21, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.MonsterController::AttackMonster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_AttackMonster_mC4F4D6317A3EF9066AF24810EFA0E1A64957CEE3 (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D569DC9ABF8486FC40564ABA61F7F8C68A3566D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var monsterName = (string) EventManager.GetData(EventNameKeeper.AttackMonster);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = EventManager_GetData_m9769A8C0D0394B0BBB58A8C89B9A056B0F10419A(_stringLiteral7D569DC9ABF8486FC40564ABA61F7F8C68A3566D, NULL);
		// if(monsterName != gameObject.name)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		return;
	}

IL_0022:
	{
		// GetDamage();
		MonsterController_GetDamage_m241B5EB171262F1BA0300B00EEBA9794C3015DB4(__this, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.MonsterController::StartBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_StartBattle_m31D8ADE9791E76EB75C5434F5AECB015C95197C5 (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterController_StartBattle_m31D8ADE9791E76EB75C5434F5AECB015C95197C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D5569AD1802A3D3E9D925CADEEC7C645EF46BA6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.StopListening(EventNameKeeper.StartBattle, StartBattle);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)MonsterController_StartBattle_m31D8ADE9791E76EB75C5434F5AECB015C95197C5_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_StopListening_m657F5E3D56D13E7A361D075B5DE3EDF6B8617BAD(_stringLiteral1D5569AD1802A3D3E9D925CADEEC7C645EF46BA6, L_0, NULL);
		// slider.gameObject.SetActive(true);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_6;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.MonsterController::CanTouchAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_CanTouchAll_m3EEAF01F9374D1FCB1126C14BB1D16BD989A62B0 (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82645B897576CE368435E10E1894798BDE506E06);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* G_B2_0 = NULL;
	MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* G_B3_1 = NULL;
	{
		// var data = EventManager.GetData(EventNameKeeper.CanTouchAll);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = EventManager_GetData_m9769A8C0D0394B0BBB58A8C89B9A056B0F10419A(_stringLiteral82645B897576CE368435E10E1894798BDE506E06, NULL);
		V_0 = L_0;
		// _canTouchAll = data is null || (bool) data;
		RuntimeObject* L_1 = V_0;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		G_B3_0 = ((int32_t)(((*(bool*)((bool*)(bool*)UnBox(L_2, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))))));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->____canTouchAll_10 = (bool)G_B3_0;
		// }
		return;
	}
}
// System.Void Game.Scripts.MonsterController::OnStartTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_OnStartTurn_m991EFE59DE0E6CAAFB9039AF51ED49F61A2A8B43 (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentHolderProtocol_GetOrAddComponent_TisEnemyAI_t062D6559860346BBF7415F088B566404469B3C50_m7B6663C6B49612845B72FBC5F10DAA640732A66A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* V_1 = NULL;
	{
		// var index = (int) EventManager.GetData(EventNameKeeper.StartTurn);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = EventManager_GetData_m9769A8C0D0394B0BBB58A8C89B9A056B0F10419A(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, NULL);
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// var attribute = teamConfig.BattleSort(config)[index];
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_1 = __this->___teamConfig_4;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_2 = __this->___config_5;
		NullCheck(L_1);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_3;
		L_3 = BattleTeamConfig_BattleSort_mF45139FCA71762C4B8EC9FC4B1817255DBFE438D(L_1, L_2, NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_5;
		L_5 = List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010(L_3, L_4, List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		V_1 = L_5;
		// if (attribute.characterName != gameObject.name)
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->___characterName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		bool L_10;
		L_10 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_00a2;
		}
	}
	{
		// if (teamConfig.GetTeam().Contains(attribute.characterName))
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_11 = __this->___teamConfig_4;
		NullCheck(L_11);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12;
		L_12 = BattleTeamConfig_GetTeam_mC05839126BCC7BC44482B55F17B2C71475AC1231_inline(L_11, NULL);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = L_13->___characterName_0;
		NullCheck(L_12);
		bool L_15;
		L_15 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_12, L_14, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_007a;
		}
	}
	{
		// _isClocked = teamConfig.GetTeam().Contains(gameObject.name);
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_16 = __this->___teamConfig_4;
		NullCheck(L_16);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17;
		L_17 = BattleTeamConfig_GetTeam_mC05839126BCC7BC44482B55F17B2C71475AC1231_inline(L_16, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		NullCheck(L_17);
		bool L_20;
		L_20 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_17, L_19, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		__this->____isClocked_9 = L_20;
		return;
	}

IL_007a:
	{
		// _isClocked = teamConfig.GetEnemyTeam(config).Contains(gameObject.name);
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_21 = __this->___teamConfig_4;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_22 = __this->___config_5;
		NullCheck(L_21);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23;
		L_23 = BattleTeamConfig_GetEnemyTeam_m66A6F406F367601C6B9179D74FF3E24F35E7F94B(L_21, L_22, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_24, NULL);
		NullCheck(L_23);
		bool L_26;
		L_26 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_23, L_25, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		__this->____isClocked_9 = L_26;
		return;
	}

IL_00a2:
	{
		// _isClocked = true;
		__this->____isClocked_9 = (bool)1;
		// if (teamConfig.GetEnemyTeam(config).Contains(gameObject.name))
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_27 = __this->___teamConfig_4;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_28 = __this->___config_5;
		NullCheck(L_27);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_29;
		L_29 = BattleTeamConfig_GetEnemyTeam_m66A6F406F367601C6B9179D74FF3E24F35E7F94B(L_27, L_28, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_30, NULL);
		NullCheck(L_29);
		bool L_32;
		L_32 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_29, L_31, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_32)
		{
			goto IL_00ee;
		}
	}
	{
		// var ai = gameObject.GetOrAddComponent<EnemyAI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* L_34;
		L_34 = ComponentHolderProtocol_GetOrAddComponent_TisEnemyAI_t062D6559860346BBF7415F088B566404469B3C50_m7B6663C6B49612845B72FBC5F10DAA640732A66A(L_33, ComponentHolderProtocol_GetOrAddComponent_TisEnemyAI_t062D6559860346BBF7415F088B566404469B3C50_m7B6663C6B49612845B72FBC5F10DAA640732A66A_RuntimeMethod_var);
		// ai.SetConfig(teamConfig, config);
		EnemyAI_t062D6559860346BBF7415F088B566404469B3C50* L_35 = L_34;
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_36 = __this->___teamConfig_4;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_37 = __this->___config_5;
		NullCheck(L_35);
		EnemyAI_SetConfig_m9AB12F5A69354AA76AFB1FC9E54BEFE2144364B3(L_35, L_36, L_37, NULL);
		// ai.Active();
		NullCheck(L_35);
		EnemyAI_Active_m1867D2C4656C24D7F93B42A2A728BB1022A3F378(L_35, NULL);
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void Game.Scripts.MonsterController::OnMouseUpAsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_OnMouseUpAsButton_m01A63368B5BD899C4882A3533C59698B711A80F7 (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADED28B4D652D0026C1649363C3597E9EA772245);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_isClocked || _canTouchAll is false)
		bool L_0 = __this->____isClocked_9;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->____canTouchAll_10;
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// if(teamConfig.isBattle is false)
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_2 = __this->___teamConfig_4;
		NullCheck(L_2);
		bool L_3 = L_2->___isBattle_4;
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		// EventManager.EmitEventData(EventNameKeeper.SelectMonsterTeam, _monsterAttribute.characterName);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_4 = __this->____monsterAttribute_7;
		NullCheck(L_4);
		String_t* L_5 = L_4->___characterName_0;
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEventData_m6C4A0B52957ABDB53988073B38AAC1857F510660(_stringLiteralADED28B4D652D0026C1649363C3597E9EA772245, L_5, (0.0f), NULL);
		return;
	}

IL_0039:
	{
		// GetDamage();
		MonsterController_GetDamage_m241B5EB171262F1BA0300B00EEBA9794C3015DB4(__this, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.MonsterController::GetDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_GetDamage_m241B5EB171262F1BA0300B00EEBA9794C3015DB4 (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_mFF05AA61F2495C0EED3B807B0CB1966382BD4E52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_mFF05AA61F2495C0EED3B807B0CB1966382BD4E52(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_mFF05AA61F2495C0EED3B807B0CB1966382BD4E52_RuntimeMethod_var);
		return;
	}
}
// System.Void Game.Scripts.MonsterController::RemoveAllMonster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController_RemoveAllMonster_m0DCCF94AD1A3F1AA172BD508FAB809920A9C5EF8 (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.MonsterController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterController__ctor_mC63C56DB5A522C27E1962B5E453CCE5ED45567D0 (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean Game.Scripts.MonsterController::<GetDamage>b__13_0(Game.Scripts.Config.MonsterAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonsterController_U3CGetDamageU3Eb__13_0_mC3376BFBD70B21DAB9C1A6777332A7120101C395 (MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* __this, MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* ___value0, const RuntimeMethod* method) 
{
	{
		// config.MonsterAttributes().Find(value => value.characterName == gameObject.name).isDie = true;
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___characterName_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_3, NULL);
		return L_4;
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
// System.Void Game.Scripts.MonsterController/<GetDamage>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDamageU3Ed__13_MoveNext_m3443165DEFEB1EDB18FD3ECB0A73D0383B0AC887 (U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_m46993507A2A7E583D1EC864A2FA97C0650C89ADC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m156D33C29D70F998AD5616DC81E70D2F0AA5BDDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterController_U3CGetDamageU3Eb__13_0_mC3376BFBD70B21DAB9C1A6777332A7120101C395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5_mCC41BE31A721A7C3A183A05E2793A031340F766A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A51C1BA998D1C631A205D8C4E2C03B6D6528509);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82645B897576CE368435E10E1894798BDE506E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_7;
	memset((&V_7), 0, sizeof(V_7));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* G_B10_0 = NULL;
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* G_B9_0 = NULL;
	float G_B11_0 = 0.0f;
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* G_B11_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0130_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_020b_1;
			}
		}
		{
			// var index = (int) EventManager.GetData(EventNameKeeper.StartTurn);
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			RuntimeObject* L_4;
			L_4 = EventManager_GetData_m9769A8C0D0394B0BBB58A8C89B9A056B0F10419A(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, NULL);
			V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
			// var attribute = teamConfig.BattleSort(config)[index];
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_5 = V_1;
			NullCheck(L_5);
			BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_6 = L_5->___teamConfig_4;
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_7 = V_1;
			NullCheck(L_7);
			AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_8 = L_7->___config_5;
			NullCheck(L_6);
			List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_9;
			L_9 = BattleTeamConfig_BattleSort_mF45139FCA71762C4B8EC9FC4B1817255DBFE438D(L_6, L_8, NULL);
			int32_t L_10 = V_2;
			NullCheck(L_9);
			MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_11;
			L_11 = List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010(L_9, L_10, List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
			__this->___U3CattributeU3E5__2_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CattributeU3E5__2_3), (void*)L_11);
			// if(attribute.characterName == gameObject.name)
			MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_12 = __this->___U3CattributeU3E5__2_3;
			NullCheck(L_12);
			String_t* L_13 = L_12->___characterName_0;
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_14 = V_1;
			NullCheck(L_14);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
			L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
			NullCheck(L_15);
			String_t* L_16;
			L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
			bool L_17;
			L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, L_16, NULL);
			if (!L_17)
			{
				goto IL_006a_1;
			}
		}
		{
			// return;
			goto IL_02b0;
		}

IL_006a_1:
		{
			// var parent = transform.parent;
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_18 = V_1;
			NullCheck(L_18);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
			L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
			NullCheck(L_19);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
			L_20 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_19, NULL);
			V_3 = L_20;
			// var startMonster = parent.Find(attribute.characterName);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_3;
			MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_22 = __this->___U3CattributeU3E5__2_3;
			NullCheck(L_22);
			String_t* L_23 = L_22->___characterName_0;
			NullCheck(L_21);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
			L_24 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_21, L_23, NULL);
			V_4 = L_24;
			// var skillObject = Instantiate(attribute.skillObject, parent);
			MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_25 = __this->___U3CattributeU3E5__2_3;
			NullCheck(L_25);
			ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* L_26 = L_25->___skillObject_5;
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_3;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* L_28;
			L_28 = Object_Instantiate_TisParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5_mCC41BE31A721A7C3A183A05E2793A031340F766A(L_26, L_27, Object_Instantiate_TisParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5_mCC41BE31A721A7C3A183A05E2793A031340F766A_RuntimeMethod_var);
			V_5 = L_28;
			// var delayTimer = skillObject.GetDelayTimer();
			ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* L_29 = V_5;
			NullCheck(L_29);
			int32_t L_30;
			L_30 = ParticlesObject_GetDelayTimer_m189E65B62E10915B4570B5C10F4B0BB03E3A8CE2_inline(L_29, NULL);
			__this->___U3CdelayTimerU3E5__3_4 = L_30;
			// var speed = skillObject.GetSpeed();
			ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* L_31 = V_5;
			NullCheck(L_31);
			float L_32;
			L_32 = ParticlesObject_GetSpeed_m8AD56D126A94881120DD1FFA0A844B43907418E8_inline(L_31, NULL);
			__this->___U3CspeedU3E5__4_5 = L_32;
			// skillObject.Active(startMonster, transform);
			ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* L_33 = V_5;
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = V_4;
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_35 = V_1;
			NullCheck(L_35);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
			L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
			NullCheck(L_33);
			ParticlesObject_Active_m5C19CDC000351483DCC85B46F434B9CC7576CEFD(L_33, L_34, L_36, NULL);
			// EventManager.EmitEventData(EventNameKeeper.CanTouchAll, false);
			bool L_37 = ((bool)0);
			RuntimeObject* L_38 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_37);
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			EventManager_EmitEventData_m6C4A0B52957ABDB53988073B38AAC1857F510660(_stringLiteral82645B897576CE368435E10E1894798BDE506E06, L_38, (0.0f), NULL);
			// await UniTask.Delay((int) (speed * 1000));
			float L_39 = __this->___U3CspeedU3E5__4_5;
			il2cpp_codegen_initobj((&V_8), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_40 = V_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_41;
			L_41 = UniTask_Delay_m3D58C4E2738CAD61F29C9292DADAFAFB5DAC5C2A(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_39, (1000.0f)))), (bool)0, 8, L_40, NULL);
			V_9 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42;
			L_42 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_7 = L_42;
			bool L_43;
			L_43 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_7), NULL);
			if (L_43)
			{
				goto IL_014d_1;
			}
		}
		{
			int32_t L_44 = 0;
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_7;
			__this->___U3CU3Eu__1_6 = L_45;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_6))->___task_0))->___source_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_46 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_m46993507A2A7E583D1EC864A2FA97C0650C89ADC(L_46, (&V_7), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_m46993507A2A7E583D1EC864A2FA97C0650C89ADC_RuntimeMethod_var);
			goto IL_02ca;
		}

IL_0130_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = __this->___U3CU3Eu__1_6;
			V_7 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_48 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
		}

IL_014d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_7), NULL);
			// _currentHealth -= attribute.attackDamage;
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_50 = V_1;
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_51 = V_1;
			NullCheck(L_51);
			int32_t L_52 = L_51->____currentHealth_8;
			MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_53 = __this->___U3CattributeU3E5__2_3;
			NullCheck(L_53);
			int32_t L_54 = L_53->___attackDamage_2;
			NullCheck(L_50);
			L_50->____currentHealth_8 = ((int32_t)il2cpp_codegen_subtract(L_52, L_54));
			// slider.DOValue(_currentHealth < (float) default
			//     ? default
			//     : (float) _currentHealth / _monsterAttribute.health, speed).SetEase(Ease.Linear);
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_55 = V_1;
			NullCheck(L_55);
			Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_56 = L_55->___slider_6;
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_57 = V_1;
			NullCheck(L_57);
			int32_t L_58 = L_57->____currentHealth_8;
			G_B9_0 = L_56;
			if ((((float)((float)L_58)) < ((float)(0.0f))))
			{
				G_B10_0 = L_56;
				goto IL_0196_1;
			}
		}
		{
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_59 = V_1;
			NullCheck(L_59);
			int32_t L_60 = L_59->____currentHealth_8;
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_61 = V_1;
			NullCheck(L_61);
			MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_62 = L_61->____monsterAttribute_7;
			NullCheck(L_62);
			int32_t L_63 = L_62->___health_1;
			G_B11_0 = ((float)(((float)L_60)/((float)L_63)));
			G_B11_1 = G_B9_0;
			goto IL_019b_1;
		}

IL_0196_1:
		{
			G_B11_0 = (0.0f);
			G_B11_1 = G_B10_0;
		}

IL_019b_1:
		{
			float L_64 = __this->___U3CspeedU3E5__4_5;
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_65;
			L_65 = DOTweenModuleUI_DOValue_m38DB0CB09A73E2DDC33B3EEE49D74944FBA82A38(G_B11_1, G_B11_0, L_64, (bool)0, NULL);
			TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_66;
			L_66 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E(L_65, 1, TweenSettingsExtensions_SetEase_TisTweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1_mC938BE0C4068DBE3763250E39EF3BB0570E9AB7E_RuntimeMethod_var);
			// await UniTask.Delay(delayTimer - (int) (speed * 1000));
			int32_t L_67 = __this->___U3CdelayTimerU3E5__3_4;
			float L_68 = __this->___U3CspeedU3E5__4_5;
			il2cpp_codegen_initobj((&V_8), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_69 = V_8;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_70;
			L_70 = UniTask_Delay_m3D58C4E2738CAD61F29C9292DADAFAFB5DAC5C2A(((int32_t)il2cpp_codegen_subtract(L_67, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_68, (1000.0f)))))), (bool)0, 8, L_69, NULL);
			V_9 = L_70;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_71;
			L_71 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_7 = L_71;
			bool L_72;
			L_72 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_7), NULL);
			if (L_72)
			{
				goto IL_0228_1;
			}
		}
		{
			int32_t L_73 = 1;
			V_0 = L_73;
			__this->___U3CU3E1__state_0 = L_73;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_74 = V_7;
			__this->___U3CU3Eu__1_6 = L_74;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_6))->___task_0))->___source_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_75 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_m46993507A2A7E583D1EC864A2FA97C0650C89ADC(L_75, (&V_7), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A_m46993507A2A7E583D1EC864A2FA97C0650C89ADC_RuntimeMethod_var);
			goto IL_02ca;
		}

IL_020b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = __this->___U3CU3Eu__1_6;
			V_7 = L_76;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_77 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_77, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_78 = (-1);
			V_0 = L_78;
			__this->___U3CU3E1__state_0 = L_78;
		}

IL_0228_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_7), NULL);
			// var isDie = false;
			V_6 = (bool)0;
			// if (_currentHealth <= (int) default)
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_79 = V_1;
			NullCheck(L_79);
			int32_t L_80 = L_79->____currentHealth_8;
			if ((((int32_t)L_80) > ((int32_t)0)))
			{
				goto IL_0260_1;
			}
		}
		{
			// isDie = true;
			V_6 = (bool)1;
			// config.MonsterAttributes().Find(value => value.characterName == gameObject.name).isDie = true;
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_81 = V_1;
			NullCheck(L_81);
			AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_82 = L_81->___config_5;
			NullCheck(L_82);
			List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_83;
			L_83 = AttributeConfig_MonsterAttributes_mAAAA2917F1A11CE1BB3572FD4D33C3B2A4DED2D5_inline(L_82, NULL);
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_84 = V_1;
			Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A* L_85 = (Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A*)il2cpp_codegen_object_new(Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A_il2cpp_TypeInfo_var);
			NullCheck(L_85);
			Predicate_1__ctor_m4DE0016A3D050E0976ACCBBCB9104D38CD721937(L_85, L_84, (intptr_t)((void*)MonsterController_U3CGetDamageU3Eb__13_0_mC3376BFBD70B21DAB9C1A6777332A7120101C395_RuntimeMethod_var), NULL);
			NullCheck(L_83);
			MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_86;
			L_86 = List_1_Find_m156D33C29D70F998AD5616DC81E70D2F0AA5BDDB(L_83, L_85, List_1_Find_m156D33C29D70F998AD5616DC81E70D2F0AA5BDDB_RuntimeMethod_var);
			NullCheck(L_86);
			L_86->___isDie_4 = (bool)1;
		}

IL_0260_1:
		{
			// EventManager.EmitEventData(EventNameKeeper.CanTouchAll, true);
			bool L_87 = ((bool)1);
			RuntimeObject* L_88 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_87);
			il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
			EventManager_EmitEventData_m6C4A0B52957ABDB53988073B38AAC1857F510660(_stringLiteral82645B897576CE368435E10E1894798BDE506E06, L_88, (0.0f), NULL);
			// EventManager.EmitEvent(EventNameKeeper.DoneTurn);
			EventManager_EmitEvent_m7FA138F58500BF74EF72A857ABF7C0EDE60BB414(_stringLiteral4A51C1BA998D1C631A205D8C4E2C03B6D6528509, NULL);
			// if (isDie)
			bool L_89 = V_6;
			if (!L_89)
			{
				goto IL_028e_1;
			}
		}
		{
			// Destroy(gameObject);
			MonsterController_t373E78CBA4B0810FF1E81278F366064201FF3A7A* L_90 = V_1;
			NullCheck(L_90);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91;
			L_91 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_90, NULL);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_91, NULL);
		}

IL_028e_1:
		{
			goto IL_02b0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0290;
		}
		throw e;
	}

CATCH_0290:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CattributeU3E5__2_3 = (MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CattributeU3E5__2_3), (void*)(MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_92 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_93 = V_10;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_92, L_93, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02ca;
	}// end catch (depth: 1)

IL_02b0:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CattributeU3E5__2_3 = (MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CattributeU3E5__2_3), (void*)(MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_94 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_94, NULL);
	}

IL_02ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetDamageU3Ed__13_MoveNext_m3443165DEFEB1EDB18FD3ECB0A73D0383B0AC887_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A*>(__this + _offset);
	U3CGetDamageU3Ed__13_MoveNext_m3443165DEFEB1EDB18FD3ECB0A73D0383B0AC887(_thisAdjusted, method);
}
// System.Void Game.Scripts.MonsterController/<GetDamage>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDamageU3Ed__13_SetStateMachine_m623B649601C63DBACE0C6111160BCEFAEBC3ED33 (U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetDamageU3Ed__13_SetStateMachine_m623B649601C63DBACE0C6111160BCEFAEBC3ED33_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetDamageU3Ed__13_t9FC58CAB85E6B4AB3A8DEC83CDB7743167488D7A*>(__this + _offset);
	U3CGetDamageU3Ed__13_SetStateMachine_m623B649601C63DBACE0C6111160BCEFAEBC3ED33(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Game.Scripts.ParticlesObject::GetDelayTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticlesObject_GetDelayTimer_m189E65B62E10915B4570B5C10F4B0BB03E3A8CE2 (ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* __this, const RuntimeMethod* method) 
{
	{
		// public int GetDelayTimer() => delayTime;
		int32_t L_0 = __this->___delayTime_5;
		return L_0;
	}
}
// System.Single Game.Scripts.ParticlesObject::GetSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticlesObject_GetSpeed_m8AD56D126A94881120DD1FFA0A844B43907418E8 (ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* __this, const RuntimeMethod* method) 
{
	{
		// public float GetSpeed() => speed;
		float L_0 = __this->___speed_4;
		return L_0;
	}
}
// System.Void Game.Scripts.ParticlesObject::Active(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticlesObject_Active_m5C19CDC000351483DCC85B46F434B9CC7576CEFD (ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___start0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___end1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF_mA844F2C299D2E61E2225A7316F2CF515A5750A09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___start0;
		(&V_0)->___start_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___start_3), (void*)L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___end1;
		(&V_0)->___end_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___end_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF_mA844F2C299D2E61E2225A7316F2CF515A5750A09(L_3, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF_mA844F2C299D2E61E2225A7316F2CF515A5750A09_RuntimeMethod_var);
		return;
	}
}
// System.Void Game.Scripts.ParticlesObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticlesObject__ctor_mBD58CC9E26FBB7315AA83DC36341B5AAEB343AAA (ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float speed = 0.5f;
		__this->___speed_4 = (0.5f);
		// [SerializeField] private int delayTime = 1700;
		__this->___delayTime_5 = ((int32_t)1700);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Game.Scripts.ParticlesObject/<Active>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActiveU3Ed__4_MoveNext_mB9ED6A46B4FFDE10F5558267B48C7FD37D6E49C9 (U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF_m713DC09EE12FD0BA93CB80C20C74C5AB513DD83C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0097_1;
			}
		}
		{
			// transform.position = start.position;
			ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* L_3 = V_1;
			NullCheck(L_3);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
			L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___start_3;
			NullCheck(L_5);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
			L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
			NullCheck(L_4);
			Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_6, NULL);
			// transform.DOMove(end.position, speed).SetEase(Ease.Linear);
			ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* L_7 = V_1;
			NullCheck(L_7);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
			L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___end_4;
			NullCheck(L_9);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
			L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
			ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* L_11 = V_1;
			NullCheck(L_11);
			float L_12 = L_11->___speed_4;
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_13;
			L_13 = ShortcutExtensions_DOMove_m82274FDC0216A91A1FAF16844805D06BF9A287FF(L_8, L_10, L_12, (bool)0, NULL);
			TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_14;
			L_14 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_13, 1, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
			// await UniTask.Delay(delayTime);
			ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* L_15 = V_1;
			NullCheck(L_15);
			int32_t L_16 = L_15->___delayTime_5;
			il2cpp_codegen_initobj((&V_3), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_17 = V_3;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_18;
			L_18 = UniTask_Delay_m3D58C4E2738CAD61F29C9292DADAFAFB5DAC5C2A(L_16, (bool)0, 8, L_17, NULL);
			V_4 = L_18;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_19;
			L_19 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_4), NULL);
			V_2 = L_19;
			bool L_20;
			L_20 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_20)
			{
				goto IL_00b3_1;
			}
		}
		{
			int32_t L_21 = 0;
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22 = V_2;
			__this->___U3CU3Eu__1_5 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_5))->___task_0))->___source_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_23 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF_m713DC09EE12FD0BA93CB80C20C74C5AB513DD83C(L_23, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF_m713DC09EE12FD0BA93CB80C20C74C5AB513DD83C_RuntimeMethod_var);
			goto IL_00f3;
		}

IL_0097_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_24 = __this->___U3CU3Eu__1_5;
			V_2 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_25 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_25, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
		}

IL_00b3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			// Destroy(gameObject);
			ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* L_27 = V_1;
			NullCheck(L_27);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
			L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_28, NULL);
			goto IL_00e0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c7;
		}
		throw e;
	}

CATCH_00c7:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_29 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_30 = V_5;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_29, L_30, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f3;
	}// end catch (depth: 1)

IL_00e0:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_31 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_31, NULL);
	}

IL_00f3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CActiveU3Ed__4_MoveNext_mB9ED6A46B4FFDE10F5558267B48C7FD37D6E49C9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF*>(__this + _offset);
	U3CActiveU3Ed__4_MoveNext_mB9ED6A46B4FFDE10F5558267B48C7FD37D6E49C9(_thisAdjusted, method);
}
// System.Void Game.Scripts.ParticlesObject/<Active>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActiveU3Ed__4_SetStateMachine_m082710A1800B19F493E5AED385CA58F401DA9756 (U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CActiveU3Ed__4_SetStateMachine_m082710A1800B19F493E5AED385CA58F401DA9756_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CActiveU3Ed__4_tA7AFB0ABF21BFD6EE36B2651C788CECAAAB61CEF*>(__this + _offset);
	U3CActiveU3Ed__4_SetStateMachine_m082710A1800B19F493E5AED385CA58F401DA9756(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Game.Scripts.PlayBattleButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBattleButton_Awake_m789347B346243ED15EF4C30746BA52228D489ED0 (PlayBattleButton_t83B1C7E2FD7D71131C02D22A68627EF7A33C1178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentHolderProtocol_GetOrAddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mF0E99E2B9B6B2DBF2ADC259BDEC236D4F9625E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayBattleButton_ChangeToBattle_m7F51B4429FD77C6DEBF4FD602B6380EA0DF9801C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button ??= gameObject.GetOrAddComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___button_4;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2;
		L_2 = ComponentHolderProtocol_GetOrAddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mF0E99E2B9B6B2DBF2ADC259BDEC236D4F9625E68(L_1, ComponentHolderProtocol_GetOrAddComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mF0E99E2B9B6B2DBF2ADC259BDEC236D4F9625E68_RuntimeMethod_var);
		__this->___button_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___button_4), (void*)L_2);
	}

IL_0019:
	{
		// button.onClick.AddListener(ChangeToBattle);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___button_4;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)PlayBattleButton_ChangeToBattle_m7F51B4429FD77C6DEBF4FD602B6380EA0DF9801C_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.PlayBattleButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBattleButton_Start_m84588B98EC8475652978C4EA49F6651F52EA5198 (PlayBattleButton_t83B1C7E2FD7D71131C02D22A68627EF7A33C1178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayBattleButton_UpdateView_m9A7CDE75152E3F2CF5A1D5058D9FCA636EA1CE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38A9FD34017A8F9DE07E80AD287FFEE461399BE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.StartListening(EventNameKeeper.DoneSelectMonsterTeam, UpdateView);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)PlayBattleButton_UpdateView_m9A7CDE75152E3F2CF5A1D5058D9FCA636EA1CE2F_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral38A9FD34017A8F9DE07E80AD287FFEE461399BE6, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// UpdateView();
		PlayBattleButton_UpdateView_m9A7CDE75152E3F2CF5A1D5058D9FCA636EA1CE2F(__this, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.PlayBattleButton::UpdateView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBattleButton_UpdateView_m9A7CDE75152E3F2CF5A1D5058D9FCA636EA1CE2F (PlayBattleButton_t83B1C7E2FD7D71131C02D22A68627EF7A33C1178* __this, const RuntimeMethod* method) 
{
	{
		// button.interactable = config.IsFullTeam();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___button_4;
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_1 = __this->___config_5;
		NullCheck(L_1);
		bool L_2;
		L_2 = BattleTeamConfig_IsFullTeam_mA63272785284E137DB6A075FC28D2397BABDAA0C(L_1, NULL);
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.PlayBattleButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBattleButton_OnDisable_mA5B34AE5BCE554D1AC3E7E2AA53F4FA5504804D0 (PlayBattleButton_t83B1C7E2FD7D71131C02D22A68627EF7A33C1178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.PlayBattleButton::ChangeToBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBattleButton_ChangeToBattle_m7F51B4429FD77C6DEBF4FD602B6380EA0DF9801C (PlayBattleButton_t83B1C7E2FD7D71131C02D22A68627EF7A33C1178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AE33691C19C0F66C1EF7288BFCD552C98DEB958);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ADA37BEA6AFB2EDCA9094443AE7419B09E74943);
		s_Il2CppMethodInitialized = true;
	}
	WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ScreenContainer.Find(EventNameKeeper.ScreenContainer).Pop(false);
		il2cpp_codegen_runtime_class_init_inline(ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_il2cpp_TypeInfo_var);
		ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* L_0;
		L_0 = ScreenContainer_Find_m0D44D21BF045BCF038D3F64FD90A17C01AA937A5(_stringLiteral8ADA37BEA6AFB2EDCA9094443AE7419B09E74943, NULL);
		NullCheck(L_0);
		AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* L_1;
		L_1 = ScreenContainer_Pop_mDAA724C5E1F56E702EE1B06D9447E77DB218482A(L_0, (bool)0, NULL);
		// var options = new WindowOptions(EventNameKeeper.BattleScreen, false, loadAsync: false);
		WindowOptions__ctor_m772514999A01EB661B0EEC5F229A24BA4264F670((&V_0), _stringLiteral7AE33691C19C0F66C1EF7288BFCD552C98DEB958, (bool)0, (Action_1_tF3A4D9C1EB5202EBEE6F15DF6B9D5BFE1AF2A9CB*)NULL, (bool)0, NULL);
		// ScreenContainer.Find(EventNameKeeper.ScreenContainer).Push(options);
		ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* L_2;
		L_2 = ScreenContainer_Find_m0D44D21BF045BCF038D3F64FD90A17C01AA937A5(_stringLiteral8ADA37BEA6AFB2EDCA9094443AE7419B09E74943, NULL);
		ScreenOptions_t3BC7FCCF3C5282AA0B74B9CCD8044EF3BE6FE8C3 L_3;
		L_3 = ScreenOptions_op_Implicit_mD306180F4CFED0CBA28BB21FACB10E174C0B228F((&V_0), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* L_5;
		L_5 = ScreenContainer_Push_mB3DC09084C1E3CE85748509105090A5CC420B091(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.PlayBattleButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayBattleButton__ctor_mD388C32F609CCB6751B4C5F4E89C784FAA8C07EF (PlayBattleButton_t83B1C7E2FD7D71131C02D22A68627EF7A33C1178* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Game.Scripts.Screens.BattleScreen::DidPushEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleScreen_DidPushEnter_m79565BC2654876B59FC43307F4E6F5F57BE328EC (BattleScreen_t59ABF8896117B14D82A1445B47B6C2A061C7F944* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleScreen_DoneTurn_mB02B11E61FAFE707ADF3C862CC79CE5878274D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleScreen_OnEndBattle_mD53CAD643D288CB72FECF79C75A201A4F4954759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleScreen_StartTurn_m09347CE406EA6D97BC2FB7FAF370158C3CE2A1CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D5569AD1802A3D3E9D925CADEEC7C645EF46BA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A51C1BA998D1C631A205D8C4E2C03B6D6528509);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82645B897576CE368435E10E1894798BDE506E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9614A254DEFE3BB470A33BB1E086D0F43A712DC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251);
		s_Il2CppMethodInitialized = true;
	}
	{
		// teamConfig.isBattle = true;
		BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* L_0 = __this->___teamConfig_18;
		NullCheck(L_0);
		L_0->___isBattle_4 = (bool)1;
		// _currentCountdown = default;
		__this->____currentCountdown_22 = 0;
		// EventManager.EmitEvent(EventNameKeeper.StartBattle);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEvent_m7FA138F58500BF74EF72A857ABF7C0EDE60BB414(_stringLiteral1D5569AD1802A3D3E9D925CADEEC7C645EF46BA6, NULL);
		// EventManager.StartListening(EventNameKeeper.StartTurn, StartTurn);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_1, __this, (intptr_t)((void*)BattleScreen_StartTurn_m09347CE406EA6D97BC2FB7FAF370158C3CE2A1CA_RuntimeMethod_var), NULL);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteralDD94C20594F96CCD06412ABEAE254605B0960251, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// EventManager.StartListening(EventNameKeeper.DoneTurn, DoneTurn);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)BattleScreen_DoneTurn_mB02B11E61FAFE707ADF3C862CC79CE5878274D5F_RuntimeMethod_var), NULL);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral4A51C1BA998D1C631A205D8C4E2C03B6D6528509, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// EventManager.StartListening(EventNameKeeper.CanTouchAll, DoneTurn);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)BattleScreen_DoneTurn_mB02B11E61FAFE707ADF3C862CC79CE5878274D5F_RuntimeMethod_var), NULL);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral82645B897576CE368435E10E1894798BDE506E06, L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// EventManager.StartListening(EventNameKeeper.EndBattle, OnEndBattle);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)BattleScreen_OnEndBattle_mD53CAD643D288CB72FECF79C75A201A4F4954759_RuntimeMethod_var), NULL);
		EventManager_StartListening_m1D685C3D268ACBB2241F6CDCC62301C92A811EC8(_stringLiteral9614A254DEFE3BB470A33BB1E086D0F43A712DC0, L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.Screens.BattleScreen::OnEndBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleScreen_OnEndBattle_mD53CAD643D288CB72FECF79C75A201A4F4954759 (BattleScreen_t59ABF8896117B14D82A1445B47B6C2A061C7F944* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E2C540B86F829A583DF6FB8E7045A8D5A78A684);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral456938957FDC8D984928D3E1E0B13F0E9AD8477B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ModalContainer.Find(EventNameKeeper.ModalContainer).Push(EventNameKeeper.EndGameModal);
		il2cpp_codegen_runtime_class_init_inline(ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5_il2cpp_TypeInfo_var);
		ModalContainer_tF6755DEDD4C9AC6D82B70C18DB4FBDC61C97C2F5* L_0;
		L_0 = ModalContainer_Find_m34161F0DBACB25AEDBABEB3F863B0154FE7EFE52(_stringLiteral456938957FDC8D984928D3E1E0B13F0E9AD8477B, NULL);
		WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731 L_1;
		L_1 = WindowOptions_op_Implicit_m44CC47CB09FD7903374E011CDB46DD003C4CC1E8(_stringLiteral1E2C540B86F829A583DF6FB8E7045A8D5A78A684, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* L_3;
		L_3 = ModalContainer_Push_m05E970F790DF676FB7626533C31372C0324EA1B0(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.Screens.BattleScreen::StartTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleScreen_StartTurn_m09347CE406EA6D97BC2FB7FAF370158C3CE2A1CA (BattleScreen_t59ABF8896117B14D82A1445B47B6C2A061C7F944* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA5D1678F32A09910940A4AF6C6E58B3E5E917F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentCountdown = countdown;
		int32_t L_0 = __this->___countdown_21;
		__this->____currentCountdown_22 = L_0;
		// text.SetText(format, _currentCountdown);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___text_19;
		String_t* L_2 = __this->___format_20;
		int32_t L_3 = __this->____currentCountdown_22;
		NullCheck(L_1);
		TMP_Text_SetText_mC6973FFC60DB6A96B0C4253CD2FD9D0789ECC533(L_1, L_2, ((float)L_3), NULL);
		// InvokeRepeating(nameof(CountDown), default, 1);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralADA5D1678F32A09910940A4AF6C6E58B3E5E917F, (0.0f), (1.0f), NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.Screens.BattleScreen::DoneTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleScreen_DoneTurn_mB02B11E61FAFE707ADF3C862CC79CE5878274D5F (BattleScreen_t59ABF8896117B14D82A1445B47B6C2A061C7F944* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA5D1678F32A09910940A4AF6C6E58B3E5E917F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(IsInvoking(nameof(CountDown)))
		bool L_0;
		L_0 = MonoBehaviour_IsInvoking_m9CD08C2F7F5E83660FFE3B5A373B202CCBDB3708(__this, _stringLiteralADA5D1678F32A09910940A4AF6C6E58B3E5E917F, NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// _currentCountdown = default;
		__this->____currentCountdown_22 = 0;
		// CancelInvoke(nameof(CountDown));
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteralADA5D1678F32A09910940A4AF6C6E58B3E5E917F, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Game.Scripts.Screens.BattleScreen::CountDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleScreen_CountDown_mC66CD8B784D0F4994EF1CB6D86C7B7EB75E5B929 (BattleScreen_t59ABF8896117B14D82A1445B47B6C2A061C7F944* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A51C1BA998D1C631A205D8C4E2C03B6D6528509);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADA5D1678F32A09910940A4AF6C6E58B3E5E917F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _currentCountdown--;
		int32_t L_0 = __this->____currentCountdown_22;
		__this->____currentCountdown_22 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// text.SetText(format, _currentCountdown);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___text_19;
		String_t* L_2 = __this->___format_20;
		int32_t L_3 = __this->____currentCountdown_22;
		NullCheck(L_1);
		TMP_Text_SetText_mC6973FFC60DB6A96B0C4253CD2FD9D0789ECC533(L_1, L_2, ((float)L_3), NULL);
		// if (_currentCountdown <= (int) default)
		int32_t L_4 = __this->____currentCountdown_22;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		// _currentCountdown = default;
		__this->____currentCountdown_22 = 0;
		// CancelInvoke(nameof(CountDown));
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteralADA5D1678F32A09910940A4AF6C6E58B3E5E917F, NULL);
		// EventManager.EmitEvent(EventNameKeeper.DoneTurn);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEvent_m7FA138F58500BF74EF72A857ABF7C0EDE60BB414(_stringLiteral4A51C1BA998D1C631A205D8C4E2C03B6D6528509, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Game.Scripts.Screens.BattleScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleScreen__ctor_mC679539F5DF72D8B51737C70BC032A93DC6DFB58 (BattleScreen_t59ABF8896117B14D82A1445B47B6C2A061C7F944* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral790DD345EA62885BA235F3F5C54DB3ACA5C5BF53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string format = "{0}s";
		__this->___format_20 = _stringLiteral790DD345EA62885BA235F3F5C54DB3ACA5C5BF53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___format_20), (void*)_stringLiteral790DD345EA62885BA235F3F5C54DB3ACA5C5BF53);
		Screen__ctor_mAD5A0755153C62FB93CA875C4642E2974D4A94EF(__this, NULL);
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
// System.Void Game.Scripts.Screens.LoadingScreen::DidPushEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingScreen_DidPushEnter_mBCFB1DBA2F00C3E6976CF634503C8C293567057E (LoadingScreen_t4E93231307D803C8ABB78BBE8644348E90192A1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _timer = default;
		__this->____timer_22 = (0.0f);
		// InvokeRepeating(nameof(Loading), default, Time.deltaTime);
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5, (0.0f), L_0, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.Screens.LoadingScreen::DidPopExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingScreen_DidPopExit_m57D5D73036B095162F96C80F4CD195D9DD9A630F (LoadingScreen_t4E93231307D803C8ABB78BBE8644348E90192A1E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Game.Scripts.Screens.LoadingScreen::Loading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingScreen_Loading_mAAE6B675D5D99B215694D0FDF77C2347AF9C9DB7 (LoadingScreen_t4E93231307D803C8ABB78BBE8644348E90192A1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3905B990E856C096FE4CA5D65FA83700E2DFC4E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4263DAB6ABF2073113B702B65C2621AF7CCAAF2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5);
		s_Il2CppMethodInitialized = true;
	}
	WindowOptions_tC2B81C06FAE3DA2948EA2C6BBECD13A68727D731 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _timer += Time.deltaTime;
		float L_0 = __this->____timer_22;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____timer_22 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (_timer >= loadingTime)
		float L_2 = __this->____timer_22;
		int32_t L_3 = __this->___loadingTime_21;
		if ((!(((float)L_2) >= ((float)((float)L_3)))))
		{
			goto IL_0086;
		}
	}
	{
		// _timer = loadingTime;
		int32_t L_4 = __this->___loadingTime_21;
		__this->____timer_22 = ((float)L_4);
		// if(IsInvoking(nameof(Loading)))
		bool L_5;
		L_5 = MonoBehaviour_IsInvoking_m9CD08C2F7F5E83660FFE3B5A373B202CCBDB3708(__this, _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// CancelInvoke(nameof(Loading));
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5, NULL);
	}

IL_0046:
	{
		// var options = new WindowOptions(EventNameKeeper.TeamSelectScreen, false, loadAsync: false);
		WindowOptions__ctor_m772514999A01EB661B0EEC5F229A24BA4264F670((&V_0), _stringLiteral4263DAB6ABF2073113B702B65C2621AF7CCAAF2C, (bool)0, (Action_1_tF3A4D9C1EB5202EBEE6F15DF6B9D5BFE1AF2A9CB*)NULL, (bool)0, NULL);
		// ScreenContainer.Of(transform).Pop(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020_il2cpp_TypeInfo_var);
		ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* L_7;
		L_7 = ScreenContainer_Of_m9130EB3462D09D37ECB3123B44356653BF180529(L_6, (bool)1, NULL);
		NullCheck(L_7);
		AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* L_8;
		L_8 = ScreenContainer_Pop_mDAA724C5E1F56E702EE1B06D9447E77DB218482A(L_7, (bool)0, NULL);
		// ScreenContainer.Of(transform).Push(options);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		ScreenContainer_t01B498C5E032E000DCB2944E4D6A6E719F109020* L_10;
		L_10 = ScreenContainer_Of_m9130EB3462D09D37ECB3123B44356653BF180529(L_9, (bool)1, NULL);
		ScreenOptions_t3BC7FCCF3C5282AA0B74B9CCD8044EF3BE6FE8C3 L_11;
		L_11 = ScreenOptions_op_Implicit_mD306180F4CFED0CBA28BB21FACB10E174C0B228F((&V_0), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_10);
		AsyncProcessHandle_t4772FAEBA2B9D84CE252A98AFC68C7D69CF84A3F* L_13;
		L_13 = ScreenContainer_Push_mB3DC09084C1E3CE85748509105090A5CC420B091(L_10, L_11, L_12, NULL);
	}

IL_0086:
	{
		// slider.value = _timer / loadingTime;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___slider_18;
		float L_15 = __this->____timer_22;
		int32_t L_16 = __this->___loadingTime_21;
		NullCheck(L_14);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_14, ((float)(L_15/((float)L_16))));
		// text.SetText(string.Format(textFormat, $"{slider.value * 100:N0}"));
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_17 = __this->___text_19;
		String_t* L_18 = __this->___textFormat_20;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19 = __this->___slider_18;
		NullCheck(L_19);
		float L_20;
		L_20 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_19);
		float L_21 = ((float)il2cpp_codegen_multiply(L_20, (100.0f)));
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3905B990E856C096FE4CA5D65FA83700E2DFC4E5, L_22, NULL);
		String_t* L_24;
		L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_18, L_23, NULL);
		NullCheck(L_17);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_17, L_24, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.Screens.LoadingScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingScreen__ctor_mE7CA819A853CD19C0FD30816E62F490E5847F791 (LoadingScreen_t4E93231307D803C8ABB78BBE8644348E90192A1E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private int loadingTime = 2;
		__this->___loadingTime_21 = 2;
		Screen__ctor_mAD5A0755153C62FB93CA875C4642E2974D4A94EF(__this, NULL);
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
// System.Void Game.Scripts.Screens.TeamSelectScreen::DidPushEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamSelectScreen_DidPushEnter_m7DA5452370E3132EB872A7071E3F56D144E45593 (TeamSelectScreen_t3BE798311F87BF2F9C4BEAE0380E9625D5A186C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71D0FC39481D0916717CF6CDBA7E25AF075CB762);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventManager.EmitEvent(EventNameKeeper.InstantiateAsyncMonsters);
		il2cpp_codegen_runtime_class_init_inline(EventManager_t1E5EFF3BA95E88489BB510E72D3DCBE9B87A109C_il2cpp_TypeInfo_var);
		EventManager_EmitEvent_m7FA138F58500BF74EF72A857ABF7C0EDE60BB414(_stringLiteral71D0FC39481D0916717CF6CDBA7E25AF075CB762, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.Screens.TeamSelectScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamSelectScreen__ctor_m1B1F52A461A72ACFDF5DF526ABA94142381C7412 (TeamSelectScreen_t3BE798311F87BF2F9C4BEAE0380E9625D5A186C0* __this, const RuntimeMethod* method) 
{
	{
		Screen__ctor_mAD5A0755153C62FB93CA875C4642E2974D4A94EF(__this, NULL);
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
// System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute> Game.Scripts.Config.AttributeConfig::MonsterAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* AttributeConfig_MonsterAttributes_mAAAA2917F1A11CE1BB3572FD4D33C3B2A4DED2D5 (AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* __this, const RuntimeMethod* method) 
{
	{
		// public List<MonsterAttribute> MonsterAttributes() => monsterAttributes;
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_0 = __this->___monsterAttributes_4;
		return L_0;
	}
}
// Game.Scripts.Config.MonsterAttribute Game.Scripts.Config.AttributeConfig::GetMonster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* AttributeConfig_GetMonster_mBAB7AD752F65D23A369E5BDD0B49D591B788E07C (AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* __this, String_t* ___nameMonster0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m156D33C29D70F998AD5616DC81E70D2F0AA5BDDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetMonsterU3Eb__0_m80C2B3397F28628D772641D112953D5D107BA9A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2* L_0 = (U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_mE92F77065813BC933223B10C0F36AAA099A2E442(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2* L_1 = V_0;
		String_t* L_2 = ___nameMonster0;
		NullCheck(L_1);
		L_1->___nameMonster_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___nameMonster_0), (void*)L_2);
		// var monsterAttribute = monsterAttributes.Find(attribute => attribute.characterName == nameMonster);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_3 = __this->___monsterAttributes_4;
		U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2* L_4 = V_0;
		Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A* L_5 = (Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A*)il2cpp_codegen_object_new(Predicate_1_t49B613C29D4BB23AD832B8AAA642DBAFD810A73A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m4DE0016A3D050E0976ACCBBCB9104D38CD721937(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetMonsterU3Eb__0_m80C2B3397F28628D772641D112953D5D107BA9A6_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_6;
		L_6 = List_1_Find_m156D33C29D70F998AD5616DC81E70D2F0AA5BDDB(L_3, L_5, List_1_Find_m156D33C29D70F998AD5616DC81E70D2F0AA5BDDB_RuntimeMethod_var);
		// return monsterAttribute;
		return L_6;
	}
}
// System.Void Game.Scripts.Config.AttributeConfig::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeConfig_OnDisable_m8AA7646B380F6B60F26EEAB98F5C265C138E6BE1 (AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* __this, const RuntimeMethod* method) 
{
	{
		// Release();
		AttributeConfig_Release_m5FC441DB12A52823E6863C4C9E85DFF12DE8C787(__this, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.Config.AttributeConfig::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeConfig_Release_m5FC441DB12A52823E6863C4C9E85DFF12DE8C787 (AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var value in monsterAttributes)
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_0 = __this->___monsterAttributes_4;
		NullCheck(L_0);
		Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E L_1;
		L_1 = List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601(L_0, List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38((&V_0), Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach (var value in monsterAttributes)
				MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_2;
				L_2 = Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_inline((&V_0), Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_RuntimeMethod_var);
				// value.isDie = false;
				NullCheck(L_2);
				L_2->___isDie_4 = (bool)0;
			}

IL_001b_1:
			{
				// foreach (var value in monsterAttributes)
				bool L_3;
				L_3 = Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762((&V_0), Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Game.Scripts.Config.AttributeConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeConfig__ctor_mFC4E7F7603CC789E8C6377DAB1229F682DD8ADA0 (AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Game.Scripts.Config.AttributeConfig/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mE92F77065813BC933223B10C0F36AAA099A2E442 (U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Game.Scripts.Config.AttributeConfig/<>c__DisplayClass2_0::<GetMonster>b__0(Game.Scripts.Config.MonsterAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CGetMonsterU3Eb__0_m80C2B3397F28628D772641D112953D5D107BA9A6 (U3CU3Ec__DisplayClass2_0_t9C842136C9B1BACADDC6CE8D1C844A8D6903C6E2* __this, MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* ___attribute0, const RuntimeMethod* method) 
{
	{
		// var monsterAttribute = monsterAttributes.Find(attribute => attribute.characterName == nameMonster);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_0 = ___attribute0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___characterName_0;
		String_t* L_2 = __this->___nameMonster_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Boolean Game.Scripts.Config.BattleTeamConfig::PickMonster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleTeamConfig_PickMonster_m04494EBC5C5AD77C57A5C82E00E2BD570F61E7D8 (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, String_t* ___nameMonster0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var contains = teams.Contains(nameMonster);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___teams_7;
		String_t* L_1 = ___nameMonster0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		// if(contains)
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// for (int i = 0; i < teams.Count; i++)
		V_0 = 0;
		goto IL_0041;
	}

IL_0014:
	{
		// if (string.IsNullOrEmpty(teams[i]))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___teams_7;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_3, L_4, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// teams[i] = nameMonster;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->___teams_7;
		int32_t L_8 = V_0;
		String_t* L_9 = ___nameMonster0;
		NullCheck(L_7);
		List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C(L_7, L_8, L_9, List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C_RuntimeMethod_var);
		// currentIndexPick = i;
		int32_t L_10 = V_0;
		__this->___currentIndexPick_6 = L_10;
		// return true;
		return (bool)1;
	}

IL_003d:
	{
		// for (int i = 0; i < teams.Count; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0041:
	{
		// for (int i = 0; i < teams.Count; i++)
		int32_t L_12 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->___teams_7;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_13, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Game.Scripts.Config.BattleTeamConfig::RemoveMonster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleTeamConfig_RemoveMonster_m1C18251D12A538344309BE33CD1D9DC11242B41E (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, String_t* ___nameMonster0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var contains = teams.Contains(nameMonster);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___teams_7;
		String_t* L_1 = ___nameMonster0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		// if(contains is false)
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// for (int i = 0; i < teams.Count; i++)
		V_0 = 0;
		goto IL_0046;
	}

IL_0014:
	{
		// if (teams[i].Contains(nameMonster))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___teams_7;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_3, L_4, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_6 = ___nameMonster0;
		NullCheck(L_5);
		bool L_7;
		L_7 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// teams[i] = string.Empty;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->___teams_7;
		int32_t L_9 = V_0;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_8);
		List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C(L_8, L_9, L_10, List_1_set_Item_m6A72B7648178616800F05C13DB492E4EDB866B7C_RuntimeMethod_var);
		// currentIndexPick = i;
		int32_t L_11 = V_0;
		__this->___currentIndexPick_6 = L_11;
		// return true;
		return (bool)1;
	}

IL_0042:
	{
		// for (int i = 0; i < teams.Count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < teams.Count; i++)
		int32_t L_13 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = __this->___teams_7;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_14, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Game.Scripts.Config.BattleTeamConfig::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleTeamConfig_OnDisable_m91ED6D3CCB02125BE89A4C06C81A31BF43768D4F (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) 
{
	{
		// Release();
		BattleTeamConfig_Release_m7D7707FFC5A6E45ABDED1E9802739D1DDA64062E(__this, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.Config.BattleTeamConfig::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleTeamConfig_Release_m7D7707FFC5A6E45ABDED1E9802739D1DDA64062E (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// isBattle = false;
		__this->___isBattle_4 = (bool)0;
		// currentIndexPick = 0;
		__this->___currentIndexPick_6 = 0;
		// enemies.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___enemies_8;
		NullCheck(L_0);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_0, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// monsterNameGetTurn = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___monsterNameGetTurn_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___monsterNameGetTurn_9), (void*)L_1);
		// teams.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___teams_7;
		NullCheck(L_2);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_2, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// for (int i = 0; i < teamMaxCount; i++)
		V_0 = 0;
		goto IL_0047;
	}

IL_0033:
	{
		// teams.Add(string.Empty);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___teams_7;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < teamMaxCount; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0047:
	{
		// for (int i = 0; i < teamMaxCount; i++)
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___teamMaxCount_5;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Game.Scripts.Config.BattleTeamConfig::GetEnemyTeam(Game.Scripts.Config.AttributeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* BattleTeamConfig_GetEnemyTeam_m66A6F406F367601C6B9179D74FF3E24F35E7F94B (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB65C255893ADD35F8B206AB4CA300F1014963CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// enemies.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___enemies_8;
		NullCheck(L_0);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_0, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// for (int i = 0; i < config.MonsterAttributes().Count; i++)
		V_0 = 0;
		goto IL_0067;
	}

IL_000f:
	{
		// if (teams.Contains(config.MonsterAttributes()[i].characterName) is false)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___teams_7;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_2 = ___config0;
		NullCheck(L_2);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_3;
		L_3 = AttributeConfig_MonsterAttributes_mAAAA2917F1A11CE1BB3572FD4D33C3B2A4DED2D5_inline(L_2, NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_5;
		L_5 = List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010(L_3, L_4, List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6 = L_5->___characterName_0;
		NullCheck(L_1);
		bool L_7;
		L_7 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_1, L_6, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0049;
		}
	}
	{
		// enemies.Add(config.MonsterAttributes()[i].characterName);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->___enemies_8;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_9 = ___config0;
		NullCheck(L_9);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_10;
		L_10 = AttributeConfig_MonsterAttributes_mAAAA2917F1A11CE1BB3572FD4D33C3B2A4DED2D5_inline(L_9, NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_12;
		L_12 = List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010(L_10, L_11, List_1_get_Item_mAFBF8EB208BD1BC5C5B55F052CB10BABF0115010_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13 = L_12->___characterName_0;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0049:
	{
		// if (enemies.Count >= teamMaxCount)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = __this->___enemies_8;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_14, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_16 = __this->___teamMaxCount_5;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0063;
		}
	}
	{
		// return enemies;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = __this->___enemies_8;
		return L_17;
	}

IL_0063:
	{
		// for (int i = 0; i < config.MonsterAttributes().Count; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0067:
	{
		// for (int i = 0; i < config.MonsterAttributes().Count; i++)
		int32_t L_19 = V_0;
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_20 = ___config0;
		NullCheck(L_20);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_21;
		L_21 = AttributeConfig_MonsterAttributes_mAAAA2917F1A11CE1BB3572FD4D33C3B2A4DED2D5_inline(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_mB65C255893ADD35F8B206AB4CA300F1014963CE5_inline(L_21, List_1_get_Count_mB65C255893ADD35F8B206AB4CA300F1014963CE5_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_22)))
		{
			goto IL_000f;
		}
	}
	{
		// return enemies;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = __this->___enemies_8;
		return L_23;
	}
}
// System.Collections.Generic.List`1<System.String> Game.Scripts.Config.BattleTeamConfig::GetUnusedMonsters(Game.Scripts.Config.AttributeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* BattleTeamConfig_GetUnusedMonsters_m1DD7E432C7886A3D009F726213E7B31DF6334E39 (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E V_1;
	memset((&V_1), 0, sizeof(V_1));
	MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* V_2 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// var total = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var value in config.MonsterAttributes())
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_1 = ___config0;
		NullCheck(L_1);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_2;
		L_2 = AttributeConfig_MonsterAttributes_mAAAA2917F1A11CE1BB3572FD4D33C3B2A4DED2D5_inline(L_1, NULL);
		NullCheck(L_2);
		Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E L_3;
		L_3 = List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601(L_2, List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38((&V_1), Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0014_1:
			{
				// foreach (var value in config.MonsterAttributes())
				MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_4;
				L_4 = Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_inline((&V_1), Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_RuntimeMethod_var);
				V_2 = L_4;
				// total.Add(value.characterName);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = V_0;
				MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_6 = V_2;
				NullCheck(L_6);
				String_t* L_7 = L_6->___characterName_0;
				NullCheck(L_5);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_0028_1:
			{
				// foreach (var value in config.MonsterAttributes())
				bool L_8;
				L_8 = Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762((&V_1), Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// foreach (var monster in teams)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->___teams_7;
		NullCheck(L_9);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_10;
		L_10 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_9, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_3 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_3), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006b_1;
			}

IL_004f_1:
			{
				// foreach (var monster in teams)
				String_t* L_11;
				L_11 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_3), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_4 = L_11;
				// if (total.Contains(monster))
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
				String_t* L_13 = V_4;
				NullCheck(L_12);
				bool L_14;
				L_14 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_12, L_13, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
				if (!L_14)
				{
					goto IL_006b_1;
				}
			}
			{
				// total.Remove(monster);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = V_0;
				String_t* L_16 = V_4;
				NullCheck(L_15);
				bool L_17;
				L_17 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_15, L_16, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
			}

IL_006b_1:
			{
				// foreach (var monster in teams)
				bool L_18;
				L_18 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_3), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_004f_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// foreach (var monster in enemies)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = __this->___enemies_8;
		NullCheck(L_19);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_20;
		L_20 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_19, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_3 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_3), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ae_1;
			}

IL_0092_1:
			{
				// foreach (var monster in enemies)
				String_t* L_21;
				L_21 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_3), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_5 = L_21;
				// if (total.Contains(monster))
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = V_0;
				String_t* L_23 = V_5;
				NullCheck(L_22);
				bool L_24;
				L_24 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_22, L_23, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
				if (!L_24)
				{
					goto IL_00ae_1;
				}
			}
			{
				// total.Remove(monster);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = V_0;
				String_t* L_26 = V_5;
				NullCheck(L_25);
				bool L_27;
				L_27 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_25, L_26, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
			}

IL_00ae_1:
			{
				// foreach (var monster in enemies)
				bool L_28;
				L_28 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_3), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_0092_1;
				}
			}
			{
				goto IL_00c7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c7:
	{
		// return total;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_29 = V_0;
		return L_29;
	}
}
// System.Collections.Generic.List`1<Game.Scripts.Config.MonsterAttribute> Game.Scripts.Config.BattleTeamConfig::BattleSort(Game.Scripts.Config.AttributeConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* BattleTeamConfig_BattleSort_mF45139FCA71762C4B8EC9FC4B1817255DBFE438D (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderByDescending_TisMonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBC0EBAE189A31F8F38554E3C25B418C57A3F1227_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisMonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF_m6B6ED55CD550DEAE63B7CA5257DE0C5D44E2C2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6DAED064DF26653B64B0ED6E33A90284C64D712F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5A2D3C856CC3C8858EB64DDA6902B3A83B994040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0242792AE569314A99F9D30F9639246F9878F1F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBattleSortU3Eb__12_0_m462613E52CFB7C528BF274DBDA507046B45E794B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* V_0 = NULL;
	Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E V_1;
	memset((&V_1), 0, sizeof(V_1));
	MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* V_2 = NULL;
	Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B* G_B10_0 = NULL;
	List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* G_B10_1 = NULL;
	Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B* G_B9_0 = NULL;
	List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* G_B9_1 = NULL;
	{
		// var total = new List<MonsterAttribute>();
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_0 = (List_1_t0242792AE569314A99F9D30F9639246F9878F1F5*)il2cpp_codegen_object_new(List_1_t0242792AE569314A99F9D30F9639246F9878F1F5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5A2D3C856CC3C8858EB64DDA6902B3A83B994040(L_0, List_1__ctor_m5A2D3C856CC3C8858EB64DDA6902B3A83B994040_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var value in config.MonsterAttributes())
		AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* L_1 = ___config0;
		NullCheck(L_1);
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_2;
		L_2 = AttributeConfig_MonsterAttributes_mAAAA2917F1A11CE1BB3572FD4D33C3B2A4DED2D5_inline(L_1, NULL);
		NullCheck(L_2);
		Enumerator_tCF2B7A73A9BF1588704CBDC7411091950BC3879E L_3;
		L_3 = List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601(L_2, List_1_GetEnumerator_m2AC2F92F803D4E1327ED55F2BFE4813369DCC601_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38((&V_1), Enumerator_Dispose_m8ECCACB0E5D7226BDD42D988B51963D93AAB7D38_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0049_1;
			}

IL_0014_1:
			{
				// foreach (var value in config.MonsterAttributes())
				MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_4;
				L_4 = Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_inline((&V_1), Enumerator_get_Current_m8F1644901E71BB30D7DBA5BF3A77D0BA03EFC65A_RuntimeMethod_var);
				V_2 = L_4;
				// if (teams.Contains(value.characterName) || enemies.Contains(value.characterName))
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___teams_7;
				MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_6 = V_2;
				NullCheck(L_6);
				String_t* L_7 = L_6->___characterName_0;
				NullCheck(L_5);
				bool L_8;
				L_8 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_5, L_7, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0042_1;
				}
			}
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->___enemies_8;
				MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_10 = V_2;
				NullCheck(L_10);
				String_t* L_11 = L_10->___characterName_0;
				NullCheck(L_9);
				bool L_12;
				L_12 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_9, L_11, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
				if (!L_12)
				{
					goto IL_0049_1;
				}
			}

IL_0042_1:
			{
				// total.Add(value);
				List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_13 = V_0;
				MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_14 = V_2;
				NullCheck(L_13);
				List_1_Add_m6DAED064DF26653B64B0ED6E33A90284C64D712F_inline(L_13, L_14, List_1_Add_m6DAED064DF26653B64B0ED6E33A90284C64D712F_RuntimeMethod_var);
			}

IL_0049_1:
			{
				// foreach (var value in config.MonsterAttributes())
				bool L_15;
				L_15 = Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762((&V_1), Enumerator_MoveNext_m953D88C74BC07762CEEE9A63BA0C87DF4F672762_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		// var order = from s in total orderby s.speed descending select s;
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var);
		Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B* L_17 = ((U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1;
		Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B* L_18 = L_17;
		G_B9_0 = L_18;
		G_B9_1 = L_16;
		if (L_18)
		{
			G_B10_0 = L_18;
			G_B10_1 = L_16;
			goto IL_0082;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var);
		U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9* L_19 = ((U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B* L_20 = (Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B*)il2cpp_codegen_object_new(Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Func_2__ctor_m436C192D0DCE90CDCCB0B290AD4092A3796CDD3F(L_20, L_19, (intptr_t)((void*)U3CU3Ec_U3CBattleSortU3Eb__12_0_m462613E52CFB7C528BF274DBDA507046B45E794B_RuntimeMethod_var), NULL);
		Func_2_t9FC38EB813A69C9EB242CEA5A877776C9F007F9B* L_21 = L_20;
		((U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1), (void*)L_21);
		G_B10_0 = L_21;
		G_B10_1 = G_B9_1;
	}

IL_0082:
	{
		RuntimeObject* L_22;
		L_22 = Enumerable_OrderByDescending_TisMonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBC0EBAE189A31F8F38554E3C25B418C57A3F1227(G_B10_1, G_B10_0, Enumerable_OrderByDescending_TisMonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mBC0EBAE189A31F8F38554E3C25B418C57A3F1227_RuntimeMethod_var);
		// return order.ToList();
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_23;
		L_23 = Enumerable_ToList_TisMonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF_m6B6ED55CD550DEAE63B7CA5257DE0C5D44E2C2A3(L_22, Enumerable_ToList_TisMonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF_m6B6ED55CD550DEAE63B7CA5257DE0C5D44E2C2A3_RuntimeMethod_var);
		return L_23;
	}
}
// System.Boolean Game.Scripts.Config.BattleTeamConfig::IsFullTeam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleTeamConfig_IsFullTeam_mA63272785284E137DB6A075FC28D2397BABDAA0C (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (teams.Any())
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___teams_7;
		bool L_1;
		L_1 = Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D(L_0, Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// foreach (var value in teams)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___teams_7;
		NullCheck(L_2);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_3;
		L_3 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_2, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_001b_1:
			{
				// foreach (var value in teams)
				String_t* L_4;
				L_4 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				// if (string.IsNullOrEmpty(value))
				bool L_5;
				L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
				if (!L_5)
				{
					goto IL_002d_1;
				}
			}
			{
				// return false;
				V_1 = (bool)0;
				goto IL_004a;
			}

IL_002d_1:
			{
				// foreach (var value in teams)
				bool L_6;
				L_6 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Int32 Game.Scripts.Config.BattleTeamConfig::CurrentIndexPick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BattleTeamConfig_CurrentIndexPick_mF864670D7DAFD43470FB0046363216A29F7030C2 (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) 
{
	{
		// public int CurrentIndexPick() => currentIndexPick;
		int32_t L_0 = __this->___currentIndexPick_6;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> Game.Scripts.Config.BattleTeamConfig::GetTeam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* BattleTeamConfig_GetTeam_mC05839126BCC7BC44482B55F17B2C71475AC1231 (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> GetTeam() => teams;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___teams_7;
		return L_0;
	}
}
// System.Int32 Game.Scripts.Config.BattleTeamConfig::MaxCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BattleTeamConfig_MaxCount_m9A8DBE0D75BE856D9D5E36ACA1943E5CA8D21635 (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) 
{
	{
		// public int MaxCount() => teamMaxCount;
		int32_t L_0 = __this->___teamMaxCount_5;
		return L_0;
	}
}
// System.Void Game.Scripts.Config.BattleTeamConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleTeamConfig__ctor_mD9A10E8B8E9EA1C063F7E55A2339C12404D6CE36 (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<string> teams = new();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___teams_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___teams_7), (void*)L_0);
		// [SerializeField] private List<string> enemies = new();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___enemies_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemies_8), (void*)L_1);
		// [SerializeField] private string monsterNameGetTurn = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___monsterNameGetTurn_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___monsterNameGetTurn_9), (void*)L_2);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Game.Scripts.Config.BattleTeamConfig/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m475385CB6B0CAFBCCD54574D7D7E8BFD57EE2EF9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9* L_0 = (U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9*)il2cpp_codegen_object_new(U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mD5ECD037CC9339EFA0E7D80B613E073A1C5C049E(L_0, NULL);
		((U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Game.Scripts.Config.BattleTeamConfig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD5ECD037CC9339EFA0E7D80B613E073A1C5C049E (U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single Game.Scripts.Config.BattleTeamConfig/<>c::<BattleSort>b__12_0(Game.Scripts.Config.MonsterAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CBattleSortU3Eb__12_0_m462613E52CFB7C528BF274DBDA507046B45E794B (U3CU3Ec_t6A932DEF6989D5C40E35DFAD1832A0FB892149D9* __this, MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* ___s0, const RuntimeMethod* method) 
{
	{
		// var order = from s in total orderby s.speed descending select s;
		MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* L_0 = ___s0;
		NullCheck(L_0);
		float L_1 = L_0->___speed_3;
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
// System.Void Game.Scripts.Config.MonsterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterAttribute__ctor_mEBEEA2C98B0F3FAC2266D761CC13786687749A6D (MonsterAttribute_t02AEAC6B8560333881B202C205AD47D791317DFF* __this, const RuntimeMethod* method) 
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
// System.Void Game.Scripts.Config.PositionsConfig::SetTempPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionsConfig_SetTempPosition_mE5ABA5FABC21589900E9A5B54D2B7D0B14C10D53 (PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (tempPositions.Count < limit)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___tempPositions_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		int32_t L_2 = __this->___limit_7;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0040;
		}
	}
	{
		// for (int i = 1; i <= limit - tempPositions.Count; i++)
		V_0 = 1;
		goto IL_002b;
	}

IL_0017:
	{
		// tempPositions.Add(Vector3.zero);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = __this->___tempPositions_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_3);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_3, L_4, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 1; i <= limit - tempPositions.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002b:
	{
		// for (int i = 1; i <= limit - tempPositions.Count; i++)
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___limit_7;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_8 = __this->___tempPositions_8;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_8, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_9)))))
		{
			goto IL_0017;
		}
	}

IL_0040:
	{
		// tempPositions[index] = position;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = __this->___tempPositions_8;
		int32_t L_11 = ___index0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___position1;
		NullCheck(L_10);
		List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C(L_10, L_11, L_12, List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Vector3 Game.Scripts.Config.PositionsConfig::GetTempPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PositionsConfig_GetTempPosition_mA63E43F0DC09587CB10B545F8EAC234695AEDE0B (PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var position = tempPositions[index];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___tempPositions_8;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_0, L_1, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		// tempPositions[index] = Vector3.zero;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = __this->___tempPositions_8;
		int32_t L_4 = ___index0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_3);
		List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C(L_3, L_4, L_5, List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		// return position;
		return L_2;
	}
}
// System.Void Game.Scripts.Config.PositionsConfig::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionsConfig_OnDisable_m7D17B7943696555FF6446622571BBA5FB7C7ABA5 (PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* __this, const RuntimeMethod* method) 
{
	{
		// Release();
		PositionsConfig_Release_m9678B9D3ED35825CF3B91B82159F61A3033D873A(__this, NULL);
		// }
		return;
	}
}
// System.Void Game.Scripts.Config.PositionsConfig::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionsConfig_Release_m9678B9D3ED35825CF3B91B82159F61A3033D873A (PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tempPositions.Clear();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___tempPositions_8;
		NullCheck(L_0);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_0, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Game.Scripts.Config.PositionsConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionsConfig__ctor_m51DDEE555C37896EE3860CCC75EA88F1A2E0A121 (PositionsConfig_t15589C95383B640737BF35975B695B2247B98B3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int limit = 3;
		__this->___limit_7 = 3;
		// public List<Vector3> tempPositions = new();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___tempPositions_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempPositions_8), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null) return;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (task.source == null) return;
		return;
	}

IL_000e:
	{
		// task.source.GetResult(task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_2 = (&__this->___task_0);
		RuntimeObject* L_3 = L_2->___source_0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_4 = (&__this->___task_0);
		int16_t L_5 = L_4->___token_1;
		NullCheck(L_3);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* BattleTeamConfig_GetTeam_mC05839126BCC7BC44482B55F17B2C71475AC1231_inline (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> GetTeam() => teams;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___teams_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BattleTeamConfig_CurrentIndexPick_mF864670D7DAFD43470FB0046363216A29F7030C2_inline (BattleTeamConfig_tBB2966E35565CE26E47A5C95DEC4DD49431F2FBD* __this, const RuntimeMethod* method) 
{
	{
		// public int CurrentIndexPick() => currentIndexPick;
		int32_t L_0 = __this->___currentIndexPick_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* AttributeConfig_MonsterAttributes_mAAAA2917F1A11CE1BB3572FD4D33C3B2A4DED2D5_inline (AttributeConfig_tA07965B0B20729E8659E02E9885487273656B756* __this, const RuntimeMethod* method) 
{
	{
		// public List<MonsterAttribute> MonsterAttributes() => monsterAttributes;
		List_1_t0242792AE569314A99F9D30F9639246F9878F1F5* L_0 = __this->___monsterAttributes_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752* ContainerLayerSettings_GetContainerLayers_mAD7CB0E903623F6E55010AF68EE3C89593796BD6_inline (ContainerLayerSettings_tD51E21908432D9BB12B44ED5E392182317E373E6* __this, const RuntimeMethod* method) 
{
	{
		// return containerLayers;
		ContainerLayerConfigU5BU5D_tADF4E35E83FBAAAA62BB8E298BF5122C1FE99752* L_0 = __this->___containerLayers_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParticlesObject_GetDelayTimer_m189E65B62E10915B4570B5C10F4B0BB03E3A8CE2_inline (ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* __this, const RuntimeMethod* method) 
{
	{
		// public int GetDelayTimer() => delayTime;
		int32_t L_0 = __this->___delayTime_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ParticlesObject_GetSpeed_m8AD56D126A94881120DD1FFA0A844B43907418E8_inline (ParticlesObject_tB1EBF14BC3A8F2DBF1E88ADF3E33BACC19E446A5* __this, const RuntimeMethod* method) 
{
	{
		// public float GetSpeed() => speed;
		float L_0 = __this->___speed_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
	const uint32_t SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TValue
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1_GetAwaiter_mEC480E8F8586214E6ECD880FBFAA9C8CB1C963ED_gshared_inline (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* __this, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>)
	const uint32_t SizeOf_Awaiter_t12412F44D0A1D4C6573C6EDD4F933E1089C86DFC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_0 = alloca(SizeOf_Awaiter_t12412F44D0A1D4C6573C6EDD4F933E1089C86DFC);
	{
		// return new Awaiter(this);
		memset(L_0, 0, SizeOf_Awaiter_t12412F44D0A1D4C6573C6EDD4F933E1089C86DFC);
		Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_inline((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_0, __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Awaiter_t12412F44D0A1D4C6573C6EDD4F933E1089C86DFC);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m22B365903CC1BE835CA1126FE3BD3E71156DDFA8_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
		bool L_1;
		L_1 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mFF0CF33768E54ACB5D4D4F47A4A6FE3DB29EE6D8_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t51191FDA2C225152DFBE7756A21D31A184B705B0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t51191FDA2C225152DFBE7756A21D31A184B705B0);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer((((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))), il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		V_0 = L_0;
		// if (s == null)
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer((((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))), il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T_t51191FDA2C225152DFBE7756A21D31A184B705B0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t51191FDA2C225152DFBE7756A21D31A184B705B0);
		return;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_3 = V_0;
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer((((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))), il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),2));
		NullCheck(L_3);
		InterfaceActionInvoker2Invoker< int16_t, Il2CppFullySharedGenericAny* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_3, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t51191FDA2C225152DFBE7756A21D31A184B705B0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = ___task0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = (*(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->___source_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		return (int32_t)(1);
	}

IL_000a:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___status0, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* ___task0, const RuntimeMethod* method) 
{
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_tD8AB010F422D5AFB8EE7B134A25B47A5D55F7990 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_tD8AB010F422D5AFB8EE7B134A25B47A5D55F7990);
	{
		// this.task = task;
		UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* L_0 = ___task0;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_UniTask_1_tD8AB010F422D5AFB8EE7B134A25B47A5D55F7990);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0), L_1, SizeOf_UniTask_1_tD8AB010F422D5AFB8EE7B134A25B47A5D55F7990);
		// }
		return;
	}
}
