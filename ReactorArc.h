#ifndef REACTORARC_H
#define REACTORARC_H
#include <iostream>
class ReactorArc{

  public:
    int x;
    int y;

  public:
    ReactorArc();
    ReactorArc(int,int);
    bool navePrincipal();
    void naveEnemiga(int, int);
    void llenarEnemigos(int, int);
    void pintarNegro(int, int);
    void pintarAtrasEnemigos(int,int);
    void bajar();
};
#endif
