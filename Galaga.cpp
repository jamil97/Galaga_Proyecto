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
  //Enemigos
  int tempX = 4;
  int tempY = 12;

  int nivel = 2;
  int vidas = 3;
  int puntaje = 0;
  bool seguir = true;
  string jugador = "";
  cout<<"Ingrese su nombre de usuario: "<<endl;
  cin>>jugador;
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
    move(0,25);
    printw("%s", jugador);
    move(0, 44);
    printw("Nivel: ");
    move(0, 52);
    printw ("%d", nivel);
    move(0,65);
    printw("Numero de vidas: ");
    move(0,84);
    printw("%d", vidas);
    move(0,100);
    printw("Score: ");
    move(0,110);
    printw("%d", puntaje);

    if(nivel == 1){
        ReactorArc* reactorArc = new ReactorArc(x,y);
        seguir = reactorArc->navePrincipal();
    } else if (nivel == 2){
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
