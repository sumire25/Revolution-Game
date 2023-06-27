//
// Created by natzgun on 26/06/23.
//

#ifndef REVOLUTION_GAME_ESFERA_H
#define REVOLUTION_GAME_ESFERA_H


class Esfera {
public:
  int x,y;
  bool up, down, left, right;
  Esfera(int,int);
  void actualizarEsfera();

};


#endif //REVOLUTION_GAME_ESFERA_H
