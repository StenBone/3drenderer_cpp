#pragma once
#include <unordered_map>
#include "InputCode.hpp"
namespace bengine {
	// ties input from keyboard and mouse to events
	// Ex: input_man.bind_event(Key.SPACE, [&player]() { player.jump(); });
	template <class EventFunctionPtr>
	class InputManager {
	private:
		//typedef void (*EventFunction) ();
		std::unordered_map<InputCode, EventFunctionPtr> bound_inputs;
	};
}