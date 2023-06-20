//
// Created by pickle on 20/06/23.
//

#include "Jugador.h"

int Jugador::getPuntos() const {
    return puntos;
}

void Jugador::setPuntos(int puntos) {
    Jugador::puntos = puntos;
}

void Jugador::setArriba(bool arriba) {
    Jugador::arriba = arriba;
}

void Jugador::setAbajo(bool abajo) {
    Jugador::abajo = abajo;
}

void Jugador::setIzquierda(bool izquierda) {
    Jugador::izquierda = izquierda;
}

void Jugador::setDerecha(bool derecha) {
    Jugador::derecha = derecha;
}

void Jugador::mover() {
    if(arriba){
        setPosicion(getPosicion()[0],getPosicion()[1]+5)
    }
    if(abajo){
        setPosicion(getPosicion()[0],getPosicion()[1]-5)
    }
    if(izquierda){
        setPosicion(getPosicion()[0]-5,getPosicion()[1])
    }
    if(arriba){
        setPosicion(getPosicion()[0]+5,getPosicion()[1]+rapidez)
    }

}
