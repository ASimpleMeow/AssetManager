#include "Game.hpp"

int main(int argc, char** ){
	// Program entry point.
	Game game;
	while(!game.getWindow()->isDone()){
		game.handleInput();
		game.update();
		game.render();
		game.restartClock();
	}
	ImGui::SFML::Shutdown();
}