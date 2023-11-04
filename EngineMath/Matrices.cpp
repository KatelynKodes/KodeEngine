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
