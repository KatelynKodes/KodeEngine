#pragma once
class Vector
{
public:
	/* Sets the x value of the vector */
	float setX(float value) { x = value; }
	float setX(int value) { x = value; }

	/* Returns the X value of the vector */
	float getX() { return x; }
	/* Returns the x value of the vector as an integer*/
	float getXInt() { return (int)x; }

	/* Sets the y value of the vector */
	float setY(float value) { y = value; }
	float setY(int value) { y = value; }

	/* Returns the y value of the vector*/
	float getY() { return y; }
	/* Returns the y value of the vector as an integer*/
	float getYInt() { return y; }

protected:
	float x;
	float y;
};

struct Vector2 : public Vector
{
public:
	Vector2() { x = 0; y = 0; }
	Vector2(float xvalue, float yvalue) { x = xvalue; y = yvalue; }
	Vector2(int xvalue, int yvalue) { x = xvalue; y = yvalue; }
};

struct Vector3 : public Vector
{
public:
	Vector3() { x = 0; y = 0; z = 0; }
	Vector3(float xvalue, float yvalue, float zvalue) { x = xvalue, y = yvalue, z = zvalue; }
	Vector3(int xvalue, int yvalue, int zvalue) { x = xvalue, y = yvalue, z = zvalue; }

	/* Returns Z value */
	float getZ() { return z; }
	/* Returns Z value as an integer*/
	int getZInt() { return (int)z; }

	/*Sets the z value*/
	void setZ(float value) { z = value; }
	void setZ(int value) { z = value; }

	/*Returns a vector2 struct with the vector 3's x and y values*/
	Vector2 toVector2() { return Vector2(x, y); }

protected:
	float z;
};

struct Vector4 : public Vector3
{
public:
	Vector4() { x = 0, y = 0, z = 0, w = 0; }
	Vector4(float xvalue, float yvalue, float zvalue, float wvalue) { x = xvalue, y = yvalue, z = zvalue, w = wvalue; }
	Vector4(int xvalue, int yvalue, int zvalue, int wvalue) { x = xvalue, y = yvalue, z = zvalue, w = wvalue; }

	/* Returns the value of w */
	float getW() { return w; }
	/* Returns the value of w as an integer value*/
	float getWInt() { return (int)w; }

	/* Sets the value of w */
	void setW(float value) { w = value; }
	void setW(int value) { w = value; }

	/*Returns a vector 3 with the x and y values of the vector4*/
	Vector2 toVector2() { return Vector2(x, y); }
	/*Returns a vector 3 with the x, y, and z values of the vector4*/
	Vector3 toVector3() { return Vector3(x, y, z); }

private:
	float w;
};