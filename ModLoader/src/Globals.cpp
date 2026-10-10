#include "Core.h"
#include "Globals.h"
#include "GameInfo.h"

GameProfile SDK::SelectedGameProfile;

Global* Global::glb = nullptr;

Global* Global::GetGlobals()
{
	if (!glb)
	{
		glb = new Global();
	}
	return glb;
}