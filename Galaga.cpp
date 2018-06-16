#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <vector>
#include "Enemigos.h"
#include "ReactorArc.h"


using namespace std;

vector<Enemigos*> enemigos;

void llenarEnemigos();


int main(){


  int x = 41; //Primer Cuadro
  int y = 49; //Primer Cuadro

  int nivel = 1;
  bool seguir = true;
  initscr();
  start_color();
  init_pair(1, COLOR_RED, COLOR_RED);//Inicializa el color
  init_pair(2,COLOR_BLACK, COLOR_BLACK);
  init_pair(3,COLOR_WHITE, COLOR_WHITE);
  init_pair(4, COLOR_BLUE, COLOR_BLUE);
  move(0,0);
  printw("Galaga Infinity War ");
  move(0,30);
  printw("Nombre del jugador: ");
  move(0, 70);
  printw("Nivel: ");
  move(0,90);
  printw("Numero de vidas: ");
  llenarEnemigos();

  while(seguir){

    if(nivel == 1){
      ReactorArc* reactorArc = new ReactorArc(x,y);
      seguir = reactorArc->navePrincipal();
    } else if (nivel == 2){

    } else if (nivel == 3){

    }
    refresh();
  }
  endwin();
}

void llenarEnemigos(){

  int tempX = 4;
  int tempY = 12;
  for (int i = 0; i < 30; i++) {
      Enemigos* enemigoTemp;
      enemigoTemp = new Enemigos(tempX,tempY);
      enemigos.push_back(enemigoTemp);
      tempY+=9;
      if (i==10) {
        tempX+=3;
        tempY = 12;
      } else if(i==21){
        tempX+=3;
        tempY = 12;
      }
  }
}
