//
// Created by natzgun on 12/06/23.
//

#ifndef REVOLUTION_GAME_ENTIDAD_H
#define REVOLUTION_GAME_ENTIDAD_H

#include <vector>
#include "../View/Imagen.h"
using namespace std;

class Entidad {
protected:
  Imagen img;
  vector<int> dimension;
  vector<int> posicion;
  vector<int> posicion_central;
  private:
public:
  const Imagen &getImg() const;
  void setImg(const Imagen &img);

  const vector<int> &getPosicion() const;
  void setPosicion(const vector<int> &posicion);

  const vector<int> &getPosicionCentral() const;
  void setPosicionCentral(const vector<int> &posicionCentral);
};


#endif //REVOLUTION_GAME_ENTIDAD_H
