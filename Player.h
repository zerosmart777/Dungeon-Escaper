#pragma once

class Player
{
public:
  Player();
  ~Player();

  int posX;
  int posY;
  int posObstruct=0;
  int p_Life = 1;
  void update();
  void ObstructUpdate();
};

