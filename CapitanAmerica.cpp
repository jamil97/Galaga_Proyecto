#include "CapitanAmerica.h"
#include <ncurses.h>
#include <iostream>
#include <unistd.h>

CapitanAmerica::CapitanAmerica(){

}

CapitanAmerica::CapitanAmerica(int x1, int y1){
  this->x = x1;
  this->y = y1;
}

bool CapitanAmerica::naveCapitan(){
  bool seguir = true;

  while(seguir){

      start_color();
      init_pair(1, COLOR_RED, COLOR_RED);
      init_pair(2,COLOR_BLACK, COLOR_BLACK);
      init_pair(3,COLOR_WHITE, COLOR_WHITE);
      init_pair(4, COLOR_BLUE, COLOR_BLUE);

      int ty = 0;
      int tx = 0;

      tx = x;
      ty = y;

      //COLOR ROJO
      attron(COLOR_PAIR(1));
      move(x-1,y);
      printw(" ");
      move(x-1,y-1);
      printw(" ");
      move(x-2,y-2);
      printw(" ");
      move(x-2,y-3);
      printw(" ");
      move(x-3,y-4);
      printw(" ");
      move(x-3,y-5);
      printw(" ");
      move(x-4,y-3);
      printw(" ");
      move(x-4,y-2);
      printw(" ");
      move(x-5,y);
      printw(" ");
      move(x-5,y-1);
      printw(" ");
      move(x-6,y+1);
      printw(" ");
      move(x-6,y+2);
      printw(" ");
      move(x-6,y+3);
      printw(" ");
      move(x-6,y+4);
      printw(" ");
      move(x-6,y+5);
      printw(" ");
      move(x-6,y+6);
      printw(" ");
      move(x-6,y+7);
      printw(" ");
      move(x-6,y+8);
      printw(" ");
      move(x-5,y+9);
      printw(" ");
      move(x-5,y+10);
      printw(" ");
      move(x-4,y+11);
      printw(" ");
      move(x-4,y+12);
      printw(" ");
      move(x-3,y+13);
      printw(" ");
      move(x-3,y+14);
      printw(" ");
      move(x-2,y+12);
      printw(" ");
      move(x-2,y+11);
      printw(" ");
      move(x-1,y+10);
      printw(" ");
      move(x-1,y+9);
      printw(" ");
      move(x,y+1);
      printw(" ");
      move(x,y+2);
      printw(" ");
      move(x,y+3);
      printw(" ");
      move(x,y+4);
      printw(" ");
      move(x,y+5);
      printw(" ");
      move(x,y+6);
      printw(" ");
      move(x,y+7);
      printw(" ");
      move(x,y+8);
      printw(" ");

      //BLANCO
      attron(COLOR_PAIR(3));
      move(x-1,y+1);
      printw(" ");
      move(x-1,y+2);
      printw(" ");
      move(x-2,y-1);
      printw(" ");
      move(x-2,y);
      printw(" ");
      move(x-3,y-2);
      printw(" ");
      move(x-3,y-3);
      printw(" ");
      move(x-4,y-1);
      printw(" ");
      move(x-4,y);
      printw(" ");
      move(x-5,y+1);
      printw(" ");
      move(x-5,y+2);
      printw(" ");
      move(x-5,y+3);
      printw(" ");
      move(x-5,y+4);
      printw(" ");
      move(x-5,y+5);
      printw(" ");
      move(x-5,y+6);
      printw(" ");
      move(x-5,y+7);
      printw(" ");
      move(x-5,y+8);
      printw(" ");
      move(x-4,y+9);
      printw(" ");
      move(x-4,y+10);
      printw(" ");
      move(x-3,y+11);
      printw(" ");
      move(x-3,y+12);
      printw(" ");
      move(x-2,y+10);
      printw(" ");
      move(x-2,y+9);
      printw(" ");
      move(x-1,y+8);
      printw(" ");
      move(x-1,y+7);
      printw(" ");
      move(x-1,y+6);
      printw(" ");
      move(x-1,y+5);
      printw(" ");
      move(x-1,y+4);
      printw(" ");
      move(x-1,y+3);
      printw(" ");
      move(x-4,y+3);
      printw(" ");
      move(x-4,y+6);
      printw(" ");
      move(x-2,y+3);
      printw(" ");
      move(x-2,y+6);
      printw(" ");
      move(x-3,y+2);
      printw(" ");
      move(x-3,y+1);
      printw(" ");
      move(x-3,y);
      printw(" ");
      move(x-3,y-1);
      printw(" ");
      move(x-3,y+7);
      printw(" ");
      move(x-3,y+8);
      printw(" ");
      move(x-3,y+9);
      printw(" ");
      move(x-3,y+10);
      printw(" ");

      //AZUL
      attron(COLOR_PAIR(4));
      move(x-4,y+4);
      printw(" ");
      move(x-4,y+5);
      printw(" ");
      move(x-3,y+4);
      printw(" ");
      move(x-3,y+5);
      printw(" ");
      move(x-2,y+4);
      printw(" ");
      move(x-2,y+5);
      printw(" ");
      move(x-2,y+7);
      printw(" ");
      move(x-2,y+8);
      printw(" ");
      move(x-4,y+7);
      printw(" ");
      move(x-4,y+8);
      printw(" ");
      move(x-4,y+2);
      printw(" ");
      move(x-4,y+1);
      printw(" ");
      move(x-2,y+2);
      printw(" ");
      move(x-2,y+1);
      printw(" ");
      move(x-3,y+4);
      printw(" ");
      move(x-3,y+3);
      printw(" ");
      move(x-3,y+5);
      printw(" ");
      move(x-3,y+6);
      printw(" ");


      char tecla;
      tecla = getch();


      if (tecla == 'D' && y > 4 ) { //Izquierda
        //Pinta color negro
          attron(COLOR_PAIR(2));
          move(tx-1,ty);
          printw("    ");
          move(tx,ty+1);
          printw("    ");
          move(tx-1,ty-1);
          printw("    ");
          move(tx-2,ty-2);
          printw("    ");
          move(tx-2,ty-3);
          printw("    ");
          move(tx-3,ty-4);
          printw("    ");
          move(tx-3,ty-5);
          printw("    ");
          move(tx-4,ty-2);
          printw("    ");
          move(tx-4,ty-3);
          printw("    ");
          move(tx-5,ty);
          printw("    ");
          move(tx-5,ty-1);
          printw("    ");
          move(tx-6,ty+1);
          printw("    ");
          move(tx-6,ty+2);
          printw("    ");
          move(tx-6,ty+6);
          printw("    ");
          move(tx-5,ty+9);
          printw("    ");
          move(tx-5,ty+10);
          printw("    ");
          move(tx-4,ty+11);
          printw("    ");
          move(tx-4,ty+12);
          printw("    ");
          move(tx-3,ty+13);
          printw("    ");
          move(tx-3,ty+14);
          printw("    ");
          move(tx-2,ty+12);
          printw("    ");
          move(tx-2,ty+11);
          printw("    ");
          move(tx,ty+10);
          printw("    ");
          move(tx,ty+9);
          printw("    ");
          move(tx-1,ty+10);
          printw("    ");
          move(tx-1,ty+9);
          printw("    ");
          move(tx-2,ty);
          printw("    ");
          move(tx-4,ty-1);
          printw("    ");
          move(tx-4,ty);
          printw("    ");
          move(tx-3,ty+11);
          printw("    ");
          move(tx-3,ty+12);
          printw("    ");
          move(tx-2,ty+10);
          printw("    ");
          move(tx-2,ty+9);
          printw("    ");
          move(tx-1,ty+8);
          printw("    ");
          move(tx-1,ty+7);
          printw("    ");

          move(tx,ty+2);
          printw("    ");
          move(tx,ty+3);
          printw("    ");
          move(tx,ty+4);
          printw("    ");
          move(tx,ty+5);
          printw("    ");
          move(tx,ty+6);
          printw("    ");
          move(tx,ty+7);
          printw("    ");
          move(tx,ty+8);
          printw("    ");
          move(tx-1,ty+2);
          printw("    ");
          move(tx-5,ty+8);
          printw("    ");
          move(tx-4,ty+9);
          printw("    ");
          move(tx-4,ty+10);
          printw("    ");
          move(tx-4,ty+4);
          printw("    ");
          move(tx-4,ty+2);
          printw("    ");
          move(tx-3,ty+4);
          printw("    ");
          move(tx-3,ty+2);
          printw("    ");
          move(tx-2,ty+4);
          printw("    ");
          move(tx-2,ty+2);
          printw("    ");
          y-=3;
      }
      else if(tecla == 'C' && y < 116){ //Derecha
          attron(COLOR_PAIR(2));
          move(tx-1,ty);
          printw("    ");
          move(tx,ty+1);
          printw("    ");
          move(tx-1,ty-1);
          printw("    ");
          move(tx-2,ty-2);
          printw("    ");
          move(tx-2,ty-3);
          printw("    ");
          move(tx-3,ty-4);
          printw("    ");
          move(tx-3,ty-5);
          printw("    ");
          move(tx-4,ty-2);
          printw("    ");
          move(tx-4,ty-3);
          printw("    ");
          move(tx-5,ty-1);
          printw("    ");
          move(tx-5,ty);
          printw("    ");
          move(tx-6,ty+1);
          printw("    ");
          move(tx-6,ty+2);
          printw("    ");
          move(tx-6,ty+6);
          printw("    ");
          move(tx-5,ty+9);
          printw("    ");
          move(tx-5,ty+10);
          printw("    ");
          move(tx-4,ty+11);
          printw("    ");
          move(tx-4,ty+12);
          printw("    ");
          move(tx-3,ty+13);
          printw("    ");
          move(tx-3,ty+14);
          printw("    ");
          move(tx-2,ty+12);
          printw("    ");
          move(tx-2,ty+11);
          printw("    ");
          move(tx,ty+10);
          printw("    ");
          move(tx,ty+9);
          printw("    ");
          move(tx-1,ty+10);
          printw("    ");
          move(tx-1,ty+9);
          printw("    ");
          move(tx-4,ty-1);
          printw("    ");
          move(tx-4,ty);
          printw("    ");
          move(tx-5,ty+8);
          printw("    ");
          move(tx-4,ty+9);
          printw("    ");
          move(tx-4,ty+10);
          printw("    ");
          move(tx-3,ty+11);
          printw("    ");
          move(tx-3,ty+12);
          printw("    ");
          move(tx-2,ty+10);
          printw("    ");
          move(tx-2,ty+9);
          printw("    ");
          move(tx-1,ty+8);
          printw("    ");
          move(tx-1,ty+7);
          printw("    ");
          move(tx-4,ty+4);
          printw("    ");
          move(tx-3,ty+4);
          printw("    ");
          move(tx-3,ty+2);
          printw("    ");

          move(tx,ty+2);
          printw("    ");
          move(tx,ty+3);
          printw("    ");
          move(tx,ty+4);
          printw("    ");
          move(tx,ty+5);
          printw("    ");
          move(tx,ty+6);
          printw("    ");
          move(tx,ty+7);
          printw("    ");
          move(tx,ty+8);
          printw("    ");
          move(tx-1,ty+2);
          printw("    ");
          move(tx-2,ty);
          printw("    ");
          move(tx-4,ty+2);
          printw("    ");
          move(tx-2,ty+4);
          printw("    ");
          move(tx-2,ty+2);
          printw("    ");
          y+=3;
      }

      else if(tecla == 'f') {
        seguir = false;
      }
      else if(tecla == 32){ //Valida que haga disparos
              for (int i = tx-5; i >= 2; i--) {
                attron(COLOR_PAIR(3));
                move(i,ty-5);
                printw(" ");
                move(i,ty+13);
                printw(" ");

                attron(COLOR_PAIR(2));
                move(i+1,ty-5);
                printw(" ");
                move(i,ty+13);
                printw(" ");
                usleep(4000);
                refresh();

                if(i == 2){
                  attron(COLOR_PAIR(2));
                  move(i, ty-5);
                  printw(" ");
                  move(i,ty+13);
                  printw(" ");

                }
              }
      }
  }
 return seguir;
}
