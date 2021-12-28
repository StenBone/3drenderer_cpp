#pragma once
namespace bengine {
	class Renderer {
		// todo scene plugs into renderer, const reference
	public:
		virtual ~Renderer() {}
		virtual void Draw();
	};
}