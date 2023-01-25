#pragma once
#include "Containers/Templates.h"
#include "NamePool.h"
#include "ObjectsArray.h"

namespace UE4 {
	class UObject;
	class UPackage;
	class UClass;
	//---------------------------------------------------------------------------
	//Enums
	//---------------------------------------------------------------------------
	enum class EFunctionFlags : uint32_t
	{
		// Function flags.
		None = 0x00000000,

		Final = 0x00000001,	// Function is final (prebindable, non-overridable function).
		RequiredAPI = 0x00000002,	// Indicates this function is DLL exported/imported.
		BlueprintAuthorityOnly = 0x00000004,   // Function will only run if the object has network authority
		BlueprintCosmetic = 0x00000008,   // Function is cosmetic in nature and should not be invoked on dedicated servers
		// FUNC_				= 0x00000010,   // unused.
		// FUNC_				= 0x00000020,   // unused.
		Net = 0x00000040,   // Function is network-replicated.
		NetReliable = 0x00000080,   // Function should be sent reliably on the network.
		NetRequest = 0x00000100,	// Function is sent to a net service
		Exec = 0x00000200,	// Executable from command line.
		Native = 0x00000400,	// Native function.
		Event = 0x00000800,   // Event function.
		NetResponse = 0x00001000,   // Function response from a net service
		Static = 0x00002000,   // Static function.
		NetMulticast = 0x00004000,	// Function is networked multicast Server -> All Clients
		UbergraphFunction = 0x00008000,   // Function is used as the merge 'ubergraph' for a blueprint, only assigned when using the persistent 'ubergraph' frame
		MulticastDelegate = 0x00010000,	// Function is a multi-cast delegate signature (also requires Delegate to be set!)
		Public = 0x00020000,	// Function is accessible in all classes (if overridden, parameters must remain unchanged).
		Private = 0x00040000,	// Function is accessible only in the class it is defined in (cannot be overridden, but function name may be reused in subclasses.  IOW: if overridden, parameters don't need to match, and Super.Func() cannot be accessed since it's private.)
		Protected = 0x00080000,	// Function is accessible only in the class it is defined in and subclasses (if overridden, parameters much remain unchanged).
		Delegate = 0x00100000,	// Function is delegate signature (either single-cast or multi-cast, depending on whether MulticastDelegate is set.)
		NetServer = 0x00200000,	// Function is executed on servers (set by replication code if passes check)
		HasOutParms = 0x00400000,	// function has out (pass by reference) parameters
		HasDefaults = 0x00800000,	// function has structs that contain defaults
		NetClient = 0x01000000,	// function is executed on clients
		DLLImport = 0x02000000,	// function is imported from a DLL
		BlueprintCallable = 0x04000000,	// function can be called from blueprint code
		BlueprintEvent = 0x08000000,	// function can be overridden/implemented from a blueprint
		BlueprintPure = 0x10000000,	// function can be called from blueprint code, and is also pure (produces no side effects). If you set this, you should set BlueprintCallable as well.
		EditorOnly = 0x20000000,	// function can only be called from an editor scrippt.
		Const = 0x40000000,	// function can be called from blueprint code, and only reads state (never writes state)
		NetValidate = 0x80000000,	// function must supply a _Validate implementation
	};
	enum class EPropertyFlags : uint64_t
	{
		Edit = 0x0000000000000001,
		ConstParm = 0x0000000000000002,
		BlueprintVisible = 0x0000000000000004,
		ExportObject = 0x0000000000000008,
		BlueprintReadOnly = 0x0000000000000010,
		Net = 0x0000000000000020,
		EditFixedSize = 0x0000000000000040,
		Parm = 0x0000000000000080,
		OutParm = 0x0000000000000100,
		ZeroConstructor = 0x0000000000000200,
		ReturnParm = 0x0000000000000400,
		DisableEditOnTemplate = 0x0000000000000800,
		Transient = 0x0000000000002000,
		Config = 0x0000000000004000,
		DisableEditOnInstance = 0x0000000000010000,
		EditConst = 0x0000000000020000,
		GlobalConfig = 0x0000000000040000,
		InstancedReference = 0x0000000000080000,
		DuplicateTransient = 0x0000000000200000,
		SubobjectReference = 0x0000000000400000,
		SaveGame = 0x0000000001000000,
		NoClear = 0x0000000002000000,
		ReferenceParm = 0x0000000008000000,
		BlueprintAssignable = 0x0000000010000000,
		Deprecated = 0x0000000020000000,
		IsPlainOldData = 0x0000000040000000,
		RepSkip = 0x0000000080000000,
		RepNotify = 0x0000000100000000,
		Interp = 0x0000000200000000,
		NonTransactional = 0x0000000400000000,
		EditorOnly = 0x0000000800000000,
		NoDestructor = 0x0000001000000000,
		AutoWeak = 0x0000004000000000,
		ContainsInstancedReference = 0x0000008000000000,
		AssetRegistrySearchable = 0x0000010000000000,
		SimpleDisplay = 0x0000020000000000,
		AdvancedDisplay = 0x0000040000000000,
		Protected = 0x0000080000000000,
		BlueprintCallable = 0x0000100000000000,
		BlueprintAuthorityOnly = 0x0000200000000000,
		TextExportTransient = 0x0000400000000000,
		NonPIEDuplicateTransient = 0x0000800000000000,
		ExposeOnSpawn = 0x0001000000000000,
		PersistentInstance = 0x0002000000000000,
		UObjectWrapper = 0x0004000000000000,
		HasGetValueTypeHash = 0x0008000000000000,
		NativeAccessSpecifierPublic = 0x0010000000000000,
		NativeAccessSpecifierProtected = 0x0020000000000000,
		NativeAccessSpecifierPrivate = 0x0040000000000000
	};
	enum class EObjectFlags
	{
		// Do not add new flags unless they truly belong here. There are alternatives.
		// if you change any the bit of any of the Load flags, then you will need legacy serialization
		NoFlags = 0x00000000,	///< No flags, used to avoid a cast

		// This first group of flags mostly has to do with what kind of object it is. Other than transient, these are the persistent object flags.
		// The garbage collector also tends to look at these.
		Public = 0x00000001,	///< Object is visible outside its package.
		Standalone = 0x00000002,	///< Keep object around for editing even if unreferenced.
		MarkAsNative = 0x00000004,	///< Object (UField) will be marked as native on construction (DO NOT USE THIS FLAG in HasAnyFlags() etc)
		Transactional = 0x00000008,	///< Object is transactional.
		ClassDefaultObject = 0x00000010,	///< This object is its class's default object
		ArchetypeObject = 0x00000020,	///< This object is a template for another object - treat like a class default object
		Transient = 0x00000040,	///< Don't save object.

		// This group of flags is primarily concerned with garbage collection.
		MarkAsRootSet = 0x00000080,	///< Object will be marked as root set on construction and not be garbage collected, even if unreferenced (DO NOT USE THIS FLAG in HasAnyFlags() etc)
		TagGarbageTemp = 0x00000100,	///< This is a temp user flag for various utilities that need to use the garbage collector. The garbage collector itself does not interpret it.

		// The group of flags tracks the stages of the lifetime of a uobject
		NeedInitialization = 0x00000200,	///< This object has not completed its initialization process. Cleared when ~FObjectInitializer completes
		NeedLoad = 0x00000400,	///< During load, indicates object needs loading.
		KeepForCooker = 0x00000800,	///< Keep this object during garbage collection because it's still being used by the cooker
		NeedPostLoad = 0x00001000,	///< Object needs to be postloaded.
		NeedPostLoadSubobjects = 0x00002000,	///< During load, indicates that the object still needs to instance subobjects and fixup serialized component references
		NewerVersionExists = 0x00004000,	///< Object has been consigned to oblivion due to its owner package being reloaded, and a newer version currently exists
		BeginDestroyed = 0x00008000,	///< BeginDestroy has been called on the object.
		FinishDestroyed = 0x00010000,	///< FinishDestroy has been called on the object.

		// Misc. Flags
		BeingRegenerated = 0x00020000,	///< Flagged on UObjects that are used to create UClasses (e.g. Blueprints) while they are regenerating their UClass on load (See FLinkerLoad::CreateExport()), as well as UClass objects in the midst of being created
		DefaultSubObject = 0x00040000,	///< Flagged on subobjects that are defaults
		WasLoaded = 0x00080000,	///< Flagged on UObjects that were loaded
		TextExportTransient = 0x00100000,	///< Do not export object to text form (e.g. copy/paste). Generally used for sub-objects that can be regenerated from data in their parent object.
		LoadCompleted = 0x00200000,	///< Object has been completely serialized by linkerload at least once. DO NOT USE THIS FLAG, It should be replaced with WasLoaded.
		InheritableComponentTemplate = 0x00400000, ///< Archetype of the object can be in its super class
		DuplicateTransient = 0x00800000,	///< Object should not be included in any type of duplication (copy/paste, binary duplication, etc.)
		StrongRefOnFrame = 0x01000000,	///< References to this object from persistent function frame are handled as strong ones.
		NonPIEDuplicateTransient = 0x02000000,	///< Object should not be included for duplication unless it's being duplicated for a PIE session
		Dynamic = 0x04000000,	///< Field Only. Dynamic field - doesn't get constructed during static initialization, can be constructed multiple times
		WillBeLoaded = 0x08000000,	///< This object was constructed during load and will be loaded shortly
		HasExternalPackage = 0x10000000,	///< This object has an external package assigned and should look it up when getting the outermost package
	};
	enum class ELoadFlags : uint32_t
	{
		None = 0x00000000,
		Async = 0x00000001,
		NoWarn = 0x00000002,
		EditorOnly = 0x00000004,
		ResolvingDeferredExports = 0x00000008,
		Verify = 0x00000010,
		AllowDll = 0x00000020,
		NoVerify = 0x00000080,
		IsVerifying = 0x00000100,
		DisableDependencyPreloading = 0x00001000,
		Quiet = 0x00002000,
		FindIfFail = 0x00004000,
		MemoryReader = 0x00008000,
		NoRedirects = 0x00010000,
		ForDiff = 0x00020000,
		PackageForPIE = 0x00080000,
		DeferDependencyLoads = 0x00100000,
		ForFileDiff = 0x00200000,
		DisableCompileOnLoad = 0x00400000,
	};
	enum class EInternalObjectFlags
	{
		None = 0,
		ReachableInCluster = 1 << 23,
		ClusterRoot = 1 << 24,
		Native = 1 << 25,
		Async = 1 << 26,
		AsyncLoading = 1 << 27,
		Unreachable = 1 << 28,
		PendingKill = 1 << 29,
		RootSet = 1 << 30,
		GarbageCollectionKeepFlags = Native | Async | AsyncLoading,
		AllFlags = ReachableInCluster | ClusterRoot | Native | Async | AsyncLoading | Unreachable | PendingKill | RootSet,
	};
	enum class ERangeBoundTypes : uint8_t
	{
		Exclusive = 0,
		Inclusive = 1,
		Open = 2,
		ERangeBoundTypes_MAX = 3
	};
	enum class ELocalizedTextSourceCategory : uint8_t
	{
		Game = 0,
		Engine = 1,
		Editor = 2,
		ELocalizedTextSourceCategory_MAX = 3
	};
	enum class EAutomationEventType : uint8_t
	{
		Info = 0,
		Warning = 1,
		Error = 2,
		EAutomationEventType_MAX = 3
	};
	enum class ELifetimeCondition : uint8_t
	{
		COND_None = 0,
		COND_InitialOnly = 1,
		COND_OwnerOnly = 2,
		COND_SkipOwner = 3,
		COND_SimulatedOnly = 4,
		COND_AutonomousOnly = 5,
		COND_SimulatedOrPhysics = 6,
		COND_InitialOrOwner = 7,
		COND_Custom = 8,
		COND_ReplayOrOwner = 9,
		COND_ReplayOnly = 10,
		COND_SimulatedOnlyNoReplay = 11,
		COND_SimulatedOrPhysicsNoReplay = 12,
		COND_SkipReplay = 13,
		COND_Max = 14
	};
	enum class EUnit : uint8_t
	{
		Micrometers = 0,
		Millimeters = 1,
		Centimeters = 2,
		Meters = 3,
		Kilometers = 4,
		Inches = 5,
		Feet = 6,
		Yards = 7,
		Miles = 8,
		Lightyears = 9,
		Degrees = 10,
		Radians = 11,
		MetersPerSecond = 12,
		KilometersPerHour = 13,
		MilesPerHour = 14,
		Celsius = 15,
		Farenheit = 16,
		Kelvin = 17,
		Micrograms = 18,
		Milligrams = 19,
		Grams = 20,
		Kilograms = 21,
		MetricTons = 22,
		Ounces = 23,
		Pounds = 24,
		Stones = 25,
		Newtons = 26,
		PoundsForce = 27,
		KilogramsForce = 28,
		Hertz = 29,
		Kilohertz = 30,
		Megahertz = 31,
		Gigahertz = 32,
		RevolutionsPerMinute = 33,
		Bytes = 34,
		Kilobytes = 35,
		Megabytes = 36,
		Gigabytes = 37,
		Terabytes = 38,
		Lumens = 39,
		Milliseconds = 40,
		Seconds = 41,
		Minutes = 42,
		Hours = 43,
		Days = 44,
		Months = 45,
		Years = 46,
		Multiplier = 47,
		Percentage = 48,
		Unspecified = 49,
		EUnit_MAX = 50
	};
	enum class EMouseCursor : uint8_t
	{
		None = 0,
		Default = 1,
		TextEditBeam = 2,
		ResizeLeftRight = 3,
		ResizeUpDown = 4,
		ResizeSouthEast = 5,
		ResizeSouthWest = 6,
		CardinalCross = 7,
		Crosshairs = 8,
		Hand = 9,
		GrabHand = 10,
		GrabHandClosed = 11,
		SlashedCircle = 12,
		EyeDropper = 13,
		EMouseCursor_MAX = 14
	};
	enum class EPixelFormat : uint8_t
	{
		PF_Unknown = 0,
		PF_A32B32G32R32F = 1,
		PF_B8G8R8A8 = 2,
		PF_G8 = 3,
		PF_G16 = 4,
		PF_DXT1 = 5,
		PF_DXT3 = 6,
		PF_DXT5 = 7,
		PF_UYVY = 8,
		PF_FloatRGB = 9,
		PF_FloatRGBA = 10,
		PF_DepthStencil = 11,
		PF_ShadowDepth = 12,
		PF_R32_FLOAT = 13,
		PF_G16R16 = 14,
		PF_G16R16F = 15,
		PF_G16R16F_FILTER = 16,
		PF_G32R32F = 17,
		PF_A2B10G10R10 = 18,
		PF_A16B16G16R16 = 19,
		PF_D24 = 20,
		PF_R16F = 21,
		PF_R16F_FILTER = 22,
		PF_BC5 = 23,
		PF_V8U8 = 24,
		PF_A1 = 25,
		PF_FloatR11G11B10 = 26,
		PF_A8 = 27,
		PF_R32_UINT = 28,
		PF_R32_SINT = 29,
		PF_PVRTC2 = 30,
		PF_PVRTC4 = 31,
		PF_R16_UINT = 32,
		PF_R16_SINT = 33,
		PF_R16G16B16A16_UINT = 34,
		PF_R16G16B16A16_SINT = 35,
		PF_R5G6B5_UNORM = 36,
		PF_R8G8B8A8 = 37,
		PF_A8R8G8B8 = 38,
		PF_BC4 = 39,
		PF_R8G8 = 40,
		PF_ATC_RGB = 41,
		PF_ATC_RGBA_E = 42,
		PF_ATC_RGBA_I = 43,
		PF_X24_G8 = 44,
		PF_ETC1 = 45,
		PF_ETC2_RGB = 46,
		PF_ETC2_RGBA = 47,
		PF_R32G32B32A32_UINT = 48,
		PF_R16G16_UINT = 49,
		PF_ASTC_4x4 = 50,
		PF_ASTC_6x6 = 51,
		PF_ASTC_8x8 = 52,
		PF_ASTC_10x10 = 53,
		PF_ASTC_12x12 = 54,
		PF_BC6H = 55,
		PF_BC7 = 56,
		PF_R8_UINT = 57,
		PF_L8 = 58,
		PF_XGXR8 = 59,
		PF_R8G8B8A8_UINT = 60,
		PF_R8G8B8A8_SNORM = 61,
		PF_R16G16B16A16_UNORM = 62,
		PF_R16G16B16A16_SNORM = 63,
		//	PF_MAX                         = 64
	};
	enum class EAxis : uint8_t
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 3,
		EAxis_MAX = 4
	};
	enum class ELogTimes : uint8_t
	{
		None = 0,
		UTC = 1,
		SinceGStartTime = 2,
		Local = 3,
		ELogTimes_MAX = 4
	};
	enum class ESearchDir : uint8_t
	{
		FromStart = 0,
		FromEnd = 1,
		ESearchDir_MAX = 2
	};
	enum class ESearchCase : uint8_t
	{
		CaseSensitive = 0,
		IgnoreCase = 1,
		ESearchCase_MAX = 2
	};
	enum class EEnumFlags
	{
		None,

		Flags = 0x00000001 // Whether the UEnum represents a set of flags
	};
	//---------------------------------------------------------------------------
	//Structs
	//---------------------------------------------------------------------------
	struct FScriptDelegate {
		unsigned char uknownData_0[16];
	};
	struct FStaticConstructObjectParameters
	{
		const UClass* Class;
		UObject* Outer;
		FName Name;
		unsigned int SetFlags = 0x00000000;
		EInternalObjectFlags InternalSetFlags = EInternalObjectFlags::None;
		bool bCopyTransientsFromClassDefaults = false;
		bool bAssumeTemplateIsArchetype = false;
		UObject* Template = nullptr;
		void* InstanceGraph = nullptr;
		void* ExternalPackage = nullptr;
	};
	// ScriptStruct CoreUObject.JoinabilitySettings
	// 0x0018
	struct FJoinabilitySettings
	{
		class FName                                       SessionName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
		bool                                               bPublicSearchable;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
		bool                                               bAllowInvites;                                            // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
		bool                                               bJoinViaPresence;                                         // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
		bool                                               bJoinViaPresenceFriendsOnly;                              // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
		int                                                MaxPlayers;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
		int                                                MaxPartySize;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	};
	// ScriptStruct CoreUObject.UniqueNetIdWrapper
	// 0x0001
	struct FUniqueNetIdWrapper
	{
		unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	};
	// ScriptStruct CoreUObject.Guid
	// 0x0010
	struct FGuid
	{
		int                                                A;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                B;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                C;                                                        // 0x0008(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                D;                                                        // 0x000C(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.RandomStream
	// 0x0008
	struct FRandomStream
	{
		int                                                InitialSeed;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
		int                                                Seed;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.DateTime
	// 0x0008
	struct FDateTime
	{
		unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	};
	// ScriptStruct CoreUObject.FrameNumber
	// 0x0004
	struct FFrameNumber
	{
		int                                                Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.FrameRate
	// 0x0008
	struct FFrameRate
	{
		int                                                Numerator;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		int                                                Denominator;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.FrameTime
	// 0x0008
	struct FFrameTime
	{
		struct FFrameNumber                                FrameNumber;                                              // 0x0000(0x0004) (BlueprintVisible)
		float                                              SubFrame;                                                 // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.QualifiedFrameTime
	// 0x0010
	struct FQualifiedFrameTime
	{
		struct FFrameTime                                  Time;                                                     // 0x0000(0x0008) (BlueprintVisible)
		struct FFrameRate                                  Rate;                                                     // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.Timecode
	// 0x0014
	struct FTimecode
	{
		int                                                Hours;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
		int                                                Minutes;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
		int                                                Seconds;                                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
		int                                                Frames;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
		bool                                               bDropFrameFormat;                                         // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	};
	// ScriptStruct CoreUObject.Timespan
	// 0x0008
	struct FTimespan
	{
		unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	};
	// ScriptStruct CoreUObject.SoftClassPath
	// 0x0000 (0x0018 - 0x0018)
	struct FSoftClassPath //: public FSoftObjectPath
	{

	};
	// ScriptStruct CoreUObject.PrimaryAssetType
	// 0x0008
	struct FPrimaryAssetType
	{
		class FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.PrimaryAssetId
	// 0x0010
	struct FPrimaryAssetId
	{
		struct FPrimaryAssetType                           PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor)
		class FName                                       PrimaryAssetName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.FallbackStruct
	// 0x0001
	struct FFallbackStruct
	{
		unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	};
	// ScriptStruct CoreUObject.FloatRangeBound
	// 0x0008
	struct FFloatRangeBound
	{
		TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
		float                                              Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.FloatRange
	// 0x0010
	struct FFloatRange
	{
		struct FFloatRangeBound                            LowerBound;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FFloatRangeBound                            UpperBound;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.Int32RangeBound
	// 0x0008
	struct FInt32RangeBound
	{
		TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
		int                                                Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.Int32Range
	// 0x0010
	struct FInt32Range
	{
		struct FInt32RangeBound                            LowerBound;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		struct FInt32RangeBound                            UpperBound;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.FloatInterval
	// 0x0008
	struct FFloatInterval
	{
		float                                              Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
		float                                              Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.Int32Interval
	// 0x0008
	struct FInt32Interval
	{
		int                                                Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
		int                                                Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.PolyglotTextData
	// 0x00B0
	struct FPolyglotTextData
	{
		ELocalizedTextSourceCategory                       Category;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
		class FString                                      NativeCulture;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		class FString                                      Namespace;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		class FString                                      Key;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		class FString                                      NativeString;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
		TMap<class FString, class FString>                 LocalizedStrings;                                         // 0x0048(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
		struct FText                                       CachedText;                                               // 0x0098(0x0028) (Transient)
	};
	// ScriptStruct CoreUObject.AutomationEvent
	// 0x0038
	struct FAutomationEvent
	{
		EAutomationEventType                               Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
		class FString                                      Message;                                                  // 0x0008(0x0010) (ZeroConstructor)
		class FString                                      Context;                                                  // 0x0018(0x0010) (ZeroConstructor)
		struct FGuid                                       Artifact;                                                 // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	};
	// ScriptStruct CoreUObject.AutomationExecutionEntry
	// 0x0058
	struct FAutomationExecutionEntry
	{
		struct FAutomationEvent                            Event;                                                    // 0x0000(0x0038) (ZeroConstructor)
		class FString                                      Filename;                                                 // 0x0038(0x0010) (ZeroConstructor)
		int                                                LineNumber;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
		unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
		struct FDateTime                                   Timestamp;                                                // 0x0050(0x0008) (ZeroConstructor)
	};
	

	inline bool operator&(EFunctionFlags lhs, EFunctionFlags rhs) {
		return (static_cast<std::underlying_type_t<EFunctionFlags>>(lhs) & static_cast<std::underlying_type_t<EFunctionFlags>>(rhs)) == static_cast<std::underlying_type_t<EFunctionFlags>>(rhs);
	}
	inline bool operator&(EPropertyFlags lhs, EPropertyFlags rhs) {
		return (static_cast<std::underlying_type_t<EPropertyFlags>>(lhs) & static_cast<std::underlying_type_t<EPropertyFlags>>(rhs)) == static_cast<std::underlying_type_t<EPropertyFlags>>(rhs);
	}
	inline bool operator&(EObjectFlags lhs, EObjectFlags rhs) {
		return (static_cast<std::underlying_type_t<EObjectFlags>>(lhs) & static_cast<std::underlying_type_t<EObjectFlags>>(rhs)) == static_cast<std::underlying_type_t<EObjectFlags>>(rhs);
	}
	std::string StringifyFlags(const EFunctionFlags flags);
	std::string StringifyFlags(const EPropertyFlags flags);
	std::string StringifyFlags(const EObjectFlags flags);
}
