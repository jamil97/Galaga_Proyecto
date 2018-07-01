#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <vector>
#include "Enemigos.h"
#include "ReactorArc.h"
#include "CapitanAmerica.h"
#include<string>

using namespace std;

vector<Enemigos*> enemigos;

void llenarEnemigos(int, int);


int main(){

  int x = 41; //Primer Cuadro
  int y = 49; //Primer Cuadro

  char nombre [250];
  int nivel = 1;
  int vidas = 3;
  bool seguir = true;
  int score = 0;

  cout<<"Ingrese su nombre porfavor: "<<endl;
  cin>>nombre;

  initscr();
  start_color();
  init_pair(1, COLOR_RED, COLOR_RED);//Inicializa el color
  init_pair(2,COLOR_BLACK, COLOR_BLACK);
  init_pair(3,COLOR_WHITE, COLOR_WHITE);
  init_pair(4, COLOR_BLUE, COLOR_BLUE);


  //  llenarEnemigos(tempX, tempY);

  while(seguir){

    move(0,0);
    printw("Nombre del jugador: ");
    move(0,20);
    printw(nombre);
    move(0, 40);
    printw("Nivel: ");
    move(0, 47);
    printw ("%d", nivel);
    move(0,58);
    printw("Numero de vidas: ");
    move (0,78);
    printw("%d", vidas);
    move (0,90);
    printw("Puntaje: ");
    move(0,110);
    printw("%d", score);

    if(score<=1000){
      ReactorArc* reactorArc = new ReactorArc(x,y);
      seguir = reactorArc->navePrincipal();
      score = reactorArc->puntos();
      erase();
    } else if (score>=1000&&score<=5000){
        CapitanAmerica* capitan = new CapitanAmerica(x,y);
        seguir = capitan->naveCapitan();
    } else if (nivel == 3){

    }

      refresh();
  }
  endwin();
}

void llenarEnemigos(int tempX, int tempY){

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
