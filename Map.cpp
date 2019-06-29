#include "pch.h"
#include "Map.hpp"

#include <iostream>

Map::Map():
  width(5), height(5)
{
}

Map::Map(unsigned int w, unsigned int h):
  width(w), height(h)
{
}

Map::~Map()
{
}

void Map::init()
{

}
void Map::update()
{
  std::cout << "|-----------------|" << std::endl;
  std::cout << "|..Xh....X.w..X.w.|" << std::endl;
  std::cout << "|..XXXXX.X....X...|" << std::endl;
  std::cout << "|........X....XXX.|" << std::endl;
  std::cout << "|...X....X......X.|" << std::endl;
  std::cout << "|.i.X...........X.|" << std::endl;
  std::cout << "|...X...........XF|" << std::endl;
  std::cout << "|-----------------|" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "How to win : Collect Items and touch the Finish Line" << std::endl;
  std::cout << "Information: w = up a = left d = right s = down e = interact" << std::endl;
  std::cout << "P = Player" << std::endl;
  std::cout << "E = Enemy" << std::endl;
  std::cout << "i = Lock Item" << std::endl;
  std::cout << "h = Heart" << std::endl;
  std::cout << "+ = FireBall" << std::endl;
  std::cout << "X = Obstrucle" << std::endl;
  std::cout << "w = Warp Point" << std::endl;
  std::cout << "F = Finish Line" << std::endl;
}
void Map::detroy()
{

}