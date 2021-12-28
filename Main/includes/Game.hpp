#pragma once
#include "SFML/Graphics.hpp"
#include "Renderer.hpp"

namespace bengine {
	class Game {
	public:
		virtual ~Game() {}
	protected:
		sf::Clock clock{};
		sf::Time delta_time{};
		Renderer renderer;

		virtual void Update();
	};
}