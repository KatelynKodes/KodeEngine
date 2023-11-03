#pragma once
#include <GLFW/glfw3.h>

class Window 
{
public:
	Window();
	Window(int width, int height, const char* name = "Window", GLFWmonitor* monitor = NULL, GLFWwindow* share = NULL);
	//Window(Vector2 size, const char* name = "Window", GLFWmonitor* monitor = NULL, GLFWwindow* share = NULL);
	GLFWwindow* getWindow() { return _window; }
	void createWindow();

private:
	void createViewport();

private:
	GLFWwindow* _window;
	int _width;
	int _height;
	const char* _windowName;
	GLFWmonitor* _monitor;
	GLFWwindow* _sharedWindow;
};