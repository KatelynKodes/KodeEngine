#pragma once
#include "Vector.h"
#include "GLFW/glfw3.h"

class Kolor : Vector4
{
public:
	//Constructors
	Kolor() { _colorValue = new Vector4(0, 0, 0, 255); }
	Kolor(int R, int G, int B, int A);

	/*Return the color as RGB instead of RGBA*/
	Vector3 RGB() { return Vector3(_colorValue->getX(), _colorValue->getY(), _colorValue->getZ()); }

	/*Set the red value to an integer*/
	void SetRValue(int redValue);
	/*Set the green value to an integer*/
	void SetGValue(int greenValue);
	/*Set the blue value to an integer*/
	void SetBValue(int blueValue);
	/*Set the alpha value to an integer*/
	void SetAValue(int alphaValue);

private:
	Vector4* _colorValue;
};