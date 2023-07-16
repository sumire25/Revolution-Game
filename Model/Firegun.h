//
// Created by msumi on 5/07/2023.
//

#ifndef REVOLUTION_GAME_FIREGUN_H
#define REVOLUTION_GAME_FIREGUN_H
#include "Item.h"

class Firegun: public Item {
public:
    int balas;
    virtual Proyectil usar(Vector2d<float> dir, Vector2d<int> pos);
    Firegun():Item(){

    }
    virtual ~Firegun(){};
};


#endif //REVOLUTION_GAME_FIREGUN_H
