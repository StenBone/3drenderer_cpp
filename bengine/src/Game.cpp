#include "Game.hpp"

void bengine::Game::Update()
{
	delta_time = clock.restart();
	// EVENTS, INPUT AND WINDOWS
	// GAME LOGIC UPDATE
	// RENDER UPDATE
	renderer.Draw();
}
