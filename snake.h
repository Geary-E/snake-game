#include <iostream>
<<<<<<< HEAD
=======
//#include <conio.h>
>>>>>>> 60d5ade920457c21e1794ddcf453d3240ffee3e4
#include <ncurses.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// #include <conio.h>
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
 enum Direction {STOP =0,LEFT = 1, RIGHT = 2, FORWARD = 3,BACK=4};
 Direction direction;

};
