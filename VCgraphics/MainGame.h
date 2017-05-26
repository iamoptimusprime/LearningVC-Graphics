#pragma once

#include <SDL/SDL.h>
#include <GL/glew.h>

enum class GameState {PLAY, EXIT};

class MainGame
{
public:
	MainGame();
	~MainGame();

	void run();

private:
	void initSystem();
	void gameLoop();
	void processInput();
	void drawGame();

	SDL_Window* _window;
	int _screenWidth, _screenHeight;
	GameState _gameState;
};

