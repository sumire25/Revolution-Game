#include "Entidad.h"
const vector<int> &Entidad::getPosicion() const {
  return posicion;
}

void Entidad::setPosicion(int x, int y) {
  Entidad::posicion[0] = x;
  Entidad::posicion[1] = y;
}

const vector<int> &Entidad::getPosicionCentral() const {
  return posicion_central;
}

void Entidad::setPosicionCentral(int x, int y) {
    Entidad::posicion_central[0] = x;
    Entidad::posicion_central[1] = y;
}

const vector<int> &Entidad::getDimension() const {
    return dimension;
}

void Entidad::setDimension(int x, int y) {
    Entidad::dimension[0] = x;
    Entidad::dimension[1] = y;
}

Entidad::Entidad(const vector<int> &dimension, const vector<int> &posicion, const vector<int> &posicionCentral)
{
    Entidad::dimension.resize(2);
    Entidad::posicion.resize(2);
    Entidad::posicion_central.resize(2);
}
