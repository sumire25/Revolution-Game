//
// Created by pickle on 20/06/23.
//

#ifndef REVOLUTION_GAME_JUGADOR_H
#define REVOLUTION_GAME_JUGADOR_H
#include "Personaje.h"

class Jugador: public Personaje {
private:
    bool arriba, abajo, izquierda, derecha;
    int puntos;
public:

  void setArriba(bool arriba);

    void setAbajo(bool abajo);

    void setIzquierda(bool izquierda);

    void setDerecha(bool derecha);

    int getPuntos() const;

    void setPuntos(int puntos);

protected:
    void mover() override;

};


#endif //REVOLUTION_GAME_JUGADOR_H
