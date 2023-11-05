#include "Matrices.h"

// MATRIX 3
EngineMath::Matrix3::Matrix3()
{
	_a1 = 0.0f, _a2 = 0.0f, _a3 = 0.0f;
	_b1 = 0.0f, _b2 = 0.0f, _b3 = 0.0f;
	_c1 = 0.0f, _c2 = 0.0f, _c3 = 0.0f;
}

EngineMath::Matrix3::Matrix3(float A1, float A2, float A3, float B1, float B2, float B3, float C1, float C2, float C3)
{
	_a1 = A1, _a2 = A2, _a3 = A3;
	_b1 = B1, _b2 = B2, _b3 = B3;
	_c1 = C1, _c2 = C2, _c3 = C3;
}

EngineMath::Matrix3 EngineMath::Matrix3::operator+(Matrix3 rhs)
{
	return EngineMath::Matrix3(this->_a1 + rhs._a1, this->_a2 + rhs._a2, this->_a3 + rhs._a3,
							   this->_b1 + rhs._b1, this->_b2 + rhs._b2, this->_b3 + rhs._b3,
							   this->_c1 + rhs._c1, this->_c2 + rhs._c2, this->_c3 + rhs._c3);
}

EngineMath::Matrix3 EngineMath::Matrix3::operator-(Matrix3 rhs)
{
	return EngineMath::Matrix3(this->_a1 - rhs._a1, this->_a2 - rhs._a2, this->_a3 - rhs._a3,
							   this->_b1 - rhs._b1, this->_b2 - rhs._b2, this->_b3 - rhs._b3,
							   this->_c1 - rhs._c1, this->_c2 - rhs._c2, this->_c3 - rhs._c3);
}

EngineMath::Matrix3 EngineMath::Matrix3::operator*(Matrix3 rhs)
{
	float a1 = (this->_a1 * rhs._a1) + (this->_a2 * rhs._b1) + (this->_a3 * rhs._c1);//Column 1
	float a2 = (this->_a1 * rhs._a2) + (this->_a2 * rhs._b2) + (this->_a3 * rhs._c2); //Column 2
	float a3 = (this->_a1 * rhs._a3) + (this->_a2 * rhs._b3) + (this->_a3 * rhs._c3); //Column 3

	float b1 = (this->_b1 * rhs._a1) + (this->_b2 * rhs._b1) + (this->_b3 * rhs._c1);//Column 1
	float b2 = (this->_b1 * rhs._a2) + (this->_b2 * rhs._b2) + (this->_b3 * rhs._c2); //Column 2
	float b3 = (this->_b1 * rhs._a3) + (this->_b2 * rhs._b3) + (this->_b3 * rhs._c3); //Column 3

	float c1 = (this->_c1 * rhs._a1) + (this->_c2 * rhs._b1) + (this->_c3 * rhs._c1);//Column 1
	float c2 = (this->_c1 * rhs._a2) + (this->_c2 * rhs._b2) + (this->_c3 * rhs._c2); //Column 2
	float c3 = (this->_c1 * rhs._a3) + (this->_c2 * rhs._b3) + (this->_c3 * rhs._c3); //Column 3

	return EngineMath::Matrix3(a1, a2, a3,
							   b1, b2, b3,
							   c1, c2, c3);
}

//MATRIX 4

EngineMath::Matrix4::Matrix4()
{
	_a1 = 0.0f, _a2 = 0.0f, _a3 = 0.0f, _a4 = 0.0f;
	_b1 = 0.0f, _b2 = 0.0f, _b3 = 0.0f, _b4 = 0.0f;
	_c1 = 0.0f, _c2 = 0.0f, _c3 = 0.0f, _c4 = 0.0f;
	_d1 = 0.0f, _d2 = 0.0f, _d3 = 0.0f, _d4 = 0.0f;
}

EngineMath::Matrix4::Matrix4(float A1, float A2, float A3, float A4, float B1, float B2, float B3, float B4, float C1, float C2, float C3, float C4, float D1, float D2, float D3, float D4)
{
	_a1 = A1, _a2 = A2, _a3 = A3, _a4 = A4;
	_b1 = B1, _b2 = B2, _b3 = B3, _b4 = B4;
	_c1 = C1, _c2 = C2, _c3 = C3, _c4 = C4;
	_d1 = D1, _d2 = D2, _d3 = D3, _d4 = D4;
}

EngineMath::Matrix4 EngineMath::Matrix4::operator+(EngineMath::Matrix4 rhs)
{
	return EngineMath::Matrix4(this->_a1 + rhs._a1, this->_a2 + rhs._a2, this->_a3 + rhs._a3, this->_a4 + rhs._a4,
							   this->_b1 + rhs._b1, this->_b2 + rhs._b2, this->_b3 + rhs._b3, this->_b4 + rhs._a4,
							   this->_c1 + rhs._c1, this->_c2 + rhs._c2, this->_c3 + rhs._c3, this->_c4 + rhs._c4,
							   this->_d1 + rhs._d1, this->_d2 + rhs._d2, this->_d3 + rhs._d3, this->_d4 + rhs._d4);
}

EngineMath::Matrix4 EngineMath::Matrix4::operator-(EngineMath::Matrix4 rhs)
{
	return EngineMath::Matrix4(this->_a1 - rhs._a1, this->_a2 - rhs._a2, this->_a3 - rhs._a3, this->_a4 - rhs._a4,
							   this->_b1 - rhs._b1, this->_b2 - rhs._b2, this->_b3 - rhs._b3, this->_b4 - rhs._a4,
		                       this->_c1 - rhs._c1, this->_c2 - rhs._c2, this->_c3 - rhs._c3, this->_c4 - rhs._c4,
							   this->_d1 - rhs._d1, this->_d2 - rhs._d2, this->_d3 - rhs._d3, this->_d4 - rhs._d4);
}

EngineMath::Matrix4 EngineMath::Matrix4::operator*(EngineMath::Matrix4 rhs)
{
	float a1 = (this->_a1 * rhs._a1) + (this->_a2 * rhs._b1) + (this->_a3 * rhs._c1) + (this->_a4 * rhs._d1); //Column 1
	float a2 = (this->_a1 * rhs._a2) + (this->_a2 * rhs._b2) + (this->_a3 * rhs._c2) + (this->_a4 * rhs._d2); //Column 2
	float a3 = (this->_a1 * rhs._a3) + (this->_a2 * rhs._b3) + (this->_a3 * rhs._c3) + (this->_a4 * rhs._d3); //Column 3
	float a4 = (this->_a1 * rhs._a4) + (this->_a2 * rhs._b4) + (this->_a3 * rhs._c4) + (this->_a4 * rhs._d4); //Column 4

	float b1 = (this->_b1 * rhs._a1) + (this->_b2 * rhs._b1) + (this->_b3 * rhs._c1) + (this->_b4 * rhs._d1); //Column 1
	float b2 = (this->_b1 * rhs._a2) + (this->_b2 * rhs._b2) + (this->_b3 * rhs._c2) + (this->_b4 * rhs._d2); //Column 2
	float b3 = (this->_b1 * rhs._a3) + (this->_b2 * rhs._b3) + (this->_b3 * rhs._c3) + (this->_b4 * rhs._d3); //Column 3
	float b4 = (this->_b1 * rhs._a4) + (this->_b2 * rhs._b4) + (this->_b3 * rhs._c4) + (this->_b4 * rhs._d4); //Column 4

	float c1 = (this->_c1 * rhs._a1) + (this->_c2 * rhs._b1) + (this->_c3 * rhs._c1) + (this->_c4 * rhs._d1); //Column 1
	float c2 = (this->_c1 * rhs._a2) + (this->_c2 * rhs._b2) + (this->_c3 * rhs._c2) + (this->_c4 * rhs._d2); //Column 2
	float c3 = (this->_c1 * rhs._a3) + (this->_c2 * rhs._b3) + (this->_c3 * rhs._c3) + (this->_c4 * rhs._d3); //Column 3
	float c4 = (this->_c1 * rhs._a4) + (this->_c2 * rhs._b4) + (this->_c3 * rhs._c4) + (this->_c4 * rhs._d4); //Column 4

	float d1 = (this->_d1 * rhs._a1) + (this->_d2 * rhs._b1) + (this->_d3 * rhs._c1) + (this->_d4 * rhs._d1); //Column 1
	float d2 = (this->_d1 * rhs._a2) + (this->_d2 * rhs._b2) + (this->_d3 * rhs._c2) + (this->_d4 * rhs._d2); //Column 2
	float d3 = (this->_d1 * rhs._a3) + (this->_d2 * rhs._b3) + (this->_d3 * rhs._c3) + (this->_d4 * rhs._d3); //Column 3
	float d4 = (this->_d1 * rhs._a4) + (this->_d2 * rhs._b4) + (this->_d3 * rhs._c4) + (this->_d4 * rhs._d4); //Column 4

	return EngineMath::Matrix4(a1, a2, a3, a4,
							   b1, b2, b3, b4,
							   c1, c2, c3, c4,
							   d1, d2, d3, c4);
}
