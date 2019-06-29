#pragma once

#include <memory>

class Map;
class Player;
class Enemy;
class item1;
class item2;
class FireBall;
class CWGame
{
public:
  CWGame();
  ~CWGame();
  //TODO: copy constructor and assignment operator

  bool init();
  void update();
  bool lifeCheck();
  int ItemCheck();
  void destroy();

private:
  std::shared_ptr<Map> map;
  std::shared_ptr<Player> player;
  std::shared_ptr<Enemy> enemy;
  std::shared_ptr<item1> Item1;
  std::shared_ptr<item2> Item2;
  std::shared_ptr<FireBall> fireball;
};


