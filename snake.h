#include <iostream>

using namespace std;


class snake
{
public:
  snake();
  void draw();
  void setup();
  void imput();
  void logic();

  void setfruit();
  int Getfruit();
  void setsnake();
  int getsnake();
  void SetXcoordinate();
  int GetXcoordinate();
  void SetYcoordinate();
  int GetYcoordinate();
  void Setheigh();
  int Getheigh();
  void Setwidth();
  int Getwidth();
  void test();

private:
 int fruit,snake,Xcoordinate,Ycoordinate,heigh,width;
};
