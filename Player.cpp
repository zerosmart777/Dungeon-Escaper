#include "pch.h"
#include "Player.h"
#include "utility.h"
#include <iostream>

Player::Player()
{
}


Player::~Player()
{
}

void Player::update()
{
  gotoxy(posX, posY);
  std::cout << "P";
}

void Player::ObstructUpdate()
{
	//border top bottom
	for (int i = 1; i < 20; i++) {
		if (posX == i && posY == 1) {
			posObstruct = 1;
		}
		if (posX == i && posY == 8) {
			posObstruct = 1;
		}
	}
	//border left right
	for (int i = 1; i < 8; i++) {
		if (posX == 1 && posY == i) {
			posObstruct = 1;
		}
		if (posX == 19 && posY == i) {
			posObstruct = 1;
		}
	}
	
	if (posX == 4 &&posY == 2) {
		posObstruct = 1;
	}
	for (int i = 4; i < 9; i++) {
		if (posX == i && posY == 3) {
			posObstruct = 1;
		}
	}
	for (int i = 5; i < 9; i++) {
		if (posX == 5 && posY == i) {
			posObstruct = 1;
		}
	}
	for (int i = 2; i < 6; i++) {
		if (posX == 10 && posY == i) {
			posObstruct = 1;
		}
	}
	for (int i = 2; i < 5; i++) {
		if (posX == 15 && posY == i) {
			posObstruct = 1;
		}
	}
	for (int i = 15; i < 17; i++) {
		if (posX == i && posY == 4) {
			posObstruct = 1;
		}
	}
	for (int i = 4; i < 8; i++) {
		if (posX == 17 && posY == i) {
			posObstruct = 1;
		}
	}
}

