#pragma once
#include "pch.h"
#include <GUID.hpp>
#include "Actor.hpp"
namespace bengine {
	// container of Actors
	class Scene {
	public:
		virtual ~Scene() {}
		// todo add actor
		// todo get actors

	private:
		// std::unordered_map<GUID, Actor> actors; todo won't compile
	};
}