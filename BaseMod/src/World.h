#pragma once
#include "Defs.h"


namespace MDMLBase {

	class BASEMOD_API ActorList {
	public:
		ActorList() {}
		ActorList(std::initializer_list<UE4::AActor*> list):m_actors(list) {}
		ActorList(std::vector<UE4::AActor*>::iterator begin, std::vector<UE4::AActor*>::iterator end) :m_actors(begin ,end) {}
		ActorList(const std::vector<UE4::AActor*>& a):m_actors(a) {}
		~ActorList(){}

		size_t getLength() const { return m_actors.size(); }
		size_t getSize()  const { return m_actors.size(); }
		size_t getCount()  const { return m_actors.size(); }

		std::vector<UE4::AActor*>& getList() { return m_actors; }
		const std::vector<UE4::AActor*>& getList() const { return m_actors; }

		std::vector<UE4::AActor*>::iterator begin() { return m_actors.begin(); }
		std::vector<UE4::AActor*>::iterator end() { return m_actors.end(); }

		UE4::AActor* operator [] (uint32_t i) const { return m_actors[i]; }
		UE4::AActor*& operator [] (uint32_t i) { return m_actors[i]; }
		UE4::AActor* operator [] (int32_t i) const { return m_actors[i]; }
		UE4::AActor*& operator [] (int32_t i) { return m_actors[i]; }
		UE4::AActor* operator [] (uint64_t i) const { return m_actors[i]; }
		UE4::AActor*& operator [] (uint64_t i) { return m_actors[i]; }
		UE4::AActor* operator [] (int64_t i) const { return m_actors[i]; }
		UE4::AActor*& operator [] (int64_t i) { return m_actors[i]; }

		static ActorList GetAllActors();
	private:
		std::vector<UE4::AActor*> m_actors;
	};

	class BASEMOD_API World {
	public:
		World();
		~World();
		static Ref<World> Create();

		ActorList& getActors() { return m_actors; }

		//Reloads actors
		void Update();
	private:
		ActorList m_actors;
	};
}