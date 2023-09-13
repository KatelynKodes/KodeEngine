#pragma once
#include <GLFW/glfw3.h>

class Window 
{
public:
	Window();
	void createWindow(int width, int height, const char* name = "Window", GLFWmonitor* monitor = NULL, GLFWwindow* share = NULL);
	GLFWwindow* getWindow() { return _window; }
private:
	GLFWwindow* _window;
};