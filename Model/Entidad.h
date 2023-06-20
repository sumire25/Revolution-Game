#ifndef REVOLUTION_GAME_ENTIDAD_H
#define REVOLUTION_GAME_ENTIDAD_H

#include <vector>
#include "../View/Imagen.h"
using namespace std;

class Entidad {
protected:
  vector<int> dimension;
  vector<int> posicion;
  vector<int> posicion_central;
  private:
public:
    Entidad(const vector<int> &dimension, const vector<int> &posicion, const vector<int> &posicionCentral);

    const vector<int> &getPosicion() const;
    void setPosicion(int x,int y);

    const vector<int> &getPosicionCentral() const;
    void setPosicionCentral(int x, int y);

    const vector<int> &getDimension() const;
    void setDimension(int x, int y);
};


#endif //REVOLUTION_GAME_ENTIDAD_H
