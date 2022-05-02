#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdio.h>
// #include <dos.h>
#include "myconio_mac.h"
using namespace std;


class Snake
{
public:
  Snake();
  void draw();
  void setup();
  void imput();
  void logic();

  void setfruit();
  int Getfruit();
  void setsnake();
  int getsnake();
  void test();
  bool gameover;
 const int width = 30;
 const int height = 15;
 int x, y, fruitX, fruitY, score;
 enum Direction {FORWARD = 'w', LEFT = 'a', RIGHT = 'd', BACK = 's', STOP =0};
 Direction direction;

};
