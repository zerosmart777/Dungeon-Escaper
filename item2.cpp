#include "pch.h"
#include "item2.h"
#include "utility4.h"
#include <iostream>
item2::item2()
{
}
void item2::update()
{
	Item2gotoxy(posX4, posY4);
	std::cout << ".";
}

item2::~item2()
{
}
