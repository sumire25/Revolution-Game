#ifndef MVC_ARCHITECTURE_SFML_CONTROLLER_H
#define MVC_ARCHITECTURE_SFML_CONTROLLER_H

// Archivo Controller.h
#pragma once
#include <SFML/Window/Event.hpp>
#include "../Model/Model.h"
#include "../View/View.h"

namespace Ctlr {
  class Controller {
  private:
    Mdl::Model modelo;
    Vw::View vista;
  public:
    Controller();
    void ejecutar();
  };
};

#endif //MVC_ARCHITECTURE_SFML_CONTROLLER_H
