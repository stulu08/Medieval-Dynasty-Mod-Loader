#pragma once
#include "CoreUObject/CoreTypes.h"


namespace UE4 {
#pragma region Enums
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
#pragma endregion

#pragma region Structs
#pragma endregion
}