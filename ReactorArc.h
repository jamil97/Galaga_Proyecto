#ifndef REACTORARC_H
#define REACTORARC_H
#include <iostream>
#include <vector>
#include "Enemigos.h"
class ReactorArc{

  public:
    int x;
    int y;
    int puntaje = 0;

  public:
    ReactorArc();
    ReactorArc(int,int);
    bool navePrincipal();
    void naveEnemiga(int, int);
    void llenarEnemigos();
    void pintarNegro(int, int);
    void pintarAtrasEnemigos();
    void bajar();
    int puntos();
};
#endif
