#include "Engine.h"
#include "Window.h"
#include "Vector.h"

Engine::Engine()
{
	_isRunning = true;
}

void Engine::run()
{
	Window* window = new Window();
	glfwInit();
	window->createWindow(500, 500);

	while (!glfwWindowShouldClose(window->getWindow()) && _isRunning)
	{
		glfwSwapBuffers(window->getWindow());
		glfwPollEvents();
	}

	glfwTerminate();
}

void Engine::onDraw()
{
}
