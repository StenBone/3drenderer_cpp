#pragma once
#include <map>
#include <GUID.hpp>
#include "Actor.hpp"
namespace bengine {
	class Scene {
	public:
		virtual ~Scene() {}
		// todo add actor
		//todo get actors

	private:
		std::multimap<GUID, Actor> actors;
	};
}