#pragma once
namespace EngineMath
{
	struct Vector2
	{
	public:
		//Constructors
		Vector2() { _x = 0.0f, _y = 0.0f; }
		Vector2(float X, float Y) { _x = X, _y = Y; }
		Vector2(int X, int Y) { _x = X, _y = Y; }
		Vector2(double X, double Y) { _x = X, _y = Y; }
		Vector2(unsigned int X, unsigned int Y) { _x = X, _y = Y; }

		//Setters
		void setX(float XValue) { _x = XValue; }
		void setX(int XValue) { _x = XValue; }
		void setX(double XValue) { _x = XValue; }

		void setY(float YValue) { _y = YValue; }
		void setY(int YValue) { _y = YValue; }
		void setY(double YValue) { _y = YValue; }

		//Getters
		float getX() { return _x; }
		int getXInt() { return (int)_x; }
		double getXDouble() { return (double)_x; }

		float getY() { return _y; }
		int getYInt() { return (int)_y; }
		double getYDouble() { return (double)_y; }

	protected:
		float _x;
		float _y;
	};

	struct Vector3 : Vector2
	{
	public:
		//Constructors
		Vector3() { Vector2(), _z = 0.0f; }
		Vector3(float X, float Y, float Z) { Vector2(X, Y), _z = Z; }
		Vector3(int X, int Y, int Z) { Vector2(X, Y), _z = Z; }
		Vector3(double X, double Y, double Z) { Vector2(X, Y), _z = Z; }
		Vector3(unsigned int X, unsigned int Y, unsigned int Z) { Vector2(X, Y), _z = Z; }

		//Setters
		void setZ(float ZValue) { _z = ZValue; }
		void setZ(int ZValue) { _z = ZValue; }
		void setZ(double ZValue) { _z = ZValue; }

		//Getters
		float getZ() { return _z; }
		int getZInt() { return (int)_z; }
		double getZDouble() { return (double)_z; }

	protected:
		float _z;
	};

	struct Vector4 : Vector3
	{
	public:
		//Constructors
		Vector4() { Vector3(0.0f, 0.0f, 0.0f), _w = 0.0f; }
		Vector4(float X, float Y, float Z, float W) { Vector3(X, Y, Z), _w = W; }
		Vector4(int X, int Y, int Z, int W) { Vector3(X, Y, Z), _w = W; }
		Vector4(double X, double Y, double Z, double W) { Vector3(X, Y, Z), _w = W; }
		Vector4(unsigned int X, unsigned int Y, unsigned int Z, unsigned int W) { Vector3(X, Y, Z), _w = W; }

		//Setters
		void setW(float WValue) { _w = WValue; }
		void setW(int WValue) { _w = WValue; }
		void setW(double WValue) { _w = WValue; }

		//Getters
		float getW() { return _w; }
		int getWInt() { return (int)_w; }
		double getWDouble() { return (double)_w; }
	private:
		float _w;
	};
};
