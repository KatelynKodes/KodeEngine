#include "Window.h"
#include <GLFW/glfw3.h>

Window::Window()
{
	_width = 500;
	_height = 500;
	_windowName = "Window";
	_monitor = NULL;
	_sharedWindow = NULL;
};

Window::Window(int width, int height, const char* name, GLFWmonitor* monitor, GLFWwindow* share)
{
	_width = width;
	_height = height;
	_windowName = name;
	_monitor = monitor;
	_sharedWindow = share;
}

Window::Window(EngineMath::Vector2 size, const char* name, GLFWmonitor* monitor, GLFWwindow* share)
{
	_width = size.getXInt();
	_height = size.getYInt();
	_windowName = name;
	_monitor = monitor;
	_sharedWindow = share;
}

void Window::createWindow()
{
	_window = glfwCreateWindow(_width, _height, _windowName, _monitor, _sharedWindow);
	glfwMakeContextCurrent(_window);
	createViewport();
}

void Window::createViewport()
{
	glViewport(0, 0, _width, _height);
}
