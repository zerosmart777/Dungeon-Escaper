#include "pch.h"
#include "item1.h"
#include "utility3.h"
#include <iostream>

item1::item1()
{
}
void item1::update()
{
	Itemgotoxy(posX3, posY3);
	std::cout << ".";
}

item1::~item1()
{
}
