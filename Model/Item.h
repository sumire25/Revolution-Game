//
// Created by msumi on 5/07/2023.
//

#ifndef REVOLUTION_GAME_ITEM_H
#define REVOLUTION_GAME_ITEM_H
#include "Entidad.h"
#include "Proyectil.h"
class Item: public Entidad{
public:
    int couldown;
    virtual Proyectil usar(Vector2d<float> dir, Vector2d<int> pos)=0;
    virtual void actualizar();
    virtual ~Item(){};
};


#endif //REVOLUTION_GAME_ITEM_H
