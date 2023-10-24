#include "Matricies.h"


EngineMath::Matrix3::Matrix3()
{
	//set all parameters of Z axis to 0
	_a1 = 0.0f, _a2 = 0.0f, _a3 = 0.0f;

	//set all parameters of Y axis to 0
	_b1 = 0.0f, _b2 = 0.0f, _b3 = 0.0f;

	//set all parameters of Z axis to 0
	_c1 = 0.0f, _c2 = 0.0f, _c3 = 0.0f;
}

EngineMath::Matrix3::Matrix3(float a1, float a2, float a3, float b1, float b2, float b3, float c1, float c2, float c3)
{
	//set all parameters of Z axis
	_a1 = a1, _a2 = a2, _a3 = a3;

	//set all parameters of Y axis
	_b1 = b1, _b2 = b2, _b3 = b3;

	//set all parameters of Z axis
	_c1 = c1, _c2 = c2, _c3 = c3;
}
