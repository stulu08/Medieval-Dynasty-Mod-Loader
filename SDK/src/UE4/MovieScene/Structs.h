#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
/////////////////////////////////////////////
// Enum MovieScene.EMovieSceneKeyInterpolation
/////////////////////////////////////////////
enum class EMovieSceneKeyInterpolation : uint8_t {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum MovieScene.EMovieSceneBlendType
/////////////////////////////////////////////
enum class EMovieSceneBlendType : uint8_t {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 3,
	AdditiveFromBase = 4,
	MAX = 5,
};
/////////////////////////////////////////////
// Enum MovieScene.EMovieSceneCompletionMode
/////////////////////////////////////////////
enum class EMovieSceneCompletionMode : uint8_t {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum MovieScene.EMovieSceneBuiltInEasing
/////////////////////////////////////////////
enum class EMovieSceneBuiltInEasing : uint8_t {
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21,
	MAX = 22,
};
/////////////////////////////////////////////
// Enum MovieScene.EEvaluationMethod
/////////////////////////////////////////////
enum class EEvaluationMethod : uint8_t {
	Static = 0,
	Swept = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum MovieScene.EMovieSceneServerClientMask
/////////////////////////////////////////////
enum class EMovieSceneServerClientMask : uint8_t {
	None = 0,
	Server = 1,
	Client = 2,
	All = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum MovieScene.EMovieSceneSequenceFlags
/////////////////////////////////////////////
enum class EMovieSceneSequenceFlags : uint8_t {
	None = 0,
	Volatile = 1,
	BlockingEvaluation = 2,
	InheritedFlags = 3,
	MAX = 4,
};
/////////////////////////////////////////////
// Enum MovieScene.EUpdateClockSource
/////////////////////////////////////////////
enum class EUpdateClockSource : uint8_t {
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	Custom = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum MovieScene.EMovieSceneEvaluationType
/////////////////////////////////////////////
enum class EMovieSceneEvaluationType : uint8_t {
	FrameLocked = 0,
	WithSubFrames = 1,
	MAX = 2,
};
/////////////////////////////////////////////
// Enum MovieScene.EMovieScenePlayerStatus
/////////////////////////////////////////////
enum class EMovieScenePlayerStatus : uint8_t {
	Stopped = 0,
	Playing = 1,
	Scrubbing = 2,
	Jumping = 3,
	Stepping = 4,
	Paused = 5,
	MAX = 6,
};
/////////////////////////////////////////////
// Enum MovieScene.EMovieSceneObjectBindingSpace
/////////////////////////////////////////////
enum class EMovieSceneObjectBindingSpace : uint8_t {
	Local = 0,
	Root = 1,
	Unused = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum MovieScene.ESectionEvaluationFlags
/////////////////////////////////////////////
enum class ESectionEvaluationFlags : uint8_t {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum MovieScene.EMovieScenePositionType
/////////////////////////////////////////////
enum class EMovieScenePositionType : uint8_t {
	Frame = 0,
	Time = 1,
	MarkedFrame = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum MovieScene.EUpdatePositionMethod
/////////////////////////////////////////////
enum class EUpdatePositionMethod : uint8_t {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	MAX = 3,
};
/////////////////////////////////////////////
// Enum MovieScene.ESpawnOwnership
/////////////////////////////////////////////
enum class ESpawnOwnership : uint8_t {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	MAX = 3,
};
#pragma endregion

#pragma region Structs
struct FMovieSceneChannel;
struct FMovieSceneKeyHandleMap;
struct FMovieSceneFloatChannel;
struct FMovieSceneTangentData;
struct FMovieSceneFloatValue;
struct FMovieScenePropertyBinding;
struct FMovieSceneEvalTemplateBase;
struct FMovieSceneEvalTemplate;
struct FMovieSceneBoolChannel;
struct FMovieSceneIntegerChannel;
struct FMovieSceneTrackImplementation;
struct FMovieScenePropertySectionData;
struct FMovieScenePropertySectionTemplate;
struct FTrackInstanceInputComponent;
struct FMovieSceneEvaluationHookComponent;
struct FMovieSceneTrackInstanceComponent;
struct FEasingComponentData;
struct FMovieSceneDeterminismData;
struct FMovieSceneSectionGroup;
struct FMovieSceneObjectBindingIDs;
struct FMovieSceneObjectBindingID;
struct FMovieSceneTrackLabels;
struct FMovieSceneEditorData;
struct FMovieSceneExpansionState;
struct FMovieSceneMarkedFrame;
struct FMovieSceneTimecodeSource;
struct FMovieSceneBinding;
struct FMovieSceneBindingOverrideData;
struct FOptionalMovieSceneBlendType;
struct FMovieSceneByteChannel;
struct FMovieSceneCompiledSequenceFlagStruct;
struct FMovieSceneSequenceCompilerMaskStruct;
struct FMovieSceneEntitySystemGraphNodes;
struct FMovieSceneEntitySystemGraph;
struct FMovieSceneEntitySystemGraphNode;
struct FMovieSceneEvalTemplatePtr;
struct FMovieSceneEmptyStruct;
struct FMovieSceneEvaluationField;
struct FMovieSceneEvaluationMetaData;
struct FMovieSceneSequenceID;
struct FMovieSceneTrackIdentifier;
struct FMovieSceneEvaluationKey;
struct FMovieSceneOrderedEvaluationKey;
struct FMovieSceneEvaluationGroup;
struct FMovieSceneFieldEntry_ChildTemplate;
struct FMovieSceneEvaluationFieldTrackPtr;
struct FMovieSceneFieldEntry_EvaluationTrack;
struct FMovieSceneEvaluationGroupLUTIndex;
struct FMovieSceneFrameRange;
struct FMovieSceneSegmentIdentifier;
struct FMovieSceneEvaluationFieldSegmentPtr;
struct FMovieSceneEvaluationFieldEntityTree;
struct FMovieSceneEntityComponentField;
struct FMovieSceneEvaluationFieldSharedEntityMetaData;
struct FMovieSceneEvaluationFieldEntityMetaData;
struct FMovieSceneEvaluationFieldEntityKey;
struct FMovieSceneEvaluationFieldEntity;
struct FMovieSceneEvaluationInstanceKey;
struct FMovieSceneEvaluationHookEventContainer;
struct FMovieSceneEvaluationHookEvent;
struct FMovieSceneEvaluationOperand;
struct FMovieSceneEvaluationTemplateSerialNumber;
struct FMovieSceneTemplateGenerationLedger;
struct FMovieSceneEvaluationTemplate;
struct FMovieSceneTrackImplementationPtr;
struct FMovieSceneEvaluationTrack;
struct FMovieSceneSubSectionData;
struct FMovieSceneRootEvaluationTemplateInstance;
struct FMovieSceneKeyStruct;
struct FMovieSceneKeyTimeStruct;
struct FGeneratedMovieSceneKeyStruct;
struct FMovieSceneObjectPathChannelKeyValue;
struct FMovieSceneObjectPathChannel;
struct FMovieScenePossessable;
struct FMovieSceneEasingSettings;
struct FMovieSceneSectionEvalOptions;
struct FMovieSceneSectionParameters;
struct FMovieSceneSegment;
struct FSectionEvaluationData;
struct FMovieSceneSequenceHierarchyNode;
struct FMovieSceneSubSequenceTree;
struct FMovieSceneSequenceHierarchy;
struct FMovieSceneTimeTransform;
struct FMovieSceneSequenceTransform;
struct FMovieSceneSequenceInstanceDataPtr;
struct FMovieSceneSubSequenceData;
struct FMovieSceneTimeWarping;
struct FMovieSceneNestedSequenceTransform;
struct FMovieSceneSubSequenceTreeEntry;
struct FMovieSceneSequenceInstanceData;
struct FMovieSceneSequencePlaybackParams;
struct FMovieSceneSequenceLoopCount;
struct FMovieSceneSequencePlaybackSettings;
struct FMovieSceneSequenceReplProperties;
struct FMovieSceneSequenceActorPointers;
struct FMovieSceneWarpCounter;
struct FMovieSceneSpawnable;
struct FTestMovieSceneEvalTemplate;
struct FMovieSceneTrackDisplayOptions;
struct FMovieSceneTrackEvalOptions;
struct FMovieSceneTrackEvaluationField;
struct FMovieSceneTrackEvaluationFieldEntry;
struct FMovieSceneTrackInstanceInput;
struct FMovieSceneTrackInstanceEntry;
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneChannel
// Size 8
/////////////////////////////////////////////
struct FMovieSceneChannel {
	unsigned char uknownData_0[8];		//Offset: 0	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// Super ScriptStruct Engine.KeyHandleLookupTable
// Size 96
// Size inherited 96
/////////////////////////////////////////////
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable {
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneFloatChannel
// Super ScriptStruct MovieScene.MovieSceneChannel
// Size 160
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneFloatChannel : public FMovieSceneChannel {
	TEnumAsByte<ERichCurveExtrapolation>	PreInfinityExtrap;		//Offset: 8	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ERichCurveExtrapolation>	PostInfinityExtrap;		//Offset: 9	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[6];		//Offset: 10	Size: 6
	TArray<struct FFrameNumber>	Times;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneFloatValue>	Values;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	float	DefaultValue;		//Offset: 48	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool	bHasDefaultValue;		//Offset: 52	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_1[3];		//Offset: 53	Size: 3
	struct FMovieSceneKeyHandleMap	KeyHandles;		//Offset: 56	Size: 96	Flags: Transient, NativeAccessSpecifierPrivate
	struct FFrameRate	TickResolution;		//Offset: 152	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTangentData
// Size 20
/////////////////////////////////////////////
struct FMovieSceneTangentData {
	float	ArriveTangent;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	LeaveTangent;		//Offset: 4	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	ArriveTangentWeight;		//Offset: 8	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	LeaveTangentWeight;		//Offset: 12	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ERichCurveTangentWeightMode>	TangentWeightMode;		//Offset: 16	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 17	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneFloatValue
// Size 28
/////////////////////////////////////////////
struct FMovieSceneFloatValue {
	float	Value;		//Offset: 0	Size: 4	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneTangentData	Tangent;		//Offset: 4	Size: 20	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	TEnumAsByte<ERichCurveInterpMode>	InterpMode;		//Offset: 24	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<ERichCurveTangentMode>	TangentMode;		//Offset: 25	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char	PaddingByte;		//Offset: 26	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 27	Size: 1
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieScenePropertyBinding
// Size 20
/////////////////////////////////////////////
struct FMovieScenePropertyBinding {
	struct FName	PropertyName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FName	PropertyPath;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bCanUseClassLookup;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 17	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size 16
/////////////////////////////////////////////
struct FMovieSceneEvalTemplateBase {
	unsigned char uknownData_0[16];		//Offset: 0	Size: 16
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvalTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size 32
// Size inherited 16
/////////////////////////////////////////////
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode	CompletionMode;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_0[3];		//Offset: 17	Size: 3
	TWeakObjectPtr<class UMovieSceneSection>	SourceSectionPtr;		//Offset: 20	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
	unsigned char uknownData_1[4];		//Offset: 28	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneBoolChannel
// Super ScriptStruct MovieScene.MovieSceneChannel
// Size 144
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneBoolChannel : public FMovieSceneChannel {
	TArray<struct FFrameNumber>	Times;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	bool	DefaultValue;		//Offset: 24	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool	bHasDefaultValue;		//Offset: 25	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[6];		//Offset: 26	Size: 6
	TArray<bool>	Values;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	unsigned char uknownData_1[96];		//Offset: 48	Size: 96
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneIntegerChannel
// Super ScriptStruct MovieScene.MovieSceneChannel
// Size 144
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneIntegerChannel : public FMovieSceneChannel {
	TArray<struct FFrameNumber>	Times;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	int32_t	DefaultValue;		//Offset: 24	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool	bHasDefaultValue;		//Offset: 28	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[3];		//Offset: 29	Size: 3
	TArray<int32_t>	Values;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	unsigned char uknownData_1[96];		//Offset: 48	Size: 96
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTrackImplementation
// Super ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size 16
// Size inherited 16
/////////////////////////////////////////////
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase {
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieScenePropertySectionData
// Size 24
/////////////////////////////////////////////
struct FMovieScenePropertySectionData {
	struct FName	PropertyName;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FString	PropertyPath;		//Offset: 8	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 56
// Size inherited 32
/////////////////////////////////////////////
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData	PropertyData;		//Offset: 32	Size: 24	Flags: Protected, NativeAccessSpecifierProtected
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.TrackInstanceInputComponent
// Size 16
/////////////////////////////////////////////
struct FTrackInstanceInputComponent {
	class UMovieSceneSection*	Section;		//Offset: 0	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	OutputIndex;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 12	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationHookComponent
// Size 32
/////////////////////////////////////////////
struct FMovieSceneEvaluationHookComponent {
	TScriptInterface<class UMovieSceneEvaluationHook>	Interface;		//Offset: 0	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
	unsigned char uknownData_0[16];		//Offset: 16	Size: 16
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
// Size 16
/////////////////////////////////////////////
struct FMovieSceneTrackInstanceComponent {
	class UMovieSceneSection*	Owner;		//Offset: 0	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UMovieSceneTrackInstance*	TrackInstanceClass;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.EasingComponentData
// Size 8
/////////////////////////////////////////////
struct FEasingComponentData {
	class UMovieSceneSection*	Section;		//Offset: 0	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneDeterminismData
// Size 24
/////////////////////////////////////////////
struct FMovieSceneDeterminismData {
	TArray<struct FFrameTime>	Fences;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	bool	bParentSequenceRequiresLowerFence;		//Offset: 16	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bParentSequenceRequiresUpperFence;		//Offset: 17	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[6];		//Offset: 18	Size: 6
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSectionGroup
// Size 16
/////////////////////////////////////////////
struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<class UMovieSceneSection>>	Sections;		//Offset: 0	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// Size 16
/////////////////////////////////////////////
struct FMovieSceneObjectBindingIDs {
	TArray<struct FMovieSceneObjectBindingID>	IDs;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size 24
/////////////////////////////////////////////
struct FMovieSceneObjectBindingID {
	struct FGuid	Guid;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	int32_t	SequenceID;		//Offset: 16	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	int32_t	ResolveParentIndex;		//Offset: 20	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTrackLabels
// Size 16
/////////////////////////////////////////////
struct FMovieSceneTrackLabels {
	TArray<struct FString>	Strings;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEditorData
// Size 240
/////////////////////////////////////////////
struct FMovieSceneEditorData {
	TMap<struct FString, struct FMovieSceneExpansionState>	ExpansionStates;		//Offset: 0	Size: 80	Flags: NativeAccessSpecifierPublic
	TArray<struct FString>	PinnedNodes;		//Offset: 80	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	double	ViewStart;		//Offset: 96	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	double	ViewEnd;		//Offset: 104	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	double	WorkStart;		//Offset: 112	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	double	WorkEnd;		//Offset: 120	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TAssetPtr<class FNone_519>	MarkedFrames;		//Offset: 128	Size: 80	Flags: Deprecated, NativeAccessSpecifierPublic
	struct FFloatRange	WorkingRange;		//Offset: 208	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFloatRange	ViewRange;		//Offset: 224	Size: 16	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneExpansionState
// Size 1
/////////////////////////////////////////////
struct FMovieSceneExpansionState {
	bool	bExpanded;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneMarkedFrame
// Size 32
/////////////////////////////////////////////
struct FMovieSceneMarkedFrame {
	struct FFrameNumber	FrameNumber;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	struct FString	Label;		//Offset: 8	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bIsDeterminismFence;		//Offset: 24	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[7];		//Offset: 25	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTimecodeSource
// Size 24
/////////////////////////////////////////////
struct FMovieSceneTimecodeSource {
	struct FTimecode	Timecode;		//Offset: 0	Size: 20	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	DeltaFrame;		//Offset: 20	Size: 4	Flags: Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneBinding
// Size 48
/////////////////////////////////////////////
struct FMovieSceneBinding {
	struct FGuid	ObjectGuid;		//Offset: 0	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FString	BindingName;		//Offset: 16	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	TArray<class UMovieSceneTrack*>	Tracks;		//Offset: 32	Size: 16	Flags: ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size 36
/////////////////////////////////////////////
struct FMovieSceneBindingOverrideData {
	struct FMovieSceneObjectBindingID	ObjectBindingId;		//Offset: 0	Size: 24	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TWeakObjectPtr<class UObject>	Object;		//Offset: 24	Size: 8	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bOverridesDefault;		//Offset: 32	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 33	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// Size 2
/////////////////////////////////////////////
struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType	BlendType;		//Offset: 0	Size: 1	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bIsValid;		//Offset: 1	Size: 1	Flags: BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneByteChannel
// Super ScriptStruct MovieScene.MovieSceneChannel
// Size 152
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneByteChannel : public FMovieSceneChannel {
	TArray<struct FFrameNumber>	Times;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	unsigned char	DefaultValue;		//Offset: 24	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	bool	bHasDefaultValue;		//Offset: 25	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[6];		//Offset: 26	Size: 6
	TArray<unsigned char>	Values;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	class UEnum*	Enum;		//Offset: 48	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_1[96];		//Offset: 56	Size: 96
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneCompiledSequenceFlagStruct
// Size 1
/////////////////////////////////////////////
struct FMovieSceneCompiledSequenceFlagStruct {
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bParentSequenceRequiresLowerFence : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bParentSequenceRequiresUpperFence : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 0	Size: 1
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
// Size 1
/////////////////////////////////////////////
struct FMovieSceneSequenceCompilerMaskStruct {
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bHierarchy : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEvaluationTemplate : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEvaluationTemplateField : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEntityComponentField : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 0	Size: 1
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
// Size 56
/////////////////////////////////////////////
struct FMovieSceneEntitySystemGraphNodes {
	unsigned char uknownData_0[56];		//Offset: 0	Size: 56
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEntitySystemGraph
// Size 312
/////////////////////////////////////////////
struct FMovieSceneEntitySystemGraph {
	unsigned char uknownData_0[128];		//Offset: 0	Size: 128
	struct FMovieSceneEntitySystemGraphNodes	Nodes;		//Offset: 128	Size: 56	Flags: NativeAccessSpecifierPrivate
	unsigned char uknownData_1[128];		//Offset: 184	Size: 128
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
// Size 40
/////////////////////////////////////////////
struct FMovieSceneEntitySystemGraphNode {
	unsigned char uknownData_0[32];		//Offset: 0	Size: 32
	class UMovieSceneEntitySystem*	System;		//Offset: 32	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// Size 136
/////////////////////////////////////////////
struct FMovieSceneEvalTemplatePtr {
	unsigned char uknownData_0[136];		//Offset: 0	Size: 136
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEmptyStruct
// Size 1
/////////////////////////////////////////////
struct FMovieSceneEmptyStruct {
	unsigned char uknownData_0[1];		//Offset: 0	Size: 1
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationField
// Size 48
/////////////////////////////////////////////
struct FMovieSceneEvaluationField {
	TArray<struct FMovieSceneFrameRange>	Ranges;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneEvaluationGroup>	Groups;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneEvaluationMetaData>	MetaData;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size 32
/////////////////////////////////////////////
struct FMovieSceneEvaluationMetaData {
	TArray<struct FMovieSceneSequenceID>	ActiveSequences;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FMovieSceneOrderedEvaluationKey>	ActiveEntities;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequenceID
// Size 4
/////////////////////////////////////////////
struct FMovieSceneSequenceID {
	uint32_t	Value;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// Size 4
/////////////////////////////////////////////
struct FMovieSceneTrackIdentifier {
	uint32_t	Value;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationKey
// Size 12
/////////////////////////////////////////////
struct FMovieSceneEvaluationKey {
	struct FMovieSceneSequenceID	SequenceID;		//Offset: 0	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneTrackIdentifier	TrackIdentifier;		//Offset: 4	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	uint32_t	SectionIndex;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// Size 16
/////////////////////////////////////////////
struct FMovieSceneOrderedEvaluationKey {
	struct FMovieSceneEvaluationKey	Key;		//Offset: 0	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	uint16_t	SetupIndex;		//Offset: 12	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	uint16_t	TearDownIndex;		//Offset: 14	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// Size 48
/////////////////////////////////////////////
struct FMovieSceneEvaluationGroup {
	TArray<struct FMovieSceneEvaluationGroupLUTIndex>	LUTIndices;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FMovieSceneFieldEntry_EvaluationTrack>	TrackLUT;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
	TArray<struct FMovieSceneFieldEntry_ChildTemplate>	SectionLUT;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
// Size 8
/////////////////////////////////////////////
struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t	ChildIndex;		//Offset: 0	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESectionEvaluationFlags	Flags;		//Offset: 2	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 3	Size: 1
	struct FFrameNumber	ForcedTime;		//Offset: 4	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size 8
/////////////////////////////////////////////
struct FMovieSceneEvaluationFieldTrackPtr {
	struct FMovieSceneSequenceID	SequenceID;		//Offset: 0	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneTrackIdentifier	TrackIdentifier;		//Offset: 4	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
// Size 12
/////////////////////////////////////////////
struct FMovieSceneFieldEntry_EvaluationTrack {
	struct FMovieSceneEvaluationFieldTrackPtr	TrackPtr;		//Offset: 0	Size: 8	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	uint16_t	NumChildren;		//Offset: 8	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[2];		//Offset: 10	Size: 2
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size 8
/////////////////////////////////////////////
struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t	NumInitPtrs;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	NumEvalPtrs;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneFrameRange
// Size 16
/////////////////////////////////////////////
struct FMovieSceneFrameRange {
	unsigned char uknownData_0[16];		//Offset: 0	Size: 16
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// Size 4
/////////////////////////////////////////////
struct FMovieSceneSegmentIdentifier {
	int32_t	IdentifierIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Super ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size 12
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr {
	struct FMovieSceneSegmentIdentifier	SegmentID;		//Offset: 8	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
// Size 96
/////////////////////////////////////////////
struct FMovieSceneEvaluationFieldEntityTree {
	unsigned char uknownData_0[96];		//Offset: 0	Size: 96
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEntityComponentField
// Size 240
/////////////////////////////////////////////
struct FMovieSceneEntityComponentField {
	struct FMovieSceneEvaluationFieldEntityTree	PersistentEntityTree;		//Offset: 0	Size: 96	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneEvaluationFieldEntityTree	OneShotEntityTree;		//Offset: 96	Size: 96	Flags: NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneEvaluationFieldEntity>	Entities;		//Offset: 192	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneEvaluationFieldEntityMetaData>	EntityMetaData;		//Offset: 208	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData>	SharedMetaData;		//Offset: 224	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
// Size 16
/////////////////////////////////////////////
struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	struct FGuid	ObjectBindingId;		//Offset: 0	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
// Size 32
/////////////////////////////////////////////
struct FMovieSceneEvaluationFieldEntityMetaData {
	struct FString	OverrideBoundPropertyPath;		//Offset: 0	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	ForcedTime;		//Offset: 16	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 20	Size: 4
	ESectionEvaluationFlags	Flags;		//Offset: 24	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEvaluateInSequencePreRoll : 1;		//Offset: 25	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEvaluateInSequencePostRoll : 1;		//Offset: 25	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[7];		//Offset: 25	Size: 7
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
// Size 12
/////////////////////////////////////////////
struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<class UObject>	EntityOwner;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	uint32_t	EntityID;		//Offset: 8	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
// Size 16
/////////////////////////////////////////////
struct FMovieSceneEvaluationFieldEntity {
	struct FMovieSceneEvaluationFieldEntityKey	Key;		//Offset: 0	Size: 12	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	SharedMetaDataIndex;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationInstanceKey
// Size 4
/////////////////////////////////////////////
struct FMovieSceneEvaluationInstanceKey {
	unsigned char uknownData_0[4];		//Offset: 0	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationHookEventContainer
// Size 16
/////////////////////////////////////////////
struct FMovieSceneEvaluationHookEventContainer {
	TArray<struct FMovieSceneEvaluationHookEvent>	Events;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationHookEvent
// Size 56
/////////////////////////////////////////////
struct FMovieSceneEvaluationHookEvent {
	struct FMovieSceneEvaluationHookComponent	Hook;		//Offset: 0	Size: 32	Flags: NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[24];		//Offset: 32	Size: 24
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// Size 20
/////////////////////////////////////////////
struct FMovieSceneEvaluationOperand {
	struct FGuid	ObjectBindingId;		//Offset: 0	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneSequenceID	SequenceID;		//Offset: 16	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// Size 4
/////////////////////////////////////////////
struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t	Value;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// Size 168
/////////////////////////////////////////////
struct FMovieSceneTemplateGenerationLedger {
	struct FMovieSceneTrackIdentifier	LastTrackIdentifier;		//Offset: 0	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	TMap<struct FGuid, struct FMovieSceneTrackIdentifier>	TrackSignatureToTrackIdentifier;		//Offset: 8	Size: 80	Flags: NativeAccessSpecifierPublic
	TMap<struct FGuid, struct FMovieSceneFrameRange>	SubSectionRanges;		//Offset: 88	Size: 80	Flags: NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size 352
/////////////////////////////////////////////
struct FMovieSceneEvaluationTemplate {
	TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack>	Tracks;		//Offset: 0	Size: 80	Flags: ContainsInstancedReference, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[80];		//Offset: 80	Size: 80
	struct FGuid	SequenceSignature;		//Offset: 160	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneEvaluationTemplateSerialNumber	TemplateSerialNumber;		//Offset: 176	Size: 4	Flags: NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 180	Size: 4
	struct FMovieSceneTemplateGenerationLedger	TemplateLedger;		//Offset: 184	Size: 168	Flags: NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size 56
/////////////////////////////////////////////
struct FMovieSceneTrackImplementationPtr {
	unsigned char uknownData_0[56];		//Offset: 0	Size: 56
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size 120
/////////////////////////////////////////////
struct FMovieSceneEvaluationTrack {
	struct FGuid	ObjectBindingId;		//Offset: 0	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	uint16_t	EvaluationPriority;		//Offset: 16	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	EEvaluationMethod	EvaluationMethod;		//Offset: 18	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[1];		//Offset: 19	Size: 1
	TWeakObjectPtr<class UMovieSceneTrack>	SourceTrack;		//Offset: 20	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_1[4];		//Offset: 28	Size: 4
	TArray<struct FMovieSceneEvalTemplatePtr>	ChildTemplates;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	struct FMovieSceneTrackImplementationPtr	TrackTemplate;		//Offset: 48	Size: 56	Flags: NativeAccessSpecifierPrivate
	struct FName	EvaluationGroup;		//Offset: 104	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEvaluateInPreroll : 1;		//Offset: 112	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEvaluateInPostroll : 1;		//Offset: 112	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bTearDownPriority : 1;		//Offset: 112	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_2[8];		//Offset: 112	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSubSectionData
// Size 28
/////////////////////////////////////////////
struct FMovieSceneSubSectionData {
	TWeakObjectPtr<class UMovieSceneSubSection>	Section;		//Offset: 0	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FGuid	ObjectBindingId;		//Offset: 8	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESectionEvaluationFlags	Flags;		//Offset: 24	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 25	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// Size 232
/////////////////////////////////////////////
struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<class UMovieSceneSequence>	WeakRootSequence;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UMovieSceneCompiledDataManager*	CompiledDataManager;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_0[8];		//Offset: 16	Size: 8
	class UMovieSceneEntitySystemLinker*	EntitySystemLinker;		//Offset: 24	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_1[112];		//Offset: 32	Size: 112
	TMap<struct FMovieSceneSequenceID, class UObject*>	DirectorInstances;		//Offset: 144	Size: 80	Flags: NativeAccessSpecifierPrivate
	unsigned char uknownData_2[8];		//Offset: 224	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneKeyStruct
// Size 8
/////////////////////////////////////////////
struct FMovieSceneKeyStruct {
	unsigned char uknownData_0[8];		//Offset: 0	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// Super ScriptStruct MovieScene.MovieSceneKeyStruct
// Size 40
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct {
	struct FFrameNumber	Time;		//Offset: 8	Size: 4	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[28];		//Offset: 12	Size: 28
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// Size 80
/////////////////////////////////////////////
struct FGeneratedMovieSceneKeyStruct {
	unsigned char uknownData_0[80];		//Offset: 0	Size: 80
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// Size 48
/////////////////////////////////////////////
struct FMovieSceneObjectPathChannelKeyValue {
	TAssetPtr<class UObject>	SoftPtr;		//Offset: 0	Size: 40	Flags: UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UObject*	HardPtr;		//Offset: 40	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// Super ScriptStruct MovieScene.MovieSceneChannel
// Size 192
// Size inherited 8
/////////////////////////////////////////////
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel {
	class UObject*	PropertyClass;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	TArray<struct FFrameNumber>	Times;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	TArray<struct FMovieSceneObjectPathChannelKeyValue>	Values;		//Offset: 32	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	struct FMovieSceneObjectPathChannelKeyValue	DefaultValue;		//Offset: 48	Size: 48	Flags: NativeAccessSpecifierPrivate
	unsigned char uknownData_0[96];		//Offset: 96	Size: 96
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieScenePossessable
// Size 72
/////////////////////////////////////////////
struct FMovieScenePossessable {
	TArray<struct FName>	Tags;		//Offset: 0	Size: 16	Flags: Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
	struct FGuid	Guid;		//Offset: 16	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FString	Name;		//Offset: 32	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UObject*	PossessedObjectClass;		//Offset: 48	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	struct FGuid	ParentGuid;		//Offset: 56	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneEasingSettings
// Size 56
/////////////////////////////////////////////
struct FMovieSceneEasingSettings {
	int32_t	AutoEaseInDuration;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	AutoEaseOutDuration;		//Offset: 4	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TScriptInterface<class UMovieSceneEasingFunction>	EaseIn;		//Offset: 8	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
	bool	bManualEaseIn;		//Offset: 24	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 25	Size: 3
	int32_t	ManualEaseInDuration;		//Offset: 28	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TScriptInterface<class UMovieSceneEasingFunction>	EaseOut;		//Offset: 32	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
	bool	bManualEaseOut;		//Offset: 48	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[3];		//Offset: 49	Size: 3
	int32_t	ManualEaseOutDuration;		//Offset: 52	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size 2
/////////////////////////////////////////////
struct FMovieSceneSectionEvalOptions {
	bool	bCanEditCompletionMode;		//Offset: 0	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EMovieSceneCompletionMode	CompletionMode;		//Offset: 1	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSectionParameters
// Size 36
/////////////////////////////////////////////
struct FMovieSceneSectionParameters {
	struct FFrameNumber	StartFrameOffset;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bCanLoop;		//Offset: 4	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 5	Size: 3
	struct FFrameNumber	EndFrameOffset;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	FirstLoopStartFrameOffset;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	TimeScale;		//Offset: 16	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	int32_t	HierarchicalBias;		//Offset: 20	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	StartOffset;		//Offset: 24	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PrerollTime;		//Offset: 28	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	PostrollTime;		//Offset: 32	Size: 4	Flags: ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSegment
// Size 88
/////////////////////////////////////////////
struct FMovieSceneSegment {
	unsigned char uknownData_0[88];		//Offset: 0	Size: 88
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.SectionEvaluationData
// Size 12
/////////////////////////////////////////////
struct FSectionEvaluationData {
	int32_t	ImplIndex;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	ForcedTime;		//Offset: 4	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESectionEvaluationFlags	Flags;		//Offset: 8	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 9	Size: 3
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size 24
/////////////////////////////////////////////
struct FMovieSceneSequenceHierarchyNode {
	struct FMovieSceneSequenceID	ParentID;		//Offset: 0	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 4	Size: 4
	TArray<struct FMovieSceneSequenceID>	Children;		//Offset: 8	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSubSequenceTree
// Size 96
/////////////////////////////////////////////
struct FMovieSceneSubSequenceTree {
	unsigned char uknownData_0[96];		//Offset: 0	Size: 96
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size 280
/////////////////////////////////////////////
struct FMovieSceneSequenceHierarchy {
	struct FMovieSceneSequenceHierarchyNode	RootNode;		//Offset: 0	Size: 24	Flags: NativeAccessSpecifierPrivate
	struct FMovieSceneSubSequenceTree	Tree;		//Offset: 24	Size: 96	Flags: NativeAccessSpecifierPrivate
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData>	SubSequences;		//Offset: 120	Size: 80	Flags: NativeAccessSpecifierPrivate
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode>	Hierarchy;		//Offset: 200	Size: 80	Flags: NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTimeTransform
// Size 12
/////////////////////////////////////////////
struct FMovieSceneTimeTransform {
	float	TimeScale;		//Offset: 0	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameTime	Offset;		//Offset: 4	Size: 8	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size 32
/////////////////////////////////////////////
struct FMovieSceneSequenceTransform {
	struct FMovieSceneTimeTransform	LinearTransform;		//Offset: 0	Size: 12	Flags: NoDestructor, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 12	Size: 4
	TArray<struct FMovieSceneNestedSequenceTransform>	NestedTransforms;		//Offset: 16	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// Size 24
/////////////////////////////////////////////
struct FMovieSceneSequenceInstanceDataPtr {
	unsigned char uknownData_0[24];		//Offset: 0	Size: 24
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size 264
/////////////////////////////////////////////
struct FMovieSceneSubSequenceData {
	struct FSoftObjectPath	Sequence;		//Offset: 0	Size: 24	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneSequenceTransform	OuterToInnerTransform;		//Offset: 24	Size: 32	Flags: NativeAccessSpecifierPublic
	struct FMovieSceneSequenceTransform	RootToSequenceTransform;		//Offset: 56	Size: 32	Flags: NativeAccessSpecifierPublic
	struct FFrameRate	TickResolution;		//Offset: 88	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneSequenceID	DeterministicSequenceID;		//Offset: 96	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FMovieSceneFrameRange	ParentPlayRange;		//Offset: 100	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FFrameNumber	ParentStartFrameOffset;		//Offset: 116	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	ParentEndFrameOffset;		//Offset: 120	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	ParentFirstLoopStartFrameOffset;		//Offset: 124	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bCanLoop;		//Offset: 128	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 129	Size: 3
	struct FMovieSceneFrameRange	PlayRange;		//Offset: 132	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneFrameRange	FullPlayRange;		//Offset: 148	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneFrameRange	UnwarpedPlayRange;		//Offset: 164	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneFrameRange	PreRollRange;		//Offset: 180	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneFrameRange	PostRollRange;		//Offset: 196	Size: 16	Flags: NoDestructor, NativeAccessSpecifierPublic
	int16_t	HierarchicalBias;		//Offset: 212	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bHasHierarchicalEasing;		//Offset: 214	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[1];		//Offset: 215	Size: 1
	struct FMovieSceneSequenceInstanceDataPtr	InstanceData;		//Offset: 216	Size: 24	Flags: NativeAccessSpecifierPublic
	unsigned char uknownData_2[8];		//Offset: 240	Size: 8
	struct FGuid	SubSectionSignature;		//Offset: 248	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTimeWarping
// Size 8
/////////////////////////////////////////////
struct FMovieSceneTimeWarping {
	struct FFrameNumber	Start;		//Offset: 0	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	End;		//Offset: 4	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
// Size 20
/////////////////////////////////////////////
struct FMovieSceneNestedSequenceTransform {
	struct FMovieSceneTimeTransform	LinearTransform;		//Offset: 0	Size: 12	Flags: NoDestructor, NativeAccessSpecifierPublic
	struct FMovieSceneTimeWarping	Warping;		//Offset: 12	Size: 8	Flags: NoDestructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
// Size 24
/////////////////////////////////////////////
struct FMovieSceneSubSequenceTreeEntry {
	unsigned char uknownData_0[24];		//Offset: 0	Size: 24
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// Size 8
/////////////////////////////////////////////
struct FMovieSceneSequenceInstanceData {
	unsigned char uknownData_0[8];		//Offset: 0	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
// Size 40
/////////////////////////////////////////////
struct FMovieSceneSequencePlaybackParams {
	struct FFrameTime	Frame;		//Offset: 0	Size: 8	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	Time;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 12	Size: 4
	struct FString	MarkedFrame;		//Offset: 16	Size: 16	Flags: Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EMovieScenePositionType	PositionType;		//Offset: 32	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	EUpdatePositionMethod	UpdateMethod;		//Offset: 33	Size: 1	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[6];		//Offset: 34	Size: 6
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// Size 4
/////////////////////////////////////////////
struct FMovieSceneSequenceLoopCount {
	int32_t	Value;		//Offset: 0	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size 20
/////////////////////////////////////////////
struct FMovieSceneSequencePlaybackSettings {
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bAutoPlay : 1;		//Offset: 0	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 0	Size: 4
	struct FMovieSceneSequenceLoopCount	LoopCount;		//Offset: 4	Size: 4	Flags: Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	float	PlayRate;		//Offset: 8	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	float	StartTime;		//Offset: 12	Size: 4	Flags: Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bRandomStartTime : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bRestoreState : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bDisableMovementInput : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bDisableLookAtInput : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bHidePlayer : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bHideHud : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bDisableCameraCuts : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bPauseAtEnd : 1;		//Offset: 16	Size: 1	Flags: Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_1[4];		//Offset: 16	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// Size 16
/////////////////////////////////////////////
struct FMovieSceneSequenceReplProperties {
	struct FFrameTime	LastKnownPosition;		//Offset: 0	Size: 8	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TEnumAsByte<EMovieScenePlayerStatus>	LastKnownStatus;		//Offset: 8	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[3];		//Offset: 9	Size: 3
	int32_t	LastKnownNumLoops;		//Offset: 12	Size: 4	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSequenceActorPointers
// Size 24
/////////////////////////////////////////////
struct FMovieSceneSequenceActorPointers {
	class AActor*	SequenceActor;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	TScriptInterface<class UMovieSceneSequenceActor>	SequenceActorInterface;		//Offset: 8	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneWarpCounter
// Size 16
/////////////////////////////////////////////
struct FMovieSceneWarpCounter {
	TArray<uint32_t>	WarpCounts;		//Offset: 0	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneSpawnable
// Size 144
/////////////////////////////////////////////
struct FMovieSceneSpawnable {
	struct FTransform	SpawnTransform;		//Offset: 0	Size: 48	Flags: Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	TArray<struct FName>	Tags;		//Offset: 48	Size: 16	Flags: Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
	bool	bContinuouslyRespawn;		//Offset: 64	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bNetAddressableName;		//Offset: 65	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	bool	bEvaluateTracksWhenNotSpawned;		//Offset: 66	Size: 1	Flags: Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 67	Size: 1
	struct FGuid	Guid;		//Offset: 68	Size: 16	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_1[4];		//Offset: 84	Size: 4
	struct FString	Name;		//Offset: 88	Size: 16	Flags: ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	class UObject*	ObjectTemplate;		//Offset: 104	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	TArray<struct FGuid>	ChildPossessables;		//Offset: 112	Size: 16	Flags: ZeroConstructor, NativeAccessSpecifierPrivate
	ESpawnOwnership	Ownership;		//Offset: 128	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	unsigned char uknownData_2[3];		//Offset: 129	Size: 3
	struct FName	LevelName;		//Offset: 132	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_3[4];		//Offset: 140	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// Super ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size 32
// Size inherited 32
/////////////////////////////////////////////
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate {
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// Size 4
/////////////////////////////////////////////
struct FMovieSceneTrackDisplayOptions {
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bShowVerticalFrames : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 0	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size 4
/////////////////////////////////////////////
struct FMovieSceneTrackEvalOptions {
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bCanEvaluateNearestSection : 1;		//Offset: 0	Size: 1	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEvalNearestSection : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEvaluateInPreroll : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEvaluateInPostroll : 1;		//Offset: 0	Size: 1	Flags: Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	//Bitfields are not supported, but you can try uncommenting them
	//unsigned char	bEvaluateNearestSection : 1;		//Offset: 0	Size: 1	Flags: Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[4];		//Offset: 0	Size: 4
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTrackEvaluationField
// Size 16
/////////////////////////////////////////////
struct FMovieSceneTrackEvaluationField {
	TArray<struct FMovieSceneTrackEvaluationFieldEntry>	Entries;		//Offset: 0	Size: 16	Flags: ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
// Size 32
/////////////////////////////////////////////
struct FMovieSceneTrackEvaluationFieldEntry {
	class UMovieSceneSection*	Section;		//Offset: 0	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumberRange	Range;		//Offset: 8	Size: 16	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	struct FFrameNumber	ForcedTime;		//Offset: 24	Size: 4	Flags: NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	ESectionEvaluationFlags	Flags;		//Offset: 28	Size: 1	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[1];		//Offset: 29	Size: 1
	int16_t	LegacySortOrder;		//Offset: 30	Size: 2	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTrackInstanceInput
// Size 16
/////////////////////////////////////////////
struct FMovieSceneTrackInstanceInput {
	class UMovieSceneSection*	Section;		//Offset: 0	Size: 8	Flags: ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	unsigned char uknownData_0[8];		//Offset: 8	Size: 8
};
/////////////////////////////////////////////
// ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
// Size 16
/////////////////////////////////////////////
struct FMovieSceneTrackInstanceEntry {
	class UObject*	BoundObject;		//Offset: 0	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	class UMovieSceneTrackInstance*	TrackInstance;		//Offset: 8	Size: 8	Flags: ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
};
#pragma endregion
}