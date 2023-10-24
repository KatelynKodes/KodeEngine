#pragma once

namespace EngineMath
{
	struct Matrix3
	{
	public:
		Matrix3();
		Matrix3(float a1, float a2, float a3,
				float b1, float b2, float b3,
				float c1, float c2, float c3);
	protected:
		float _a1, _a2, _a3,
			  _b1, _b2, _b3,
			  _c1, _c2, _c3;
	};

	struct Matrix4 : EngineMath :: Matrix3
	{
	public:
		Matrix4();
		Matrix4(float a1, float a2, float a3, float a4,
				float b1, float b2, float b3, float b4,
				float c1, float c2, float c3, float c4,
				float d1, float d2, float d3, float d4);
	private:
		float _d1, _d2, _d3, d4;
	};
}