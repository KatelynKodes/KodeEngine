#include "Engine.h"
#include "Window.h"
#include "Vector.h"
#include "Text.h"

Engine::Engine()
{
	_isRunning = true;
}

void Engine::run()
{
	Window* window = new Window();
	glfwInit();
	window->createWindow();

	while (!glfwWindowShouldClose(window->getWindow()) && _isRunning)
	{
		glfwSwapBuffers(window->getWindow());
		glfwPollEvents();
		Text testText = Text();
	}

	glfwTerminate();
}

void Engine::onDraw()
{
}
