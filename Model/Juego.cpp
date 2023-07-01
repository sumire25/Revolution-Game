//
// Created by msumi on 27/06/2023.
//

#include "Juego.h"

Juego::Juego() {
    p1 = new Jugador();
}
void Juego::actualizar() {
    p1->actualizar();
}
