//
// Created by msumi on 28/06/2023.
//

#ifndef REVOLUTION_GAME_PERSONAJE_H
#define REVOLUTION_GAME_PERSONAJE_H

#include "Entidad.h"

class Personaje : protected Entidad{
protected:
    unsigned int vida;
    unsigned int rapidez;
    Vector2d<int> velocidad;
    //Arma* arma = Nullptr;
public:
    Personaje() : Entidad(){};
    Personaje(int x, int y) : Entidad(x, y){};
    virtual void actualizar()=0;
};

#endif //REVOLUTION_GAME_PERSONAJE_H
