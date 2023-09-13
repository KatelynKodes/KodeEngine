#include "Window.h"
#include <GLFW/glfw3.h>

Window::Window()
{

};

void Window::createWindow(int width, int height, const char* name, GLFWmonitor* monitor, GLFWwindow* share)
{
	_window = glfwCreateWindow(width, height, name, monitor, share);
	glfwMakeContextCurrent(_window);
	glViewport(0, 0, width, height);
}
