#pragma once
#include "SFML/Graphics.hpp"
#include "InputManager.hpp"
#include "Renderer.hpp"

namespace bengine {
	// glues everything together.
	class Game {
	public:
		virtual ~Game() {}
	protected:
		sf::Clock clock{};
		sf::Time delta_time{};
		Renderer renderer;
		// todo InputManager input_man;

		virtual void Update();
	};
}