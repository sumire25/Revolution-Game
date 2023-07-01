#include "Entidad.h"

Entidad::Entidad(){
    posicion = Vector2d<int>();
}
Entidad::Entidad(int x, int y){
    posicion.setX(x);
    posicion.setY(y);
}
const Vector2d<int> &Entidad::getPosicion() const {
    return posicion;
}
void Entidad::setPosicion(int x, int y) {
    posicion.setX(x);
    posicion.setY(y);
}
const Vector2d<int> &Entidad::getPosicionCentral() const {
    return posicion_central;
}
void Entidad::setPosicionCentral(int x, int y) {
    posicion_central.setX(x);
    posicion_central.setY(y);
}
const Vector2d<int> &Entidad::getDimension() const {
    return dimension;
}
void Entidad::setDimension(int x, int y) {
    dimension.setY(x);
    dimension.setY(y);
}
