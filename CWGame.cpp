#include "pch.h"

#include "CWGame.hpp"
#include <iostream>
#include <conio.h>
#include "Map.hpp"
#include "Player.h"
#include "Enemy.h"
#include "item1.h"
#include "item2.h"
#include "FireBall.h"

CWGame::CWGame()
  :map(std::make_shared<Map>()),
  player(std::make_shared<Player>()),
  enemy(std::make_shared<Enemy>()),
	Item1(std::make_shared<item1>()),
	Item2(std::make_shared<item2>()),
	fireball(std::make_shared<FireBall>())
{

}

CWGame::~CWGame()
{

}

bool CWGame::init()
{
  // initialized other systems

  map->init();
  player->posX = 2;
  player->posY = 2;

  enemy->posX2 = 2;
  enemy->posY2 = 5;

  Item1->posX3 = 22;
  Item1->posY3 = 22;
  Item2->posX4 = 22;
  Item2->posY4 = 22;

  fireball->posX5 = 16;
  fireball->posY5 = 6;
  return true;
}

void CWGame::update()
{
	

  char key = _getch();
  if (key == 'a')
  {
    player->posX--;
	player->ObstructUpdate();
	if (player->posObstruct==1) {
		player->posX++;
	}

  }
  else if (key == 'd')
  {
    player->posX++;
	player->ObstructUpdate();
	if (player->posObstruct == 1) {
		player->posX--;
	}
  }
  else if (key == 's')
  {
	  player->posY++;
	  player->ObstructUpdate();
	  if (player->posObstruct == 1) {
		  player->posY--;
	  }
  }
  else if (key == 'w')
  {
	  player->posY--;
	  player->ObstructUpdate();
	  if (player->posObstruct == 1) {
		  player->posY++;
	  }
  }
  else if (key == 'e') {
	  if (player->posX == 12 && player->posY == 2 && Item1->itemGetCheck == 1) {
		  player->posX = map->w_Point_x1;
		  player->posY = map->w_Point_y1;
	  }
  }
  if (enemy->posY2 > 5 && enemy->posX2 == 2) {
	  enemy->posY2--;
  }
  else if (enemy->posX2 < 4 && enemy->posY2 == 5) {
	  enemy->posX2++;
  }
  else if (enemy->posY2 < 7 && enemy->posX2 ==4) {
	enemy->posY2++;
  }
  else if (enemy->posX2 > 2 && enemy->posY2 == 7) {
	  enemy->posX2--;
  }
  if (player->posX == 3 && player->posY == 6) {
	  Item1->itemGetCheck = 1;
  }
  if (Item1->itemGetCheck == 1) {
	  Item1->posX3 = 3;
	  Item1->posY3 = 6;
  }
  if (player->posX == 5 && player->posY == 2) {
	  Item2->itemGetCheck2 = 1;
  }
  if (Item2->itemGetCheck2 == 1) {
	  Item2->posX4 = 5;
	  Item2->posY4 = 2; 
	  if (Item2->itemHpCheck == 0) {
		  Item2->itemHpCheck++;
		  player->p_Life++;
	  }
  }
  if (fireball->posX5 > 6) {
	  fireball->posX5--;
  }
  else {
	  fireball->posX5=16;
  }
  system("cls");
  
  player->posObstruct = 0;
  map->update();
  
  player->update();
  enemy->update();
  Item1->update();
  Item2->update();
  fireball->update();
 
}

bool CWGame::lifeCheck()
{
	if (player->posX == enemy->posX2 && player->posY == enemy->posY2) {
		player->p_Life--;
		if (player->p_Life == 0) {
			return true;
		}
		else
			return false;
	}
	else if (player->posX == fireball->posX5 && player->posY == fireball->posY5) {
		player->p_Life--;
		if (player->p_Life == 0) {
			return true;
		}
		else
			return false;
	}
}

int CWGame::ItemCheck()
{
	if (player->posX == 18 && player->posY == 7) {
		return 1;
	}
}

void CWGame::destroy()
{
  map->detroy();
}
