#include "Model.h"

Mdl::Model::Model() {
    myJuego = Juego();
}
void Mdl::Model::actualizar() {
    myJuego.actualizar();
}
