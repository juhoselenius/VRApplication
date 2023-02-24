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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Sound>
struct Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
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
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// Sound[]
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LevelChanger
struct LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5;
// Lever
struct Lever_t95EDCA49D4E471632B36CBB691B8701939683419;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectNudge
struct ObjectNudge_t43C6B25BE9984EBA50D9B86B3FB972997DC0AB2A;
// ObjectPlacement
struct ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057;
// PassDoor
struct PassDoor_tBBA5A6EBB2977354EFF77A43DCF502B1378963F6;
// PlayerManager
struct PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScreenFader
struct ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// Sound
struct Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0;
// System.String
struct String_t;
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
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider
struct TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// AudioManager/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89;
// AudioManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367;
// LevelChanger/<GoToSceneRoutine>d__2
struct U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// ScreenFader/<FadeRoutine>d__8
struct U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4;

IL2CPP_EXTERN_C RuntimeClass* AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01687723919AFC1BFDDEA5153F1EE3B49ACE479D;
IL2CPP_EXTERN_C String_t* _stringLiteral0900AB29B157A30D8389D53A16826A356064923D;
IL2CPP_EXTERN_C String_t* _stringLiteral0C90A2575C0E0F1B0970199AC39741B034EFB8BA;
IL2CPP_EXTERN_C String_t* _stringLiteral17C94A273CD9895C291C7316C45C2623E2DCEABE;
IL2CPP_EXTERN_C String_t* _stringLiteral1B763601FE8F72B117B3F3DAD069AA42609C7AA6;
IL2CPP_EXTERN_C String_t* _stringLiteral1CBD727F4158175AA3BD4E3CDD47A415CFF16D75;
IL2CPP_EXTERN_C String_t* _stringLiteral27656B38DF7486D1194F1BF174E713D77F3CA6CA;
IL2CPP_EXTERN_C String_t* _stringLiteral2CA57CB29AE85F9B82076982B704943CF1E0AB9F;
IL2CPP_EXTERN_C String_t* _stringLiteral330BC37D8463B5B010EF864F4DEDBCB8387FDEA8;
IL2CPP_EXTERN_C String_t* _stringLiteral3A51EAED7F57D1A7784515FF7A278C3258C2CD26;
IL2CPP_EXTERN_C String_t* _stringLiteral47F28B8008CD4B504E470B235DB56CFB06457013;
IL2CPP_EXTERN_C String_t* _stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379;
IL2CPP_EXTERN_C String_t* _stringLiteral5162ACF70C67D8A61EB032BF7B39559B4E2D1494;
IL2CPP_EXTERN_C String_t* _stringLiteral6B060B2B42C1FC78C80EC2A6764813969A612163;
IL2CPP_EXTERN_C String_t* _stringLiteral7007632C8296BC7320EAA7E376810AC925B040A9;
IL2CPP_EXTERN_C String_t* _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5;
IL2CPP_EXTERN_C String_t* _stringLiteral78894C86876D1A8E9E621C24A25A08AE9E30FE13;
IL2CPP_EXTERN_C String_t* _stringLiteral7BC72D556CD95CD004E0916D6A0475C0DEB10185;
IL2CPP_EXTERN_C String_t* _stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9;
IL2CPP_EXTERN_C String_t* _stringLiteral837290439BE5DB6630A8A5A4A0E48654151F9233;
IL2CPP_EXTERN_C String_t* _stringLiteral84DF52756AACC5EF7C764DACD868C8952667B001;
IL2CPP_EXTERN_C String_t* _stringLiteral86FD82C785BFCBD66B81319A0C29DF012780CBF6;
IL2CPP_EXTERN_C String_t* _stringLiteral8E3FAE475941A8C475E3B86C3C153CCFD386B942;
IL2CPP_EXTERN_C String_t* _stringLiteral8F7CC227D79CC134719264BB8303580FF4883913;
IL2CPP_EXTERN_C String_t* _stringLiteral9AABE35AABF8BA14125B9FB5296BCFEC0BF400F9;
IL2CPP_EXTERN_C String_t* _stringLiteral9F15E73C308C9440A4A66E65A54F37A6862F5072;
IL2CPP_EXTERN_C String_t* _stringLiteral9F29644D2A76B1D76C8FFE1D076C500824BE79EA;
IL2CPP_EXTERN_C String_t* _stringLiteralA32F25A6E145FEEFDAE2F25035FA74E1B547B96C;
IL2CPP_EXTERN_C String_t* _stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B;
IL2CPP_EXTERN_C String_t* _stringLiteralB45B69D7ABB46F80A7940A6291FAE32D154CF986;
IL2CPP_EXTERN_C String_t* _stringLiteralB5C02610199613E28AD92D5AAFEA9F90E78DD562;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralBB93CEF8137433AB35456ABFD7B687B4EDA9AD76;
IL2CPP_EXTERN_C String_t* _stringLiteralC6ED304B30F9865A4B50CF58FDFB6017AA5E0B4C;
IL2CPP_EXTERN_C String_t* _stringLiteralC83B6926DE498999BC7E3D5467A98CDE9B139901;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4A806B762620FF1722DEE664B5CD656ADAF584;
IL2CPP_EXTERN_C String_t* _stringLiteralCBDB5F90DF36FD94B3CB40F67B6C9D0000360670;
IL2CPP_EXTERN_C String_t* _stringLiteralD39F9E6E4857D4F21FA96673D92C362BA611C356;
IL2CPP_EXTERN_C String_t* _stringLiteralD5904534CC0309656A801BC2F878CF2CBB7FFDC0;
IL2CPP_EXTERN_C String_t* _stringLiteralDC9406855F200EB96CC7F86C5BF179F2515A5A8F;
IL2CPP_EXTERN_C String_t* _stringLiteralE4CFD004019A07FD5B1FFCF6A569A8214732EAE6;
IL2CPP_EXTERN_C String_t* _stringLiteralE6573AEF1CD060842A3B002C2A4D18AB116AE0AE;
IL2CPP_EXTERN_C String_t* _stringLiteralEF9A4923FD8B05457A8DB3A64F34F9F6FD75FFE0;
IL2CPP_EXTERN_C String_t* _stringLiteralFA60758C55A3046DB00AE780582860176CBA0896;
IL2CPP_EXTERN_C String_t* _stringLiteralFD39C0D727FBE15E5FF1A900C5E22BB57C01F7B9;
IL2CPP_EXTERN_C String_t* _stringLiteralFE05BDF92F15AE590512F4B8C273AF9EDEEED536;
IL2CPP_EXTERN_C String_t* _stringLiteralFEA0CFB2134DEC41029D1A5EAB2741E71A592DA9;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5_m7D8EAB83D9B0380DD82BF655F0AF0D24FB72B4E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_Reset_mF02FD84EC4F64FD93036FA5808559A134107AE52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGoToSceneRoutineU3Ed__2_System_Collections_IEnumerator_Reset_mC9AE7DC7478ECECB2795327E60693FA294007E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CPlayU3Eb__0_m2BD9F6F9E24D884441DC3F502D3BA0662509EFBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CStopU3Eb__0_mCEC75CA25BAAB3FA0CF827037359C9E70A2A3F57_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5;

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

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Sound
struct Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0  : public RuntimeObject
{
	// Sound/AudioTypes Sound::audioType
	int32_t ___audioType_0;
	// System.String Sound::name
	String_t* ___name_1;
	// UnityEngine.AudioClip Sound::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_2;
	// System.Single Sound::volume
	float ___volume_3;
	// System.Single Sound::pitch
	float ___pitch_4;
	// System.Boolean Sound::loop
	bool ___loop_5;
	// UnityEngine.AudioSource Sound::source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source_6;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// AudioManager/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89  : public RuntimeObject
{
	// System.String AudioManager/<>c__DisplayClass4_0::clipName
	String_t* ___clipName_0;
};

// AudioManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367  : public RuntimeObject
{
	// System.String AudioManager/<>c__DisplayClass5_0::clipName
	String_t* ___clipName_0;
};

// LevelChanger/<GoToSceneRoutine>d__2
struct U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB  : public RuntimeObject
{
	// System.Int32 LevelChanger/<GoToSceneRoutine>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelChanger/<GoToSceneRoutine>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LevelChanger LevelChanger/<GoToSceneRoutine>d__2::<>4__this
	LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* ___U3CU3E4__this_2;
	// System.Int32 LevelChanger/<GoToSceneRoutine>d__2::levelIndex
	int32_t ___levelIndex_3;
};

// ScreenFader/<FadeRoutine>d__8
struct U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4  : public RuntimeObject
{
	// System.Int32 ScreenFader/<FadeRoutine>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ScreenFader/<FadeRoutine>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ScreenFader ScreenFader/<FadeRoutine>d__8::<>4__this
	ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* ___U3CU3E4__this_2;
	// System.Single ScreenFader/<FadeRoutine>d__8::alphaIn
	float ___alphaIn_3;
	// System.Single ScreenFader/<FadeRoutine>d__8::alphaOut
	float ___alphaOut_4;
	// System.Single ScreenFader/<FadeRoutine>d__8::<timer>5__2
	float ___U3CtimerU3E5__2_5;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
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

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
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

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

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

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Predicate`1<Sound>
struct Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Sound[] AudioManager::sounds
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* ___sounds_5;
};

struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields
{
	// AudioManager AudioManager::aManager
	AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* ___aManager_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionReference GameManager::thrustReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___thrustReference_5;
	// UnityEngine.InputSystem.InputActionReference GameManager::airBrakeReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___airBrakeReference_6;
	// System.Boolean GameManager::dialogueOne
	bool ___dialogueOne_7;
	// System.Boolean GameManager::dialogueTwo
	bool ___dialogueTwo_8;
	// System.Boolean GameManager::dialogueThree
	bool ___dialogueThree_9;
	// System.Boolean GameManager::dialogueFour
	bool ___dialogueFour_10;
	// System.Boolean GameManager::dialogueFive
	bool ___dialogueFive_11;
	// System.Boolean GameManager::dialogueSix
	bool ___dialogueSix_12;
	// System.Boolean GameManager::thrusted
	bool ___thrusted_13;
	// System.Boolean GameManager::braked
	bool ___braked_14;
	// System.Boolean GameManager::cubeGrabbed
	bool ___cubeGrabbed_15;
	// System.Boolean GameManager::cubeReleased
	bool ___cubeReleased_16;
	// UnityEngine.Animator GameManager::level1Door
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___level1Door_17;
	// System.Boolean GameManager::dialogueTwoOne
	bool ___dialogueTwoOne_18;
	// System.Boolean GameManager::dialogueTwoTwo
	bool ___dialogueTwoTwo_19;
	// System.Boolean GameManager::cubeAtPlace
	bool ___cubeAtPlace_20;
	// System.Boolean GameManager::cylinderAtPlace
	bool ___cylinderAtPlace_21;
	// System.Boolean GameManager::spherecubeAtPlace
	bool ___spherecubeAtPlace_22;
	// System.Boolean GameManager::capsuleAtPlace
	bool ___capsuleAtPlace_23;
	// System.Boolean GameManager::sphereAtPlace
	bool ___sphereAtPlace_24;
	// System.Boolean GameManager::plateAtPlace
	bool ___plateAtPlace_25;
	// System.Boolean GameManager::level2Door
	bool ___level2Door_26;
	// System.Boolean GameManager::dialogueThreeOne
	bool ___dialogueThreeOne_27;
	// System.Boolean GameManager::dialogueThreeTwo
	bool ___dialogueThreeTwo_28;
	// System.Boolean GameManager::dialogueThreeThree
	bool ___dialogueThreeThree_29;
	// System.Boolean GameManager::dialogueThreeFour
	bool ___dialogueThreeFour_30;
	// System.Boolean GameManager::dialogueThreeFive
	bool ___dialogueThreeFive_31;
	// System.Boolean GameManager::atTelePad
	bool ___atTelePad_32;
	// System.Boolean GameManager::teleported
	bool ___teleported_33;
	// System.Boolean GameManager::atTheDoor
	bool ___atTheDoor_34;
	// System.Boolean GameManager::leverPulled
	bool ___leverPulled_35;
	// System.Boolean GameManager::level3Door
	bool ___level3Door_36;
	// System.Boolean GameManager::brokenDoor
	bool ___brokenDoor_37;
	// System.Boolean GameManager::gameEndDoor
	bool ___gameEndDoor_38;
	// System.Single GameManager::counter
	float ___counter_39;
	// System.Boolean GameManager::controlsEnabled
	bool ___controlsEnabled_40;
	// System.Int32 GameManager::currentLevelIndex
	int32_t ___currentLevelIndex_41;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::manager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___manager_4;
};

// LevelChanger
struct LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ScreenFader LevelChanger::screenFader
	ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* ___screenFader_4;
};

// Lever
struct Lever_t95EDCA49D4E471632B36CBB691B8701939683419  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ObjectNudge
struct ObjectNudge_t43C6B25BE9984EBA50D9B86B3FB972997DC0AB2A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ObjectNudge::randomForceLimit
	float ___randomForceLimit_4;
	// System.Single ObjectNudge::randomTorqueLimit
	float ___randomTorqueLimit_5;
};

// ObjectPlacement
struct ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ObjectPlacement::placementLight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placementLight_4;
	// System.Boolean ObjectPlacement::objectPlaced
	bool ___objectPlaced_5;
	// UnityEngine.GameObject ObjectPlacement::placedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placedObject_6;
	// UnityEngine.Rigidbody ObjectPlacement::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_7;
};

// PassDoor
struct PassDoor_tBBA5A6EBB2977354EFF77A43DCF502B1378963F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator PassDoor::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// System.Boolean PassDoor::level2DoorOpened
	bool ___level2DoorOpened_5;
	// System.Boolean PassDoor::level3DoorOpened
	bool ___level3DoorOpened_6;
	// System.Boolean PassDoor::brokenDoorClosed
	bool ___brokenDoorClosed_7;
	// System.Boolean PassDoor::gameEndDoorOpened
	bool ___gameEndDoorOpened_8;
};

// PlayerManager
struct PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionReference PlayerManager::thrustReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___thrustReference_4;
	// UnityEngine.InputSystem.InputActionReference PlayerManager::airBrakeReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___airBrakeReference_5;
	// UnityEngine.Transform PlayerManager::leftController
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftController_6;
	// TMPro.TextMeshProUGUI PlayerManager::textWindow
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textWindow_7;
	// System.Single PlayerManager::thrustPower
	float ___thrustPower_8;
	// System.Single PlayerManager::brakePower
	float ___brakePower_9;
	// UnityEngine.Rigidbody PlayerManager::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_10;
	// UnityEngine.GameObject PlayerManager::levelChanger
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___levelChanger_11;
	// UnityEngine.GameObject PlayerManager::glassWall
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___glassWall_12;
};

// ScreenFader
struct ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ScreenFader::fadeOnStart
	bool ___fadeOnStart_4;
	// System.Single ScreenFader::fadeDuration
	float ___fadeDuration_5;
	// UnityEngine.Color ScreenFader::fadeColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___fadeColor_6;
	// UnityEngine.Renderer ScreenFader::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_7;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_8;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_9;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_10;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_11;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_15;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_16;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_17;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_19;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_20;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsHovering>k__BackingField
	List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1* ___U3CinteractorsHoveringU3Ek__BackingField_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsSelecting>k__BackingField
	List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102* ___U3CinteractorsSelectingU3Ek__BackingField_23;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_24;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_25;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_26;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_27;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_28;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_30;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_31;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_32;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_33;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_34;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_35;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_38;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_39;
};

struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_29;
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_52;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachEaseInTime
	float ___m_AttachEaseInTime_53;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MovementType
	int32_t ___m_MovementType_54;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityDamping
	float ___m_VelocityDamping_55;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityScale
	float ___m_VelocityScale_56;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityDamping
	float ___m_AngularVelocityDamping_57;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityScale
	float ___m_AngularVelocityScale_58;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackPosition
	bool ___m_TrackPosition_59;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPosition
	bool ___m_SmoothPosition_60;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPositionAmount
	float ___m_SmoothPositionAmount_61;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenPosition
	float ___m_TightenPosition_62;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackRotation
	bool ___m_TrackRotation_63;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotation
	bool ___m_SmoothRotation_64;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotationAmount
	float ___m_SmoothRotationAmount_65;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenRotation
	float ___m_TightenRotation_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowOnDetach
	bool ___m_ThrowOnDetach_67;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingDuration
	float ___m_ThrowSmoothingDuration_68;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_ThrowSmoothingCurve_69;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowVelocityScale
	float ___m_ThrowVelocityScale_70;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowAngularVelocityScale
	float ___m_ThrowAngularVelocityScale_71;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ForceGravityOnDetach
	bool ___m_ForceGravityOnDetach_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_RetainTransformParent
	bool ___m_RetainTransformParent_73;
	// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable/AttachPointCompatibilityMode UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachPointCompatibilityMode
	int32_t ___m_AttachPointCompatibilityMode_74;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_InteractorLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InteractorLocalPosition_75;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_InteractorLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_InteractorLocalRotation_76;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetWorldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TargetWorldPosition_77;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetWorldRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_TargetWorldRotation_78;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentAttachEaseTime
	float ___m_CurrentAttachEaseTime_79;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentMovementType
	int32_t ___m_CurrentMovementType_80;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachInLateUpdate
	bool ___m_DetachInLateUpdate_81;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachVelocity_82;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachAngularVelocity_83;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurrentFrame
	int32_t ___m_ThrowSmoothingCurrentFrame_84;
	// System.Single[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingFrameTimes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_ThrowSmoothingFrameTimes_85;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingVelocityFrames_86;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingAngularVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingAngularVelocityFrames_87;
	// UnityEngine.Rigidbody UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_88;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_LastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LastPosition_89;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_LastRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_LastRotation_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_WasKinematic
	bool ___m_WasKinematic_91;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_UsedGravity
	bool ___m_UsedGravity_92;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldDrag
	float ___m_OldDrag_93;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldAngularDrag
	float ___m_OldAngularDrag_94;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OriginalSceneParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_OriginalSceneParent_95;
	// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TeleportationProvider
	TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* ___m_TeleportationProvider_96;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_PoseBeforeTeleport
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PoseBeforeTeleport_97;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Sound[]
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5  : public RuntimeArray
{
	ALIGN_FIELD (8) Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* m_Items[1];

	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void AudioManager::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___clipName0, const RuntimeMethod* method) ;
// System.Void AudioManager/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3DD23E7EFFDED69B9EAC81FE50CDC950F4B7EC9D (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Sound>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Array::Find<Sound>(T[],System.Predicate`1<T>)
inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7 (SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* ___array0, Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* ___match1, const RuntimeMethod* method)
{
	return ((  Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* (*) (SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5*, Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared)(___array0, ___match1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void AudioManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m8C54CF0F0E5F074525DA04D415803917C3371E69 (U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// System.Void AudioManager::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___clipName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LevelChanger::GoToSceneRoutine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelChanger_GoToSceneRoutine_mBB476D147107DC955879FE8116B441255D3A2156 (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, int32_t ___levelIndex0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void LevelChanger/<GoToSceneRoutine>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRoutineU3Ed__2__ctor_m2FA273AAC53DA0E449157BD4CB108D5F57CCED37 (U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ScreenFader::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFader_FadeOut_m407FD3F0E7B7FE0943B24A6111BAF540D45B2A2B (ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___torque0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_mC55713BD82CB5EFB0D6C705B98F030717EF50CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable>()
inline XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<LevelChanger>()
inline LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* GameObject_GetComponent_TisLevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5_m7D8EAB83D9B0380DD82BF655F0AF0D24FB72B4E4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void LevelChanger::GoToScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelChanger_GoToScene_m00DC8E1A4E81FE4CE7D5FEDA8CDDB5340FB0BF8F (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, int32_t ___levelIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics::set_gravity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_set_gravity_mAEF3D6B45E6E567F04244C7889366CACCB4F1952 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ScreenFader::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFader_FadeIn_mBD48171591B7F7E52AE0E5C4C72F0CC35397B638 (ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* __this, const RuntimeMethod* method) ;
// System.Void ScreenFader::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFader_Fade_m1EBCF876D04B2E73CCA0568AACCAE2EF8F073510 (ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* __this, float ___alphaIn0, float ___alphaOut1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ScreenFader::FadeRoutine(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScreenFader_FadeRoutine_mD0C9811A07F812F25CC07775878381E6C01C5E9F (ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* __this, float ___alphaIn0, float ___alphaOut1, const RuntimeMethod* method) ;
// System.Void ScreenFader/<FadeRoutine>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8__ctor_mD0F8D8428DA4E57D83D781F8D028BEEA9FFD20CD (U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
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
// System.Void AudioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Awake_m8138BCED4D692C83C95626A1A09AB46EA5205569 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* V_0 = NULL;
	int32_t V_1 = 0;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_2 = NULL;
	{
		// if (aManager == null)
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// aManager = this;
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4), (void*)__this);
		goto IL_002b;
	}

IL_0020:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_002b:
	{
		// foreach (Sound s in sounds)
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_4 = __this->___sounds_5;
		V_0 = L_4;
		V_1 = 0;
		goto IL_0093;
	}

IL_0036:
	{
		// foreach (Sound s in sounds)
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// s.source = gameObject.AddComponent<AudioSource>();
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_9 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11;
		L_11 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_10, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->___source_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___source_6), (void*)L_11);
		// s.source.clip = s.clip;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_12 = V_2;
		NullCheck(L_12);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = L_12->___source_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_14 = V_2;
		NullCheck(L_14);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = L_14->___clip_2;
		NullCheck(L_13);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_13, L_15, NULL);
		// s.source.volume = s.volume;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_16 = V_2;
		NullCheck(L_16);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = L_16->___source_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_18 = V_2;
		NullCheck(L_18);
		float L_19 = L_18->___volume_3;
		NullCheck(L_17);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_17, L_19, NULL);
		// s.source.pitch = s.pitch;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_20 = V_2;
		NullCheck(L_20);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = L_20->___source_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_22 = V_2;
		NullCheck(L_22);
		float L_23 = L_22->___pitch_4;
		NullCheck(L_21);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_21, L_23, NULL);
		// s.source.loop = s.loop;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_24 = V_2;
		NullCheck(L_24);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_25 = L_24->___source_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_26 = V_2;
		NullCheck(L_26);
		bool L_27 = L_26->___loop_5;
		NullCheck(L_25);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_25, L_27, NULL);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0093:
	{
		// foreach (Sound s in sounds)
		int32_t L_29 = V_1;
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0036;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AudioManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Start_m3C0FEAF19F58B6D28A9E6D815B3AAF94FEA21B69 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B060B2B42C1FC78C80EC2A6764813969A612163);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Play("BackgroundSound");
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(__this, _stringLiteral6B060B2B42C1FC78C80EC2A6764813969A612163, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___clipName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CPlayU3Eb__0_m2BD9F6F9E24D884441DC3F502D3BA0662509EFBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB45B69D7ABB46F80A7940A6291FAE32D154CF986);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA60758C55A3046DB00AE780582860176CBA0896);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* V_0 = NULL;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* L_0 = (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m3DD23E7EFFDED69B9EAC81FE50CDC950F4B7EC9D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* L_1 = V_0;
		String_t* L_2 = ___clipName0;
		NullCheck(L_1);
		L_1->___clipName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___clipName_0), (void*)L_2);
		// Sound s = Array.Find(sounds, sound => sound.name == clipName);
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_3 = __this->___sounds_5;
		U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* L_4 = V_0;
		Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* L_5 = (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*)il2cpp_codegen_object_new(Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CPlayU3Eb__0_m2BD9F6F9E24D884441DC3F502D3BA0662509EFBF_RuntimeMethod_var), NULL);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_6;
		L_6 = Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7(L_3, L_5, Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var);
		V_1 = L_6;
		// if(s == null)
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_7 = V_1;
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.Log("Couldn't find the \"" + clipName + "\" sound from the sound list. Check spelling!");
		U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___clipName_0;
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralFA60758C55A3046DB00AE780582860176CBA0896, L_9, _stringLiteralB45B69D7ABB46F80A7940A6291FAE32D154CF986, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// return;
		return;
	}

IL_0043:
	{
		// s.source.Play();
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_11 = V_1;
		NullCheck(L_11);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = L_11->___source_6;
		NullCheck(L_12);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___clipName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CStopU3Eb__0_mCEC75CA25BAAB3FA0CF827037359C9E70A2A3F57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB45B69D7ABB46F80A7940A6291FAE32D154CF986);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA60758C55A3046DB00AE780582860176CBA0896);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* V_0 = NULL;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* L_0 = (U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m8C54CF0F0E5F074525DA04D415803917C3371E69(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* L_1 = V_0;
		String_t* L_2 = ___clipName0;
		NullCheck(L_1);
		L_1->___clipName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___clipName_0), (void*)L_2);
		// Sound s = Array.Find(sounds, sound => sound.name == clipName);
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_3 = __this->___sounds_5;
		U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* L_4 = V_0;
		Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* L_5 = (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*)il2cpp_codegen_object_new(Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CStopU3Eb__0_mCEC75CA25BAAB3FA0CF827037359C9E70A2A3F57_RuntimeMethod_var), NULL);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_6;
		L_6 = Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7(L_3, L_5, Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mC0CB47A63BDC87DACBFD11BEA79C65EAEBB0DCE7_RuntimeMethod_var);
		V_1 = L_6;
		// if (s == null)
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_7 = V_1;
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.Log("Couldn't find the \"" + clipName + "\" sound from the sound list. Check spelling!");
		U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___clipName_0;
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralFA60758C55A3046DB00AE780582860176CBA0896, L_9, _stringLiteralB45B69D7ABB46F80A7940A6291FAE32D154CF986, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// return;
		return;
	}

IL_0043:
	{
		// s.source.Stop();
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_11 = V_1;
		NullCheck(L_11);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = L_11->___source_6;
		NullCheck(L_12);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_12, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::StopAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StopAll_m932926A9C21ED52C40F80EF7477C10DD1CC41313 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E3FAE475941A8C475E3B86C3C153CCFD386B942);
		s_Il2CppMethodInitialized = true;
	}
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* V_0 = NULL;
	int32_t V_1 = 0;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_2 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// foreach (Sound sound in sounds)
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_0 = __this->___sounds_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0057;
	}

IL_000b:
	{
		// foreach (Sound sound in sounds)
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (sound.source.isPlaying)
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_5 = V_2;
		NullCheck(L_5);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = L_5->___source_6;
		NullCheck(L_6);
		bool L_7;
		L_7 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_6, NULL);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// Debug.Log(SceneManager.GetActiveScene().name + " scene stops (StopPlayingAllSounds) sound: " + sound.source.clip.name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_8;
		L_8 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_3 = L_8;
		String_t* L_9;
		L_9 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_3), NULL);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_10 = V_2;
		NullCheck(L_10);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = L_10->___source_6;
		NullCheck(L_11);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12;
		L_12 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_9, _stringLiteral8E3FAE475941A8C475E3B86C3C153CCFD386B942, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// sound.source.Stop();
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_15 = V_2;
		NullCheck(L_15);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = L_15->___source_6;
		NullCheck(L_16);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_16, NULL);
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// foreach (Sound sound in sounds)
		int32_t L_18 = V_1;
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// Sound AudioManager::GetPlayingMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* AudioManager_GetPlayingMusic_m1AB46A68AB11D810B0FD8E89BFEB461A05BE4436 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* V_0 = NULL;
	int32_t V_1 = 0;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_2 = NULL;
	{
		// foreach (Sound sound in sounds)
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_0 = __this->___sounds_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002b;
	}

IL_000b:
	{
		// foreach (Sound sound in sounds)
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (sound.source.isPlaying && sound.audioType == Sound.AudioTypes.music)
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_5 = V_2;
		NullCheck(L_5);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = L_5->___source_6;
		NullCheck(L_6);
		bool L_7;
		L_7 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_6, NULL);
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = L_8->___audioType_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		// return sound;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_10 = V_2;
		return L_10;
	}

IL_0027:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002b:
	{
		// foreach (Sound sound in sounds)
		int32_t L_12 = V_1;
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0*)NULL;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_mA793A9DF6B975D03690B7C953972EFE41AE4D5E6 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
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
// System.Void AudioManager/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3DD23E7EFFDED69B9EAC81FE50CDC950F4B7EC9D (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass4_0::<Play>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CPlayU3Eb__0_m2BD9F6F9E24D884441DC3F502D3BA0662509EFBF (U3CU3Ec__DisplayClass4_0_t36B6A311D50E42EC59D3E1E83957D22EB610DD89* __this, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* ___sound0, const RuntimeMethod* method) 
{
	{
		// Sound s = Array.Find(sounds, sound => sound.name == clipName);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_0 = ___sound0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___name_1;
		String_t* L_2 = __this->___clipName_0;
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
// System.Void AudioManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m8C54CF0F0E5F074525DA04D415803917C3371E69 (U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass5_0::<Stop>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CStopU3Eb__0_mCEC75CA25BAAB3FA0CF827037359C9E70A2A3F57 (U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* __this, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* ___sound0, const RuntimeMethod* method) 
{
	{
		// Sound s = Array.Find(sounds, sound => sound.name == clipName);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_0 = ___sound0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___name_1;
		String_t* L_2 = __this->___clipName_0;
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (manager == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// manager = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4), (void*)__this);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01687723919AFC1BFDDEA5153F1EE3B49ACE479D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C90A2575C0E0F1B0970199AC39741B034EFB8BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CBD727F4158175AA3BD4E3CDD47A415CFF16D75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27656B38DF7486D1194F1BF174E713D77F3CA6CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CA57CB29AE85F9B82076982B704943CF1E0AB9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral330BC37D8463B5B010EF864F4DEDBCB8387FDEA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78894C86876D1A8E9E621C24A25A08AE9E30FE13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FD82C785BFCBD66B81319A0C29DF012780CBF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA32F25A6E145FEEFDAE2F25035FA74E1B547B96C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5C02610199613E28AD92D5AAFEA9F90E78DD562);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB93CEF8137433AB35456ABFD7B687B4EDA9AD76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC83B6926DE498999BC7E3D5467A98CDE9B139901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4A806B762620FF1722DEE664B5CD656ADAF584);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBDB5F90DF36FD94B3CB40F67B6C9D0000360670);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF9A4923FD8B05457A8DB3A64F34F9F6FD75FFE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD39C0D727FBE15E5FF1A900C5E22BB57C01F7B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEA0CFB2134DEC41029D1A5EAB2741E71A592DA9);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// counter += Time.deltaTime;
		float L_0 = __this->___counter_39;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___counter_39 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if(SceneManager.GetActiveScene().name == "Level1")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralC83B6926DE498999BC7E3D5467A98CDE9B139901, NULL);
		if (!L_4)
		{
			goto IL_0252;
		}
	}
	{
		// if(counter > 3 && !dialogueOne)
		float L_5 = __this->___counter_39;
		if ((!(((float)L_5) > ((float)(3.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		bool L_6 = __this->___dialogueOne_7;
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		// dialogueOne = true;
		__this->___dialogueOne_7 = (bool)1;
		// AudioManager.aManager.Play("Level1_Dialogue1");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_7 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_7);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_7, _stringLiteral27656B38DF7486D1194F1BF174E713D77F3CA6CA, NULL);
	}

IL_0059:
	{
		// if(counter > 31 && !dialogueTwo)
		float L_8 = __this->___counter_39;
		if ((!(((float)L_8) > ((float)(31.0f)))))
		{
			goto IL_0084;
		}
	}
	{
		bool L_9 = __this->___dialogueTwo_8;
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		// dialogueTwo = true;
		__this->___dialogueTwo_8 = (bool)1;
		// AudioManager.aManager.Play("Level1_Dialogue2");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_10 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_10);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_10, _stringLiteral01687723919AFC1BFDDEA5153F1EE3B49ACE479D, NULL);
	}

IL_0084:
	{
		// if(counter > 46 && !controlsEnabled)
		float L_11 = __this->___counter_39;
		if ((!(((float)L_11) > ((float)(46.0f)))))
		{
			goto IL_00a0;
		}
	}
	{
		bool L_12 = __this->___controlsEnabled_40;
		if (L_12)
		{
			goto IL_00a0;
		}
	}
	{
		// controlsEnabled = true;
		__this->___controlsEnabled_40 = (bool)1;
	}

IL_00a0:
	{
		// if (counter > 46 && !thrusted && thrustReference.action.ReadValue<float>() == 1)
		float L_13 = __this->___counter_39;
		if ((!(((float)L_13) > ((float)(46.0f)))))
		{
			goto IL_00ed;
		}
	}
	{
		bool L_14 = __this->___thrusted_13;
		if (L_14)
		{
			goto IL_00ed;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_15 = __this->___thrustReference_5;
		NullCheck(L_15);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16;
		L_16 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_15, NULL);
		NullCheck(L_16);
		float L_17;
		L_17 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_16, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		if ((!(((float)L_17) == ((float)(1.0f)))))
		{
			goto IL_00ed;
		}
	}
	{
		// thrusted = true;
		__this->___thrusted_13 = (bool)1;
		// counter = 0;
		__this->___counter_39 = (0.0f);
		// AudioManager.aManager.Play("Great");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_18 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_18);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_18, _stringLiteralEF9A4923FD8B05457A8DB3A64F34F9F6FD75FFE0, NULL);
	}

IL_00ed:
	{
		// if (counter > 3 && thrusted && !dialogueThree)
		float L_19 = __this->___counter_39;
		if ((!(((float)L_19) > ((float)(3.0f)))))
		{
			goto IL_0120;
		}
	}
	{
		bool L_20 = __this->___thrusted_13;
		if (!L_20)
		{
			goto IL_0120;
		}
	}
	{
		bool L_21 = __this->___dialogueThree_9;
		if (L_21)
		{
			goto IL_0120;
		}
	}
	{
		// dialogueThree = true;
		__this->___dialogueThree_9 = (bool)1;
		// AudioManager.aManager.Play("Level1_Dialogue3");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_22 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_22);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_22, _stringLiteralFD39C0D727FBE15E5FF1A900C5E22BB57C01F7B9, NULL);
	}

IL_0120:
	{
		// if (counter > 3 && thrusted && dialogueThree && !braked && airBrakeReference.action.ReadValue<float>() == 1)
		float L_23 = __this->___counter_39;
		if ((!(((float)L_23) > ((float)(3.0f)))))
		{
			goto IL_018c;
		}
	}
	{
		bool L_24 = __this->___thrusted_13;
		if (!L_24)
		{
			goto IL_018c;
		}
	}
	{
		bool L_25 = __this->___dialogueThree_9;
		if (!L_25)
		{
			goto IL_018c;
		}
	}
	{
		bool L_26 = __this->___braked_14;
		if (L_26)
		{
			goto IL_018c;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_27 = __this->___airBrakeReference_6;
		NullCheck(L_27);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_27, NULL);
		NullCheck(L_28);
		float L_29;
		L_29 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_28, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		if ((!(((float)L_29) == ((float)(1.0f)))))
		{
			goto IL_018c;
		}
	}
	{
		// AudioManager.aManager.Stop("Level1_Dialogue3");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_30 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_30);
		AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3(L_30, _stringLiteralFD39C0D727FBE15E5FF1A900C5E22BB57C01F7B9, NULL);
		// braked = true;
		__this->___braked_14 = (bool)1;
		// counter = 0;
		__this->___counter_39 = (0.0f);
		// AudioManager.aManager.Play("Great");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_31 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_31);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_31, _stringLiteralEF9A4923FD8B05457A8DB3A64F34F9F6FD75FFE0, NULL);
	}

IL_018c:
	{
		// if (counter > 3 && braked && !dialogueFour)
		float L_32 = __this->___counter_39;
		if ((!(((float)L_32) > ((float)(3.0f)))))
		{
			goto IL_01bf;
		}
	}
	{
		bool L_33 = __this->___braked_14;
		if (!L_33)
		{
			goto IL_01bf;
		}
	}
	{
		bool L_34 = __this->___dialogueFour_10;
		if (L_34)
		{
			goto IL_01bf;
		}
	}
	{
		// dialogueFour = true;
		__this->___dialogueFour_10 = (bool)1;
		// AudioManager.aManager.Play("Level1_Dialogue4");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_35 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_35);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_35, _stringLiteral78894C86876D1A8E9E621C24A25A08AE9E30FE13, NULL);
	}

IL_01bf:
	{
		// if (braked && cubeGrabbed && !cubeReleased && !dialogueFive)
		bool L_36 = __this->___braked_14;
		if (!L_36)
		{
			goto IL_0204;
		}
	}
	{
		bool L_37 = __this->___cubeGrabbed_15;
		if (!L_37)
		{
			goto IL_0204;
		}
	}
	{
		bool L_38 = __this->___cubeReleased_16;
		if (L_38)
		{
			goto IL_0204;
		}
	}
	{
		bool L_39 = __this->___dialogueFive_11;
		if (L_39)
		{
			goto IL_0204;
		}
	}
	{
		// AudioManager.aManager.Stop("Level1_Dialogue4");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_40 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_40);
		AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3(L_40, _stringLiteral78894C86876D1A8E9E621C24A25A08AE9E30FE13, NULL);
		// dialogueFive = true;
		__this->___dialogueFive_11 = (bool)1;
		// AudioManager.aManager.Play("Level1_Dialogue5");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_41 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_41);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_41, _stringLiteralB5C02610199613E28AD92D5AAFEA9F90E78DD562, NULL);
	}

IL_0204:
	{
		// if(braked && cubeReleased && !dialogueSix)
		bool L_42 = __this->___braked_14;
		if (!L_42)
		{
			goto IL_0252;
		}
	}
	{
		bool L_43 = __this->___cubeReleased_16;
		if (!L_43)
		{
			goto IL_0252;
		}
	}
	{
		bool L_44 = __this->___dialogueSix_12;
		if (L_44)
		{
			goto IL_0252;
		}
	}
	{
		// AudioManager.aManager.Stop("Level1_Dialogue5");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_45 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_45);
		AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3(L_45, _stringLiteralB5C02610199613E28AD92D5AAFEA9F90E78DD562, NULL);
		// dialogueSix = true;
		__this->___dialogueSix_12 = (bool)1;
		// AudioManager.aManager.Play("Level1_Dialogue6");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_46 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_46);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_46, _stringLiteralCB4A806B762620FF1722DEE664B5CD656ADAF584, NULL);
		// level1Door.SetBool("OpenDoor", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_47 = __this->___level1Door_17;
		NullCheck(L_47);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_47, _stringLiteralA32F25A6E145FEEFDAE2F25035FA74E1B547B96C, (bool)1, NULL);
	}

IL_0252:
	{
		// if (SceneManager.GetActiveScene().name == "Level2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_48;
		L_48 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_48;
		String_t* L_49;
		L_49 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_50;
		L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteral330BC37D8463B5B010EF864F4DEDBCB8387FDEA8, NULL);
		if (!L_50)
		{
			goto IL_02fd;
		}
	}
	{
		// if (counter > 2 && !dialogueTwoOne)
		float L_51 = __this->___counter_39;
		if ((!(((float)L_51) > ((float)(2.0f)))))
		{
			goto IL_0299;
		}
	}
	{
		bool L_52 = __this->___dialogueTwoOne_18;
		if (L_52)
		{
			goto IL_0299;
		}
	}
	{
		// dialogueTwoOne = true;
		__this->___dialogueTwoOne_18 = (bool)1;
		// AudioManager.aManager.Play("Level2_Dialogue1");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_53 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_53);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_53, _stringLiteral2CA57CB29AE85F9B82076982B704943CF1E0AB9F, NULL);
	}

IL_0299:
	{
		// if(!dialogueTwoTwo && cubeAtPlace && cylinderAtPlace && spherecubeAtPlace && plateAtPlace && sphereAtPlace && capsuleAtPlace)
		bool L_54 = __this->___dialogueTwoTwo_19;
		if (L_54)
		{
			goto IL_02fd;
		}
	}
	{
		bool L_55 = __this->___cubeAtPlace_20;
		if (!L_55)
		{
			goto IL_02fd;
		}
	}
	{
		bool L_56 = __this->___cylinderAtPlace_21;
		if (!L_56)
		{
			goto IL_02fd;
		}
	}
	{
		bool L_57 = __this->___spherecubeAtPlace_22;
		if (!L_57)
		{
			goto IL_02fd;
		}
	}
	{
		bool L_58 = __this->___plateAtPlace_25;
		if (!L_58)
		{
			goto IL_02fd;
		}
	}
	{
		bool L_59 = __this->___sphereAtPlace_24;
		if (!L_59)
		{
			goto IL_02fd;
		}
	}
	{
		bool L_60 = __this->___capsuleAtPlace_23;
		if (!L_60)
		{
			goto IL_02fd;
		}
	}
	{
		// AudioManager.aManager.Stop("Level2_Dialogue1");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_61 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_61);
		AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3(L_61, _stringLiteral2CA57CB29AE85F9B82076982B704943CF1E0AB9F, NULL);
		// dialogueTwoTwo = true;
		__this->___dialogueTwoTwo_19 = (bool)1;
		// AudioManager.aManager.Play("Level2_Dialogue2");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_62 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_62);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_62, _stringLiteralFEA0CFB2134DEC41029D1A5EAB2741E71A592DA9, NULL);
		// level2Door = true;
		__this->___level2Door_26 = (bool)1;
	}

IL_02fd:
	{
		// if (SceneManager.GetActiveScene().name == "Level3")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_63;
		L_63 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_63;
		String_t* L_64;
		L_64 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9, NULL);
		if (!L_65)
		{
			goto IL_0458;
		}
	}
	{
		// if (counter > 1 && !dialogueThreeOne)
		float L_66 = __this->___counter_39;
		if ((!(((float)L_66) > ((float)(1.0f)))))
		{
			goto IL_0344;
		}
	}
	{
		bool L_67 = __this->___dialogueThreeOne_27;
		if (L_67)
		{
			goto IL_0344;
		}
	}
	{
		// dialogueThreeOne = true;
		__this->___dialogueThreeOne_27 = (bool)1;
		// AudioManager.aManager.Play("Level3_Dialogue1");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_68 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_68);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_68, _stringLiteral1CBD727F4158175AA3BD4E3CDD47A415CFF16D75, NULL);
	}

IL_0344:
	{
		// if (!dialogueThreeTwo && atTelePad)
		bool L_69 = __this->___dialogueThreeTwo_28;
		if (L_69)
		{
			goto IL_0380;
		}
	}
	{
		bool L_70 = __this->___atTelePad_32;
		if (!L_70)
		{
			goto IL_0380;
		}
	}
	{
		// AudioManager.aManager.Stop("Level3_Dialogue1");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_71 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_71);
		AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3(L_71, _stringLiteral1CBD727F4158175AA3BD4E3CDD47A415CFF16D75, NULL);
		// dialogueThreeTwo = true;
		__this->___dialogueThreeTwo_28 = (bool)1;
		// controlsEnabled = false;
		__this->___controlsEnabled_40 = (bool)0;
		// AudioManager.aManager.Play("Level3_Dialogue2");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_72 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_72);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_72, _stringLiteralCBDB5F90DF36FD94B3CB40F67B6C9D0000360670, NULL);
	}

IL_0380:
	{
		// if (!dialogueThreeThree && teleported)
		bool L_73 = __this->___dialogueThreeThree_29;
		if (L_73)
		{
			goto IL_03b5;
		}
	}
	{
		bool L_74 = __this->___teleported_33;
		if (!L_74)
		{
			goto IL_03b5;
		}
	}
	{
		// AudioManager.aManager.Stop("Level3_Dialogue2");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_75 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_75);
		AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3(L_75, _stringLiteralCBDB5F90DF36FD94B3CB40F67B6C9D0000360670, NULL);
		// dialogueThreeThree = true;
		__this->___dialogueThreeThree_29 = (bool)1;
		// AudioManager.aManager.Play("Level3_Dialogue3");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_76 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_76);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_76, _stringLiteral86FD82C785BFCBD66B81319A0C29DF012780CBF6, NULL);
	}

IL_03b5:
	{
		// if (counter > 8 && !atTheDoor && teleported)
		float L_77 = __this->___counter_39;
		if ((!(((float)L_77) > ((float)(8.0f)))))
		{
			goto IL_03d9;
		}
	}
	{
		bool L_78 = __this->___atTheDoor_34;
		if (L_78)
		{
			goto IL_03d9;
		}
	}
	{
		bool L_79 = __this->___teleported_33;
		if (!L_79)
		{
			goto IL_03d9;
		}
	}
	{
		// controlsEnabled = true;
		__this->___controlsEnabled_40 = (bool)1;
	}

IL_03d9:
	{
		// if (!dialogueThreeFour && atTheDoor)
		bool L_80 = __this->___dialogueThreeFour_30;
		if (L_80)
		{
			goto IL_0415;
		}
	}
	{
		bool L_81 = __this->___atTheDoor_34;
		if (!L_81)
		{
			goto IL_0415;
		}
	}
	{
		// AudioManager.aManager.Stop("Level3_Dialogue3");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_82 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_82);
		AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3(L_82, _stringLiteral86FD82C785BFCBD66B81319A0C29DF012780CBF6, NULL);
		// dialogueThreeFour = true;
		__this->___dialogueThreeFour_30 = (bool)1;
		// AudioManager.aManager.Play("Level3_Dialogue4");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_83 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_83);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_83, _stringLiteral0C90A2575C0E0F1B0970199AC39741B034EFB8BA, NULL);
		// level3Door = true;
		__this->___level3Door_36 = (bool)1;
	}

IL_0415:
	{
		// if (!dialogueThreeFive && leverPulled)
		bool L_84 = __this->___dialogueThreeFive_31;
		if (L_84)
		{
			goto IL_0458;
		}
	}
	{
		bool L_85 = __this->___leverPulled_35;
		if (!L_85)
		{
			goto IL_0458;
		}
	}
	{
		// AudioManager.aManager.Stop("Level3_Dialogue4");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_86 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_86);
		AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3(L_86, _stringLiteral0C90A2575C0E0F1B0970199AC39741B034EFB8BA, NULL);
		// dialogueThreeFive = true;
		__this->___dialogueThreeFive_31 = (bool)1;
		// AudioManager.aManager.Play("Level3_Dialogue5");
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_87 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___aManager_4;
		NullCheck(L_87);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_87, _stringLiteralBB93CEF8137433AB35456ABFD7B687B4EDA9AD76, NULL);
		// brokenDoor = true;
		__this->___brokenDoor_37 = (bool)1;
		// gameEndDoor = true;
		__this->___gameEndDoor_38 = (bool)1;
	}

IL_0458:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public int currentLevelIndex = 1;
		__this->___currentLevelIndex_41 = 1;
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
// System.Void LevelChanger::GoToScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelChanger_GoToScene_m00DC8E1A4E81FE4CE7D5FEDA8CDDB5340FB0BF8F (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, int32_t ___levelIndex0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GoToSceneRoutine(levelIndex));
		int32_t L_0 = ___levelIndex0;
		RuntimeObject* L_1;
		L_1 = LevelChanger_GoToSceneRoutine_mBB476D147107DC955879FE8116B441255D3A2156(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LevelChanger::GoToSceneRoutine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelChanger_GoToSceneRoutine_mBB476D147107DC955879FE8116B441255D3A2156 (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, int32_t ___levelIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB* L_0 = (U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB*)il2cpp_codegen_object_new(U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGoToSceneRoutineU3Ed__2__ctor_m2FA273AAC53DA0E449157BD4CB108D5F57CCED37(L_0, 0, NULL);
		U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB* L_2 = L_1;
		int32_t L_3 = ___levelIndex0;
		NullCheck(L_2);
		L_2->___levelIndex_3 = L_3;
		return L_2;
	}
}
// System.Void LevelChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelChanger__ctor_mB270139778576777011D448087CDFAA0EEB941A1 (LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* __this, const RuntimeMethod* method) 
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
// System.Void LevelChanger/<GoToSceneRoutine>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRoutineU3Ed__2__ctor_m2FA273AAC53DA0E449157BD4CB108D5F57CCED37 (U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LevelChanger/<GoToSceneRoutine>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRoutineU3Ed__2_System_IDisposable_Dispose_mAF98C2FE27303A676653B25277BCCDD4080BE56B (U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LevelChanger/<GoToSceneRoutine>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGoToSceneRoutineU3Ed__2_MoveNext_mB63CE1AB69D4E885966432E21388E62916C3939D (U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// screenFader.FadeOut();
		LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* L_4 = V_1;
		NullCheck(L_4);
		ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* L_5 = L_4->___screenFader_4;
		NullCheck(L_5);
		ScreenFader_FadeOut_m407FD3F0E7B7FE0943B24A6111BAF540D45B2A2B(L_5, NULL);
		// yield return new WaitForSeconds(screenFader.fadeDuration);
		LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* L_6 = V_1;
		NullCheck(L_6);
		ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* L_7 = L_6->___screenFader_4;
		NullCheck(L_7);
		float L_8 = L_7->___fadeDuration_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameManager.manager.counter = 0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_10);
		L_10->___counter_39 = (0.0f);
		// SceneManager.LoadScene("Level" + levelIndex);
		int32_t* L_11 = (&__this->___levelIndex_3);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB224A2EFE789603DFDDB79BA6CD8E1B7A89B708B, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_13, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LevelChanger/<GoToSceneRoutine>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGoToSceneRoutineU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m943E5B5F84916E966C46F3B2C1B2100C16AFA143 (U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LevelChanger/<GoToSceneRoutine>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGoToSceneRoutineU3Ed__2_System_Collections_IEnumerator_Reset_mC9AE7DC7478ECECB2795327E60693FA294007E40 (U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGoToSceneRoutineU3Ed__2_System_Collections_IEnumerator_Reset_mC9AE7DC7478ECECB2795327E60693FA294007E40_RuntimeMethod_var)));
	}
}
// System.Object LevelChanger/<GoToSceneRoutine>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGoToSceneRoutineU3Ed__2_System_Collections_IEnumerator_get_Current_m12B45660C254CD5D7A20494B81AF2C30DE89E6E0 (U3CGoToSceneRoutineU3Ed__2_t0533CA1654BACF428D7158BDA0C13248A3D720FB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Lever::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lever_Update_m786B4808C94AAF40A9D3191ED40BB69198EBAC95 (Lever_t95EDCA49D4E471632B36CBB691B8701939683419* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.rotation.z > -0.5f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		float L_2 = L_1.___z_2;
		if ((!(((float)L_2) > ((float)(-0.5f)))))
		{
			goto IL_0022;
		}
	}
	{
		// GameManager.manager.leverPulled = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_3);
		L_3->___leverPulled_35 = (bool)1;
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Lever::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lever__ctor_m4DCF8CF24E73E02BBDC511EF8E2235960FA05580 (Lever_t95EDCA49D4E471632B36CBB691B8701939683419* __this, const RuntimeMethod* method) 
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
// System.Void ObjectNudge::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectNudge_Start_mDEB347B28E6B68ED050D0E2B923DD57D8A9A14B6 (ObjectNudge_t43C6B25BE9984EBA50D9B86B3FB972997DC0AB2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Rigidbody rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		// rb.AddForce(new Vector3(Random.Range(-randomForceLimit, randomForceLimit), Random.Range(-randomForceLimit, randomForceLimit), Random.Range(-randomForceLimit, randomForceLimit)), ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = L_0;
		float L_2 = __this->___randomForceLimit_4;
		float L_3 = __this->___randomForceLimit_4;
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_2)), L_3, NULL);
		float L_5 = __this->___randomForceLimit_4;
		float L_6 = __this->___randomForceLimit_4;
		float L_7;
		L_7 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_5)), L_6, NULL);
		float L_8 = __this->___randomForceLimit_4;
		float L_9 = __this->___randomForceLimit_4;
		float L_10;
		L_10 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_8)), L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_4, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_1, L_11, 1, NULL);
		// rb.AddTorque(new Vector3(Random.Range(0f, randomTorqueLimit), Random.Range(0f, randomTorqueLimit), Random.Range(0f, randomTorqueLimit)), ForceMode.Impulse);
		float L_12 = __this->___randomTorqueLimit_5;
		float L_13;
		L_13 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), L_12, NULL);
		float L_14 = __this->___randomTorqueLimit_5;
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), L_14, NULL);
		float L_16 = __this->___randomTorqueLimit_5;
		float L_17;
		L_17 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), L_13, L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody_AddTorque_m7922F76C73DACF9E1610D72726C01709C14F0937(L_1, L_18, 1, NULL);
		// }
		return;
	}
}
// System.Void ObjectNudge::IsGrabbed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectNudge_IsGrabbed_mDCB07B69B404DFC89AD661FCBD5C72C2F7B75F71 (ObjectNudge_t43C6B25BE9984EBA50D9B86B3FB972997DC0AB2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.manager.cubeGrabbed = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_0);
		L_0->___cubeGrabbed_15 = (bool)1;
		// }
		return;
	}
}
// System.Void ObjectNudge::IsReleased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectNudge_IsReleased_m85A691F77DF692446E9AA9B17BF89678C7769187 (ObjectNudge_t43C6B25BE9984EBA50D9B86B3FB972997DC0AB2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.manager.cubeReleased = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_0);
		L_0->___cubeReleased_16 = (bool)1;
		// }
		return;
	}
}
// System.Void ObjectNudge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectNudge__ctor_m88554B7C2D7A671B973337649BF74E79C42445F8 (ObjectNudge_t43C6B25BE9984EBA50D9B86B3FB972997DC0AB2A* __this, const RuntimeMethod* method) 
{
	{
		// public float randomForceLimit = 0.2f;
		__this->___randomForceLimit_4 = (0.200000003f);
		// public float randomTorqueLimit = 0.05f;
		__this->___randomTorqueLimit_5 = (0.0500000007f);
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
// System.Void ObjectPlacement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement_Start_m391DE7A0D3414AEDABE396D0ECC012F3C2FC8612 (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, const RuntimeMethod* method) 
{
	{
		// placementLight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___placementLight_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectPlacement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement_FixedUpdate_mFA6967816F48E62BC9A9CD3E649BA56A1FDD49BC (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, const RuntimeMethod* method) 
{
	{
		// if(objectPlaced)
		bool L_0 = __this->___objectPlaced_5;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		// rb.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_1);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_1, L_2, NULL);
		// rb.AddTorque(0, 0.25f, 0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_7;
		NullCheck(L_3);
		Rigidbody_AddTorque_mC55713BD82CB5EFB0D6C705B98F030717EF50CA1(L_3, (0.0f), (0.25f), (0.0f), NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void ObjectPlacement::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement_OnTriggerEnter_mA78CF64D7C24D4A7EDF75BAAAD018F11CE4FEF2B (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0900AB29B157A30D8389D53A16826A356064923D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17C94A273CD9895C291C7316C45C2623E2DCEABE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B763601FE8F72B117B3F3DAD069AA42609C7AA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47F28B8008CD4B504E470B235DB56CFB06457013);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5162ACF70C67D8A61EB032BF7B39559B4E2D1494);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7007632C8296BC7320EAA7E376810AC925B040A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BC72D556CD95CD004E0916D6A0475C0DEB10185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AABE35AABF8BA14125B9FB5296BCFEC0BF400F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F29644D2A76B1D76C8FFE1D076C500824BE79EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5904534CC0309656A801BC2F878CF2CBB7FFDC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4CFD004019A07FD5B1FFCF6A569A8214732EAE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6573AEF1CD060842A3B002C2A4D18AB116AE0AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gameObject.name == "CubePlaceholder" && other.gameObject.tag == "cube")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralE6573AEF1CD060842A3B002C2A4D18AB116AE0AE, NULL);
		if (!L_2)
		{
			goto IL_00b5;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral17C94A273CD9895C291C7316C45C2623E2DCEABE, NULL);
		if (!L_6)
		{
			goto IL_00b5;
		}
	}
	{
		// placedObject = other.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___other0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		__this->___placedObject_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedObject_6), (void*)L_8);
		// placedObject.transform.position = gameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___placedObject_6;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_13, NULL);
		// placedObject.transform.rotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___placedObject_6;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_15);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_15, L_16, NULL);
		// rb = placedObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___placedObject_6;
		NullCheck(L_17);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18;
		L_18 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_17, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_18);
		// placementLight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___placementLight_4;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// objectPlaced = true;
		__this->___objectPlaced_5 = (bool)1;
		// GameManager.manager.cubeAtPlace = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_20);
		L_20->___cubeAtPlace_20 = (bool)1;
		// placedObject.GetComponent<XRGrabInteractable>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___placedObject_6;
		NullCheck(L_21);
		XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* L_22;
		L_22 = GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7(L_21, GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7_RuntimeMethod_var);
		NullCheck(L_22);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_22, (bool)0, NULL);
	}

IL_00b5:
	{
		// if (gameObject.name == "CylinderPlaceholder" && other.gameObject.tag == "cylinder")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_23, NULL);
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral0900AB29B157A30D8389D53A16826A356064923D, NULL);
		if (!L_25)
		{
			goto IL_016a;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_26 = ___other0;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_27, NULL);
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral7007632C8296BC7320EAA7E376810AC925B040A9, NULL);
		if (!L_29)
		{
			goto IL_016a;
		}
	}
	{
		// placedObject = other.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_30 = ___other0;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		__this->___placedObject_6 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedObject_6), (void*)L_31);
		// placedObject.transform.position = gameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___placedObject_6;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		NullCheck(L_33);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_33, L_36, NULL);
		// placedObject.transform.rotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___placedObject_6;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_38);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_38, L_39, NULL);
		// rb = placedObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___placedObject_6;
		NullCheck(L_40);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_41;
		L_41 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_40, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_7 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_41);
		// placementLight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___placementLight_4;
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)1, NULL);
		// objectPlaced = true;
		__this->___objectPlaced_5 = (bool)1;
		// GameManager.manager.cylinderAtPlace = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_43 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_43);
		L_43->___cylinderAtPlace_21 = (bool)1;
		// placedObject.GetComponent<XRGrabInteractable>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___placedObject_6;
		NullCheck(L_44);
		XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* L_45;
		L_45 = GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7(L_44, GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7_RuntimeMethod_var);
		NullCheck(L_45);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_45, (bool)0, NULL);
	}

IL_016a:
	{
		// if (gameObject.name == "SpherecubePlaceholder" && other.gameObject.tag == "spherecube")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_46);
		String_t* L_47;
		L_47 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_46, NULL);
		bool L_48;
		L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral1B763601FE8F72B117B3F3DAD069AA42609C7AA6, NULL);
		if (!L_48)
		{
			goto IL_021f;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_49 = ___other0;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		NullCheck(L_50);
		String_t* L_51;
		L_51 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_50, NULL);
		bool L_52;
		L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteral9AABE35AABF8BA14125B9FB5296BCFEC0BF400F9, NULL);
		if (!L_52)
		{
			goto IL_021f;
		}
	}
	{
		// placedObject = other.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_53 = ___other0;
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		__this->___placedObject_6 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedObject_6), (void*)L_54);
		// placedObject.transform.position = gameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___placedObject_6;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_55, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_58, NULL);
		NullCheck(L_56);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_56, L_59, NULL);
		// placedObject.transform.rotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___placedObject_6;
		NullCheck(L_60);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_60, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62;
		L_62 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_61);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_61, L_62, NULL);
		// rb = placedObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___placedObject_6;
		NullCheck(L_63);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_64;
		L_64 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_63, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_7 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_64);
		// placementLight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = __this->___placementLight_4;
		NullCheck(L_65);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_65, (bool)1, NULL);
		// objectPlaced = true;
		__this->___objectPlaced_5 = (bool)1;
		// GameManager.manager.spherecubeAtPlace = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_66 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_66);
		L_66->___spherecubeAtPlace_22 = (bool)1;
		// placedObject.GetComponent<XRGrabInteractable>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___placedObject_6;
		NullCheck(L_67);
		XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* L_68;
		L_68 = GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7(L_67, GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7_RuntimeMethod_var);
		NullCheck(L_68);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_68, (bool)0, NULL);
	}

IL_021f:
	{
		// if (gameObject.name == "PlatePlaceholder" && other.gameObject.tag == "plate")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
		L_69 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_69);
		String_t* L_70;
		L_70 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_69, NULL);
		bool L_71;
		L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral5162ACF70C67D8A61EB032BF7B39559B4E2D1494, NULL);
		if (!L_71)
		{
			goto IL_02d4;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_72 = ___other0;
		NullCheck(L_72);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73;
		L_73 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_72, NULL);
		NullCheck(L_73);
		String_t* L_74;
		L_74 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_73, NULL);
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteral47F28B8008CD4B504E470B235DB56CFB06457013, NULL);
		if (!L_75)
		{
			goto IL_02d4;
		}
	}
	{
		// placedObject = other.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_76 = ___other0;
		NullCheck(L_76);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77;
		L_77 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_76, NULL);
		__this->___placedObject_6 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedObject_6), (void*)L_77);
		// placedObject.transform.position = gameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = __this->___placedObject_6;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_78, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80;
		L_80 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_81, NULL);
		NullCheck(L_79);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_79, L_82, NULL);
		// placedObject.transform.rotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = __this->___placedObject_6;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_85;
		L_85 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_84);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_84, L_85, NULL);
		// rb = placedObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = __this->___placedObject_6;
		NullCheck(L_86);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_87;
		L_87 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_86, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_7 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_87);
		// placementLight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = __this->___placementLight_4;
		NullCheck(L_88);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_88, (bool)1, NULL);
		// objectPlaced = true;
		__this->___objectPlaced_5 = (bool)1;
		// GameManager.manager.plateAtPlace = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_89 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_89);
		L_89->___plateAtPlace_25 = (bool)1;
		// placedObject.GetComponent<XRGrabInteractable>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90 = __this->___placedObject_6;
		NullCheck(L_90);
		XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* L_91;
		L_91 = GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7(L_90, GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7_RuntimeMethod_var);
		NullCheck(L_91);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_91, (bool)0, NULL);
	}

IL_02d4:
	{
		// if (gameObject.name == "SpherePlaceholder" && other.gameObject.tag == "sphere")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92;
		L_92 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_92);
		String_t* L_93;
		L_93 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_92, NULL);
		bool L_94;
		L_94 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_93, _stringLiteralE4CFD004019A07FD5B1FFCF6A569A8214732EAE6, NULL);
		if (!L_94)
		{
			goto IL_0389;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_95 = ___other0;
		NullCheck(L_95);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96;
		L_96 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_95, NULL);
		NullCheck(L_96);
		String_t* L_97;
		L_97 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_96, NULL);
		bool L_98;
		L_98 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_97, _stringLiteralD5904534CC0309656A801BC2F878CF2CBB7FFDC0, NULL);
		if (!L_98)
		{
			goto IL_0389;
		}
	}
	{
		// placedObject = other.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_99 = ___other0;
		NullCheck(L_99);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100;
		L_100 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_99, NULL);
		__this->___placedObject_6 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedObject_6), (void*)L_100);
		// placedObject.transform.position = gameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = __this->___placedObject_6;
		NullCheck(L_101);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_101, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103;
		L_103 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_103);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104;
		L_104 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_103, NULL);
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_104, NULL);
		NullCheck(L_102);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_102, L_105, NULL);
		// placedObject.transform.rotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = __this->___placedObject_6;
		NullCheck(L_106);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_106, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_108;
		L_108 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_107);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_107, L_108, NULL);
		// rb = placedObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_109 = __this->___placedObject_6;
		NullCheck(L_109);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_110;
		L_110 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_109, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_7 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_110);
		// placementLight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = __this->___placementLight_4;
		NullCheck(L_111);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_111, (bool)1, NULL);
		// objectPlaced = true;
		__this->___objectPlaced_5 = (bool)1;
		// GameManager.manager.sphereAtPlace = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_112 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_112);
		L_112->___sphereAtPlace_24 = (bool)1;
		// placedObject.GetComponent<XRGrabInteractable>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113 = __this->___placedObject_6;
		NullCheck(L_113);
		XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* L_114;
		L_114 = GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7(L_113, GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7_RuntimeMethod_var);
		NullCheck(L_114);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_114, (bool)0, NULL);
	}

IL_0389:
	{
		// if (gameObject.name == "CapsulePlaceholder" && other.gameObject.tag == "capsule")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115;
		L_115 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_115);
		String_t* L_116;
		L_116 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_115, NULL);
		bool L_117;
		L_117 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_116, _stringLiteral9F29644D2A76B1D76C8FFE1D076C500824BE79EA, NULL);
		if (!L_117)
		{
			goto IL_043e;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_118 = ___other0;
		NullCheck(L_118);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_119;
		L_119 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_118, NULL);
		NullCheck(L_119);
		String_t* L_120;
		L_120 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_119, NULL);
		bool L_121;
		L_121 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_120, _stringLiteral7BC72D556CD95CD004E0916D6A0475C0DEB10185, NULL);
		if (!L_121)
		{
			goto IL_043e;
		}
	}
	{
		// placedObject = other.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_122 = ___other0;
		NullCheck(L_122);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123;
		L_123 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_122, NULL);
		__this->___placedObject_6 = L_123;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedObject_6), (void*)L_123);
		// placedObject.transform.position = gameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124 = __this->___placedObject_6;
		NullCheck(L_124);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_125;
		L_125 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_124, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126;
		L_126 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_126);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_127;
		L_127 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_126, NULL);
		NullCheck(L_127);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_127, NULL);
		NullCheck(L_125);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_125, L_128, NULL);
		// placedObject.transform.rotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_129 = __this->___placedObject_6;
		NullCheck(L_129);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_129, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_131;
		L_131 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_130);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_130, L_131, NULL);
		// rb = placedObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_132 = __this->___placedObject_6;
		NullCheck(L_132);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_133;
		L_133 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_132, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_7 = L_133;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_133);
		// placementLight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_134 = __this->___placementLight_4;
		NullCheck(L_134);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_134, (bool)1, NULL);
		// objectPlaced = true;
		__this->___objectPlaced_5 = (bool)1;
		// GameManager.manager.capsuleAtPlace = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_135 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_135);
		L_135->___capsuleAtPlace_23 = (bool)1;
		// placedObject.GetComponent<XRGrabInteractable>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_136 = __this->___placedObject_6;
		NullCheck(L_136);
		XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* L_137;
		L_137 = GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7(L_136, GameObject_GetComponent_TisXRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_m5B89C18469B094FC4E8747D8EBF23C16F87C04E7_RuntimeMethod_var);
		NullCheck(L_137);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_137, (bool)0, NULL);
	}

IL_043e:
	{
		// }
		return;
	}
}
// System.Void ObjectPlacement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement__ctor_m86E4F0A59193948390C67A5FE4DE386A4B2A01C5 (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, const RuntimeMethod* method) 
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
// System.Void PassDoor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassDoor_Update_m80E242C81D13E2D236DEB8849509FA22C057CD2F (PassDoor_tBBA5A6EBB2977354EFF77A43DCF502B1378963F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral330BC37D8463B5B010EF864F4DEDBCB8387FDEA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A51EAED7F57D1A7784515FF7A278C3258C2CD26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84DF52756AACC5EF7C764DACD868C8952667B001);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA32F25A6E145FEEFDAE2F25035FA74E1B547B96C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6ED304B30F9865A4B50CF58FDFB6017AA5E0B4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC9406855F200EB96CC7F86C5BF179F2515A5A8F);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetActiveScene().name == "Level2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral330BC37D8463B5B010EF864F4DEDBCB8387FDEA8, NULL);
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		// if(GameManager.manager.level2Door && !level2DoorOpened)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_3);
		bool L_4 = L_3->___level2Door_26;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		bool L_5 = __this->___level2DoorOpened_5;
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		// animator.SetBool("OpenDoor", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_4;
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteralA32F25A6E145FEEFDAE2F25035FA74E1B547B96C, (bool)1, NULL);
		// level2DoorOpened = true;
		__this->___level2DoorOpened_5 = (bool)1;
	}

IL_0045:
	{
		// if (SceneManager.GetActiveScene().name == "Level3" && gameObject.name == "Door_Opening")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_7;
		L_7 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9, NULL);
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral3A51EAED7F57D1A7784515FF7A278C3258C2CD26, NULL);
		if (!L_12)
		{
			goto IL_00a1;
		}
	}
	{
		// if (GameManager.manager.level3Door && !level3DoorOpened)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_13);
		bool L_14 = L_13->___level3Door_36;
		if (!L_14)
		{
			goto IL_00a1;
		}
	}
	{
		bool L_15 = __this->___level3DoorOpened_6;
		if (L_15)
		{
			goto IL_00a1;
		}
	}
	{
		// animator.SetBool("OpenDoor", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->___animator_4;
		NullCheck(L_16);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_16, _stringLiteralA32F25A6E145FEEFDAE2F25035FA74E1B547B96C, (bool)1, NULL);
		// level3DoorOpened = true;
		__this->___level3DoorOpened_6 = (bool)1;
	}

IL_00a1:
	{
		// if (SceneManager.GetActiveScene().name == "Level3" && gameObject.name == "Door_Broken")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_17;
		L_17 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_17;
		String_t* L_18;
		L_18 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9, NULL);
		if (!L_19)
		{
			goto IL_00fd;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral84DF52756AACC5EF7C764DACD868C8952667B001, NULL);
		if (!L_22)
		{
			goto IL_00fd;
		}
	}
	{
		// if (GameManager.manager.brokenDoor && !brokenDoorClosed)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_23);
		bool L_24 = L_23->___brokenDoor_37;
		if (!L_24)
		{
			goto IL_00fd;
		}
	}
	{
		bool L_25 = __this->___brokenDoorClosed_7;
		if (L_25)
		{
			goto IL_00fd;
		}
	}
	{
		// animator.SetBool("CloseDoor", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___animator_4;
		NullCheck(L_26);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_26, _stringLiteralDC9406855F200EB96CC7F86C5BF179F2515A5A8F, (bool)1, NULL);
		// brokenDoorClosed = true;
		__this->___brokenDoorClosed_7 = (bool)1;
	}

IL_00fd:
	{
		// if (SceneManager.GetActiveScene().name == "Level3" && gameObject.name == "EndDoor_Opening")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_27;
		L_27 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_27;
		String_t* L_28;
		L_28 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9, NULL);
		if (!L_29)
		{
			goto IL_0159;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_30, NULL);
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteralC6ED304B30F9865A4B50CF58FDFB6017AA5E0B4C, NULL);
		if (!L_32)
		{
			goto IL_0159;
		}
	}
	{
		// if (GameManager.manager.gameEndDoor && !gameEndDoorOpened)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_33 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_33);
		bool L_34 = L_33->___gameEndDoor_38;
		if (!L_34)
		{
			goto IL_0159;
		}
	}
	{
		bool L_35 = __this->___gameEndDoorOpened_8;
		if (L_35)
		{
			goto IL_0159;
		}
	}
	{
		// animator.SetBool("OpenDoor", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_36 = __this->___animator_4;
		NullCheck(L_36);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_36, _stringLiteralA32F25A6E145FEEFDAE2F25035FA74E1B547B96C, (bool)1, NULL);
		// gameEndDoorOpened = true;
		__this->___gameEndDoorOpened_8 = (bool)1;
	}

IL_0159:
	{
		// }
		return;
	}
}
// System.Void PassDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PassDoor__ctor_m63FE66A6014B3CCF7F04394E0C46D26E0898A883 (PassDoor_tBBA5A6EBB2977354EFF77A43DCF502B1378963F6* __this, const RuntimeMethod* method) 
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
// System.Void PlayerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Awake_m4A997ABB547A7B4C3BA447681C1C8718B7B4A5B6 (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = gameObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_0, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void PlayerManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Update_mCCCF3148479BAF4FF7E179FDD537858CEECA3AFB (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral837290439BE5DB6630A8A5A4A0E48654151F9233);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// textWindow.text = "CurrentLevel: " + GameManager.manager.currentLevelIndex;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___textWindow_7;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_1);
		int32_t* L_2 = (&L_1->___currentLevelIndex_41);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral837290439BE5DB6630A8A5A4A0E48654151F9233, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// if (SceneManager.GetActiveScene().name == "Level3")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_5;
		L_5 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9, NULL);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		// if(transform.position.z > 0.1f && !GameManager.manager.teleported)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		if ((!(((float)L_10) > ((float)(0.100000001f)))))
		{
			goto IL_007a;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_11);
		bool L_12 = L_11->___teleported_33;
		if (L_12)
		{
			goto IL_007a;
		}
	}
	{
		// GameManager.manager.teleported = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_13);
		L_13->___teleported_33 = (bool)1;
		// GameManager.manager.counter = 0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_14 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_14);
		L_14->___counter_39 = (0.0f);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void PlayerManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_FixedUpdate_m35BCC459D83D8233875CD902F56D75C32D1806C2 (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GameManager.manager.controlsEnabled && thrustReference.action.ReadValue<float>() == 1 &&
		//     (Mathf.Abs(rb.velocity.x) < 1.5f || Mathf.Abs(rb.velocity.y) < 1.5f || Mathf.Abs(rb.velocity.z) < 1.5f))
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_0);
		bool L_1 = L_0->___controlsEnabled_40;
		if (!L_1)
		{
			goto IL_026e;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___thrustReference_4;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_3, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		if ((!(((float)L_4) == ((float)(1.0f)))))
		{
			goto IL_026e;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_10;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_5, NULL);
		float L_7 = L_6.___x_2;
		float L_8;
		L_8 = fabsf(L_7);
		if ((((float)L_8) < ((float)(1.5f))))
		{
			goto IL_0080;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_10;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_9, NULL);
		float L_11 = L_10.___y_3;
		float L_12;
		L_12 = fabsf(L_11);
		if ((((float)L_12) < ((float)(1.5f))))
		{
			goto IL_0080;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->___rb_10;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_13, NULL);
		float L_15 = L_14.___z_4;
		float L_16;
		L_16 = fabsf(L_15);
		if ((!(((float)L_16) < ((float)(1.5f)))))
		{
			goto IL_026e;
		}
	}

IL_0080:
	{
		// rb.AddForce(leftController.transform.forward * thrustPower);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___rb_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___leftController_6;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_19, NULL);
		float L_21 = __this->___thrustPower_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		NullCheck(L_17);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_17, L_22, NULL);
		// if(rb.velocity.x > 1.5f)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_23 = __this->___rb_10;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_23, NULL);
		float L_25 = L_24.___x_2;
		if ((!(((float)L_25) > ((float)(1.5f)))))
		{
			goto IL_00f2;
		}
	}
	{
		// rb.velocity = new Vector3(1.5f, rb.velocity.y, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26 = __this->___rb_10;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_27 = __this->___rb_10;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_27, NULL);
		float L_29 = L_28.___y_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = __this->___rb_10;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_30, NULL);
		float L_32 = L_31.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), (1.5f), L_29, L_32, /*hidden argument*/NULL);
		NullCheck(L_26);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_26, L_33, NULL);
	}

IL_00f2:
	{
		// if (rb.velocity.x < -1.5f)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_34 = __this->___rb_10;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_34, NULL);
		float L_36 = L_35.___x_2;
		if ((!(((float)L_36) < ((float)(-1.5f)))))
		{
			goto IL_013e;
		}
	}
	{
		// rb.velocity = new Vector3(-1.5f, rb.velocity.y, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_37 = __this->___rb_10;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_38 = __this->___rb_10;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_38, NULL);
		float L_40 = L_39.___y_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_41 = __this->___rb_10;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_41, NULL);
		float L_43 = L_42.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_44), (-1.5f), L_40, L_43, /*hidden argument*/NULL);
		NullCheck(L_37);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_37, L_44, NULL);
	}

IL_013e:
	{
		// if (rb.velocity.y > 1.5f)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_45 = __this->___rb_10;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_45, NULL);
		float L_47 = L_46.___y_3;
		if ((!(((float)L_47) > ((float)(1.5f)))))
		{
			goto IL_018a;
		}
	}
	{
		// rb.velocity = new Vector3(rb.velocity.x, 1.5f, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_48 = __this->___rb_10;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_49 = __this->___rb_10;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_49, NULL);
		float L_51 = L_50.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_52 = __this->___rb_10;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_52, NULL);
		float L_54 = L_53.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_55), L_51, (1.5f), L_54, /*hidden argument*/NULL);
		NullCheck(L_48);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_48, L_55, NULL);
	}

IL_018a:
	{
		// if (rb.velocity.y < -1.5f)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_56 = __this->___rb_10;
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_56, NULL);
		float L_58 = L_57.___y_3;
		if ((!(((float)L_58) < ((float)(-1.5f)))))
		{
			goto IL_01d6;
		}
	}
	{
		// rb.velocity = new Vector3(rb.velocity.x, -1.5f, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_59 = __this->___rb_10;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_60 = __this->___rb_10;
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_60, NULL);
		float L_62 = L_61.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_63 = __this->___rb_10;
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_63, NULL);
		float L_65 = L_64.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_66), L_62, (-1.5f), L_65, /*hidden argument*/NULL);
		NullCheck(L_59);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_59, L_66, NULL);
	}

IL_01d6:
	{
		// if (rb.velocity.z > 1.5f)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_67 = __this->___rb_10;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_67, NULL);
		float L_69 = L_68.___z_4;
		if ((!(((float)L_69) > ((float)(1.5f)))))
		{
			goto IL_0222;
		}
	}
	{
		// rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y, 1.5f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_70 = __this->___rb_10;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_71 = __this->___rb_10;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_71, NULL);
		float L_73 = L_72.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_74 = __this->___rb_10;
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_74, NULL);
		float L_76 = L_75.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_77), L_73, L_76, (1.5f), /*hidden argument*/NULL);
		NullCheck(L_70);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_70, L_77, NULL);
	}

IL_0222:
	{
		// if (rb.velocity.z < -1.5f)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_78 = __this->___rb_10;
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_78, NULL);
		float L_80 = L_79.___z_4;
		if ((!(((float)L_80) < ((float)(-1.5f)))))
		{
			goto IL_026e;
		}
	}
	{
		// rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y, -1.5f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_81 = __this->___rb_10;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_82 = __this->___rb_10;
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_82, NULL);
		float L_84 = L_83.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_85 = __this->___rb_10;
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_85, NULL);
		float L_87 = L_86.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), L_84, L_87, (-1.5f), /*hidden argument*/NULL);
		NullCheck(L_81);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_81, L_88, NULL);
	}

IL_026e:
	{
		// if (airBrakeReference.action.ReadValue<float>() == 1 && (Mathf.Abs(rb.velocity.x) > 0 || Mathf.Abs(rb.velocity.y) > 0 || Mathf.Abs(rb.velocity.z) > 0))
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_89 = __this->___airBrakeReference_5;
		NullCheck(L_89);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_90;
		L_90 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_89, NULL);
		NullCheck(L_90);
		float L_91;
		L_91 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_90, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		if ((!(((float)L_91) == ((float)(1.0f)))))
		{
			goto IL_0304;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_92 = __this->___rb_10;
		NullCheck(L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_92, NULL);
		float L_94 = L_93.___x_2;
		float L_95;
		L_95 = fabsf(L_94);
		if ((((float)L_95) > ((float)(0.0f))))
		{
			goto IL_02d9;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_96 = __this->___rb_10;
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_96, NULL);
		float L_98 = L_97.___y_3;
		float L_99;
		L_99 = fabsf(L_98);
		if ((((float)L_99) > ((float)(0.0f))))
		{
			goto IL_02d9;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_100 = __this->___rb_10;
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_100, NULL);
		float L_102 = L_101.___z_4;
		float L_103;
		L_103 = fabsf(L_102);
		if ((!(((float)L_103) > ((float)(0.0f)))))
		{
			goto IL_0304;
		}
	}

IL_02d9:
	{
		// rb.AddForce(rb.velocity * (-1) * brakePower);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_104 = __this->___rb_10;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_105 = __this->___rb_10;
		NullCheck(L_105);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_105, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_106, (-1.0f), NULL);
		float L_108 = __this->___brakePower_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_107, L_108, NULL);
		NullCheck(L_104);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_104, L_109, NULL);
	}

IL_0304:
	{
		// if(GameManager.manager.leverPulled)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_110 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_110);
		bool L_111 = L_110->___leverPulled_35;
		if (!L_111)
		{
			goto IL_031c;
		}
	}
	{
		// rb.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_112 = __this->___rb_10;
		NullCheck(L_112);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_112, (bool)0, NULL);
	}

IL_031c:
	{
		// }
		return;
	}
}
// System.Void PlayerManager::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_OnCollisionEnter_m8D807CEB402BE07704EA559183EC7CA2233139FC (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F7CC227D79CC134719264BB8303580FF4883913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F15E73C308C9440A4A66E65A54F37A6862F5072);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE05BDF92F15AE590512F4B8C273AF9EDEEED536);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.layer == LayerMask.NameToLayer("Teleport") && GameManager.manager.counter > 24)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral9F15E73C308C9440A4A66E65A54F37A6862F5072, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0068;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_4);
		float L_5 = L_4->___counter_39;
		if ((!(((float)L_5) > ((float)(24.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		// textWindow.text = "Hit telepad!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___textWindow_7;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteralFE05BDF92F15AE590512F4B8C273AF9EDEEED536);
		// rb.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_7);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_7, L_8, NULL);
		// glassWall.layer = LayerMask.NameToLayer("Glass");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___glassWall_12;
		int32_t L_10;
		L_10 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral8F7CC227D79CC134719264BB8303580FF4883913, NULL);
		NullCheck(L_9);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_9, L_10, NULL);
		// GameManager.manager.atTelePad = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_11);
		L_11->___atTelePad_32 = (bool)1;
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void PlayerManager::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_OnTriggerEnter_mECB4FEEA99F2340E2D8ADF46F85570A2414447FA (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5_m7D8EAB83D9B0380DD82BF655F0AF0D24FB72B4E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD39F9E6E4857D4F21FA96673D92C362BA611C356);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.layer == LayerMask.NameToLayer("Finish"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0059;
		}
	}
	{
		// textWindow.text = gameObject.name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___textWindow_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		// GameManager.manager.currentLevelIndex++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->___currentLevelIndex_41;
		NullCheck(L_8);
		L_8->___currentLevelIndex_41 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// levelChanger.GetComponent<LevelChanger>().GoToScene(GameManager.manager.currentLevelIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___levelChanger_11;
		NullCheck(L_10);
		LevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5* L_11;
		L_11 = GameObject_GetComponent_TisLevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5_m7D8EAB83D9B0380DD82BF655F0AF0D24FB72B4E4(L_10, GameObject_GetComponent_TisLevelChanger_t347C4BE836D0E92A2E5F3987F649C795177F09A5_m7D8EAB83D9B0380DD82BF655F0AF0D24FB72B4E4_RuntimeMethod_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_12);
		int32_t L_13 = L_12->___currentLevelIndex_41;
		NullCheck(L_11);
		LevelChanger_GoToScene_m00DC8E1A4E81FE4CE7D5FEDA8CDDB5340FB0BF8F(L_11, L_13, NULL);
	}

IL_0059:
	{
		// if (other.gameObject.layer == LayerMask.NameToLayer("Checkpoint"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_14 = ___other0;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_15, NULL);
		int32_t L_17;
		L_17 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralD39F9E6E4857D4F21FA96673D92C362BA611C356, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_00a0;
		}
	}
	{
		// GameManager.manager.atTheDoor = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___manager_4;
		NullCheck(L_18);
		L_18->___atTheDoor_34 = (bool)1;
		// Physics.gravity = new Vector3(0, 0, 9.81f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.0f), (0.0f), (9.81000042f), /*hidden argument*/NULL);
		Physics_set_gravity_mAEF3D6B45E6E567F04244C7889366CACCB4F1952(L_19, NULL);
		// rb.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = __this->___rb_10;
		NullCheck(L_20);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_20, (bool)1, NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void PlayerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager__ctor_mEDEFFACDDE66D7077DE8CDED6560CA06218B5A0E (PlayerManager_tFCA057D2BB0C684CAB1A27194F6D1E2C85251F84* __this, const RuntimeMethod* method) 
{
	{
		// public float thrustPower = 1f;
		__this->___thrustPower_8 = (1.0f);
		// public float brakePower = 1.25f;
		__this->___brakePower_9 = (1.25f);
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
// System.Void ScreenFader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFader_Start_m90F61112D8E354C1B5028557423C8E4FF03EEC31 (ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rend_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_7), (void*)L_0);
		// if (fadeOnStart)
		bool L_1 = __this->___fadeOnStart_4;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// FadeIn();
		ScreenFader_FadeIn_mBD48171591B7F7E52AE0E5C4C72F0CC35397B638(__this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void ScreenFader::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFader_FadeIn_mBD48171591B7F7E52AE0E5C4C72F0CC35397B638 (ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* __this, const RuntimeMethod* method) 
{
	{
		// Fade(1, 0);
		ScreenFader_Fade_m1EBCF876D04B2E73CCA0568AACCAE2EF8F073510(__this, (1.0f), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void ScreenFader::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFader_FadeOut_m407FD3F0E7B7FE0943B24A6111BAF540D45B2A2B (ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* __this, const RuntimeMethod* method) 
{
	{
		// Fade(0, 1);
		ScreenFader_Fade_m1EBCF876D04B2E73CCA0568AACCAE2EF8F073510(__this, (0.0f), (1.0f), NULL);
		// }
		return;
	}
}
// System.Void ScreenFader::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFader_Fade_m1EBCF876D04B2E73CCA0568AACCAE2EF8F073510 (ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* __this, float ___alphaIn0, float ___alphaOut1, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(FadeRoutine(alphaIn, alphaOut));
		float L_0 = ___alphaIn0;
		float L_1 = ___alphaOut1;
		RuntimeObject* L_2;
		L_2 = ScreenFader_FadeRoutine_mD0C9811A07F812F25CC07775878381E6C01C5E9F(__this, L_0, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ScreenFader::FadeRoutine(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScreenFader_FadeRoutine_mD0C9811A07F812F25CC07775878381E6C01C5E9F (ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* __this, float ___alphaIn0, float ___alphaOut1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4* L_0 = (U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4*)il2cpp_codegen_object_new(U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeRoutineU3Ed__8__ctor_mD0F8D8428DA4E57D83D781F8D028BEEA9FFD20CD(L_0, 0, NULL);
		U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4* L_2 = L_1;
		float L_3 = ___alphaIn0;
		NullCheck(L_2);
		L_2->___alphaIn_3 = L_3;
		U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4* L_4 = L_2;
		float L_5 = ___alphaOut1;
		NullCheck(L_4);
		L_4->___alphaOut_4 = L_5;
		return L_4;
	}
}
// System.Void ScreenFader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFader__ctor_mCB402EA31DDCE4BDA7ADB1B33FBD8E03285294B7 (ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* __this, const RuntimeMethod* method) 
{
	{
		// public bool fadeOnStart = true;
		__this->___fadeOnStart_4 = (bool)1;
		// public float fadeDuration = 2f;
		__this->___fadeDuration_5 = (2.0f);
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
// System.Void ScreenFader/<FadeRoutine>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8__ctor_mD0F8D8428DA4E57D83D781F8D028BEEA9FFD20CD (U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ScreenFader/<FadeRoutine>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8_System_IDisposable_Dispose_mFF999A49660E500AFAB1B2BC1144EA4C209D2079 (U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ScreenFader/<FadeRoutine>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeRoutineU3Ed__8_MoveNext_mB62120DDDC8C8C74A22FB270F033EAC656E3E1D7 (U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float timer = 0;
		__this->___U3CtimerU3E5__2_5 = (0.0f);
		goto IL_0096;
	}

IL_002b:
	{
		// Color newColor = fadeColor;
		ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* L_4 = V_1;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = L_4->___fadeColor_6;
		V_3 = L_5;
		// newColor.a = Mathf.Lerp(alphaIn, alphaOut, timer / fadeDuration);
		float L_6 = __this->___alphaIn_3;
		float L_7 = __this->___alphaOut_4;
		float L_8 = __this->___U3CtimerU3E5__2_5;
		ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___fadeDuration_5;
		float L_11;
		L_11 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_6, L_7, ((float)(L_8/L_10)), NULL);
		(&V_3)->___a_3 = L_11;
		// rend.material.SetColor("_BaseColor", newColor);
		ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* L_12 = V_1;
		NullCheck(L_12);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13 = L_12->___rend_7;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_13, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = V_3;
		NullCheck(L_14);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_14, _stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379, L_15, NULL);
		// timer += Time.deltaTime;
		float L_16 = __this->___U3CtimerU3E5__2_5;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__2_5 = ((float)il2cpp_codegen_add(L_16, L_17));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0096:
	{
		// while (timer < fadeDuration)
		float L_18 = __this->___U3CtimerU3E5__2_5;
		ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* L_19 = V_1;
		NullCheck(L_19);
		float L_20 = L_19->___fadeDuration_5;
		if ((((float)L_18) < ((float)L_20)))
		{
			goto IL_002b;
		}
	}
	{
		// Color newColor2 = fadeColor;
		ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* L_21 = V_1;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = L_21->___fadeColor_6;
		V_2 = L_22;
		// newColor2.a = alphaOut;
		float L_23 = __this->___alphaOut_4;
		(&V_2)->___a_3 = L_23;
		// rend.material.SetColor("_BaseColor", newColor2);
		ScreenFader_t921A242C91A28AB4420D66CC2B2FA115BD016F77* L_24 = V_1;
		NullCheck(L_24);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_25 = L_24->___rend_7;
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_25, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = V_2;
		NullCheck(L_26);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_26, _stringLiteral51282E2AAC09AC6EDBC2C1C237C0183F97FEE379, L_27, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ScreenFader/<FadeRoutine>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeRoutineU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m626C50979A0D0FC24986BCC13AE4AB04F0C18353 (U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ScreenFader/<FadeRoutine>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_Reset_mF02FD84EC4F64FD93036FA5808559A134107AE52 (U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_Reset_mF02FD84EC4F64FD93036FA5808559A134107AE52_RuntimeMethod_var)));
	}
}
// System.Object ScreenFader/<FadeRoutine>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeRoutineU3Ed__8_System_Collections_IEnumerator_get_Current_mFA90BC1D629B0ECA8880638FEA2DA1C2C18E84C2 (U3CFadeRoutineU3Ed__8_t981E2A3862DD365A8F19F435284FC2F3CB7A34B4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Sound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sound__ctor_m5DD7C9F71B98D5670BBDD05F6D6FCDF43DC9EA8F (Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		// foreach (var loader in loaders)
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0071;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0071:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_0017_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
				L_7 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_6);
				// if (loader.name.Equals("Oculus Loader"))
				NullCheck(L_7);
				String_t* L_8;
				L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
				NullCheck(L_8);
				bool L_9;
				L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				if (!L_9)
				{
					goto IL_005e_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_RightController_5;
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_LeftController_4;
				NullCheck(L_11);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_12);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
			}

IL_005e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
