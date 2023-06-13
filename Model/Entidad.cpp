//
// Created by natzgun on 12/06/23.
//

#include "Entidad.h"

const Imagen &Entidad::getImg() const {
  return img;
}

void Entidad::setImg(const Imagen &img) {
  Entidad::img = img;
}

const vector<int> &Entidad::getPosicion() const {
  return posicion;
}

void Entidad::setPosicion(const vector<int> &posicion) {
  Entidad::posicion = posicion;
}

const vector<int> &Entidad::getPosicionCentral() const {
  return posicion_central;
}

void Entidad::setPosicionCentral(const vector<int> &posicionCentral) {
  posicion_central = posicionCentral;
}
