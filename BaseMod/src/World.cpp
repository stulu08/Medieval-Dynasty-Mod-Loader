#include "World.h"

namespace MDMLBase {
	World::World() {
		m_actors = ActorList::GetAllActors();
	}

	World::~World() {

	}

	Ref<World> World::Create() {
		return createRef<World>();
	}

	void World::Update() {
		m_actors = ActorList::GetAllActors();
	}


	ActorList ActorList::GetAllActors() {
		return ActorList(UE4::UObject::GetAllObjectsOfType<UE4::AActor>(UE4::AActor::StaticClass(), true));
	}

	

}