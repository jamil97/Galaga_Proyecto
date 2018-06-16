#ifndef ENEMIGOS_H
#define ENEMIGOS_H
#include <iostream>
using namespace std;

class Enemigos{

  private:
    int x;
    int y;

  public:
    Enemigos();
    Enemigos(int, int);
    int getX();
    void setX(int);
    int getY();
    void setY(int);
};

#endif
