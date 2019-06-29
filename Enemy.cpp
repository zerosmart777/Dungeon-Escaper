#include "pch.h"
#include "Enemy.h"
#include "utility2.h"
#include <iostream>

Enemy::Enemy()
{
}
void Enemy::update()
{
	Enemygotoxy(posX2 ,posY2);
	std::cout << "E";
}

Enemy::~Enemy()
{
}
