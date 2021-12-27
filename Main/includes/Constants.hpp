#pragma once
#include <SFML/Graphics.hpp>
#include <string>

const std::string WINDOW_NAME{ "3drenderer" };
const unsigned int SCREEN_WIDTH = 800;
const unsigned int SCREEN_HEIGHT = 600;
const sf::Vector2f SCREEN_CENTER(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
const sf::Color BACKGROUND_COLOR = sf::Color::Black;