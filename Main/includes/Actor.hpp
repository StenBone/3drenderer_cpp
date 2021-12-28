#pragma once
#include "SFML/Graphics.hpp"

namespace bengine {
	class Actor : sf::Drawable, sf::Transformable {
	public:
		virtual ~Actor() {}
	};
}