// AssertionProj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <map>
#include "CWGame.hpp"


int main()
{
  CWGame game;

  if (!game.init())
  {
    std::cout << "Some error inside initilization";
    return 0;
  }

  while (true) 
  {
   
	if (game.lifeCheck()==true) {
		system("CLS");
		std::cout << "========" << std::endl;
		std::cout << "You Lose" << std::endl;
		std::cout << "========" << std::endl;
		break;
	}
	else if (game.ItemCheck() == 1) {
		system("CLS");
		std::cout << "========" << std::endl;
		std::cout << "You Win" << std::endl;
		std::cout << "========" << std::endl;
		break;
	}
	else {
		game.update();
	}
	
  }

  game.destroy();

}
