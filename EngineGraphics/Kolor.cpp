#include "Kolor.h"
#include "EngineMath/Vector.h"

Kolor::Kolor(int R, int G, int B, int A)
{
	_colorValue = new Vector4(0, 0, 0, 0);
	SetRValue(R);
	SetGValue(G);
	SetBValue(B);
	SetAValue(A);
}

void Kolor::SetRValue(int redValue)
{
	if (redValue < 0)
	{
		redValue = 0;
		_colorValue->setX(redValue);
	}
	else if (redValue > 255)
	{
		redValue = 255;
		_colorValue->setX(redValue);
	}
	else
	{
		_colorValue->setX(redValue);
	}
}

void Kolor::SetGValue(int greenValue)
{
	if (greenValue < 0)
	{
		greenValue = 0;
		_colorValue->setY(greenValue);
	}
	else if (greenValue > 255)
	{
		greenValue = 255;
		_colorValue->setY(greenValue);
	}
	else
	{
		_colorValue->setY(greenValue);
	}
}

void Kolor::SetBValue(int blueValue)
{
	if (blueValue < 0)
	{
		blueValue = 0;
		_colorValue->setZ(blueValue);
	}
	else if (blueValue > 255)
	{
		blueValue = 255;
		_colorValue->setZ(blueValue);
	}
	else
	{
		_colorValue->setZ(blueValue);
	}
}

void Kolor::SetAValue(int alphaValue)
{
	if (alphaValue < 0)
	{
		alphaValue = 0;
		_colorValue->setW(alphaValue);
	}
	else if (alphaValue > 255)
	{
		alphaValue = 255;
		_colorValue->setW(alphaValue);
	}
	else
	{
		_colorValue->setW(alphaValue);
	}
}
