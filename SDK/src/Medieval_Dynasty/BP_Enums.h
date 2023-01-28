#pragma once
#include <memory>
/////////////////////////////////////////////
// Enums: 178
/////////////////////////////////////////////

namespace UE4 {
/////////////////////////////////////////////
// UserDefinedEnum E_EventRestictions_Buildings.E_EventRestictions_Buildings
/////////////////////////////////////////////
enum class E_EventRestictions_Buildings : uint8_t {
	Destroy = 0,
	Check = 1,
	E_EventRestictions_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_EventRestrictions.E_EventRestrictions
/////////////////////////////////////////////
enum class E_EventRestrictions : uint8_t {
	None = 0,
	CustomEvent = 1,
	Animals = 2,
	NPCs = 3,
	Buildings = 4,
	Fields = 5,
	Player = 6,
	Season = 7,
	Year = 8,
	E_MAX = 9,
};
/////////////////////////////////////////////
// UserDefinedEnum E_EventEffectRelevance.E_EventEffectRelevance
/////////////////////////////////////////////
enum class E_EventEffectRelevance : uint8_t {
	Player = 0,
	NPC = 1,
	Village = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_EventButtonRestrictions.E_EventButtonRestrictions
/////////////////////////////////////////////
enum class E_EventButtonRestrictions : uint8_t {
	None = 0,
	Skill = 1,
	Coin = 2,
	Village = 3,
	ItemsAnywhere = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_EventDifficulty.E_EventDifficulty
/////////////////////////////////////////////
enum class E_EventDifficulty : uint8_t {
	Easy = 0,
	Medium = 1,
	Hard = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_EventEffect_NPCType.E_EventEffect_NPCType
/////////////////////////////////////////////
enum class E_EventEffect_NPCType : uint8_t {
	Illness = 0,
	Production = 1,
	Mood = 2,
	Die = 3,
	Add = 4,
	SkillChange = 5,
	E_EventEffect_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_EventEffect_PlayerType.E_EventEffect_PlayerType
/////////////////////////////////////////////
enum class E_EventEffect_PlayerType : uint8_t {
	Water = 0,
	Food = 1,
	Stamina = 2,
	RunningSpeed = 3,
	FoodValueMultiplier = 4,
	InteractionSpeedMultiplier = 5,
	Coin = 6,
	DynastyReputation = 7,
	Skill = 8,
	RemoveItem = 9,
	AddItem = 10,
	E_EventEffect_MAX = 11,
};
/////////////////////////////////////////////
// UserDefinedEnum E_EventEffect_VillageType.E_EventEffect_VillageType
/////////////////////////////////////////////
enum class E_EventEffect_VillageType : uint8_t {
	DamageBuildings = 0,
	DamageFields = 1,
	RemoveResources = 2,
	ChangeTax = 3,
	E_EventEffect_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_EventEffectType.E_EventEffectType
/////////////////////////////////////////////
enum class E_EventEffectType : uint8_t {
	PlayerParameters = 0,
	NPCParameters = 1,
	Others = 2,
	HusbandryAnimals = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ChunkStates.E_ChunkStates
/////////////////////////////////////////////
enum class E_ChunkStates : uint8_t {
	NotGrubbedUp = 0,
	Unploughed = 1,
	UnploughedFertilized = 2,
	Plowed = 3,
	PlantGrowth = 4,
	ReadyForHarvest = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_FieldPlantStages.E_FieldPlantStages
/////////////////////////////////////////////
enum class E_FieldPlantStages : uint8_t {
	None = 0,
	Wheat_Spring_Stage0 = 1,
	Wheat_Spring_Stage1 = 2,
	Wheat_Spring_Stage2 = 3,
	Wheat_Spring_Stage3 = 4,
	Wheat_Autumn_Stage0 = 5,
	Wheat_Autumn_Stage1 = 6,
	Wheat_Autumn_Stage2 = 7,
	Wheat_Autumn_Stage3 = 8,
	Wheat_Autumn_Stage4 = 9,
	Rye_Stage0 = 10,
	Rye_Stage1 = 11,
	Rye_Stage2 = 12,
	Rye_Stage3 = 13,
	Oat_Stage0 = 14,
	Oat_Stage1 = 15,
	Oat_Stage2 = 16,
	Oat_Stage3 = 17,
	Flax_Stage0 = 18,
	Flax_Stage1 = 19,
	Flax_Stage2 = 20,
	Beetroot_Stage0 = 21,
	Beetroot_Stage1 = 22,
	Beetroot_Stage2 = 23,
	Beetroot_Stage3 = 24,
	Onion_Stage0 = 25,
	Onion_Stage1 = 26,
	Onion_Stage2 = 27,
	Cabbage_Spring_Stage0 = 28,
	Cabbage_Spring_Stage1 = 29,
	Cabbage_Spring_Stage2 = 30,
	Cabbage_Summer_Stage0 = 31,
	Cabbage_Summer_Stage1 = 32,
	Cabbage_Summer_Stage2 = 33,
	Carrot_Spring_Stage0 = 34,
	Carrot_Spring_Stage1 = 35,
	Carrot_Spring_Stage2 = 36,
	Carrot_Spring_Stage3 = 37,
	Carrot_Winter_Stage0 = 38,
	Carrot_Winter_Stage1 = 39,
	Carrot_Winter_Stage2 = 40,
	Carrot_Winter_Stage3 = 41,
	Poppy_Stage0 = 42,
	Poppy_Stage1 = 43,
	Poppy_Stage2 = 44,
	Poppy_Stage3 = 45,
	Apple_Stage0 = 46,
	Apple_Stage1 = 47,
	Apple_Stage2 = 48,
	Apple_Stage2_5 = 49,
	Apple_Stage3 = 50,
	Apple_Stage3_5 = 51,
	Plum_Stage0 = 52,
	Plum_Stage1 = 53,
	Plum_Stage2 = 54,
	Plum_Stage2_5 = 55,
	Plum_Stage3 = 56,
	Plum_Stage3_5 = 57,
	Pear_Stage0 = 58,
	Pear_Stage1 = 59,
	Pear_Stage2 = 60,
	Pear_Stage2_5 = 61,
	Pear_Stage3 = 62,
	Pear_Stage3_5 = 63,
	Cherry_Stage0 = 64,
	Cherry_Stage1 = 65,
	Cherry_Stage2 = 66,
	Cherry_Stage2_5 = 67,
	Cherry_Stage3 = 68,
	Cherry_Stage3_5 = 69,
	Hop_Stage0 = 70,
	Hop_Stage1 = 71,
	Hop_Stage2 = 72,
	Hop_Stage2_5 = 73,
	Hop_Stage3 = 74,
	E_MAX = 75,
};
/////////////////////////////////////////////
// UserDefinedEnum E_FieldCategories.E_FieldCategories
/////////////////////////////////////////////
enum class E_FieldCategories : uint8_t {
	Field = 0,
	Orchard = 1,
	E_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_FurnitureType.E_FurnitureType
/////////////////////////////////////////////
enum class E_FurnitureType : uint8_t {
	None = 0,
	Campfire = 1,
	Bed = 2,
	Chest = 3,
	Workbench = 4,
	Washtub = 5,
	ArcheryTarget = 6,
	Trough = 7,
	SaltingBarrel = 8,
	Cauldron = 9,
	DryingRack = 10,
	Loom = 11,
	SpinningWheels = 12,
	ThreshingFloor = 13,
	Forge = 14,
	TailoringTable = 15,
	Quern = 16,
	Stool = 17,
	Table = 18,
	Bench = 19,
	Stove = 20,
	Grate = 21,
	JuicePress = 22,
	WineBarrel = 23,
	Anvil = 24,
	Light = 25,
	BirdTrap = 26,
	RatTrap = 27,
	RabbitTrap = 28,
	BigFishingNet = 29,
	MediumFishingNet = 30,
	SmallFishingNet = 31,
	CarpentersTable = 32,
	Nest = 33,
	BrewingStation = 34,
	WoodworkingTable = 35,
	Beehive = 36,
	PotteryWheel = 37,
	HerbalistTable = 38,
	Well = 39,
	Decorative = 40,
	Scarecrow = 41,
	Millstone = 42,
	E_MAX = 43,
};
/////////////////////////////////////////////
// UserDefinedEnum E_FurnitureCategories.E_FurnitureCategories
/////////////////////////////////////////////
enum class E_FurnitureCategories : uint8_t {
	Campfire = 0,
	Bed = 1,
	Chest = 2,
	Workbench = 3,
	Washtub = 4,
	Trap = 5,
	ArcheryTarget = 6,
	Trough = 7,
	Activity = 8,
	ResourceStack = 9,
	Light = 10,
	SourceOfResources = 11,
	Decorative = 12,
	Collectable = 13,
	E_MAX = 14,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ModuleType.E_ModuleType
/////////////////////////////////////////////
enum class E_ModuleType : uint8_t {
	Wall = 0,
	Wall_Window = 1,
	Wall_Door = 2,
	Roof = 3,
	Base = 4,
	Frame = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_MaterialType.E_MaterialType
/////////////////////////////////////////////
enum class E_MaterialType : uint8_t {
	Wattle = 0,
	Wood = 1,
	Stone = 2,
	Thatch = 3,
	WoodenRoofTiles = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_CraftingRecipeType.E_CraftingRecipeType
/////////////////////////////////////////////
enum class E_CraftingRecipeType : uint8_t {
	Crafting = 0,
	Cooking = 1,
	Sewing = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Production_AnimalSex.E_Production_AnimalSex
/////////////////////////////////////////////
enum class E_Production_AnimalSex : uint8_t {
	Both = 0,
	Female = 1,
	Male = 2,
	E_Production_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Production_AnimalAge.E_Production_AnimalAge
/////////////////////////////////////////////
enum class E_Production_AnimalAge : uint8_t {
	Both = 0,
	Immature = 1,
	Mature = 2,
	E_Production_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Tasks.E_Tasks
/////////////////////////////////////////////
enum class E_Tasks : uint8_t {
	Nothing = 0,
	Cut_Tree = 1,
	Break_Stone = 2,
	Collect_Foliage = 3,
	Hunting = 4,
	Carrying_Water = 5,
	Workbench = 6,
	Interact_with_Husbandry_Animal = 7,
	Stop_Doing_Task = 8,
	Wait_in_House = 9,
	Work_on_a_Field = 10,
	Work_in_Orchard = 11,
	Find_Workplace = 12,
	Work_in_Store = 13,
	Cooking = 14,
	Building = 15,
	Blacksmithing = 16,
	Fishing = 17,
	Crafting = 18,
	Sewing = 19,
	Patrol = 20,
	Babysit = 21,
	Talking = 22,
	Sitting = 23,
	Sitting_in_Tavern = 24,
	Beekeping = 25,
	E_MAX = 26,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BuildingCategories.E_BuildingCategories
/////////////////////////////////////////////
enum class E_BuildingCategories : uint8_t {
	Houses = 0,
	Crafting = 1,
	Storages = 2,
	Crops = 3,
	AnimalHusbandry = 4,
	Extraction = 5,
	Hunting = 6,
	Service = 7,
	None = 8,
	E_MAX = 9,
};
/////////////////////////////////////////////
// UserDefinedEnum E_NPCPersonality.E_NPCPersonality
/////////////////////////////////////////////
enum class E_NPCPersonality : uint8_t {
	Snob = 0,
	Romantic = 1,
	FreeSpirit = 2,
	BusyBee = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Goal_BuildTypes.E_Goal_BuildTypes
/////////////////////////////////////////////
enum class E_Goal_BuildTypes : uint8_t {
	Building = 0,
	Furniture = 1,
	Fence = 2,
	Field = 3,
	Orchard = 4,
	E_Goal_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Resources.E_Resources
/////////////////////////////////////////////
enum class E_Resources : uint8_t {
	Empty = 0,
	Wood = 1,
	FelledTree = 2,
	Stone = 3,
	Berry = 4,
	Wheat = 5,
	Rye = 6,
	Meat = 7,
	Mushroom = 8,
	Log = 9,
	Rock = 10,
	Stick = 11,
	Limestone = 12,
	Clay = 13,
	Reed = 14,
	E_MAX = 15,
};
/////////////////////////////////////////////
// UserDefinedEnum E_FoliageSpecies.E_FoliageSpecies
/////////////////////////////////////////////
enum class E_FoliageSpecies : uint8_t {
	None = 0,
	Mushroom_WoolyMilkcap = 1,
	Mushroom_RedPine = 2,
	Mushroom_Parasol = 3,
	Mushroom_Morel = 4,
	Mushroom_FlyAgaric = 5,
	Mushroom_Bolete = 6,
	Mushroom_BitterBolete = 7,
	Berries = 8,
	DeadlyNightshade = 9,
	Thistle = 10,
	Henbane = 11,
	Dandelion = 12,
	Daisy = 13,
	Chicory = 14,
	BroadleafPlantain = 15,
	StJohnsWort = 16,
	Reed = 17,
	Stone_Pickup = 18,
	Stick_Pickup = 19,
	Tree = 20,
	Clay = 21,
	Salt = 22,
	Copper = 23,
	Tin = 24,
	Iron = 25,
	Stone_Deposit = 26,
	E_MAX = 27,
};
/////////////////////////////////////////////
// UserDefinedEnum E_CharacterType.E_CharacterType
/////////////////////////////////////////////
enum class E_CharacterType : uint8_t {
	Infant = 0,
	Toddler = 1,
	Kid = 2,
	Teenager = 3,
	Mature = 4,
	Old = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_TalkToGoalRestriction_RelationToQuestGiver.E_TalkToGoalRestriction_RelationToQuestGiver
/////////////////////////////////////////////
enum class E_TalkToGoalRestriction_RelationToQuestGiver : uint8_t {
	Any = 0,
	Unrelated = 1,
	Relative = 2,
	Child = 3,
	Partner = 4,
	Parent = 5,
	E_TalkToGoalRestriction_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Goal_VillageParametersTypes.E_Goal_VillageParametersTypes
/////////////////////////////////////////////
enum class E_Goal_VillageParametersTypes : uint8_t {
	DynastyReputation = 0,
	BuildingsNumber = 1,
	TechnologiesUnlocked = 2,
	Fields = 3,
	E_Goal_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Buildings.E_Buildings
/////////////////////////////////////////////
enum class E_Buildings : uint8_t {
	House = 0,
	ResourceStorage = 1,
	FoodStorage = 2,
	Woodshed = 3,
	BuildersHut = 4,
	ExcavationShed = 5,
	HuntingLodge = 6,
	Workshop = 7,
	Barn = 8,
	FishingHut = 9,
	Henhouse = 10,
	GooseHouse = 11,
	Mine = 12,
	Tavern = 13,
	Sewing = 14,
	Cowshed = 15,
	Fold = 16,
	Pigsty = 17,
	MarketStall = 18,
	HorseStable = 19,
	Apiary = 20,
	Smithy = 21,
	Well = 22,
	Kitchen = 23,
	HerbalistsHut = 24,
	Windmill = 25,
	DonkeyStable = 26,
	FarmShed = 27,
	E_MAX = 28,
};
/////////////////////////////////////////////
// UserDefinedEnum E_GoalTypes.E_GoalTypes
/////////////////////////////////////////////
enum class E_GoalTypes : uint8_t {
	None = 0,
	Custom = 1,
	Hunt = 2,
	Deliver = 3,
	Talk = 4,
	Find = 5,
	Equip = 6,
	Sleep = 7,
	Build = 8,
	PledgeTask = 9,
	GetRidOfAnimals = 10,
	VillageParameters = 11,
	SpendTalentPoints = 12,
	Family = 13,
	Population = 14,
	WaitForTime = 15,
	ArcheryContest = 16,
	TalkToPeople = 17,
	Flirt = 18,
	CompleteQuests = 19,
	RemoveFoliage = 20,
	ConvincePeople = 21,
	SendPeople = 22,
	VillageMood = 23,
	E_MAX = 24,
};
/////////////////////////////////////////////
// UserDefinedEnum E_GoalState.E_GoalState
/////////////////////////////////////////////
enum class E_GoalState : uint8_t {
	Normal = 0,
	Completed = 1,
	Failed = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ObjectiveState.E_ObjectiveState
/////////////////////////////////////////////
enum class E_ObjectiveState : uint8_t {
	Normal = 0,
	Completed = 1,
	Failed = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_TechnologyTypes.E_TechnologyTypes
/////////////////////////////////////////////
enum class E_TechnologyTypes : uint8_t {
	Building = 0,
	Survival = 1,
	Farming = 2,
	Crafting = 3,
	None = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Skills.E_Skills
/////////////////////////////////////////////
enum class E_Skills : uint8_t {
	Farming = 0,
	Crafting = 1,
	Diplomacy = 2,
	Extraction = 3,
	Hunting = 4,
	Survival = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_QuestState.E_QuestState
/////////////////////////////////////////////
enum class E_QuestState : uint8_t {
	Active = 0,
	Completed = 1,
	Failed = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_QuestCategories.E_QuestCategories
/////////////////////////////////////////////
enum class E_QuestCategories : uint8_t {
	Chapter = 0,
	StoryQuest = 1,
	SideQuest = 2,
	Challange = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Ammo.E_Ammo
/////////////////////////////////////////////
enum class E_Ammo : uint8_t {
	None = 0,
	Arrow = 1,
	Bolt = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ItemEquipOptions.E_ItemEquipOptions
/////////////////////////////////////////////
enum class E_ItemEquipOptions : uint8_t {
	None = 0,
	HidePants = 1,
	E_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_EquipmentCategories.E_EquipmentCategories
/////////////////////////////////////////////
enum class E_EquipmentCategories : uint8_t {
	None = 0,
	Feet = 1,
	Legs = 2,
	Chest = 3,
	Gloves = 4,
	Hood = 5,
	Head = 6,
	Ammo = 7,
	Torch = 8,
	Backpack = 9,
	Pouch = 10,
	Saddle = 11,
	Horseshoes = 12,
	Saddlebag = 13,
	E_MAX = 14,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ItemCategories.E_ItemCategories
/////////////////////////////////////////////
enum class E_ItemCategories : uint8_t {
	None = 0,
	Tools = 1,
	Clothes = 2,
	Consumable = 3,
	Crafting = 4,
	Misc = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Production_StoragePlaces.E_Production_StoragePlaces
/////////////////////////////////////////////
enum class E_Production_StoragePlaces : uint8_t {
	FoodStorage = 0,
	ResourceStorage = 1,
	E_Production_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ItemSubCategories.E_ItemSubCategories
/////////////////////////////////////////////
enum class E_ItemSubCategories : uint8_t {
	None = 0,
	Weapons = 1,
	Tools = 2,
	Seeds = 3,
	Ammo = 4,
	Torches = 5,
	Armor = 6,
	E_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ShopType.E_ShopType
/////////////////////////////////////////////
enum class E_ShopType : uint8_t {
	None = 0,
	Tools = 1,
	Clothing = 2,
	Resources = 3,
	Food = 4,
	Herbs = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_WeaponDamageType.E_WeaponDamageType
/////////////////////////////////////////////
enum class E_WeaponDamageType : uint8_t {
	None = 0,
	Pierce = 1,
	Blunt = 2,
	Slash = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Tools_Activity.E_Tools_Activity
/////////////////////////////////////////////
enum class E_Tools_Activity : uint8_t {
	None = 0,
	Axe = 1,
	Pickaxe = 2,
	Knife = 3,
	Hammer = 4,
	Hoe = 5,
	Scythe_Sickle = 6,
	Scissors = 7,
	Basket = 8,
	BluntWeapon = 9,
	Waterskin = 10,
	Bag = 11,
	Shovel = 12,
	Spear = 13,
	Bucket = 14,
	Torch = 15,
	Rock = 16,
	Bow = 17,
	Crossbow = 18,
	FishingSpear = 19,
	FishingRod = 20,
	E_Tools_MAX = 21,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Tools.E_Tools
/////////////////////////////////////////////
enum class E_Tools : uint8_t {
	None = 0,
	Axe = 1,
	Pickaxe = 2,
	BuildingHammer = 3,
	Bow = 4,
	Knife = 5,
	Arrow = 6,
	Hoe = 7,
	Scythe = 8,
	Scissors = 9,
	Basket = 10,
	Cudgel = 11,
	Waterskin = 12,
	Bag = 13,
	Shovel = 14,
	Pike = 15,
	Bucket = 16,
	Trap = 17,
	Hammer = 18,
	BagOfSeeds = 19,
	BagOfManure = 20,
	BagOfFeed = 21,
	Torch = 22,
	Rock = 23,
	Crossbow = 24,
	AnimOnly = 25,
	Sack = 26,
	FishingSpear = 27,
	FishingRod = 28,
	Sickle = 29,
	E_MAX = 30,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Vendor.E_Vendor
/////////////////////////////////////////////
enum class E_Vendor : uint8_t {
	Lumberjack_1 = 0,
	Miner_1 = 1,
	Hunter_1 = 2,
	Herbalist_1 = 3,
	Removed = 4,
	Fisherman_1 = 5,
	Blacksmith_1 = 6,
	Blacksmith_2 = 7,
	Blacksmith_3 = 8,
	Cook_1 = 9,
	Cook_2 = 10,
	Innkeeper_1 = 11,
	Seamster_1 = 12,
	Seamster_2 = 13,
	Seamster_3 = 14,
	Beekeeper_1 = 15,
	Farmer_1 = 16,
	Craftsman_1 = 17,
	Craftsman_2 = 18,
	Craftsman_3 = 19,
	AnimalBreeder_Fold_1 = 20,
	AnimalBreeder_Pigsty_1 = 21,
	AnimalBreeder_Stable_1 = 22,
	AnimalBreeder_Poultry_1 = 23,
	AnimalBreeder_Cowshed_1 = 24,
	Exotic_1 = 25,
	Figurines_1 = 26,
	E_MAX = 27,
};
/////////////////////////////////////////////
// UserDefinedEnum E_AfterIdlePose.E_AfterIdlePose
/////////////////////////////////////////////
enum class E_AfterIdlePose : uint8_t {
	StayInIdle = 0,
	StopIdle = 1,
	SwitchToStandingIdle = 2,
	SwitchToTalkingIdle = 3,
	SwitchToLookingIdle = 4,
	SwitchToOtherIdle = 5,
	KeepCurrentPose = 6,
	E_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum E_IdleStates.E_IdleStates
/////////////////////////////////////////////
enum class E_IdleStates : uint8_t {
	Standing = 0,
	Talking = 1,
	Looking = 2,
	Other = 3,
	Waving = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Tutorials.E_Tutorials
/////////////////////////////////////////////
enum class E_Tutorials : uint8_t {
	Skills = 0,
	Journal = 1,
	Management = 2,
	Technology = 3,
	HP = 4,
	Stamina = 5,
	Food = 6,
	Water = 7,
	Poisoning = 8,
	Temperature = 9,
	Overloading = 10,
	Dirtiness = 11,
	BasicResources = 12,
	Seasons_Sleep = 13,
	Neighbours = 14,
	Inhabitants = 15,
	Torch = 16,
	Skills_Talents = 17,
	Chapters = 18,
	Quests = 19,
	Extraction = 20,
	Hunting = 21,
	AnimalHusbandry = 22,
	Diplomacy = 23,
	Fields = 24,
	Crafting = 25,
	Building = 26,
	Houses = 27,
	Wife = 28,
	Heir = 29,
	DynastyReputation = 30,
	Taxes = 31,
	Theft = 32,
	Development = 33,
	Newcomers = 34,
	Challenges = 35,
	HusbandryAnimals = 36,
	MerchantLocations = 37,
	CropsManagement = 38,
	PeopleManagement = 39,
	BuildingManagement = 40,
	CollectingResources = 41,
	HouseBuilding = 42,
	TreeCutting = 43,
	E_MAX = 44,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ViewMode.E_ViewMode
/////////////////////////////////////////////
enum class E_ViewMode : uint8_t {
	ThirdPerson = 0,
	FirstPerson = 1,
	E_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Sex.E_Sex
/////////////////////////////////////////////
enum class E_Sex : uint8_t {
	Male = 0,
	Female = 1,
	E_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_KingdomStatus.E_KingdomStatus
/////////////////////////////////////////////
enum class E_KingdomStatus : uint8_t {
	Peaceful = 0,
	NewKing = 1,
	After_War = 2,
	War = 3,
	Drought = 4,
	Plague = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ChallengeState.E_ChallengeState
/////////////////////////////////////////////
enum class E_ChallengeState : uint8_t {
	Unavailable = 0,
	NotTaken = 1,
	InProgress = 2,
	Completed = 3,
	Failed = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Ownership.E_Ownership
/////////////////////////////////////////////
enum class E_Ownership : uint8_t {
	Player = 0,
	Ownerless = 1,
	Bandit = 2,
	BlueVillage = 3,
	GreenVillage = 4,
	SkyBlueVillage = 5,
	RedVillage = 6,
	PinkVillage = 7,
	OrangeVillage = 8,
	YellowVillage = 9,
	PurpleVillage = 10,
	NavyBlueVillage = 11,
	BurgundyVillage = 12,
	BrownVillage = 13,
	E_MAX = 14,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Seasons.E_Seasons
/////////////////////////////////////////////
enum class E_Seasons : uint8_t {
	Spring = 0,
	Summer = 1,
	Autumn = 2,
	Winter = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Profession.E_Profession
/////////////////////////////////////////////
enum class E_Profession : uint8_t {
	None = 0,
	Lumberjack = 1,
	Miner = 2,
	Cook = 3,
	Hunter = 4,
	Herbalist = 5,
	AnimalBreeder = 6,
	BarnWorker = 7,
	Fisherman = 8,
	Stallholder = 9,
	Builder = 10,
	Blacksmith = 11,
	Innkeeper = 12,
	Seamster = 13,
	Vendor = 14,
	Castellan = 15,
	Mother = 16,
	Farmer = 17,
	Herald = 18,
	Craftsman = 19,
	Beekeeper = 20,
	WaterCarrier = 21,
	Bandit = 22,
	BanditArcher = 23,
	BanditCrossbowman = 24,
	Miller = 25,
	Waggoner = 26,
	E_MAX = 27,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BodyParts.E_BodyParts
/////////////////////////////////////////////
enum class E_BodyParts : uint8_t {
	Head = 0,
	Torso = 1,
	Hands = 2,
	Legs = 3,
	Feet = 4,
	Hat = 5,
	Neck = 6,
	Hair = 7,
	E_MAX = 8,
};
/////////////////////////////////////////////
// UserDefinedEnum E_DevelopmentStages.E_DevelopmentStages
/////////////////////////////////////////////
enum class E_DevelopmentStages : uint8_t {
	Traveller = 0,
	Hermitage = 1,
	Camp = 2,
	SmallFarm = 3,
	Farm = 4,
	Hamlet = 5,
	Settlement = 6,
	Village = 7,
	Town = 8,
	City = 9,
	E_MAX = 10,
};
/////////////////////////////////////////////
// UserDefinedEnum E_AnimalType.E_AnimalType
/////////////////////////////////////////////
enum class E_AnimalType : uint8_t {
	Fish = 0,
	Chicken = 1,
	Goose = 2,
	Pig = 3,
	Sheep = 4,
	Goat = 5,
	Cow = 6,
	Rat = 7,
	Rabbit = 8,
	Deer = 9,
	Boar = 10,
	Wolf = 11,
	Bear = 12,
	Fox = 13,
	Wisent = 14,
	Horse = 15,
	Donkey = 16,
	Lynx = 17,
	Badger = 18,
	Moose = 19,
	WhiteTailedEagle = 20,
	Hawk = 21,
	Duck = 22,
	Pigeon = 23,
	Crow = 24,
	Stork = 25,
	E_MAX = 26,
};
/////////////////////////////////////////////
// UserDefinedEnum E_TimeToSave.E_TimeToSave
/////////////////////////////////////////////
enum class E_TimeToSave : uint8_t {
	Off = 0,
	_5 = 1,
	_15 = 2,
	_30 = 3,
	_60 = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_GamepadType.E_GamepadType
/////////////////////////////////////////////
enum class E_GamepadType : uint8_t {
	Xbox = 0,
	PS5 = 1,
	PS4 = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_GamepadControlType.E_GamepadControlType
/////////////////////////////////////////////
enum class E_GamepadControlType : uint8_t {
	Default = 0,
	Alternative1 = 1,
	Alternative2 = 2,
	Classic = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BuildingModifications.E_BuildingModifications
/////////////////////////////////////////////
enum class E_BuildingModifications : uint8_t {
	None = 0,
	Building = 1,
	Repair = 2,
	Upgrade = 3,
	Downgrade = 4,
	Destroy = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BagMode.E_BagMode
/////////////////////////////////////////////
enum class E_BagMode : uint8_t {
	Fertilizer = 0,
	Wheat = 1,
	Oat = 2,
	Rye = 3,
	Flax = 4,
	Cabbage = 5,
	Carrot = 6,
	Beetroot = 7,
	Onion = 8,
	Seeds = 9,
	None = 10,
	Poppy = 11,
	Hop = 12,
	Apple = 13,
	Pear = 14,
	Plum = 15,
	Cherry = 16,
	E_MAX = 17,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Fluids.E_Fluids
/////////////////////////////////////////////
enum class E_Fluids : uint8_t {
	None = 0,
	Water = 1,
	DirtyWater = 2,
	Milk = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Seeds.E_Seeds
/////////////////////////////////////////////
enum class E_Seeds : uint8_t {
	None = 0,
	WheatSeed = 1,
	OatSeed = 2,
	RyeSeed = 3,
	FlaxSeed = 4,
	BeetrootSeed = 5,
	OnionSeed = 6,
	CabbageSeed = 7,
	CarrotSeed = 8,
	AppleSeedling = 9,
	PearSeedling = 10,
	PlumSeedling = 11,
	CherrySeedling = 12,
	PoppySeed = 13,
	HopSeedling = 14,
	E_MAX = 15,
};
/////////////////////////////////////////////
// UserDefinedEnum E_TimeOfDay.E_TimeOfDay
/////////////////////////////////////////////
enum class E_TimeOfDay : uint8_t {
	Morning = 0,
	Day = 1,
	Evening = 2,
	Night = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_DeathType.E_DeathType
/////////////////////////////////////////////
enum class E_DeathType : uint8_t {
	NoHP = 0,
	TooOld_NoHeir = 1,
	Banished = 2,
	TooOld_Heir = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_DecorationSlotType.E_DecorationSlotType
/////////////////////////////////////////////
enum class E_DecorationSlotType : uint8_t {
	Interior = 0,
	Exterior = 1,
	Both = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Notifications.E_Notifications
/////////////////////////////////////////////
enum class E_Notifications : uint8_t {
	Add_Item = 0,
	Remove_Item = 1,
	Consume_Item = 2,
	Information = 3,
	Warning = 4,
	BrokenItem = 5,
	PoisonedStatus = 6,
	OverencumberedStatus = 7,
	HotStatus = 8,
	ColdStatus = 9,
	E_MAX = 10,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Workbenches.E_Workbenches
/////////////////////////////////////////////
enum class E_Workbenches : uint8_t {
	None = 0,
	Hands = 1,
	Campfire = 2,
	Cauldron = 3,
	SaltingBarrel = 4,
	DryingRack = 5,
	HuntingLodgeTable = 6,
	FishingHutTable = 7,
	SmithyTable = 8,
	Forge = 9,
	ThreshingFloor = 10,
	BarnTable = 11,
	SpinningWheels = 12,
	Loom = 13,
	DyeingVats = 14,
	Stove = 15,
	TailoringTable = 16,
	Anvil = 17,
	Grate = 18,
	Quern = 19,
	CarpentersTable = 20,
	WineBarrel = 21,
	JuicePress = 22,
	WoodworkingTable = 23,
	PotteryWheel = 24,
	BrewingStation = 25,
	HerbalistTable = 26,
	Well = 27,
	Millstone = 28,
	E_MAX = 29,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BanditNames.E_BanditNames
/////////////////////////////////////////////
enum class E_BanditNames : uint8_t {
	Bandit = 0,
	Deserter = 1,
	Robber = 2,
	Thug = 3,
	Mugger = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BanditType.E_BanditType
/////////////////////////////////////////////
enum class E_BanditType : uint8_t {
	None = 0,
	Crossbowman = 1,
	Archer = 2,
	Spearman = 3,
	Axeman = 4,
	Batman = 5,
	Cutthroat = 6,
	Bruiser = 7,
	E_MAX = 8,
};
/////////////////////////////////////////////
// UserDefinedEnum E_OutsideNPCTypes.E_OutsideNPCTypes
/////////////////////////////////////////////
enum class E_OutsideNPCTypes : uint8_t {
	None = 0,
	Random = 1,
	Neighbour = 2,
	Herald = 3,
	GiftVendor = 4,
	Quest = 5,
	Waggoner = 6,
	E_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum E_NPCPresetTypes.E_NPCPresetTypes
/////////////////////////////////////////////
enum class E_NPCPresetTypes : uint8_t {
	Toddler = 0,
	Boy = 1,
	Girl = 2,
	Male = 3,
	Female = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Wealth.E_Wealth
/////////////////////////////////////////////
enum class E_Wealth : uint8_t {
	None = 0,
	Poor = 1,
	Average = 2,
	Rich = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_FurnitureSlotType.E_FurnitureSlotType
/////////////////////////////////////////////
enum class E_FurnitureSlotType : uint8_t {
	Front = 0,
	Left = 1,
	Right = 2,
	Back = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_NPC_Bandit_BlackboardBoolean.E_NPC_Bandit_BlackboardBoolean
/////////////////////////////////////////////
enum class E_NPC_Bandit_BlackboardBoolean : uint8_t {
	WaitForAnimation = 0,
	WaitForBlock = 1,
	WaitForAttack = 2,
	WaitForShoot = 3,
	WaitForDodge = 4,
	E_NPC_Bandit_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_AnimDirection.E_AnimDirection
/////////////////////////////////////////////
enum class E_AnimDirection : uint8_t {
	Random = 0,
	Left = 1,
	Right = 2,
	Back = 3,
	Down = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_AnimMovement.E_AnimMovement
/////////////////////////////////////////////
enum class E_AnimMovement : uint8_t {
	Random = 0,
	Inplace = 1,
	RootMotion = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ActorType.E_ActorType
/////////////////////////////////////////////
enum class E_ActorType : uint8_t {
	NPC = 0,
	Animal = 1,
	Item = 2,
	ChestItems = 3,
	Furniture = 4,
	Mesh = 5,
	Decal = 6,
	CollectableFurniture = 7,
	Custom = 8,
	E_MAX = 9,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Stance.E_Stance
/////////////////////////////////////////////
enum class E_Stance : uint8_t {
	Standing = 0,
	Crouching = 1,
	Sitting = 2,
	Sleeping = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_POI_Type.E_POI_Type
/////////////////////////////////////////////
enum class E_POI_Type : uint8_t {
	None = 0,
	Misc = 1,
	Accident = 2,
	Vendor = 3,
	Treasure = 4,
	Bandits = 5,
	Animals = 6,
	Quest = 7,
	Resources = 8,
	E_POI_MAX = 9,
};
/////////////////////////////////////////////
// UserDefinedEnum E_AnimalAgeStage.E_AnimalAgeStage
/////////////////////////////////////////////
enum class E_AnimalAgeStage : uint8_t {
	Immature = 0,
	Mature = 1,
	E_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_FishPoolType.E_FishPoolType
/////////////////////////////////////////////
enum class E_FishPoolType : uint8_t {
	Perch = 0,
	Pike = 1,
	Roach = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BuildingSlotType.E_BuildingSlotType
/////////////////////////////////////////////
enum class E_BuildingSlotType : uint8_t {
	Work_Slot = 0,
	Break_Slot = 1,
	Apprentice_Slot = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_AI_RunMode.BP_Enum_AI_RunMode
/////////////////////////////////////////////
enum class EBP_Enum_AI_RunMode : uint8_t {
	Run_on_Proximity = 0,
	Always_Run = 1,
	BP_Enum_AI_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_AIRoamBehavior.BP_Enum_AIRoamBehavior
/////////////////////////////////////////////
enum class EBP_Enum_AIRoamBehavior : uint8_t {
	Stay_In_Place = 0,
	Go_to_Random_Location_in_NavMesh = 1,
	Go_to_Random_Location_within_Bounds = 2,
	Go_to_Random_WayPoint = 3,
	Follow_WayPoint_Path = 4,
	Go_to_Nearest_POI = 5,
	Go_to_Home_Base = 6,
	BP_Enum_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_AIState.BP_Enum_AIState
/////////////////////////////////////////////
enum class EBP_Enum_AIState : uint8_t {
	Inactive = 0,
	Active = 1,
	Engaged = 2,
	Found_Bait = 3,
	Part_of_Group = 4,
	Dead = 5,
	Interact = 6,
	BP_Enum_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_Animal_BlackboardBoolean.BP_Enum_Animal_BlackboardBoolean
/////////////////////////////////////////////
enum class EBP_Enum_Animal_BlackboardBoolean : uint8_t {
	UseNeedsSystem = 0,
	UsePredictiveMovement = 1,
	FoundBait = 2,
	Resting_ = 3,
	Stuck = 4,
	Moving = 5,
	FearFleeing = 6,
	Stuned = 7,
	ShouldBeAwaken = 8,
	HasWokenUp = 9,
	LayingDown = 10,
	Disengaging = 11,
	HitWhenDisengaging = 12,
	IsCaveAnimal = 13,
	BP_Enum_Animal_MAX = 14,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_Animal_BlackboardFloat.BP_Enum_Animal_BlackboardFloat
/////////////////////////////////////////////
enum class EBP_Enum_Animal_BlackboardFloat : uint8_t {
	EatingTime = 0,
	Aggro = 1,
	BP_Enum_Animal_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_Animal_BlackboardInt.BP_Enum_Animal_BlackboardInt
/////////////////////////////////////////////
enum class EBP_Enum_Animal_BlackboardInt : uint8_t {
	EatPointIndex = 0,
	SleepSlotIndex = 1,
	BP_Enum_Animal_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_Animal_BlackboardObject.BP_Enum_Animal_BlackboardObject
/////////////////////////////////////////////
enum class EBP_Enum_Animal_BlackboardObject : uint8_t {
	WayPoint = 0,
	NearestFood = 1,
	NearestWater = 2,
	NearestPath = 3,
	NearestPOI = 4,
	NearestBait = 5,
	EngageActor = 6,
	SensedActor = 7,
	Trough = 8,
	BP_Enum_Animal_MAX = 9,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_Animal_BlackboardVector.BP_Enum_Animal_BlackboardVector
/////////////////////////////////////////////
enum class EBP_Enum_Animal_BlackboardVector : uint8_t {
	FleeLocation = 0,
	RoamLocation = 1,
	FoodLocation = 2,
	FoodRotation = 3,
	SensedActorLocation = 4,
	BP_Enum_Animal_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_AnimType.BP_Enum_AnimType
/////////////////////////////////////////////
enum class EBP_Enum_AnimType : uint8_t {
	Idle = 0,
	Engage = 1,
	Attack = 2,
	Death = 3,
	Hit = 4,
	Eat = 5,
	Drink = 6,
	Rest = 7,
	Laying = 8,
	BP_Enum_MAX = 9,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_DefenseState.BP_Enum_DefenseState
/////////////////////////////////////////////
enum class EBP_Enum_DefenseState : uint8_t {
	Going_to_Defense_Location = 0,
	Attack_Enemy = 1,
	BP_Enum_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_EngageTargetBehavior.BP_Enum_EngageTargetBehavior
/////////////////////////////////////////////
enum class EBP_Enum_EngageTargetBehavior : uint8_t {
	Fixated = 0,
	Nearest = 1,
	BP_Enum_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_FeedingBehavior.BP_Enum_FeedingBehavior
/////////////////////////////////////////////
enum class EBP_Enum_FeedingBehavior : uint8_t {
	Prey = 0,
	Predator = 1,
	BP_Enum_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_GroundEngageBehavior.BP_Enum_GroundEngageBehavior
/////////////////////////////////////////////
enum class EBP_Enum_GroundEngageBehavior : uint8_t {
	Ignore = 0,
	Flee = 1,
	Try_to_Hide = 2,
	Defend = 3,
	Attack = 4,
	Encircle = 5,
	RunAway = 6,
	BP_Enum_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_GroundNaturalBehaviors.BP_Enum_GroundNaturalBehaviors
/////////////////////////////////////////////
enum class EBP_Enum_GroundNaturalBehaviors : uint8_t {
	Eat = 0,
	Drink = 1,
	Breed = 2,
	Roam = 3,
	Rest = 4,
	Custom_Need = 5,
	Follow_Parent = 6,
	BP_Enum_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_RestState.BP_Enum_RestState
/////////////////////////////////////////////
enum class EBP_Enum_RestState : uint8_t {
	Go_to_Collection_Point = 0,
	Wait = 1,
	Go_to_Rest_Point = 2,
	Rest = 3,
	BP_Enum_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_RoamMode.BP_Enum_RoamMode
/////////////////////////////////////////////
enum class EBP_Enum_RoamMode : uint8_t {
	Specific = 0,
	Random = 1,
	BP_Enum_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_StimulusDetected.BP_Enum_StimulusDetected
/////////////////////////////////////////////
enum class EBP_Enum_StimulusDetected : uint8_t {
	Sight = 0,
	Sound = 1,
	Touch = 2,
	Damage = 3,
	Several_Senses = 4,
	BP_Enum_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Husbandry_Action.E_Husbandry_Action
/////////////////////////////////////////////
enum class E_Husbandry_Action : uint8_t {
	Nothing = 0,
	Find = 1,
	Go_to = 2,
	Close_Move_to = 3,
	Interact = 4,
	Wait = 5,
	E_Husbandry_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_MeleeDamageType.BP_Enum_MeleeDamageType
/////////////////////////////////////////////
enum class EBP_Enum_MeleeDamageType : uint8_t {
	Single_Damage = 0,
	Area_of_Effect_Damage = 1,
	BP_Enum_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_AnimPlayMode.BP_Enum_AnimPlayMode
/////////////////////////////////////////////
enum class EBP_Enum_AnimPlayMode : uint8_t {
	Single = 0,
	Random = 1,
	Sequential = 2,
	Specific = 3,
	BP_Enum_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum BP_Enum_DefenseLocation.BP_Enum_DefenseLocation
/////////////////////////////////////////////
enum class EBP_Enum_DefenseLocation : uint8_t {
	Current_Location = 0,
	Specific_Location = 1,
	BP_Enum_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BirdMovementMode.E_BirdMovementMode
/////////////////////////////////////////////
enum class E_BirdMovementMode : uint8_t {
	Grounded = 0,
	Flying = 1,
	E_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_DailyCycle.E_DailyCycle
/////////////////////////////////////////////
enum class E_DailyCycle : uint8_t {
	Work = 0,
	Rest = 1,
	Sleep = 2,
	WakeUp = 3,
	Get_Out = 4,
	Evening_Life = 5,
	Illness = 6,
	War = 7,
	Homecoming = 8,
	Lead = 9,
	Follow = 10,
	Go_to_Point = 11,
	Night_Patrol = 12,
	Dead = 13,
	Optimization = 14,
	E_MAX = 15,
};
/////////////////////////////////////////////
// UserDefinedEnum E_NPCBehavior.E_NPCBehavior
/////////////////////////////////////////////
enum class E_NPCBehavior : uint8_t {
	Nothing = 0,
	Go_to_Work = 1,
	Put_Away_Resources = 2,
	Talk_With_Player = 3,
	Go_to_Center = 4,
	Move_Aside = 5,
	Vendor = 6,
	Day_Activities = 7,
	E_MAX = 8,
};
/////////////////////////////////////////////
// UserDefinedEnum E_NPCStatus.E_NPCStatus
/////////////////////////////////////////////
enum class E_NPCStatus : uint8_t {
	None = 0,
	No_Work = 1,
	Working = 2,
	No_Tool = 3,
	No_Item = 4,
	Rest = 5,
	Sleep = 6,
	Full_Storages = 7,
	E_MAX = 8,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ResourceState.E_ResourceState
/////////////////////////////////////////////
enum class E_ResourceState : uint8_t {
	Nothing = 0,
	Find_Resource = 1,
	Go_To_Resource = 2,
	Close_Move_to_Resource = 3,
	Interact_Resource = 4,
	TakeResource = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_TaskState.E_TaskState
/////////////////////////////////////////////
enum class E_TaskState : uint8_t {
	Go_To_Player = 0,
	Wait_For_Task = 1,
	Do_The_Task = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_AnimBreakType.E_AnimBreakType
/////////////////////////////////////////////
enum class E_AnimBreakType : uint8_t {
	Universal = 0,
	Profession = 1,
	NoWork = 2,
	Apprentice = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_FieldActivities.E_FieldActivities
/////////////////////////////////////////////
enum class E_FieldActivities : uint8_t {
	Plowing_I = 0,
	Plowing_II = 1,
	Manuring = 2,
	Sowing = 3,
	Harvesting = 4,
	Collecting_Field = 5,
	Collecting_Orchard = 6,
	Nothing = 7,
	E_MAX = 8,
};
/////////////////////////////////////////////
// UserDefinedEnum E_SleepingDirection.E_SleepingDirection
/////////////////////////////////////////////
enum class E_SleepingDirection : uint8_t {
	LeftSide = 0,
	RightSide = 1,
	E_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_SittingType.E_SittingType
/////////////////////////////////////////////
enum class E_SittingType : uint8_t {
	NoTable = 0,
	AtTable = 1,
	E_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_SitDownPosition.E_SitDownPosition
/////////////////////////////////////////////
enum class E_SitDownPosition : uint8_t {
	Ground = 0,
	Left = 1,
	Center = 2,
	Right = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Gait.E_Gait
/////////////////////////////////////////////
enum class E_Gait : uint8_t {
	Walking = 0,
	Running = 1,
	Sprinting = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Talk.E_Talk
/////////////////////////////////////////////
enum class E_Talk : uint8_t {
	Start_Talk = 0,
	Wait = 1,
	End_Talk = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_AnimInteractionTypes.E_AnimInteractionTypes
/////////////////////////////////////////////
enum class E_AnimInteractionTypes : uint8_t {
	Basic = 0,
	Hit = 1,
	Ground = 2,
	Interaction = 3,
	AlternativeInteraction = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_HoldableTraceBehavior.E_HoldableTraceBehavior
/////////////////////////////////////////////
enum class E_HoldableTraceBehavior : uint8_t {
	ToolBasedHit = 0,
	TagBasedPlayerHit = 1,
	ObjectBasedPlayerHit = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BuildingWarningType.E_BuildingWarningType
/////////////////////////////////////////////
enum class E_BuildingWarningType : uint8_t {
	None = 0,
	RestrictedArea = 1,
	Obstacle = 2,
	OnTerrain = 3,
	OnWater = 4,
	TooUneven = 5,
	InCave = 6,
	Cost = 7,
	SizeLimit = 8,
	TooShort = 9,
	BuildingUpgrade = 10,
	BeyondTheMap = 11,
	TrapLimit = 12,
	BuildingLimit = 13,
	E_MAX = 14,
};
/////////////////////////////////////////////
// UserDefinedEnum E_FieldPlantType.E_FieldPlantType
/////////////////////////////////////////////
enum class E_FieldPlantType : uint8_t {
	None = 0,
	Wheat_Spring = 1,
	Wheat_Autumn = 2,
	Rye = 3,
	Oat = 4,
	Flax = 5,
	Beetroot = 6,
	Onion = 7,
	Cabbage_Spring = 8,
	Cabbage_Summer = 9,
	Carrot_Spring = 10,
	Carrot_Winter = 11,
	Poppy = 12,
	Apple = 13,
	Plum = 14,
	Pear = 15,
	Cherry = 16,
	Hop = 17,
	E_MAX = 18,
};
/////////////////////////////////////////////
// UserDefinedEnum E_KingAlignment.E_KingAlignment
/////////////////////////////////////////////
enum class E_KingAlignment : uint8_t {
	Neutral = 0,
	Evil = 1,
	Good = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Kingdoms.E_Kingdoms
/////////////////////////////////////////////
enum class E_Kingdoms : uint8_t {
	None = 0,
	SoutherKingdom = 1,
	WesternKingdom = 2,
	EasternKingdom = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Directions.E_Directions
/////////////////////////////////////////////
enum class E_Directions : uint8_t {
	Up = 0,
	Down = 1,
	Constant = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Production_SourcePlaces.E_Production_SourcePlaces
/////////////////////////////////////////////
enum class E_Production_SourcePlaces : uint8_t {
	LocalChest = 0,
	FoodStorage = 1,
	ResourceStorage = 2,
	E_Production_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_ChoiceSegments.E_ChoiceSegments
/////////////////////////////////////////////
enum class E_ChoiceSegments : uint8_t {
	Exit = 0,
	Road = 1,
	Building = 2,
	Fences = 3,
	Gates = 4,
	Handcrafting = 5,
	Furnitures_Decorations = 6,
	Bridge = 7,
	None = 8,
	E_MAX = 9,
};
/////////////////////////////////////////////
// UserDefinedEnum E_SleepMenuSegments.E_SleepMenuSegments
/////////////////////////////////////////////
enum class E_SleepMenuSegments : uint8_t {
	Exit = 0,
	SleepDay = 1,
	SleepSeason = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_DecorationCategories.E_DecorationCategories
/////////////////////////////////////////////
enum class E_DecorationCategories : uint8_t {
	Default = 0,
	Shelves = 1,
	Lightning = 2,
	Trophies = 3,
	Reliefs = 4,
	Racks = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Segments.E_Segments
/////////////////////////////////////////////
enum class E_Segments : uint8_t {
	BuildingMode = 0,
	Building = 1,
	Next_Page = 2,
	Previous_Page = 3,
	FieldArea = 4,
	Fence = 5,
	Gate = 6,
	Orchard = 7,
	Furniture = 8,
	ModuleModification = 9,
	Road = 10,
	Exit = 11,
	None = 12,
	E_MAX = 13,
};
/////////////////////////////////////////////
// UserDefinedEnum E_TalentTrance.E_TalentTrance
/////////////////////////////////////////////
enum class E_TalentTrance : uint8_t {
	Woodcutter = 0,
	Miner = 1,
	Farmer = 2,
	Builder = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_CompassMarkerType.E_CompassMarkerType
/////////////////////////////////////////////
enum class E_CompassMarkerType : uint8_t {
	NPC = 0,
	Goal = 1,
	Furniture = 2,
	Home = 3,
	TalkAreaMarker = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BuildingsSortingType.E_BuildingsSortingType
/////////////////////////////////////////////
enum class E_BuildingsSortingType : uint8_t {
	NameIncreasing = 0,
	NameDecreasing = 1,
	ConditionIncreasing = 2,
	ConditionDecreasing = 3,
	PeopleIncreasing = 4,
	PeopleDecreasing = 5,
	TaxIncreasing = 6,
	TaxDecreasing = 7,
	StatusIncreasing = 8,
	StatusDecreasing = 9,
	E_MAX = 10,
};
/////////////////////////////////////////////
// UserDefinedEnum E_FieldsSortingType.E_FieldsSortingType
/////////////////////////////////////////////
enum class E_FieldsSortingType : uint8_t {
	NameIncreasing = 0,
	NameDecreasing = 1,
	WheatIncreasing = 2,
	WheatDecreasing = 3,
	RyeIncreasing = 4,
	RyeDecreasing = 5,
	OatIncreasing = 6,
	OatDecreasing = 7,
	FlaxIncreasing = 8,
	FlaxDecreasing = 9,
	BeetrootIncreasing = 10,
	BeetrootDecreasing = 11,
	OnionIncreasing = 12,
	OnionDecreasing = 13,
	CabbageIncreasing = 14,
	CabbageDecreasing = 15,
	CarrotIncreasing = 16,
	CarrotDecreasing = 17,
	PoppyIncreasing = 18,
	PoppyDecreasing = 19,
	AppleIncreasing = 20,
	AppleDecreasing = 21,
	PlumIncreasing = 22,
	PlumDecreasing = 23,
	PearIncreasing = 24,
	PearDecreasing = 25,
	CherryIncreasing = 26,
	CherryDecreasing = 27,
	HopsIncreasing = 28,
	HopsDecreasing = 29,
	TaxIncreasing = 30,
	TaxDecreasing = 31,
	StatusIncreasing = 32,
	StatusDecreasing = 33,
	E_MAX = 34,
};
/////////////////////////////////////////////
// UserDefinedEnum E_InhabitantsSortingType.E_InhabitantsSortingType
/////////////////////////////////////////////
enum class E_InhabitantsSortingType : uint8_t {
	NameIncreasing = 0,
	NameDecreasing = 1,
	AgeIncreasing = 2,
	AgeDecreasing = 3,
	MoodIncreasing = 4,
	MoodDecreasing = 5,
	ProfessionIncreasing = 6,
	ProfessionDecreasing = 7,
	ExtractionIncreasing = 8,
	ExtractionDecreasing = 9,
	HuntingIncreasing = 10,
	HuntingDecreasing = 11,
	FarmingIncreasing = 12,
	FarmingDecreasing = 13,
	DiplomacyIncreasing = 14,
	DiplomacyDecreasing = 15,
	SurvivalIncreasing = 16,
	SurvivalDecreasing = 17,
	ProductionIncreasing = 18,
	ProductionDecreasing = 19,
	StatusIncreasing = 20,
	StatusDecreasing = 21,
	E_MAX = 22,
};
/////////////////////////////////////////////
// UserDefinedEnum E_InventoryMainTab.E_InventoryMainTab
/////////////////////////////////////////////
enum class E_InventoryMainTab : uint8_t {
	Inventory = 0,
	Skills = 1,
	QuestLog = 2,
	Map = 3,
	Management = 4,
	Technology = 5,
	Knowledge = 6,
	E_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum E_InventorySortingType.E_InventorySortingType
/////////////////////////////////////////////
enum class E_InventorySortingType : uint8_t {
	NameIncreasing = 0,
	NameDecreasing = 1,
	CountIncreasing = 2,
	CountDecreasing = 3,
	ConditionIncreasing = 4,
	ConditionDecreasing = 5,
	WeightIncreasing = 6,
	WeightDecreasing = 7,
	PriceIncreasing = 8,
	PriceDecreasing = 9,
	E_MAX = 10,
};
/////////////////////////////////////////////
// UserDefinedEnum E_MapFilters.E_MapFilters
/////////////////////////////////////////////
enum class E_MapFilters : uint8_t {
	Main = 0,
	People = 1,
	Quest = 2,
	AllBuildings = 3,
	Houses = 4,
	Extraction = 5,
	Hunting = 6,
	Crops = 7,
	Animals = 8,
	Crafting = 9,
	Services = 10,
	Storages = 11,
	Traps = 12,
	AnimalSpawners = 13,
	E_MAX = 14,
};
/////////////////////////////////////////////
// UserDefinedEnum E_PeopleDemandSortingType.E_PeopleDemandSortingType
/////////////////////////////////////////////
enum class E_PeopleDemandSortingType : uint8_t {
	NameIncreasing = 0,
	NameDecreasing = 1,
	StoredIncreasing = 2,
	StoredDecreasing = 3,
	ValueIncreasing = 4,
	ValueDecreasing = 5,
	ConsumableIncreasing = 6,
	ConsumableDecreasing = 7,
	PriorityIncreasing = 8,
	PriorityDecreasing = 9,
	E_MAX = 10,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Challenge_PunishmentType.E_Challenge_PunishmentType
/////////////////////////////////////////////
enum class E_Challenge_PunishmentType : uint8_t {
	KingChange = 0,
	DynastyReputation = 1,
	E_Challenge_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Challenge_Type.E_Challenge_Type
/////////////////////////////////////////////
enum class E_Challenge_Type : uint8_t {
	Food = 0,
	People = 1,
	DeliverItems = 2,
	DeliverItems_Generic = 3,
	E_Challenge_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_MovementMode.E_MovementMode
/////////////////////////////////////////////
enum class E_MovementMode : uint8_t {
	None = 0,
	Grounded = 1,
	Falling = 2,
	Ragdoll = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_SortingUIType.E_SortingUIType
/////////////////////////////////////////////
enum class E_SortingUIType : uint8_t {
	InventoryTradingTransfer = 0,
	ManagementPeopleDemand = 1,
	ManagementInhabitants = 2,
	ManagementBuildings = 3,
	ManagementFields = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_UISliderType.E_UISliderType
/////////////////////////////////////////////
enum class E_UISliderType : uint8_t {
	Drop = 0,
	Transfer = 1,
	Sell = 2,
	Buy = 3,
	Crafting = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BuildingStatus.E_BuildingStatus
/////////////////////////////////////////////
enum class E_BuildingStatus : uint8_t {
	Built = 0,
	Unbuilt = 1,
	Built___Unbuilt = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_CardinalDirection.E_CardinalDirection
/////////////////////////////////////////////
enum class E_CardinalDirection : uint8_t {
	North = 0,
	East = 1,
	West = 2,
	South = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_RotationMode.E_RotationMode
/////////////////////////////////////////////
enum class E_RotationMode : uint8_t {
	VelocityDirection = 0,
	LookingDirection = 1,
	E_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BaseInteractionStages.E_BaseInteractionStages
/////////////////////////////////////////////
enum class E_BaseInteractionStages : uint8_t {
	Beginning_Stage = 0,
	Loop_Stage = 1,
	Ending_Stage = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Combat.E_Combat
/////////////////////////////////////////////
enum class E_Combat : uint8_t {
	Tension = 0,
	Combat = 1,
	E_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_NPC_BlackboardBoolean.E_NPC_BlackboardBoolean
/////////////////////////////////////////////
enum class E_NPC_BlackboardBoolean : uint8_t {
	Wait = 0,
	ChangeTask = 1,
	Find = 2,
	FindItem = 3,
	BuildingOccupied = 4,
	Marker = 5,
	Follow = 6,
	Bed = 7,
	WaitInHouse = 8,
	QuestBlocking = 9,
	RotateToPlayer = 10,
	IsLoadGame = 11,
	Optimization = 12,
	E_NPC_MAX = 13,
};
/////////////////////////////////////////////
// UserDefinedEnum E_NPC_BlackboardInt.E_NPC_BlackboardInt
/////////////////////////////////////////////
enum class E_NPC_BlackboardInt : uint8_t {
	ResourceNumber = 0,
	ResourceLimit = 1,
	E_NPC_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_NPC_BlackboardObject.E_NPC_BlackboardObject
/////////////////////////////////////////////
enum class E_NPC_BlackboardObject : uint8_t {
	Player = 0,
	Animal = 1,
	Item = 2,
	TargetActor = 3,
	Furniture = 4,
	E_NPC_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_NPC_BlackboardVector.E_NPC_BlackboardVector
/////////////////////////////////////////////
enum class E_NPC_BlackboardVector : uint8_t {
	TargetLocation = 0,
	LastLocation = 1,
	LookAtTarget = 2,
	WorkRadius = 3,
	RotationPoint = 4,
	E_NPC_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_InputMode.E_InputMode
/////////////////////////////////////////////
enum class E_InputMode : uint8_t {
	Player = 0,
	FreeCamera = 1,
	Horse = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_HandsForHolstering.E_HandsForHolstering
/////////////////////////////////////////////
enum class E_HandsForHolstering : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_IdleEntryState.E_IdleEntryState
/////////////////////////////////////////////
enum class E_IdleEntryState : uint8_t {
	N_Idle = 0,
	LF_Idle = 1,
	RF_Idle = 2,
	CLF_Idle = 3,
	CRF_Idle = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_MountAnimType.E_MountAnimType
/////////////////////////////////////////////
enum class E_MountAnimType : uint8_t {
	Mounting = 0,
	Dismounting = 1,
	SeatChange = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_NotifyObject.E_NotifyObject
/////////////////////////////////////////////
enum class E_NotifyObject : uint8_t {
	None = 0,
	MainHand = 1,
	OffHand = 2,
	Workbench = 3,
	Character = 4,
	Other = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_MovementDirection.E_MovementDirection
/////////////////////////////////////////////
enum class E_MovementDirection : uint8_t {
	Forwards = 0,
	Backwards = 1,
	E_MAX = 2,
};
/////////////////////////////////////////////
// UserDefinedEnum E_LookAtOptions.E_LookAtOptions
/////////////////////////////////////////////
enum class E_LookAtOptions : uint8_t {
	NoLookAt = 0,
	LookAtWithPitch = 1,
	LookAtWithPlayersPitch = 2,
	LookAtWithResetPitch = 3,
	E_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_BlinkParameters.E_BlinkParameters
/////////////////////////////////////////////
enum class E_BlinkParameters : uint8_t {
	Food = 0,
	Water = 1,
	Poison = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Effects.E_Effects
/////////////////////////////////////////////
enum class E_Effects : uint8_t {
	Unpoison = 0,
	MoreWeight = 1,
	MoreDamage = 2,
	AnimalRepel = 3,
	BetterTemperature = 4,
	NightVision = 5,
	SlowerWaterDrop = 6,
	SlowerHungerDrop = 7,
	SlowerStaminaDrop = 8,
	MoreHP = 9,
	TimeHeal = 10,
	E_MAX = 11,
};
/////////////////////////////////////////////
// UserDefinedEnum E_DamageType.E_DamageType
/////////////////////////////////////////////
enum class E_DamageType : uint8_t {
	Hit = 0,
	Fall = 1,
	NoWater = 2,
	NoFood = 3,
	Poison = 4,
	Overheating = 5,
	Cold = 6,
	E_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum E_InventoryOwnerType.E_InventoryOwnerType
/////////////////////////////////////////////
enum class E_InventoryOwnerType : uint8_t {
	None = 0,
	Human = 1,
	Chest = 2,
	Shop = 3,
	Building = 4,
	Composter = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Cutscenes.E_Cutscenes
/////////////////////////////////////////////
enum class E_Cutscenes : uint8_t {
	Intro = 0,
	HeirBorn = 1,
	Wedding = 2,
	DeathNegative = 3,
	DeathPositive = 4,
	ExileNegative = 5,
	ExilePositive = 6,
	E_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum E_SignPlateNewVariants.E_SignPlateNewVariants
/////////////////////////////////////////////
enum class E_SignPlateNewVariants : uint8_t {
	Left_A = 0,
	Left_B = 1,
	Left_C = 2,
	Left_D = 3,
	Right_A = 4,
	Right_B = 5,
	Right_C = 6,
	Right_D = 7,
	Neutral_A = 8,
	Neutral_B = 9,
	Neutral_C = 10,
	Neutral_D = 11,
	E_MAX = 12,
};
/////////////////////////////////////////////
// UserDefinedEnum E_SignName.E_SignName
/////////////////////////////////////////////
enum class E_SignName : uint8_t {
	Lesnica = 0,
	Branica = 1,
	Baranica = 2,
	Borowo = 3,
	Rolnica = 4,
	Gostovia = 5,
	Denica = 6,
	Jezerica = 7,
	Hornica = 8,
	Tutki = 9,
	E_MAX = 10,
};
/////////////////////////////////////////////
// UserDefinedEnum E_Switch_Method.E_Switch_Method
/////////////////////////////////////////////
enum class E_Switch_Method : uint8_t {
	Fade_out___Fade_In = 0,
	Cross_Fade = 1,
	Instant = 2,
	Instant_With_stinger_effect_ = 3,
	E_Switch_MAX = 4,
};
/////////////////////////////////////////////
// UserDefinedEnum E_FootstepType.E_FootstepType
/////////////////////////////////////////////
enum class E_FootstepType : uint8_t {
	Step = 0,
	Walk = 1,
	Run = 2,
	Sprint = 3,
	Pivot = 4,
	Jump = 5,
	Land = 6,
	E_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum E_SittingPoseMale.E_SittingPoseMale
/////////////////////////////////////////////
enum class E_SittingPoseMale : uint8_t {
	Base = 0,
	CrossedLegs_L = 1,
	CrossedLegs_R = 2,
	Outstretched_L = 3,
	Outstretched_R = 4,
	SlightlyAngled_L = 5,
	SlightlyAngled_R = 6,
	E_MAX = 7,
};
/////////////////////////////////////////////
// UserDefinedEnum E_LocomotionState.E_LocomotionState
/////////////////////////////////////////////
enum class E_LocomotionState : uint8_t {
	None = 0,
	NotMoving = 1,
	Moving = 2,
	Pivot = 3,
	Stopping = 4,
	E_MAX = 5,
};
/////////////////////////////////////////////
// UserDefinedEnum E_CarriableItemType.E_CarriableItemType
/////////////////////////////////////////////
enum class E_CarriableItemType : uint8_t {
	None = 0,
	Log = 1,
	Rock = 2,
	E_MAX = 3,
};
/////////////////////////////////////////////
// UserDefinedEnum E_SittingPoseFemale.E_SittingPoseFemale
/////////////////////////////////////////////
enum class E_SittingPoseFemale : uint8_t {
	Base = 0,
	Outstretched = 1,
	Side_L = 2,
	Side_R = 3,
	SlightlyAngled_L = 4,
	SlightlyAngled_R = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_SittingPoseBoy.E_SittingPoseBoy
/////////////////////////////////////////////
enum class E_SittingPoseBoy : uint8_t {
	Base = 0,
	CrossedLegs_L = 1,
	CrossedLegs_R = 2,
	SlightlyAngled_L = 3,
	SlightlyAngled_R = 4,
	Swing = 5,
	E_MAX = 6,
};
/////////////////////////////////////////////
// UserDefinedEnum E_SittingPoseGirl.E_SittingPoseGirl
/////////////////////////////////////////////
enum class E_SittingPoseGirl : uint8_t {
	Base = 0,
	Outstreched = 1,
	Side_L = 2,
	Side_R = 3,
	Swing = 4,
	E_MAX = 5,
};
};
