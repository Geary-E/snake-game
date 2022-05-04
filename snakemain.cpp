#include <iostream>
#include "snake.h"




using namespace std;

 int main ()
 {

   Snake snake;
   snake.setup();

<<<<<<< HEAD

   initscr();
   cbreak();
   timeout(1000);//change the time to 200 
    while(!snake.gameover)  //this is going to keep looping until the game is over(there was a collision of the snake has gotten below 0 in the x and y axis )
    {
=======
   while(!snake.gameover)
     {
>>>>>>> 60d5ade920457c21e1794ddcf453d3240ffee3e4
      snake.draw();
      snake.imput();
      snake.logic();
    }
<<<<<<< HEAD
    endwin();

=======
>>>>>>> 60d5ade920457c21e1794ddcf453d3240ffee3e4


   return 0;
 }
