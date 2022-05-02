#include <iostream>
#include "snake.h"
#include "myconio_mac.h"

using namespace std;

 int main ()
 {

   Snake snake;
   snake.setup();

   // while(!snake.gameover)
    // {
      snake.draw();
      snake.imput();
      snake.logic();
    // }


   return 0;
 }
