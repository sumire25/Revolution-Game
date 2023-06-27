//
// Created by natzgun on 26/06/23.
//

#include "Esfera.h"

Esfera::Esfera(int a, int b) {
  this->x = (a-50) * (-1);
  this->y = (b-50) * (-1);
  up = false;
  down = false;
  left = false;
  right = false;
}

void Esfera::actualizarEsfera() {
  if (up)
    y+=5;
  if (down)
    y-=5;
  if (left)
    x-=5;
  if (right)
    x+=5;
}
