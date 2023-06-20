//
// Created by pickle on 20/06/23.
//

#ifndef REVOLUTION_GAME_PERSONAJE_H
#define REVOLUTION_GAME_PERSONAJE_H
#include "Entidad.h"
class Personaje : public Entidad {
protected:
  unsigned int vida;
    unsigned int rapidez;
    vector<int> velocidad;
    //Arma* arma = Nullptr;
public:
    virtual void mover()=0;
    virtual void actualizar()=0;
};

#endif //REVOLUTION_GAME_PERSONAJE_H
