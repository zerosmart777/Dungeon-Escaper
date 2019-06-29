#include "pch.h"
#include "FireBall.h"
#include "utility5.h"
#include <iostream>

FireBall::FireBall()
{
}
void FireBall::update()
{
	Firegotoxy(posX5, posY5);
	std::cout << "+";
}

FireBall::~FireBall()
{
}
