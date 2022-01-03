#include <iostream>
#include <GL/glew.h>
#include <SFML/Graphics.hpp>

const GLint WIDTH = 800, HEIGHT = 600;
int main() {
	sf::ContextSettings settings;
	settings.depthBits = 24;
	settings.stencilBits = 8;
	settings.majorVersion = 3;
	settings.minorVersion = 3;
	settings.attributeFlags = sf::ContextSettings::Core;
	sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "OpenGL SFML", 
		sf::Style::Titlebar | sf::Style::Close, settings);

	glewExperimental = GL_TRUE;

	if (GLEW_OK != glewInit()) {
		std::cout << "Failed to initialize GLEW" << std::endl;
		return EXIT_FAILURE;
	}

	bool running = true;

	while (running) {
		sf::Event windowEvent;
		while (window.pollEvent(windowEvent)) {
			switch (windowEvent.type) {
			case sf::Event::Closed:
				running = false;
				break;
			}
		}

		glClearColor(.2f, .3f, .3f, 1.f);
		glClear(GL_COLOR_BUFFER_BIT);

		// draw opengl

		window.display();
	}

	window.close();
	return EXIT_SUCCESS;
}