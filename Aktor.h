#pragma once
#include "EngineMath/Vector.h"

class Aktor
{
public:
	Aktor();
	Aktor(Vector2* _position);
	Aktor(float positionX, float positionY);
	virtual void OnStart();
	virtual void OnUpdate();
	virtual void OnDraw();
	virtual void OnDestroy();
	float getXPos() { return _position->getX(); }
	float getYPos() { return _position->getY(); }

protected:
	void setPosition(Vector2* position) { _position = position; }
	void setPosition(float x, float y) { _position->setX(x), _position->setY(y); }
	void setXPos(float xValue) { _position->setX(xValue); }
	void setYPos(float yValue) { _position->setY(yValue); }

private:
	Vector2* _position;
};