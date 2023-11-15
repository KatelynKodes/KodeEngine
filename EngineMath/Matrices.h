#pragma once
#include "Vector.h"

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

		EngineMath::Matrix3 createTranslation(EngineMath::Vector2 position);
		EngineMath::Matrix3 createTranslation(float x, float y); //Override

		EngineMath::Matrix3 createScale(EngineMath::Vector2 scale);
		EngineMath::Matrix3 createScale(float x, float y); //Override

		EngineMath::Matrix3 createRotation(float radians);

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

		/// <summary>
		/// Returns a translated version of the matrix
		/// </summary>
		/// <param name="Translation"> A vector 3 holding the values which the matrix will be translated by</param>
		/// <returns>Matrix 4</returns>
		EngineMath::Matrix4 createTranslation(EngineMath::Vector3 Translation);
		EngineMath::Matrix4 createTranslation(float x, float y, float z); //Overload

		/// <summary>
		/// Returns a scaled version of the current matrix
		/// </summary>
		/// <param name="scale"> A Vector 3 holding the values the matrix will be scaled by</param>
		/// <returns>Matrix 4</returns>
		EngineMath::Matrix4 createScale(EngineMath::Vector3 scale);
		EngineMath::Matrix4 createScale(float x, float y, float z); //Overload


		EngineMath::Matrix4 createRotationX(float radians);
		EngineMath::Matrix4 createRotationY(float radians);
		EngineMath::Matrix4 createRotationZ(float radians);

	private:
		float _a1, _a2, _a3, _a4, 
			  _b1, _b2, _b3, _b4, 
			  _c1, _c2, _c3, _c4,
			  _d1, _d2, _d3, _d4;
	};
}