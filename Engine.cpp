#include "Engine.h"
#include "Window.h"
#include "Vector.h"
#include "Text.h"

Engine::Engine()
{
	_isRunning = true;
}

void Engine::Run()
{
	Window* window = new Window();
	glfwInit();
	window->createWindow();

	//Run start first
	Start();

	while (!glfwWindowShouldClose(window->getWindow()) && _isRunning)
	{
		glfwSwapBuffers(window->getWindow());
		glfwPollEvents();
	}

	glfwTerminate();
}

void Engine::Start()
{
	Text testText = Text("arial");
}
