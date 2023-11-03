#include "Aktor.h"

Aktor::Aktor()
{
	setPosition(new EngineMath::Vector2());
}

Aktor::Aktor(EngineMath::Vector2* _position)
{
	setPosition(_position);
}

Aktor::Aktor(float positionX, float positionY)
{
	_position = new EngineMath::Vector2(positionX, positionY);
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
