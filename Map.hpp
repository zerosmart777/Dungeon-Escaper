#pragma once
class Map
{
public:
  Map();
  Map(unsigned int w, unsigned int h);
  ~Map();

  void init();
  void update();
  void detroy();
  int w_Point_x1 = 17;
  int w_Point_y1 = 2;
private:
  unsigned int width;
  unsigned int height;
};

