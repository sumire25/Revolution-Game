#include "Controller.h"
#include <iostream>
namespace Ctlr {

  Controller::Controller(Mdl::Model* modelo, Vw::View* vista) {

  }
  void Controller::procesarAccion() {
    modelo->actualizarModelo();
    vista->actualizarVista();
  }

  void Controller::actualizar() {
    // Vista.tieneCambios ? quecambios tiene modeloUpdate :
    // Va  apreguntar a vista si hay un cambio si detecta un cambio debe llamar a modelo
  }

}
