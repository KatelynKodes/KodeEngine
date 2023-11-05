#pragma once

namespace EngineMath
{
	struct Matrix3
	{
	public:
		Matrix3();
		Matrix3(float A1, float A2, float A3,
				float B1, float B2, float B3,
				float C1, float C2, float C3);

		static Matrix3 Identity() {
			return Matrix3(1, 0, 0,
						   0, 1, 0,
						   0, 0, 1);
		}

		EngineMath::Matrix3 operator +(Matrix3 rhs);
		EngineMath::Matrix3 operator -(Matrix3 rhs);
		EngineMath::Matrix3 operator *(Matrix3 rhs);

	protected:
		float _a1, _a2, _a3,
			  _b1, _b2, _b3,
			  _c1, _c2, _c3;
	};

	struct Matrix4
	{
	public:
		Matrix4();
		Matrix4(float A1, float A2, float A3, float A4,
				float B1, float B2, float B3, float B4,
				float C1, float C2, float C3, float C4,
				float D1, float D2, float D3, float D4);

		static EngineMath::Matrix4 Identity() {
			return EngineMath::Matrix4(1, 0, 0, 0,
						   0, 1, 0, 0,
						   0, 0, 1, 0,
						   0, 0, 0, 1);
		}

		EngineMath::Matrix4 operator+(EngineMath::Matrix4 rhs);
		EngineMath::Matrix4 operator-(EngineMath::Matrix4 rhs);
		EngineMath::Matrix4 operator*(EngineMath::Matrix4 rhs);


	private:
		float _a1, _a2, _a3, _a4, 
			  _b1, _b2, _b3, _b4, 
			  _c1, _c2, _c3, _c4,
			  _d1, _d2, _d3, _d4;
	};
}