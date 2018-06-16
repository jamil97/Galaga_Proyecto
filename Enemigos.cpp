#include "Enemigos.h"
#include <iostream>
#include <ncurses.h>
using namespace std;

Enemigos::Enemigos(){

}

Enemigos::Enemigos(int x1, int y1){
  this->x = x1;
  this->y = y1;

  start_color();
  init_pair(5,COLOR_RED, COLOR_RED);
  init_pair(6,COLOR_WHITE, COLOR_WHITE);

    //Cuerpo enmedio
    attron(COLOR_PAIR(6));
    move(x,y-1);
    printw(" ");
    move (x,y);
    printw(" ");
    attron(COLOR_PAIR(5));
    move(x,y+1);
    printw(" ");
    attron(COLOR_PAIR(6));
    move(x,y+2);
    printw(" ");
    attron(COLOR_PAIR(5));
    move(x,y+3);
    printw(" ");
    attron(COLOR_PAIR(6));
    move(x,y+4);
    printw(" ");
    move(x,y+5);
    printw(" ");

    //Cuerpo Bajo
    move(x-1,y);
    printw(" ");
    move(x-1,y+1);
    printw(" ");
    move(x-1,y+2);
    printw(" ");
    move(x-1,y+3);
    printw(" ");
    attron(COLOR_PAIR(6));
    move(x-1,y+4);
    printw(" ");
}

void Enemigos::setX(int x1){
  this->x= x1;
}

void Enemigos::setY(int y2){
  this->y = y2;
}

int Enemigos::getX(){
  return x;
}

int Enemigos::getY(){
  return y;
}
