#pragma once

namespace EngineMath
{
	class Matrix3
	{
	public:
		Matrix3();
		Matrix3(float A1, float A2, float A3,
				float B1, float B2, float B3,
				float C1, float C2, float C3);
	protected:
		float _a1, _a2, _a3,
			  _b1, _b2, _b3,
			  _c1, _c2, _c3;
	};

	class Matrix4 : EngineMath:: Matrix3
	{
	public:
		Matrix4();
		Matrix4(float A1, float A2, float A3, float A4,
				float B1, float B2, float B3, float B4,
				float C1, float C2, float C3, float C4,
				float D1, float D2, float D3, float D4);
	private:
		float _a4, _b4, _c4,
			  _d1, _d2, _d3, _d4;
	};
}