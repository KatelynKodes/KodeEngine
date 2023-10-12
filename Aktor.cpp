#include "Aktor.h"
#include "Vector.h"

Aktor::Aktor()
{
	setPosition(new Vector2(0,0));
}

Aktor::Aktor(Vector2* _position)
{
	setPosition(_position);
}

Aktor::Aktor(float positionX, float positionY)
{
	_position = new Vector2(0, 0);
}

void Aktor::OnStart()
{
}

void Aktor::OnUpdate()
{
}

void Aktor::OnDraw()
{
}

void Aktor::OnDestroy()
{
}
