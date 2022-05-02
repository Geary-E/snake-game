#include "snake.h"

//========================================================================================
    Snake::Snake()
    {

    }

   void Snake::draw()
    {
      int snake[width][height];
      system("cls"); // system ("clear");
      for (int i =0; i < width; i++)
          cout << "#";
       cout << endl;

      for (int i =0; i < height;i ++)
       {
          for (int j=1; j < width; j++)
           {
              if (j ==1)
               {
               cout << "#";
                }
                if (i == y && j ==x)
                 {
                   cout << "0";
                 }
                 else if (i == fruitY && j == fruitX)
                  {
                      cout << "F" ;
                  }
                  else
                cout << " ";

              if ( j == width-1)
               {
                cout << "#";
               }
           }
           cout << endl;
        }

        for (int i =0; i < width; i++)
         {
           cout << "#";
           // cout << endl;
         }
    }
    void Snake::setup()
     {
      gameover = false;
      direction = STOP;
      x = width /2;
      y = height /2;
      fruitX = rand()%width;
      fruitY = rand()%height;
      score =0;
     }
   void Snake::imput()
    {
       if(_kbhit())
        {
           switch (_getch())
            {
              case 'a':
               {
                 direction = LEFT;
                 break;
               }
               case 'd':
                {
                  direction = RIGHT;
                  break;
                }
                case 'w':
                 {
                   direction = FORWARD;
                   break;
                 }
                 case 's':
                  {
                    direction = BACK;
                    break;
                  }
                  case 'x':
                   {
                     gameover = true;
                     break;
                   }

            }
        }
    }
    void Snake::logic()
     {

     }
     void Snake::test()
     {

     }

//========================================================================================
