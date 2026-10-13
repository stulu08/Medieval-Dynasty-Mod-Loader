#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
/////////////////////////////////////////////
enum class EMovieScene3DPathSection_Axis : uint8_t {
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6,
};
/////////////////////////////////////////////
// Enum MovieSceneTracks.EFireEventsAtPosition
/////////////////////////////////////////////
enum class EFireEventsAtPosition : uint8_t {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum MovieSceneTracks.ELevelVisibility
/////////////////////////////////////////////
enum class ELevelVisibility : uint8_t {
	Visible = 0,
	Hidden = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum MovieSceneTracks.EParticleKey
/////////////////////////////////////////////
enum class EParticleKey : uint8_t {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	MAX = 3,
};
#pragma endregion

#pragma region Structs
struct FMovieScene3DPathSectionTemplate;
struct FMovieSceneTransformMask;
struct FMovieScene3DTransformKeyStruct;
struct FMovieScene3DScaleKeyStruct;
struct FMovieScene3DRotationKeyStruct;
struct FMovieScene3DLocationKeyStruct;
struct FMovieSceneActorReferenceKey;
struct FMovieSceneActorReferenceData;
struct FMovieSceneActorReferenceSectionTemplate;
struct FMovieSceneAudioSectionTemplate;
struct FMovieSceneCameraAnimSectionData;
struct FMovieSceneCameraAnimSectionTemplate;
struct FMovieSceneCameraShakeSectionData;
struct FMovieSceneCameraShakeSourceShakeSectionTemplate;
struct FMovieSceneCameraShakeSourceTriggerChannel;
struct FMovieSceneCameraShakeSourceTrigger;
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate;
struct FMovieSceneCameraShakeSectionTemplate;
struct FMovieSceneColorKeyStruct;
struct FMovieSceneColorSectionTemplate;
struct FMovieSceneEventPtrs;
struct FMovieSceneEvent;
struct FMovieSceneEventPayloadVariable;
struct FMovieSceneEventChannel;
struct FMovieSceneEventSectionData;
struct FMovieSceneEventParameters;
struct FEventPayload;
struct FMovieSceneEventTriggerData;
struct FMovieSceneEventSectionTemplate;
struct FMovieSceneFadeSectionTemplate;
struct FMovieSceneParameterSectionTemplate;
struct FTransformParameterNameAndCurves;
struct FColorParameterNameAndCurves;
struct FVectorParameterNameAndCurves;
struct FVector2DParameterNameAndCurves;
struct FBoolParameterNameAndCurve;
struct FScalarParameterNameAndCurve;
struct FMovieSceneMaterialParameterCollectionTemplate;
struct FMovieSceneObjectPropertyTemplate;
struct FMovieSceneComponentMaterialSectionTemplate;
struct FMovieSceneParticleParameterSectionTemplate;
struct FMovieSceneParticleChannel;
struct FMovieSceneParticleSectionTemplate;
struct FMovieScenePrimitiveMaterialTemplate;
struct FMovieSceneStringChannel;
struct FMovieSceneStringPropertySectionTemplate;
struct FMovieSceneBoolPropertySectionTemplate;
struct FMovieSceneSkeletalAnimationParams;
struct FMovieSceneSkeletalAnimationSectionTemplateParameters;
struct FMovieSceneSkeletalAnimationSectionTemplate;
struct FMovieSceneSkeletalAnimRootMotionTrackParams;
struct FMovieSceneSlomoSectionTemplate;
struct FLevelVisibilityComponentData;
struct FMovieSceneVectorKeyStructBase;
struct FMovieSceneVector4KeyStruct;
struct FMovieSceneVectorKeyStruct;
struct FMovieSceneVector2DKeyStruct;
struct FMovieSceneVisibilitySectionTemplate;
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 224
// Size inherited 32
/////////////////////////////////////////////
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID	PathBindingID;		//Offset: 32	Size: 24	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	TimingCurve;		//Offset: 56	Size: 160	Flags: NativeAccessSpecifierPublic
	EMovieScene3DPathSection_Axis	FrontAxisEnum;		//Offset: 216	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EMovieScene3DPathSection_Axis	UpAxisEnum;		//Offset: 217	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 218	Size: 2
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bFollow : 1;		//Offset: 220	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bReverse : 1;		//Offset: 220	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bForceUpright : 1;		//Offset: 220	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 220	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size 4
/////////////////////////////////////////////
struct FMovieSceneTransformMask {
	uint32_t	Mask;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Super ScriptStruct MovieScene.MovieSceneKeyStruct
// Size 72
// Size inherited 8
/////////////////////////////////////////////
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct {
	struct FVector	Location;		//Offset: 8	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FRotator	Rotation;		//Offset: 20	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FVector	Scale;		//Offset: 32	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	Time;		//Offset: 44	Size: 4	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[24];		//Offset: 48	Size: 24
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Super ScriptStruct MovieScene.MovieSceneKeyStruct
// Size 48
// Size inherited 8
/////////////////////////////////////////////
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct {
	struct FVector	Scale;		//Offset: 8	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	Time;		//Offset: 20	Size: 4	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[24];		//Offset: 24	Size: 24
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Super ScriptStruct MovieScene.MovieSceneKeyStruct
// Size 48
// Size inherited 8
/////////////////////////////////////////////
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct {
	struct FRotator	Rotation;		//Offset: 8	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	struct FFrameNumber	Time;		//Offset: 20	Size: 4	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[24];		//Offset: 24	Size: 24
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Super ScriptStruct MovieScene.MovieSceneKeyStruct
// Size 48
// Size inherited 8
/////////////////////////////////////////////
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct {
	struct FVector	Location;		//Offset: 8	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	Time;		//Offset: 20	Size: 4	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[24];		//Offset: 24	Size: 24
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size 40
/////////////////////////////////////////////
struct FMovieSceneActorReferenceKey {
	struct FMovieSceneObjectBindingID	Object;		//Offset: 0	Size: 24	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	ComponentName;		//Offset: 24	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	SocketName;		//Offset: 32	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Super ScriptStruct MovieScene.MovieSceneChannel
// Size 176
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneActorReferenceData : public FMovieSceneChannel {
	TArray<struct FFrameNumber>	KeyTimes;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	struct FMovieSceneActorReferenceKey	DefaultValue;		//Offset: 24	Size: 40	Flags: NoDestructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneActorReferenceKey>	KeyValues;		//Offset: 64	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[96];		//Offset: 80	Size: 96
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 232
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData	PropertyData;		//Offset: 32	Size: 24	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneActorReferenceData	ActorReferenceData;		//Offset: 56	Size: 176	Flags: NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 40
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate {
	class UMovieSceneAudioSection*	AudioSection;		//Offset: 32	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size 32
/////////////////////////////////////////////
struct FMovieSceneCameraAnimSectionData {
	class UCameraAnim*	CameraAnim;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PlayRate;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PlayScale;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	BlendInTime;		//Offset: 16	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	BlendOutTime;		//Offset: 20	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bLooping;		//Offset: 24	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 25	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 72
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneEvalTemplate {
	struct FMovieSceneCameraAnimSectionData	SourceData;		//Offset: 32	Size: 32	Flags: NoDestructor, NativeAccessSpecifierPrivate
	struct FFrameNumber	SectionStartTime;		//Offset: 64	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[4];		//Offset: 68	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size 32
/////////////////////////////////////////////
struct FMovieSceneCameraShakeSectionData {
	class UCameraShakeBase*	ShakeClass;		//Offset: 0	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PlayScale;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ECameraShakePlaySpace	PlaySpace;		//Offset: 12	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 13	Size: 3
	struct FRotator	UserDefinedPlaySpace;		//Offset: 16	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 28	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 72
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate {
	struct FMovieSceneCameraShakeSectionData	SourceData;		//Offset: 32	Size: 32	Flags: NoDestructor, NativeAccessSpecifierPrivate
	struct FFrameNumber	SectionStartTime;		//Offset: 64	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FFrameNumber	SectionEndTime;		//Offset: 68	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// Super ScriptStruct MovieScene.MovieSceneChannel
// Size 136
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel {
	TArray<struct FFrameNumber>	KeyTimes;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneCameraShakeSourceTrigger>	KeyValues;		//Offset: 24	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[96];		//Offset: 40	Size: 96
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
// Size 32
/////////////////////////////////////////////
struct FMovieSceneCameraShakeSourceTrigger {
	class UCameraShakeBase*	ShakeClass;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PlayScale;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ECameraShakePlaySpace	PlaySpace;		//Offset: 12	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 13	Size: 3
	struct FRotator	UserDefinedPlaySpace;		//Offset: 16	Size: 12	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 28	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 64
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate {
	TArray<struct FFrameNumber>	TriggerTimes;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneCameraShakeSourceTrigger>	TriggerValues;		//Offset: 48	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 72
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate {
	struct FMovieSceneCameraShakeSectionData	SourceData;		//Offset: 32	Size: 32	Flags: NoDestructor, NativeAccessSpecifierPrivate
	struct FFrameNumber	SectionStartTime;		//Offset: 64	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[4];		//Offset: 68	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Super ScriptStruct MovieScene.MovieSceneKeyStruct
// Size 56
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct {
	struct FLinearColor	Color;		//Offset: 8	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	Time;		//Offset: 24	Size: 4	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[28];		//Offset: 28	Size: 28
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Super ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size 704
// Size inherited 56
/////////////////////////////////////////////
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel	Curves[4];		//Offset: 56	Size: 160	Flags: NativeAccessSpecifierPublic
	EMovieSceneBlendType	BlendType;		//Offset: 696	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[7];		//Offset: 697	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size 40
/////////////////////////////////////////////
struct FMovieSceneEventPtrs {
	class UFunction*	Function;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TAssetPtr<class FNone>	BoundObjectProperty;		//Offset: 8	Size: 32	Flags: HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size 40
/////////////////////////////////////////////
struct FMovieSceneEvent {
	struct FMovieSceneEventPtrs	Ptrs;		//Offset: 0	Size: 40	Flags: NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size 16
/////////////////////////////////////////////
struct FMovieSceneEventPayloadVariable {
	struct FString	Value;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Super ScriptStruct MovieScene.MovieSceneChannel
// Size 136
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneEventChannel : public FMovieSceneChannel {
	TArray<struct FFrameNumber>	KeyTimes;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneEvent>	KeyValues;		//Offset: 24	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[96];		//Offset: 40	Size: 96
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Super ScriptStruct MovieScene.MovieSceneChannel
// Size 136
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneEventSectionData : public FMovieSceneChannel {
	TArray<struct FFrameNumber>	Times;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FEventPayload>	KeyValues;		//Offset: 24	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[96];		//Offset: 40	Size: 96
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size 40
/////////////////////////////////////////////
struct FMovieSceneEventParameters {
	unsigned char uknownData_0[40];		//Offset: 0	Size: 40
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.EventPayload
// Size 48
/////////////////////////////////////////////
struct FEventPayload {
	struct FName	EventName;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneEventParameters	Parameters;		//Offset: 8	Size: 40	Flags: Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
// Size 72
/////////////////////////////////////////////
struct FMovieSceneEventTriggerData {
	struct FMovieSceneEventPtrs	Ptrs;		//Offset: 0	Size: 40	Flags: NativeAccessSpecifierPublic
	struct FGuid	ObjectBindingId;		//Offset: 40	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[16];		//Offset: 56	Size: 16
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 176
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate {
	struct FMovieSceneEventSectionData	EventData;		//Offset: 32	Size: 136	Flags: NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bFireEventsWhenForwards : 1;		//Offset: 168	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bFireEventsWhenBackwards : 1;		//Offset: 168	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 168	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 216
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel	FadeCurve;		//Offset: 32	Size: 160	Flags: NativeAccessSpecifierPrivate
	struct FLinearColor	FadeColor;		//Offset: 192	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bFadeAudio : 1;		//Offset: 208	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[8];		//Offset: 208	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 128
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate {
	TArray<struct FScalarParameterNameAndCurve>	Scalars;		//Offset: 32	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FBoolParameterNameAndCurve>	Bools;		//Offset: 48	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FVector2DParameterNameAndCurves>	Vector2Ds;		//Offset: 64	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FVectorParameterNameAndCurves>	Vectors;		//Offset: 80	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FColorParameterNameAndCurves>	Colors;		//Offset: 96	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
	TArray<struct FTransformParameterNameAndCurves>	Transforms;		//Offset: 112	Size: 16	Flags: ZeroConstructor, Protected, NativeAccessSpecifierProtected
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size 1448
/////////////////////////////////////////////
struct FTransformParameterNameAndCurves {
	struct FName	ParameterName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	Translation[3];		//Offset: 8	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	Rotation[3];		//Offset: 488	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	Scale[3];		//Offset: 968	Size: 160	Flags: NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size 648
/////////////////////////////////////////////
struct FColorParameterNameAndCurves {
	struct FName	ParameterName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	RedCurve;		//Offset: 8	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	GreenCurve;		//Offset: 168	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	BlueCurve;		//Offset: 328	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	AlphaCurve;		//Offset: 488	Size: 160	Flags: NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size 488
/////////////////////////////////////////////
struct FVectorParameterNameAndCurves {
	struct FName	ParameterName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	XCurve;		//Offset: 8	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	YCurve;		//Offset: 168	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	ZCurve;		//Offset: 328	Size: 160	Flags: NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// Size 328
/////////////////////////////////////////////
struct FVector2DParameterNameAndCurves {
	struct FName	ParameterName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	XCurve;		//Offset: 8	Size: 160	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	YCurve;		//Offset: 168	Size: 160	Flags: NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// Size 152
/////////////////////////////////////////////
struct FBoolParameterNameAndCurve {
	struct FName	ParameterName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneBoolChannel	ParameterCurve;		//Offset: 8	Size: 144	Flags: NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size 168
/////////////////////////////////////////////
struct FScalarParameterNameAndCurve {
	struct FName	ParameterName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneFloatChannel	ParameterCurve;		//Offset: 8	Size: 160	Flags: NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Super ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size 136
// Size inherited 128
/////////////////////////////////////////////
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate {
	class UMaterialParameterCollection*	MPC;		//Offset: 128	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Super ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size 248
// Size inherited 56
/////////////////////////////////////////////
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate {
	struct FMovieSceneObjectPathChannel	ObjectChannel;		//Offset: 56	Size: 192	Flags: NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Super ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size 136
// Size inherited 128
/////////////////////////////////////////////
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate {
	int32_t	MaterialIndex;		//Offset: 128	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[4];		//Offset: 132	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Super ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size 128
// Size inherited 128
/////////////////////////////////////////////
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate {
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Super ScriptStruct MovieScene.MovieSceneByteChannel
// Size 152
// Size inherited 152
/////////////////////////////////////////////
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel {
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 184
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate {
	struct FMovieSceneParticleChannel	ParticleKeys;		//Offset: 32	Size: 152	Flags: NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 232
// Size inherited 32
/////////////////////////////////////////////
struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate {
	int32_t	MaterialIndex;		//Offset: 32	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[4];		//Offset: 36	Size: 4
	struct FMovieSceneObjectPathChannel	MaterialChannel;		//Offset: 40	Size: 192	Flags: NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Super ScriptStruct MovieScene.MovieSceneChannel
// Size 160
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneStringChannel : public FMovieSceneChannel {
	TArray<struct FFrameNumber>	Times;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FString>	Values;		//Offset: 24	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	struct FString	DefaultValue;		//Offset: 40	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool	bHasDefaultValue;		//Offset: 56	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[103];		//Offset: 57	Size: 103
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Super ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size 216
// Size inherited 56
/////////////////////////////////////////////
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
	struct FMovieSceneStringChannel	StringCurve;		//Offset: 56	Size: 160	Flags: Protected, NativeAccessSpecifierProtected
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Super ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size 200
// Size inherited 56
/////////////////////////////////////////////
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
	struct FMovieSceneBoolChannel	BoolCurve;		//Offset: 56	Size: 144	Flags: Protected, NativeAccessSpecifierProtected
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size 216
/////////////////////////////////////////////
struct FMovieSceneSkeletalAnimationParams {
	class UAnimSequenceBase*	Animation;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	FirstLoopStartFrameOffset;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	StartFrameOffset;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	EndFrameOffset;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PlayRate;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bReverse : 1;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 24	Size: 4
	struct FName	SlotName;		//Offset: 28	Size: 8	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 36	Size: 4
	struct FMovieSceneFloatChannel	Weight;		//Offset: 40	Size: 160	Flags: NativeAccessSpecifierPublic
	bool	bSkipAnimNotifiers;		//Offset: 200	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bForceCustomMode;		//Offset: 201	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_2[2];		//Offset: 202	Size: 2
	float	StartOffset;		//Offset: 204	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	EndOffset;		//Offset: 208	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_3[4];		//Offset: 212	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Super ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size 224
// Size inherited 216
/////////////////////////////////////////////
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams {
	struct FFrameNumber	SectionStartTime;		//Offset: 216	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	SectionEndTime;		//Offset: 220	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 256
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate {
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters	Params;		//Offset: 32	Size: 224	Flags: NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
// Size 48
/////////////////////////////////////////////
struct FMovieSceneSkeletalAnimRootMotionTrackParams {
	unsigned char uknownData_0[48];		//Offset: 0	Size: 48
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 192
// Size inherited 32
/////////////////////////////////////////////
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel	SlomoCurve;		//Offset: 32	Size: 160	Flags: NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
// Size 8
/////////////////////////////////////////////
struct FLevelVisibilityComponentData {
	class UMovieSceneLevelVisibilitySection*	Section;		//Offset: 0	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Super ScriptStruct MovieScene.MovieSceneKeyStruct
// Size 40
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct {
	struct FFrameNumber	Time;		//Offset: 8	Size: 4	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[28];		//Offset: 12	Size: 28
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Super ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size 64
// Size inherited 40
/////////////////////////////////////////////
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase {
	unsigned char uknownData_0[8];		//Offset: 40	Size: 8
	struct FVector4	Vector;		//Offset: 48	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Super ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size 56
// Size inherited 40
/////////////////////////////////////////////
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase {
	struct FVector	Vector;		//Offset: 40	Size: 12	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 52	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Super ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size 48
// Size inherited 40
/////////////////////////////////////////////
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase {
	struct FVector2D	Vector;		//Offset: 40	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Super ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size 200
// Size inherited 200
/////////////////////////////////////////////
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate {
};
#pragma endregion
}